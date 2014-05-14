/*
    Copyright (C) 2014 Alexandr Akulich <akulichalexander@gmail.com>

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
    LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
    OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
    WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

*/

#ifndef CRAWSTREAM_HPP
#define CRAWSTREAM_HPP

#include <qglobal.h>

#include <QByteArray>

#include "TLTypes.hpp"
#include "TLValues.h"

QT_BEGIN_NAMESPACE
class QIODevice;
QT_END_NAMESPACE

class CRawStream
{
public:
    explicit CRawStream(QIODevice *d = 0);

    inline QIODevice *device() const { return m_device; }
    void setDevice(QIODevice *newDevice);
    void unsetDevice();

    bool atEnd() const;
    int bytesRemaining() const;

    QByteArray readBytes(int count);

    CRawStream &operator>>(qint32 &i);
    CRawStream &operator>>(quint32 &i);
    CRawStream &operator>>(qint64 &i);
    CRawStream &operator>>(quint64 &i);

    template <int Size>
    CRawStream &operator>>(TLNumbers<Size> &n);

    CRawStream &operator>>(TLValues &v);

    CRawStream &operator<<(qint32 i);
    CRawStream &operator<<(quint32 i);
    CRawStream &operator<<(qint64 i);
    CRawStream &operator<<(quint64 i);

    template <int Size>
    CRawStream &operator<<(const TLNumbers<Size> &n);

    CRawStream &operator<<(TLValues v);

    CRawStream &operator<<(const QByteArray &data);

protected:
    QIODevice *m_device;

};

inline CRawStream &CRawStream::operator>>(quint32 &i)
{
    return *this >> reinterpret_cast<qint32&>(i);
}

inline CRawStream &CRawStream::operator>>(quint64 &i)
{
    return *this >> reinterpret_cast<qint64&>(i);
}

template <int Size>
CRawStream &CRawStream::operator>>(TLNumbers<Size> &n)
{
    for (int i = 0; i < Size / /* Size of byte */ 8 / /* Size of quint64 (one of parts) */ 8; ++i) {
        *this >> n.parts[i];
    }
    return *this;
}

inline CRawStream &CRawStream::operator>>(TLValues &v)
{
    quint32 i;
    *this >> i;
    v = TLValues(i);
    return *this;
}

inline CRawStream &CRawStream::operator<<(quint32 i)
{
    return *this << qint32(i);
}

inline CRawStream &CRawStream::operator<<(quint64 i)
{
    return *this << qint64(i);
}

template <int Size>
CRawStream &CRawStream::operator<<(const TLNumbers<Size> &n)
{
    for (int i = 0; i < Size / 8 / 8; ++i) {
        *this << n.parts[i];
    }
    return *this;
}

inline CRawStream &CRawStream::operator<<(TLValues v)
{
    return *this << quint32(v);
}

#endif // CRAWSTREAM_HPP

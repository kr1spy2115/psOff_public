#pragma once
#include <stdint.h>

namespace Err {
constexpr int32_t ERROR_EPERM                    = -2143223551;
constexpr int32_t ERROR_ENOENT                   = -2143223550;
constexpr int32_t ERROR_ESRCH                    = -2143223549;
constexpr int32_t ERROR_EINTR                    = -2143223548;
constexpr int32_t ERROR_EIO                      = -2143223547;
constexpr int32_t ERROR_ENXIO                    = -2143223546;
constexpr int32_t ERROR_E2BIG                    = -2143223545;
constexpr int32_t ERROR_ENOEXEC                  = -2143223544;
constexpr int32_t ERROR_EBADF                    = -2143223543;
constexpr int32_t ERROR_ECHILD                   = -2143223542;
constexpr int32_t ERROR_EDEADLK                  = -2143223541;
constexpr int32_t ERROR_ENOMEM                   = -2143223540;
constexpr int32_t ERROR_EACCES                   = -2143223539;
constexpr int32_t ERROR_EFAULT                   = -2143223538;
constexpr int32_t ERROR_ENOTBLK                  = -2143223537;
constexpr int32_t ERROR_EBUSY                    = -2143223536;
constexpr int32_t ERROR_EEXIST                   = -2143223535;
constexpr int32_t ERROR_EXDEV                    = -2143223534;
constexpr int32_t ERROR_ENODEV                   = -2143223533;
constexpr int32_t ERROR_ENOTDIR                  = -2143223532;
constexpr int32_t ERROR_EISDIR                   = -2143223531;
constexpr int32_t ERROR_EINVAL                   = -2143223530;
constexpr int32_t ERROR_ENFILE                   = -2143223529;
constexpr int32_t ERROR_EMFILE                   = -2143223528;
constexpr int32_t ERROR_ENOTTY                   = -2143223527;
constexpr int32_t ERROR_ETXTBSY                  = -2143223526;
constexpr int32_t ERROR_EFBIG                    = -2143223525;
constexpr int32_t ERROR_ENOSPC                   = -2143223524;
constexpr int32_t ERROR_ESPIPE                   = -2143223523;
constexpr int32_t ERROR_EROFS                    = -2143223522;
constexpr int32_t ERROR_EMLINK                   = -2143223521;
constexpr int32_t ERROR_EPIPE                    = -2143223520;
constexpr int32_t ERROR_EDOM                     = -2143223519;
constexpr int32_t ERROR_ERANGE                   = -2143223518;
constexpr int32_t ERROR_EAGAIN                   = -2143223517;
constexpr int32_t ERROR_EWOULDBLOCK              = -2143223517;
constexpr int32_t ERROR_EINPROGRESS              = -2143223516;
constexpr int32_t ERROR_EALREADY                 = -2143223515;
constexpr int32_t ERROR_ENOTSOCK                 = -2143223514;
constexpr int32_t ERROR_EDESTADDRREQ             = -2143223513;
constexpr int32_t ERROR_EMSGSIZE                 = -2143223512;
constexpr int32_t ERROR_EPROTOTYPE               = -2143223511;
constexpr int32_t ERROR_ENOPROTOOPT              = -2143223510;
constexpr int32_t ERROR_EPROTONOSUPPORT          = -2143223509;
constexpr int32_t ERROR_ESOCKTNOSUPPORT          = -2143223508;
constexpr int32_t ERROR_EOPNOTSUPP               = -2143223507;
constexpr int32_t ERROR_ENOTSUP                  = -2143223507;
constexpr int32_t ERROR_EPFNOSUPPORT             = -2143223506;
constexpr int32_t ERROR_EAFNOSUPPORT             = -2143223505;
constexpr int32_t ERROR_EADDRINUSE               = -2143223504;
constexpr int32_t ERROR_EADDRNOTAVAIL            = -2143223503;
constexpr int32_t ERROR_ENETDOWN                 = -2143223502;
constexpr int32_t ERROR_ENETUNREACH              = -2143223501;
constexpr int32_t ERROR_ENETRESET                = -2143223500;
constexpr int32_t ERROR_ECONNABORTED             = -2143223499;
constexpr int32_t ERROR_ECONNRESET               = -2143223498;
constexpr int32_t ERROR_ENOBUFS                  = -2143223497;
constexpr int32_t ERROR_EISCONN                  = -2143223496;
constexpr int32_t ERROR_ENOTCONN                 = -2143223495;
constexpr int32_t ERROR_ESHUTDOWN                = -2143223494;
constexpr int32_t ERROR_ETOOMANYREFS             = -2143223493;
constexpr int32_t ERROR_ETIMEDOUT                = -2143223492;
constexpr int32_t ERROR_ECONNREFUSED             = -2143223491;
constexpr int32_t ERROR_ELOOP                    = -2143223490;
constexpr int32_t ERROR_ENAMETOOLONG             = -2143223489;
constexpr int32_t ERROR_EHOSTDOWN                = -2143223488;
constexpr int32_t ERROR_EHOSTUNREACH             = -2143223487;
constexpr int32_t ERROR_ENOTEMPTY                = -2143223486;
constexpr int32_t ERROR_EPROCLIM                 = -2143223485;
constexpr int32_t ERROR_EUSERS                   = -2143223484;
constexpr int32_t ERROR_EDQUOT                   = -2143223483;
constexpr int32_t ERROR_ESTALE                   = -2143223482;
constexpr int32_t ERROR_EREMOTE                  = -2143223481;
constexpr int32_t ERROR_EBADRPC                  = -2143223480;
constexpr int32_t ERROR_ERPCMISMATCH             = -2143223479;
constexpr int32_t ERROR_EPROGUNAVAIL             = -2143223478;
constexpr int32_t ERROR_EPROGMISMATCH            = -2143223477;
constexpr int32_t ERROR_EPROCUNAVAIL             = -2143223476;
constexpr int32_t ERROR_ENOLCK                   = -2143223475;
constexpr int32_t ERROR_ENOSYS                   = -2143223474;
constexpr int32_t ERROR_EFTYPE                   = -2143223473;
constexpr int32_t ERROR_EAUTH                    = -2143223472;
constexpr int32_t ERROR_ENEEDAUTH                = -2143223471;
constexpr int32_t ERROR_EIDRM                    = -2143223470;
constexpr int32_t ERROR_ENOMS                    = -2143223469;
constexpr int32_t ERROR_EOVERFLOW                = -2143223468;
constexpr int32_t ERROR_ECANCELED                = -2143223467;
constexpr int32_t ERROR_EPROTO                   = -2143223460;
constexpr int32_t ERROR_EADHOC                   = -2143223392;
constexpr int32_t ERROR_ERESERVED161             = -2143223391;
constexpr int32_t ERROR_ERESERVED162             = -2143223390;
constexpr int32_t ERROR_EINACTIVEDISABLED        = -2143223389;
constexpr int32_t ERROR_ENODATA                  = -2143223388;
constexpr int32_t ERROR_EDESC                    = -2143223387;
constexpr int32_t ERROR_EDESCTIMEDOUT            = -2143223386;
constexpr int32_t ERROR_ENETINTR                 = -2143223385;
constexpr int32_t ERROR_ENOTINIT                 = -2143223352;
constexpr int32_t ERROR_ENOLIBMEM                = -2143223351;
constexpr int32_t ERROR_ERESERVED202             = -2143223350;
constexpr int32_t ERROR_ECALLBACK                = -2143223349;
constexpr int32_t ERROR_EINTERNAL                = -2143223348;
constexpr int32_t ERROR_ERETURN                  = -2143223347;
constexpr int32_t ERROR_ENOALLOCMEM              = -2143223346;
constexpr int32_t ERROR_RESOLVER_EINTERNAL       = -2143223332;
constexpr int32_t ERROR_RESOLVER_EBUSY           = -2143223331;
constexpr int32_t ERROR_RESOLVER_ENOSPACE        = -2143223330;
constexpr int32_t ERROR_RESOLVER_EPACKET         = -2143223329;
constexpr int32_t ERROR_RESOLVER_ERESERVED224    = -2143223328;
constexpr int32_t ERROR_RESOLVER_ENODNS          = -2143223327;
constexpr int32_t ERROR_RESOLVER_ETIMEDOUT       = -2143223326;
constexpr int32_t ERROR_RESOLVER_ENOSUPPORT      = -2143223325;
constexpr int32_t ERROR_RESOLVER_EFORMAT         = -2143223324;
constexpr int32_t ERROR_RESOLVER_ESERVERFAILURE  = -2143223323;
constexpr int32_t ERROR_RESOLVER_ENOHOST         = -2143223322;
constexpr int32_t ERROR_RESOLVER_ENOTIMPLEMENTED = -2143223321;
constexpr int32_t ERROR_RESOLVER_ESERVERREFUSED  = -2143223320;
constexpr int32_t ERROR_RESOLVER_ENORECORD       = -2143223319;
constexpr int32_t ERROR_RESOLVER_EALIGNMENT      = -2143223318;
constexpr int32_t ERROR_RESOLVER_ENOTFOUND       = -2143223317;
constexpr int32_t ERROR_RESOLVER_ENOTINIT        = -2143223316;
} // namespace Err

namespace NetErrNo {
constexpr int32_t SCE_NET_EINTR              = 4;
constexpr int32_t SCE_NET_EBADF              = 9;
constexpr int32_t SCE_NET_EINVAL             = 22;
constexpr int32_t SCE_NET_EPROTONOSUPPORT    = 43;
constexpr int32_t SCE_NET_ENAMETOOLONG       = 63;
constexpr int32_t SCE_NET_RESOLVER_ETIMEDOUT = 226;
}; // namespace NetErrNo

constexpr size_t SCE_NET_ETHER_ADDR_LEN   = 6;
constexpr size_t SCE_NET_ETHER_ADDRSTRLEN = 18;

constexpr size_t SCE_NET_RESOLVER_MULTIPLE_RECORDS_MAX = 16;

constexpr size_t SCE_NET_RESOLVER_PORT             = 53;
constexpr size_t SCE_NET_RESOLVER_HOSTNAME_LEN_MAX = 255;

#ifndef __SWIZZLE_H__
#define __SWIZZLE_H__

#define wzyx shuffle_rw<_MM_SHUFFLE(0,1,2,3)>()
#define zwyx shuffle_rw<_MM_SHUFFLE(0,1,3,2)>()
#define wyzx shuffle_rw<_MM_SHUFFLE(0,2,1,3)>()
#define ywzx shuffle_rw<_MM_SHUFFLE(0,2,3,1)>()
#define zywx shuffle_rw<_MM_SHUFFLE(0,3,1,2)>()
#define yzwx shuffle_rw<_MM_SHUFFLE(0,3,2,1)>()
#define wzxy shuffle_rw<_MM_SHUFFLE(1,0,2,3)>()
#define zwxy shuffle_rw<_MM_SHUFFLE(1,0,3,2)>()
#define wxzy shuffle_rw<_MM_SHUFFLE(1,2,0,3)>()
#define xwzy shuffle_rw<_MM_SHUFFLE(1,2,3,0)>()
#define zxwy shuffle_rw<_MM_SHUFFLE(1,3,0,2)>()
#define xzwy shuffle_rw<_MM_SHUFFLE(1,3,2,0)>()
#define wyxz shuffle_rw<_MM_SHUFFLE(2,0,1,3)>()
#define ywxz shuffle_rw<_MM_SHUFFLE(2,0,3,1)>()
#define wxyz shuffle_rw<_MM_SHUFFLE(2,1,0,3)>()
#define xwyz shuffle_rw<_MM_SHUFFLE(2,1,3,0)>()
#define yxwz shuffle_rw<_MM_SHUFFLE(2,3,0,1)>()
#define xywz shuffle_rw<_MM_SHUFFLE(2,3,1,0)>()
#define zyxw shuffle_rw<_MM_SHUFFLE(3,0,1,2)>()
#define yzxw shuffle_rw<_MM_SHUFFLE(3,0,2,1)>()
#define zxyw shuffle_rw<_MM_SHUFFLE(3,1,0,2)>()
#define xzyw shuffle_rw<_MM_SHUFFLE(3,1,2,0)>()
#define yxzw shuffle_rw<_MM_SHUFFLE(3,2,0,1)>()
#define xyzw shuffle_rw<_MM_SHUFFLE(3,2,1,0)>()

#define xxxx shuffle_ro<_MM_SHUFFLE(0,0,0,0)>()
#define yxxx shuffle_ro<_MM_SHUFFLE(0,0,0,1)>()
#define zxxx shuffle_ro<_MM_SHUFFLE(0,0,0,2)>()
#define wxxx shuffle_ro<_MM_SHUFFLE(0,0,0,3)>()
#define xyxx shuffle_ro<_MM_SHUFFLE(0,0,1,0)>()
#define yyxx shuffle_ro<_MM_SHUFFLE(0,0,1,1)>()
#define zyxx shuffle_ro<_MM_SHUFFLE(0,0,1,2)>()
#define wyxx shuffle_ro<_MM_SHUFFLE(0,0,1,3)>()
#define xzxx shuffle_ro<_MM_SHUFFLE(0,0,2,0)>()
#define yzxx shuffle_ro<_MM_SHUFFLE(0,0,2,1)>()
#define zzxx shuffle_ro<_MM_SHUFFLE(0,0,2,2)>()
#define wzxx shuffle_ro<_MM_SHUFFLE(0,0,2,3)>()
#define xwxx shuffle_ro<_MM_SHUFFLE(0,0,3,0)>()
#define ywxx shuffle_ro<_MM_SHUFFLE(0,0,3,1)>()
#define zwxx shuffle_ro<_MM_SHUFFLE(0,0,3,2)>()
#define wwxx shuffle_ro<_MM_SHUFFLE(0,0,3,3)>()
#define xxyx shuffle_ro<_MM_SHUFFLE(0,1,0,0)>()
#define yxyx shuffle_ro<_MM_SHUFFLE(0,1,0,1)>()
#define zxyx shuffle_ro<_MM_SHUFFLE(0,1,0,2)>()
#define wxyx shuffle_ro<_MM_SHUFFLE(0,1,0,3)>()
#define xyyx shuffle_ro<_MM_SHUFFLE(0,1,1,0)>()
#define yyyx shuffle_ro<_MM_SHUFFLE(0,1,1,1)>()
#define zyyx shuffle_ro<_MM_SHUFFLE(0,1,1,2)>()
#define wyyx shuffle_ro<_MM_SHUFFLE(0,1,1,3)>()
#define xzyx shuffle_ro<_MM_SHUFFLE(0,1,2,0)>()
#define yzyx shuffle_ro<_MM_SHUFFLE(0,1,2,1)>()
#define zzyx shuffle_ro<_MM_SHUFFLE(0,1,2,2)>()
#define xwyx shuffle_ro<_MM_SHUFFLE(0,1,3,0)>()
#define ywyx shuffle_ro<_MM_SHUFFLE(0,1,3,1)>()
#define wwyx shuffle_ro<_MM_SHUFFLE(0,1,3,3)>()
#define xxzx shuffle_ro<_MM_SHUFFLE(0,2,0,0)>()
#define yxzx shuffle_ro<_MM_SHUFFLE(0,2,0,1)>()
#define zxzx shuffle_ro<_MM_SHUFFLE(0,2,0,2)>()
#define wxzx shuffle_ro<_MM_SHUFFLE(0,2,0,3)>()
#define xyzx shuffle_ro<_MM_SHUFFLE(0,2,1,0)>()
#define yyzx shuffle_ro<_MM_SHUFFLE(0,2,1,1)>()
#define zyzx shuffle_ro<_MM_SHUFFLE(0,2,1,2)>()
#define xzzx shuffle_ro<_MM_SHUFFLE(0,2,2,0)>()
#define yzzx shuffle_ro<_MM_SHUFFLE(0,2,2,1)>()
#define zzzx shuffle_ro<_MM_SHUFFLE(0,2,2,2)>()
#define wzzx shuffle_ro<_MM_SHUFFLE(0,2,2,3)>()
#define xwzx shuffle_ro<_MM_SHUFFLE(0,2,3,0)>()
#define zwzx shuffle_ro<_MM_SHUFFLE(0,2,3,2)>()
#define wwzx shuffle_ro<_MM_SHUFFLE(0,2,3,3)>()
#define xxwx shuffle_ro<_MM_SHUFFLE(0,3,0,0)>()
#define yxwx shuffle_ro<_MM_SHUFFLE(0,3,0,1)>()
#define zxwx shuffle_ro<_MM_SHUFFLE(0,3,0,2)>()
#define wxwx shuffle_ro<_MM_SHUFFLE(0,3,0,3)>()
#define xywx shuffle_ro<_MM_SHUFFLE(0,3,1,0)>()
#define yywx shuffle_ro<_MM_SHUFFLE(0,3,1,1)>()
#define wywx shuffle_ro<_MM_SHUFFLE(0,3,1,3)>()
#define xzwx shuffle_ro<_MM_SHUFFLE(0,3,2,0)>()
#define zzwx shuffle_ro<_MM_SHUFFLE(0,3,2,2)>()
#define wzwx shuffle_ro<_MM_SHUFFLE(0,3,2,3)>()
#define xwwx shuffle_ro<_MM_SHUFFLE(0,3,3,0)>()
#define ywwx shuffle_ro<_MM_SHUFFLE(0,3,3,1)>()
#define zwwx shuffle_ro<_MM_SHUFFLE(0,3,3,2)>()
#define wwwx shuffle_ro<_MM_SHUFFLE(0,3,3,3)>()
#define xxxy shuffle_ro<_MM_SHUFFLE(1,0,0,0)>()
#define yxxy shuffle_ro<_MM_SHUFFLE(1,0,0,1)>()
#define zxxy shuffle_ro<_MM_SHUFFLE(1,0,0,2)>()
#define wxxy shuffle_ro<_MM_SHUFFLE(1,0,0,3)>()
#define xyxy shuffle_ro<_MM_SHUFFLE(1,0,1,0)>()
#define yyxy shuffle_ro<_MM_SHUFFLE(1,0,1,1)>()
#define zyxy shuffle_ro<_MM_SHUFFLE(1,0,1,2)>()
#define wyxy shuffle_ro<_MM_SHUFFLE(1,0,1,3)>()
#define xzxy shuffle_ro<_MM_SHUFFLE(1,0,2,0)>()
#define yzxy shuffle_ro<_MM_SHUFFLE(1,0,2,1)>()
#define zzxy shuffle_ro<_MM_SHUFFLE(1,0,2,2)>()
#define xwxy shuffle_ro<_MM_SHUFFLE(1,0,3,0)>()
#define ywxy shuffle_ro<_MM_SHUFFLE(1,0,3,1)>()
#define wwxy shuffle_ro<_MM_SHUFFLE(1,0,3,3)>()
#define xxyy shuffle_ro<_MM_SHUFFLE(1,1,0,0)>()
#define yxyy shuffle_ro<_MM_SHUFFLE(1,1,0,1)>()
#define zxyy shuffle_ro<_MM_SHUFFLE(1,1,0,2)>()
#define wxyy shuffle_ro<_MM_SHUFFLE(1,1,0,3)>()
#define xyyy shuffle_ro<_MM_SHUFFLE(1,1,1,0)>()
#define yyyy shuffle_ro<_MM_SHUFFLE(1,1,1,1)>()
#define zyyy shuffle_ro<_MM_SHUFFLE(1,1,1,2)>()
#define wyyy shuffle_ro<_MM_SHUFFLE(1,1,1,3)>()
#define xzyy shuffle_ro<_MM_SHUFFLE(1,1,2,0)>()
#define yzyy shuffle_ro<_MM_SHUFFLE(1,1,2,1)>()
#define zzyy shuffle_ro<_MM_SHUFFLE(1,1,2,2)>()
#define wzyy shuffle_ro<_MM_SHUFFLE(1,1,2,3)>()
#define xwyy shuffle_ro<_MM_SHUFFLE(1,1,3,0)>()
#define ywyy shuffle_ro<_MM_SHUFFLE(1,1,3,1)>()
#define zwyy shuffle_ro<_MM_SHUFFLE(1,1,3,2)>()
#define wwyy shuffle_ro<_MM_SHUFFLE(1,1,3,3)>()
#define xxzy shuffle_ro<_MM_SHUFFLE(1,2,0,0)>()
#define yxzy shuffle_ro<_MM_SHUFFLE(1,2,0,1)>()
#define zxzy shuffle_ro<_MM_SHUFFLE(1,2,0,2)>()
#define xyzy shuffle_ro<_MM_SHUFFLE(1,2,1,0)>()
#define yyzy shuffle_ro<_MM_SHUFFLE(1,2,1,1)>()
#define zyzy shuffle_ro<_MM_SHUFFLE(1,2,1,2)>()
#define wyzy shuffle_ro<_MM_SHUFFLE(1,2,1,3)>()
#define xzzy shuffle_ro<_MM_SHUFFLE(1,2,2,0)>()
#define yzzy shuffle_ro<_MM_SHUFFLE(1,2,2,1)>()
#define zzzy shuffle_ro<_MM_SHUFFLE(1,2,2,2)>()
#define wzzy shuffle_ro<_MM_SHUFFLE(1,2,2,3)>()
#define ywzy shuffle_ro<_MM_SHUFFLE(1,2,3,1)>()
#define zwzy shuffle_ro<_MM_SHUFFLE(1,2,3,2)>()
#define wwzy shuffle_ro<_MM_SHUFFLE(1,2,3,3)>()
#define xxwy shuffle_ro<_MM_SHUFFLE(1,3,0,0)>()
#define yxwy shuffle_ro<_MM_SHUFFLE(1,3,0,1)>()
#define wxwy shuffle_ro<_MM_SHUFFLE(1,3,0,3)>()
#define xywy shuffle_ro<_MM_SHUFFLE(1,3,1,0)>()
#define yywy shuffle_ro<_MM_SHUFFLE(1,3,1,1)>()
#define zywy shuffle_ro<_MM_SHUFFLE(1,3,1,2)>()
#define wywy shuffle_ro<_MM_SHUFFLE(1,3,1,3)>()
#define yzwy shuffle_ro<_MM_SHUFFLE(1,3,2,1)>()
#define zzwy shuffle_ro<_MM_SHUFFLE(1,3,2,2)>()
#define wzwy shuffle_ro<_MM_SHUFFLE(1,3,2,3)>()
#define xwwy shuffle_ro<_MM_SHUFFLE(1,3,3,0)>()
#define ywwy shuffle_ro<_MM_SHUFFLE(1,3,3,1)>()
#define zwwy shuffle_ro<_MM_SHUFFLE(1,3,3,2)>()
#define wwwy shuffle_ro<_MM_SHUFFLE(1,3,3,3)>()
#define xxxz shuffle_ro<_MM_SHUFFLE(2,0,0,0)>()
#define yxxz shuffle_ro<_MM_SHUFFLE(2,0,0,1)>()
#define zxxz shuffle_ro<_MM_SHUFFLE(2,0,0,2)>()
#define wxxz shuffle_ro<_MM_SHUFFLE(2,0,0,3)>()
#define xyxz shuffle_ro<_MM_SHUFFLE(2,0,1,0)>()
#define yyxz shuffle_ro<_MM_SHUFFLE(2,0,1,1)>()
#define zyxz shuffle_ro<_MM_SHUFFLE(2,0,1,2)>()
#define xzxz shuffle_ro<_MM_SHUFFLE(2,0,2,0)>()
#define yzxz shuffle_ro<_MM_SHUFFLE(2,0,2,1)>()
#define zzxz shuffle_ro<_MM_SHUFFLE(2,0,2,2)>()
#define wzxz shuffle_ro<_MM_SHUFFLE(2,0,2,3)>()
#define xwxz shuffle_ro<_MM_SHUFFLE(2,0,3,0)>()
#define zwxz shuffle_ro<_MM_SHUFFLE(2,0,3,2)>()
#define wwxz shuffle_ro<_MM_SHUFFLE(2,0,3,3)>()
#define xxyz shuffle_ro<_MM_SHUFFLE(2,1,0,0)>()
#define yxyz shuffle_ro<_MM_SHUFFLE(2,1,0,1)>()
#define zxyz shuffle_ro<_MM_SHUFFLE(2,1,0,2)>()
#define xyyz shuffle_ro<_MM_SHUFFLE(2,1,1,0)>()
#define yyyz shuffle_ro<_MM_SHUFFLE(2,1,1,1)>()
#define zyyz shuffle_ro<_MM_SHUFFLE(2,1,1,2)>()
#define wyyz shuffle_ro<_MM_SHUFFLE(2,1,1,3)>()
#define xzyz shuffle_ro<_MM_SHUFFLE(2,1,2,0)>()
#define yzyz shuffle_ro<_MM_SHUFFLE(2,1,2,1)>()
#define zzyz shuffle_ro<_MM_SHUFFLE(2,1,2,2)>()
#define wzyz shuffle_ro<_MM_SHUFFLE(2,1,2,3)>()
#define ywyz shuffle_ro<_MM_SHUFFLE(2,1,3,1)>()
#define zwyz shuffle_ro<_MM_SHUFFLE(2,1,3,2)>()
#define wwyz shuffle_ro<_MM_SHUFFLE(2,1,3,3)>()
#define xxzz shuffle_ro<_MM_SHUFFLE(2,2,0,0)>()
#define yxzz shuffle_ro<_MM_SHUFFLE(2,2,0,1)>()
#define zxzz shuffle_ro<_MM_SHUFFLE(2,2,0,2)>()
#define wxzz shuffle_ro<_MM_SHUFFLE(2,2,0,3)>()
#define xyzz shuffle_ro<_MM_SHUFFLE(2,2,1,0)>()
#define yyzz shuffle_ro<_MM_SHUFFLE(2,2,1,1)>()
#define zyzz shuffle_ro<_MM_SHUFFLE(2,2,1,2)>()
#define wyzz shuffle_ro<_MM_SHUFFLE(2,2,1,3)>()
#define xzzz shuffle_ro<_MM_SHUFFLE(2,2,2,0)>()
#define yzzz shuffle_ro<_MM_SHUFFLE(2,2,2,1)>()
#define zzzz shuffle_ro<_MM_SHUFFLE(2,2,2,2)>()
#define wzzz shuffle_ro<_MM_SHUFFLE(2,2,2,3)>()
#define xwzz shuffle_ro<_MM_SHUFFLE(2,2,3,0)>()
#define ywzz shuffle_ro<_MM_SHUFFLE(2,2,3,1)>()
#define zwzz shuffle_ro<_MM_SHUFFLE(2,2,3,2)>()
#define wwzz shuffle_ro<_MM_SHUFFLE(2,2,3,3)>()
#define xxwz shuffle_ro<_MM_SHUFFLE(2,3,0,0)>()
#define zxwz shuffle_ro<_MM_SHUFFLE(2,3,0,2)>()
#define wxwz shuffle_ro<_MM_SHUFFLE(2,3,0,3)>()
#define yywz shuffle_ro<_MM_SHUFFLE(2,3,1,1)>()
#define zywz shuffle_ro<_MM_SHUFFLE(2,3,1,2)>()
#define wywz shuffle_ro<_MM_SHUFFLE(2,3,1,3)>()
#define xzwz shuffle_ro<_MM_SHUFFLE(2,3,2,0)>()
#define yzwz shuffle_ro<_MM_SHUFFLE(2,3,2,1)>()
#define zzwz shuffle_ro<_MM_SHUFFLE(2,3,2,2)>()
#define wzwz shuffle_ro<_MM_SHUFFLE(2,3,2,3)>()
#define xwwz shuffle_ro<_MM_SHUFFLE(2,3,3,0)>()
#define ywwz shuffle_ro<_MM_SHUFFLE(2,3,3,1)>()
#define zwwz shuffle_ro<_MM_SHUFFLE(2,3,3,2)>()
#define wwwz shuffle_ro<_MM_SHUFFLE(2,3,3,3)>()
#define xxxw shuffle_ro<_MM_SHUFFLE(3,0,0,0)>()
#define yxxw shuffle_ro<_MM_SHUFFLE(3,0,0,1)>()
#define zxxw shuffle_ro<_MM_SHUFFLE(3,0,0,2)>()
#define wxxw shuffle_ro<_MM_SHUFFLE(3,0,0,3)>()
#define xyxw shuffle_ro<_MM_SHUFFLE(3,0,1,0)>()
#define yyxw shuffle_ro<_MM_SHUFFLE(3,0,1,1)>()
#define wyxw shuffle_ro<_MM_SHUFFLE(3,0,1,3)>()
#define xzxw shuffle_ro<_MM_SHUFFLE(3,0,2,0)>()
#define zzxw shuffle_ro<_MM_SHUFFLE(3,0,2,2)>()
#define wzxw shuffle_ro<_MM_SHUFFLE(3,0,2,3)>()
#define xwxw shuffle_ro<_MM_SHUFFLE(3,0,3,0)>()
#define ywxw shuffle_ro<_MM_SHUFFLE(3,0,3,1)>()
#define zwxw shuffle_ro<_MM_SHUFFLE(3,0,3,2)>()
#define wwxw shuffle_ro<_MM_SHUFFLE(3,0,3,3)>()
#define xxyw shuffle_ro<_MM_SHUFFLE(3,1,0,0)>()
#define yxyw shuffle_ro<_MM_SHUFFLE(3,1,0,1)>()
#define wxyw shuffle_ro<_MM_SHUFFLE(3,1,0,3)>()
#define xyyw shuffle_ro<_MM_SHUFFLE(3,1,1,0)>()
#define yyyw shuffle_ro<_MM_SHUFFLE(3,1,1,1)>()
#define zyyw shuffle_ro<_MM_SHUFFLE(3,1,1,2)>()
#define wyyw shuffle_ro<_MM_SHUFFLE(3,1,1,3)>()
#define yzyw shuffle_ro<_MM_SHUFFLE(3,1,2,1)>()
#define zzyw shuffle_ro<_MM_SHUFFLE(3,1,2,2)>()
#define wzyw shuffle_ro<_MM_SHUFFLE(3,1,2,3)>()
#define xwyw shuffle_ro<_MM_SHUFFLE(3,1,3,0)>()
#define ywyw shuffle_ro<_MM_SHUFFLE(3,1,3,1)>()
#define zwyw shuffle_ro<_MM_SHUFFLE(3,1,3,2)>()
#define wwyw shuffle_ro<_MM_SHUFFLE(3,1,3,3)>()
#define xxzw shuffle_ro<_MM_SHUFFLE(3,2,0,0)>()
#define zxzw shuffle_ro<_MM_SHUFFLE(3,2,0,2)>()
#define wxzw shuffle_ro<_MM_SHUFFLE(3,2,0,3)>()
#define yyzw shuffle_ro<_MM_SHUFFLE(3,2,1,1)>()
#define zyzw shuffle_ro<_MM_SHUFFLE(3,2,1,2)>()
#define wyzw shuffle_ro<_MM_SHUFFLE(3,2,1,3)>()
#define xzzw shuffle_ro<_MM_SHUFFLE(3,2,2,0)>()
#define yzzw shuffle_ro<_MM_SHUFFLE(3,2,2,1)>()
#define zzzw shuffle_ro<_MM_SHUFFLE(3,2,2,2)>()
#define wzzw shuffle_ro<_MM_SHUFFLE(3,2,2,3)>()
#define xwzw shuffle_ro<_MM_SHUFFLE(3,2,3,0)>()
#define ywzw shuffle_ro<_MM_SHUFFLE(3,2,3,1)>()
#define zwzw shuffle_ro<_MM_SHUFFLE(3,2,3,2)>()
#define wwzw shuffle_ro<_MM_SHUFFLE(3,2,3,3)>()
#define xxww shuffle_ro<_MM_SHUFFLE(3,3,0,0)>()
#define yxww shuffle_ro<_MM_SHUFFLE(3,3,0,1)>()
#define zxww shuffle_ro<_MM_SHUFFLE(3,3,0,2)>()
#define wxww shuffle_ro<_MM_SHUFFLE(3,3,0,3)>()
#define xyww shuffle_ro<_MM_SHUFFLE(3,3,1,0)>()
#define yyww shuffle_ro<_MM_SHUFFLE(3,3,1,1)>()
#define zyww shuffle_ro<_MM_SHUFFLE(3,3,1,2)>()
#define wyww shuffle_ro<_MM_SHUFFLE(3,3,1,3)>()
#define xzww shuffle_ro<_MM_SHUFFLE(3,3,2,0)>()
#define yzww shuffle_ro<_MM_SHUFFLE(3,3,2,1)>()
#define zzww shuffle_ro<_MM_SHUFFLE(3,3,2,2)>()
#define wzww shuffle_ro<_MM_SHUFFLE(3,3,2,3)>()
#define xwww shuffle_ro<_MM_SHUFFLE(3,3,3,0)>()
#define ywww shuffle_ro<_MM_SHUFFLE(3,3,3,1)>()
#define zwww shuffle_ro<_MM_SHUFFLE(3,3,3,2)>()
#define wwww shuffle_ro<_MM_SHUFFLE(3,3,3,3)>()

// -------------------------------------------------------------------------- //

#define abgr shuffle_rw<_MM_SHUFFLE(0,1,2,3)>()
#define bagr shuffle_rw<_MM_SHUFFLE(0,1,3,2)>()
#define agbr shuffle_rw<_MM_SHUFFLE(0,2,1,3)>()
#define gabr shuffle_rw<_MM_SHUFFLE(0,2,3,1)>()
#define bgar shuffle_rw<_MM_SHUFFLE(0,3,1,2)>()
#define gbar shuffle_rw<_MM_SHUFFLE(0,3,2,1)>()
#define abrg shuffle_rw<_MM_SHUFFLE(1,0,2,3)>()
#define barg shuffle_rw<_MM_SHUFFLE(1,0,3,2)>()
#define arbg shuffle_rw<_MM_SHUFFLE(1,2,0,3)>()
#define rabg shuffle_rw<_MM_SHUFFLE(1,2,3,0)>()
#define brag shuffle_rw<_MM_SHUFFLE(1,3,0,2)>()
#define rbag shuffle_rw<_MM_SHUFFLE(1,3,2,0)>()
#define agrb shuffle_rw<_MM_SHUFFLE(2,0,1,3)>()
#define garb shuffle_rw<_MM_SHUFFLE(2,0,3,1)>()
#define argb shuffle_rw<_MM_SHUFFLE(2,1,0,3)>()
#define ragb shuffle_rw<_MM_SHUFFLE(2,1,3,0)>()
#define grab shuffle_rw<_MM_SHUFFLE(2,3,0,1)>()
#define rgab shuffle_rw<_MM_SHUFFLE(2,3,1,0)>()
#define bgra shuffle_rw<_MM_SHUFFLE(3,0,1,2)>()
#define gbra shuffle_rw<_MM_SHUFFLE(3,0,2,1)>()
#define brga shuffle_rw<_MM_SHUFFLE(3,1,0,2)>()
#define rbga shuffle_rw<_MM_SHUFFLE(3,1,2,0)>()
#define grba shuffle_rw<_MM_SHUFFLE(3,2,0,1)>()
#define rgba shuffle_rw<_MM_SHUFFLE(3,2,1,0)>()

#define rrrr shuffle_ro<_MM_SHUFFLE(0,0,0,0)>()
#define grrr shuffle_ro<_MM_SHUFFLE(0,0,0,1)>()
#define brrr shuffle_ro<_MM_SHUFFLE(0,0,0,2)>()
#define arrr shuffle_ro<_MM_SHUFFLE(0,0,0,3)>()
#define rgrr shuffle_ro<_MM_SHUFFLE(0,0,1,0)>()
#define ggrr shuffle_ro<_MM_SHUFFLE(0,0,1,1)>()
#define bgrr shuffle_ro<_MM_SHUFFLE(0,0,1,2)>()
#define agrr shuffle_ro<_MM_SHUFFLE(0,0,1,3)>()
#define rbrr shuffle_ro<_MM_SHUFFLE(0,0,2,0)>()
#define gbrr shuffle_ro<_MM_SHUFFLE(0,0,2,1)>()
#define bbrr shuffle_ro<_MM_SHUFFLE(0,0,2,2)>()
#define abrr shuffle_ro<_MM_SHUFFLE(0,0,2,3)>()
#define rarr shuffle_ro<_MM_SHUFFLE(0,0,3,0)>()
#define garr shuffle_ro<_MM_SHUFFLE(0,0,3,1)>()
#define barr shuffle_ro<_MM_SHUFFLE(0,0,3,2)>()
#define aarr shuffle_ro<_MM_SHUFFLE(0,0,3,3)>()
#define rrgr shuffle_ro<_MM_SHUFFLE(0,1,0,0)>()
#define grgr shuffle_ro<_MM_SHUFFLE(0,1,0,1)>()
#define brgr shuffle_ro<_MM_SHUFFLE(0,1,0,2)>()
#define argr shuffle_ro<_MM_SHUFFLE(0,1,0,3)>()
#define rggr shuffle_ro<_MM_SHUFFLE(0,1,1,0)>()
#define gggr shuffle_ro<_MM_SHUFFLE(0,1,1,1)>()
#define bggr shuffle_ro<_MM_SHUFFLE(0,1,1,2)>()
#define aggr shuffle_ro<_MM_SHUFFLE(0,1,1,3)>()
#define rbgr shuffle_ro<_MM_SHUFFLE(0,1,2,0)>()
#define gbgr shuffle_ro<_MM_SHUFFLE(0,1,2,1)>()
#define bbgr shuffle_ro<_MM_SHUFFLE(0,1,2,2)>()
#define ragr shuffle_ro<_MM_SHUFFLE(0,1,3,0)>()
#define gagr shuffle_ro<_MM_SHUFFLE(0,1,3,1)>()
#define aagr shuffle_ro<_MM_SHUFFLE(0,1,3,3)>()
#define rrbr shuffle_ro<_MM_SHUFFLE(0,2,0,0)>()
#define grbr shuffle_ro<_MM_SHUFFLE(0,2,0,1)>()
#define brbr shuffle_ro<_MM_SHUFFLE(0,2,0,2)>()
#define arbr shuffle_ro<_MM_SHUFFLE(0,2,0,3)>()
#define rgbr shuffle_ro<_MM_SHUFFLE(0,2,1,0)>()
#define ggbr shuffle_ro<_MM_SHUFFLE(0,2,1,1)>()
#define bgbr shuffle_ro<_MM_SHUFFLE(0,2,1,2)>()
#define rbbr shuffle_ro<_MM_SHUFFLE(0,2,2,0)>()
#define gbbr shuffle_ro<_MM_SHUFFLE(0,2,2,1)>()
#define bbbr shuffle_ro<_MM_SHUFFLE(0,2,2,2)>()
#define abbr shuffle_ro<_MM_SHUFFLE(0,2,2,3)>()
#define rabr shuffle_ro<_MM_SHUFFLE(0,2,3,0)>()
#define babr shuffle_ro<_MM_SHUFFLE(0,2,3,2)>()
#define aabr shuffle_ro<_MM_SHUFFLE(0,2,3,3)>()
#define rrar shuffle_ro<_MM_SHUFFLE(0,3,0,0)>()
#define grar shuffle_ro<_MM_SHUFFLE(0,3,0,1)>()
#define brar shuffle_ro<_MM_SHUFFLE(0,3,0,2)>()
#define arar shuffle_ro<_MM_SHUFFLE(0,3,0,3)>()
#define rgar shuffle_ro<_MM_SHUFFLE(0,3,1,0)>()
#define ggar shuffle_ro<_MM_SHUFFLE(0,3,1,1)>()
#define agar shuffle_ro<_MM_SHUFFLE(0,3,1,3)>()
#define rbar shuffle_ro<_MM_SHUFFLE(0,3,2,0)>()
#define bbar shuffle_ro<_MM_SHUFFLE(0,3,2,2)>()
#define abar shuffle_ro<_MM_SHUFFLE(0,3,2,3)>()
#define raar shuffle_ro<_MM_SHUFFLE(0,3,3,0)>()
#define gaar shuffle_ro<_MM_SHUFFLE(0,3,3,1)>()
#define baar shuffle_ro<_MM_SHUFFLE(0,3,3,2)>()
#define aaar shuffle_ro<_MM_SHUFFLE(0,3,3,3)>()
#define rrrg shuffle_ro<_MM_SHUFFLE(1,0,0,0)>()
#define grrg shuffle_ro<_MM_SHUFFLE(1,0,0,1)>()
#define brrg shuffle_ro<_MM_SHUFFLE(1,0,0,2)>()
#define arrg shuffle_ro<_MM_SHUFFLE(1,0,0,3)>()
#define rgrg shuffle_ro<_MM_SHUFFLE(1,0,1,0)>()
#define ggrg shuffle_ro<_MM_SHUFFLE(1,0,1,1)>()
#define bgrg shuffle_ro<_MM_SHUFFLE(1,0,1,2)>()
#define agrg shuffle_ro<_MM_SHUFFLE(1,0,1,3)>()
#define rbrg shuffle_ro<_MM_SHUFFLE(1,0,2,0)>()
#define gbrg shuffle_ro<_MM_SHUFFLE(1,0,2,1)>()
#define bbrg shuffle_ro<_MM_SHUFFLE(1,0,2,2)>()
#define rarg shuffle_ro<_MM_SHUFFLE(1,0,3,0)>()
#define garg shuffle_ro<_MM_SHUFFLE(1,0,3,1)>()
#define aarg shuffle_ro<_MM_SHUFFLE(1,0,3,3)>()
#define rrgg shuffle_ro<_MM_SHUFFLE(1,1,0,0)>()
#define grgg shuffle_ro<_MM_SHUFFLE(1,1,0,1)>()
#define brgg shuffle_ro<_MM_SHUFFLE(1,1,0,2)>()
#define argg shuffle_ro<_MM_SHUFFLE(1,1,0,3)>()
#define rggg shuffle_ro<_MM_SHUFFLE(1,1,1,0)>()
#define gggg shuffle_ro<_MM_SHUFFLE(1,1,1,1)>()
#define bggg shuffle_ro<_MM_SHUFFLE(1,1,1,2)>()
#define aggg shuffle_ro<_MM_SHUFFLE(1,1,1,3)>()
#define rbgg shuffle_ro<_MM_SHUFFLE(1,1,2,0)>()
#define gbgg shuffle_ro<_MM_SHUFFLE(1,1,2,1)>()
#define bbgg shuffle_ro<_MM_SHUFFLE(1,1,2,2)>()
#define abgg shuffle_ro<_MM_SHUFFLE(1,1,2,3)>()
#define ragg shuffle_ro<_MM_SHUFFLE(1,1,3,0)>()
#define gagg shuffle_ro<_MM_SHUFFLE(1,1,3,1)>()
#define bagg shuffle_ro<_MM_SHUFFLE(1,1,3,2)>()
#define aagg shuffle_ro<_MM_SHUFFLE(1,1,3,3)>()
#define rrbg shuffle_ro<_MM_SHUFFLE(1,2,0,0)>()
#define grbg shuffle_ro<_MM_SHUFFLE(1,2,0,1)>()
#define brbg shuffle_ro<_MM_SHUFFLE(1,2,0,2)>()
#define rgbg shuffle_ro<_MM_SHUFFLE(1,2,1,0)>()
#define ggbg shuffle_ro<_MM_SHUFFLE(1,2,1,1)>()
#define bgbg shuffle_ro<_MM_SHUFFLE(1,2,1,2)>()
#define agbg shuffle_ro<_MM_SHUFFLE(1,2,1,3)>()
#define rbbg shuffle_ro<_MM_SHUFFLE(1,2,2,0)>()
#define gbbg shuffle_ro<_MM_SHUFFLE(1,2,2,1)>()
#define bbbg shuffle_ro<_MM_SHUFFLE(1,2,2,2)>()
#define abbg shuffle_ro<_MM_SHUFFLE(1,2,2,3)>()
#define gabg shuffle_ro<_MM_SHUFFLE(1,2,3,1)>()
#define babg shuffle_ro<_MM_SHUFFLE(1,2,3,2)>()
#define aabg shuffle_ro<_MM_SHUFFLE(1,2,3,3)>()
#define rrag shuffle_ro<_MM_SHUFFLE(1,3,0,0)>()
#define grag shuffle_ro<_MM_SHUFFLE(1,3,0,1)>()
#define arag shuffle_ro<_MM_SHUFFLE(1,3,0,3)>()
#define rgag shuffle_ro<_MM_SHUFFLE(1,3,1,0)>()
#define ggag shuffle_ro<_MM_SHUFFLE(1,3,1,1)>()
#define bgag shuffle_ro<_MM_SHUFFLE(1,3,1,2)>()
#define agag shuffle_ro<_MM_SHUFFLE(1,3,1,3)>()
#define gbag shuffle_ro<_MM_SHUFFLE(1,3,2,1)>()
#define bbag shuffle_ro<_MM_SHUFFLE(1,3,2,2)>()
#define abag shuffle_ro<_MM_SHUFFLE(1,3,2,3)>()
#define raag shuffle_ro<_MM_SHUFFLE(1,3,3,0)>()
#define gaag shuffle_ro<_MM_SHUFFLE(1,3,3,1)>()
#define baag shuffle_ro<_MM_SHUFFLE(1,3,3,2)>()
#define aaag shuffle_ro<_MM_SHUFFLE(1,3,3,3)>()
#define rrrb shuffle_ro<_MM_SHUFFLE(2,0,0,0)>()
#define grrb shuffle_ro<_MM_SHUFFLE(2,0,0,1)>()
#define brrb shuffle_ro<_MM_SHUFFLE(2,0,0,2)>()
#define arrb shuffle_ro<_MM_SHUFFLE(2,0,0,3)>()
#define rgrb shuffle_ro<_MM_SHUFFLE(2,0,1,0)>()
#define ggrb shuffle_ro<_MM_SHUFFLE(2,0,1,1)>()
#define bgrb shuffle_ro<_MM_SHUFFLE(2,0,1,2)>()
#define rbrb shuffle_ro<_MM_SHUFFLE(2,0,2,0)>()
#define gbrb shuffle_ro<_MM_SHUFFLE(2,0,2,1)>()
#define bbrb shuffle_ro<_MM_SHUFFLE(2,0,2,2)>()
#define abrb shuffle_ro<_MM_SHUFFLE(2,0,2,3)>()
#define rarb shuffle_ro<_MM_SHUFFLE(2,0,3,0)>()
#define barb shuffle_ro<_MM_SHUFFLE(2,0,3,2)>()
#define aarb shuffle_ro<_MM_SHUFFLE(2,0,3,3)>()
#define rrgb shuffle_ro<_MM_SHUFFLE(2,1,0,0)>()
#define grgb shuffle_ro<_MM_SHUFFLE(2,1,0,1)>()
#define brgb shuffle_ro<_MM_SHUFFLE(2,1,0,2)>()
#define rggb shuffle_ro<_MM_SHUFFLE(2,1,1,0)>()
#define gggb shuffle_ro<_MM_SHUFFLE(2,1,1,1)>()
#define bggb shuffle_ro<_MM_SHUFFLE(2,1,1,2)>()
#define aggb shuffle_ro<_MM_SHUFFLE(2,1,1,3)>()
#define rbgb shuffle_ro<_MM_SHUFFLE(2,1,2,0)>()
#define gbgb shuffle_ro<_MM_SHUFFLE(2,1,2,1)>()
#define bbgb shuffle_ro<_MM_SHUFFLE(2,1,2,2)>()
#define abgb shuffle_ro<_MM_SHUFFLE(2,1,2,3)>()
#define gagb shuffle_ro<_MM_SHUFFLE(2,1,3,1)>()
#define bagb shuffle_ro<_MM_SHUFFLE(2,1,3,2)>()
#define aagb shuffle_ro<_MM_SHUFFLE(2,1,3,3)>()
#define rrbb shuffle_ro<_MM_SHUFFLE(2,2,0,0)>()
#define grbb shuffle_ro<_MM_SHUFFLE(2,2,0,1)>()
#define brbb shuffle_ro<_MM_SHUFFLE(2,2,0,2)>()
#define arbb shuffle_ro<_MM_SHUFFLE(2,2,0,3)>()
#define rgbb shuffle_ro<_MM_SHUFFLE(2,2,1,0)>()
#define ggbb shuffle_ro<_MM_SHUFFLE(2,2,1,1)>()
#define bgbb shuffle_ro<_MM_SHUFFLE(2,2,1,2)>()
#define agbb shuffle_ro<_MM_SHUFFLE(2,2,1,3)>()
#define rbbb shuffle_ro<_MM_SHUFFLE(2,2,2,0)>()
#define gbbb shuffle_ro<_MM_SHUFFLE(2,2,2,1)>()
#define bbbb shuffle_ro<_MM_SHUFFLE(2,2,2,2)>()
#define abbb shuffle_ro<_MM_SHUFFLE(2,2,2,3)>()
#define rabb shuffle_ro<_MM_SHUFFLE(2,2,3,0)>()
#define gabb shuffle_ro<_MM_SHUFFLE(2,2,3,1)>()
#define babb shuffle_ro<_MM_SHUFFLE(2,2,3,2)>()
#define aabb shuffle_ro<_MM_SHUFFLE(2,2,3,3)>()
#define rrab shuffle_ro<_MM_SHUFFLE(2,3,0,0)>()
#define brab shuffle_ro<_MM_SHUFFLE(2,3,0,2)>()
#define arab shuffle_ro<_MM_SHUFFLE(2,3,0,3)>()
#define ggab shuffle_ro<_MM_SHUFFLE(2,3,1,1)>()
#define bgab shuffle_ro<_MM_SHUFFLE(2,3,1,2)>()
#define agab shuffle_ro<_MM_SHUFFLE(2,3,1,3)>()
#define rbab shuffle_ro<_MM_SHUFFLE(2,3,2,0)>()
#define gbab shuffle_ro<_MM_SHUFFLE(2,3,2,1)>()
#define bbab shuffle_ro<_MM_SHUFFLE(2,3,2,2)>()
#define abab shuffle_ro<_MM_SHUFFLE(2,3,2,3)>()
#define raab shuffle_ro<_MM_SHUFFLE(2,3,3,0)>()
#define gaab shuffle_ro<_MM_SHUFFLE(2,3,3,1)>()
#define baab shuffle_ro<_MM_SHUFFLE(2,3,3,2)>()
#define aaab shuffle_ro<_MM_SHUFFLE(2,3,3,3)>()
#define rrra shuffle_ro<_MM_SHUFFLE(3,0,0,0)>()
#define grra shuffle_ro<_MM_SHUFFLE(3,0,0,1)>()
#define brra shuffle_ro<_MM_SHUFFLE(3,0,0,2)>()
#define arra shuffle_ro<_MM_SHUFFLE(3,0,0,3)>()
#define rgra shuffle_ro<_MM_SHUFFLE(3,0,1,0)>()
#define ggra shuffle_ro<_MM_SHUFFLE(3,0,1,1)>()
#define agra shuffle_ro<_MM_SHUFFLE(3,0,1,3)>()
#define rbra shuffle_ro<_MM_SHUFFLE(3,0,2,0)>()
#define bbra shuffle_ro<_MM_SHUFFLE(3,0,2,2)>()
#define abra shuffle_ro<_MM_SHUFFLE(3,0,2,3)>()
#define rara shuffle_ro<_MM_SHUFFLE(3,0,3,0)>()
#define gara shuffle_ro<_MM_SHUFFLE(3,0,3,1)>()
#define bara shuffle_ro<_MM_SHUFFLE(3,0,3,2)>()
#define aara shuffle_ro<_MM_SHUFFLE(3,0,3,3)>()
#define rrga shuffle_ro<_MM_SHUFFLE(3,1,0,0)>()
#define grga shuffle_ro<_MM_SHUFFLE(3,1,0,1)>()
#define arga shuffle_ro<_MM_SHUFFLE(3,1,0,3)>()
#define rgga shuffle_ro<_MM_SHUFFLE(3,1,1,0)>()
#define ggga shuffle_ro<_MM_SHUFFLE(3,1,1,1)>()
#define bgga shuffle_ro<_MM_SHUFFLE(3,1,1,2)>()
#define agga shuffle_ro<_MM_SHUFFLE(3,1,1,3)>()
#define gbga shuffle_ro<_MM_SHUFFLE(3,1,2,1)>()
#define bbga shuffle_ro<_MM_SHUFFLE(3,1,2,2)>()
#define abga shuffle_ro<_MM_SHUFFLE(3,1,2,3)>()
#define raga shuffle_ro<_MM_SHUFFLE(3,1,3,0)>()
#define gaga shuffle_ro<_MM_SHUFFLE(3,1,3,1)>()
#define baga shuffle_ro<_MM_SHUFFLE(3,1,3,2)>()
#define aaga shuffle_ro<_MM_SHUFFLE(3,1,3,3)>()
#define rrba shuffle_ro<_MM_SHUFFLE(3,2,0,0)>()
#define brba shuffle_ro<_MM_SHUFFLE(3,2,0,2)>()
#define arba shuffle_ro<_MM_SHUFFLE(3,2,0,3)>()
#define ggba shuffle_ro<_MM_SHUFFLE(3,2,1,1)>()
#define bgba shuffle_ro<_MM_SHUFFLE(3,2,1,2)>()
#define agba shuffle_ro<_MM_SHUFFLE(3,2,1,3)>()
#define rbba shuffle_ro<_MM_SHUFFLE(3,2,2,0)>()
#define gbba shuffle_ro<_MM_SHUFFLE(3,2,2,1)>()
#define bbba shuffle_ro<_MM_SHUFFLE(3,2,2,2)>()
#define abba shuffle_ro<_MM_SHUFFLE(3,2,2,3)>()
#define raba shuffle_ro<_MM_SHUFFLE(3,2,3,0)>()
#define gaba shuffle_ro<_MM_SHUFFLE(3,2,3,1)>()
#define baba shuffle_ro<_MM_SHUFFLE(3,2,3,2)>()
#define aaba shuffle_ro<_MM_SHUFFLE(3,2,3,3)>()
#define rraa shuffle_ro<_MM_SHUFFLE(3,3,0,0)>()
#define graa shuffle_ro<_MM_SHUFFLE(3,3,0,1)>()
#define braa shuffle_ro<_MM_SHUFFLE(3,3,0,2)>()
#define araa shuffle_ro<_MM_SHUFFLE(3,3,0,3)>()
#define rgaa shuffle_ro<_MM_SHUFFLE(3,3,1,0)>()
#define ggaa shuffle_ro<_MM_SHUFFLE(3,3,1,1)>()
#define bgaa shuffle_ro<_MM_SHUFFLE(3,3,1,2)>()
#define agaa shuffle_ro<_MM_SHUFFLE(3,3,1,3)>()
#define rbaa shuffle_ro<_MM_SHUFFLE(3,3,2,0)>()
#define gbaa shuffle_ro<_MM_SHUFFLE(3,3,2,1)>()
#define bbaa shuffle_ro<_MM_SHUFFLE(3,3,2,2)>()
#define abaa shuffle_ro<_MM_SHUFFLE(3,3,2,3)>()
#define raaa shuffle_ro<_MM_SHUFFLE(3,3,3,0)>()
#define gaaa shuffle_ro<_MM_SHUFFLE(3,3,3,1)>()
#define baaa shuffle_ro<_MM_SHUFFLE(3,3,3,2)>()
#define aaaa shuffle_ro<_MM_SHUFFLE(3,3,3,3)>()

// -------------------------------------------------------------------------- //

#define qpts shuffle_rw<_MM_SHUFFLE(0,1,2,3)>()
#define pqts shuffle_rw<_MM_SHUFFLE(0,1,3,2)>()
#define qtps shuffle_rw<_MM_SHUFFLE(0,2,1,3)>()
#define tqps shuffle_rw<_MM_SHUFFLE(0,2,3,1)>()
#define ptqs shuffle_rw<_MM_SHUFFLE(0,3,1,2)>()
#define tpqs shuffle_rw<_MM_SHUFFLE(0,3,2,1)>()
#define qpst shuffle_rw<_MM_SHUFFLE(1,0,2,3)>()
#define pqst shuffle_rw<_MM_SHUFFLE(1,0,3,2)>()
#define qspt shuffle_rw<_MM_SHUFFLE(1,2,0,3)>()
#define sqpt shuffle_rw<_MM_SHUFFLE(1,2,3,0)>()
#define psqt shuffle_rw<_MM_SHUFFLE(1,3,0,2)>()
#define spqt shuffle_rw<_MM_SHUFFLE(1,3,2,0)>()
#define qtsp shuffle_rw<_MM_SHUFFLE(2,0,1,3)>()
#define tqsp shuffle_rw<_MM_SHUFFLE(2,0,3,1)>()
#define qstp shuffle_rw<_MM_SHUFFLE(2,1,0,3)>()
#define sqtp shuffle_rw<_MM_SHUFFLE(2,1,3,0)>()
#define tsqp shuffle_rw<_MM_SHUFFLE(2,3,0,1)>()
#define stqp shuffle_rw<_MM_SHUFFLE(2,3,1,0)>()
#define ptsq shuffle_rw<_MM_SHUFFLE(3,0,1,2)>()
#define tpsq shuffle_rw<_MM_SHUFFLE(3,0,2,1)>()
#define pstq shuffle_rw<_MM_SHUFFLE(3,1,0,2)>()
#define sptq shuffle_rw<_MM_SHUFFLE(3,1,2,0)>()
#define tspq shuffle_rw<_MM_SHUFFLE(3,2,0,1)>()
#define stpq shuffle_rw<_MM_SHUFFLE(3,2,1,0)>()

#define ssss shuffle_ro<_MM_SHUFFLE(0,0,0,0)>()
#define tsss shuffle_ro<_MM_SHUFFLE(0,0,0,1)>()
#define psss shuffle_ro<_MM_SHUFFLE(0,0,0,2)>()
#define qsss shuffle_ro<_MM_SHUFFLE(0,0,0,3)>()
#define stss shuffle_ro<_MM_SHUFFLE(0,0,1,0)>()
#define ttss shuffle_ro<_MM_SHUFFLE(0,0,1,1)>()
#define ptss shuffle_ro<_MM_SHUFFLE(0,0,1,2)>()
#define qtss shuffle_ro<_MM_SHUFFLE(0,0,1,3)>()
#define spss shuffle_ro<_MM_SHUFFLE(0,0,2,0)>()
#define tpss shuffle_ro<_MM_SHUFFLE(0,0,2,1)>()
#define ppss shuffle_ro<_MM_SHUFFLE(0,0,2,2)>()
#define qpss shuffle_ro<_MM_SHUFFLE(0,0,2,3)>()
#define sqss shuffle_ro<_MM_SHUFFLE(0,0,3,0)>()
#define tqss shuffle_ro<_MM_SHUFFLE(0,0,3,1)>()
#define pqss shuffle_ro<_MM_SHUFFLE(0,0,3,2)>()
#define qqss shuffle_ro<_MM_SHUFFLE(0,0,3,3)>()
#define ssts shuffle_ro<_MM_SHUFFLE(0,1,0,0)>()
#define tsts shuffle_ro<_MM_SHUFFLE(0,1,0,1)>()
#define psts shuffle_ro<_MM_SHUFFLE(0,1,0,2)>()
#define qsts shuffle_ro<_MM_SHUFFLE(0,1,0,3)>()
#define stts shuffle_ro<_MM_SHUFFLE(0,1,1,0)>()
#define ttts shuffle_ro<_MM_SHUFFLE(0,1,1,1)>()
#define ptts shuffle_ro<_MM_SHUFFLE(0,1,1,2)>()
#define qtts shuffle_ro<_MM_SHUFFLE(0,1,1,3)>()
#define spts shuffle_ro<_MM_SHUFFLE(0,1,2,0)>()
#define tpts shuffle_ro<_MM_SHUFFLE(0,1,2,1)>()
#define ppts shuffle_ro<_MM_SHUFFLE(0,1,2,2)>()
#define sqts shuffle_ro<_MM_SHUFFLE(0,1,3,0)>()
#define tqts shuffle_ro<_MM_SHUFFLE(0,1,3,1)>()
#define qqts shuffle_ro<_MM_SHUFFLE(0,1,3,3)>()
#define ssps shuffle_ro<_MM_SHUFFLE(0,2,0,0)>()
#define tsps shuffle_ro<_MM_SHUFFLE(0,2,0,1)>()
#define psps shuffle_ro<_MM_SHUFFLE(0,2,0,2)>()
#define qsps shuffle_ro<_MM_SHUFFLE(0,2,0,3)>()
#define stps shuffle_ro<_MM_SHUFFLE(0,2,1,0)>()
#define ttps shuffle_ro<_MM_SHUFFLE(0,2,1,1)>()
#define ptps shuffle_ro<_MM_SHUFFLE(0,2,1,2)>()
#define spps shuffle_ro<_MM_SHUFFLE(0,2,2,0)>()
#define tpps shuffle_ro<_MM_SHUFFLE(0,2,2,1)>()
#define ppps shuffle_ro<_MM_SHUFFLE(0,2,2,2)>()
#define qpps shuffle_ro<_MM_SHUFFLE(0,2,2,3)>()
#define sqps shuffle_ro<_MM_SHUFFLE(0,2,3,0)>()
#define pqps shuffle_ro<_MM_SHUFFLE(0,2,3,2)>()
#define qqps shuffle_ro<_MM_SHUFFLE(0,2,3,3)>()
#define ssqs shuffle_ro<_MM_SHUFFLE(0,3,0,0)>()
#define tsqs shuffle_ro<_MM_SHUFFLE(0,3,0,1)>()
#define psqs shuffle_ro<_MM_SHUFFLE(0,3,0,2)>()
#define qsqs shuffle_ro<_MM_SHUFFLE(0,3,0,3)>()
#define stqs shuffle_ro<_MM_SHUFFLE(0,3,1,0)>()
#define ttqs shuffle_ro<_MM_SHUFFLE(0,3,1,1)>()
#define qtqs shuffle_ro<_MM_SHUFFLE(0,3,1,3)>()
#define spqs shuffle_ro<_MM_SHUFFLE(0,3,2,0)>()
#define ppqs shuffle_ro<_MM_SHUFFLE(0,3,2,2)>()
#define qpqs shuffle_ro<_MM_SHUFFLE(0,3,2,3)>()
#define sqqs shuffle_ro<_MM_SHUFFLE(0,3,3,0)>()
#define tqqs shuffle_ro<_MM_SHUFFLE(0,3,3,1)>()
#define pqqs shuffle_ro<_MM_SHUFFLE(0,3,3,2)>()
#define qqqs shuffle_ro<_MM_SHUFFLE(0,3,3,3)>()
#define ssst shuffle_ro<_MM_SHUFFLE(1,0,0,0)>()
#define tsst shuffle_ro<_MM_SHUFFLE(1,0,0,1)>()
#define psst shuffle_ro<_MM_SHUFFLE(1,0,0,2)>()
#define qsst shuffle_ro<_MM_SHUFFLE(1,0,0,3)>()
#define stst shuffle_ro<_MM_SHUFFLE(1,0,1,0)>()
#define ttst shuffle_ro<_MM_SHUFFLE(1,0,1,1)>()
#define ptst shuffle_ro<_MM_SHUFFLE(1,0,1,2)>()
#define qtst shuffle_ro<_MM_SHUFFLE(1,0,1,3)>()
#define spst shuffle_ro<_MM_SHUFFLE(1,0,2,0)>()
#define tpst shuffle_ro<_MM_SHUFFLE(1,0,2,1)>()
#define ppst shuffle_ro<_MM_SHUFFLE(1,0,2,2)>()
#define sqst shuffle_ro<_MM_SHUFFLE(1,0,3,0)>()
#define tqst shuffle_ro<_MM_SHUFFLE(1,0,3,1)>()
#define qqst shuffle_ro<_MM_SHUFFLE(1,0,3,3)>()
#define sstt shuffle_ro<_MM_SHUFFLE(1,1,0,0)>()
#define tstt shuffle_ro<_MM_SHUFFLE(1,1,0,1)>()
#define pstt shuffle_ro<_MM_SHUFFLE(1,1,0,2)>()
#define qstt shuffle_ro<_MM_SHUFFLE(1,1,0,3)>()
#define sttt shuffle_ro<_MM_SHUFFLE(1,1,1,0)>()
#define tttt shuffle_ro<_MM_SHUFFLE(1,1,1,1)>()
#define pttt shuffle_ro<_MM_SHUFFLE(1,1,1,2)>()
#define qttt shuffle_ro<_MM_SHUFFLE(1,1,1,3)>()
#define sptt shuffle_ro<_MM_SHUFFLE(1,1,2,0)>()
#define tptt shuffle_ro<_MM_SHUFFLE(1,1,2,1)>()
#define pptt shuffle_ro<_MM_SHUFFLE(1,1,2,2)>()
#define qptt shuffle_ro<_MM_SHUFFLE(1,1,2,3)>()
#define sqtt shuffle_ro<_MM_SHUFFLE(1,1,3,0)>()
#define tqtt shuffle_ro<_MM_SHUFFLE(1,1,3,1)>()
#define pqtt shuffle_ro<_MM_SHUFFLE(1,1,3,2)>()
#define qqtt shuffle_ro<_MM_SHUFFLE(1,1,3,3)>()
#define sspt shuffle_ro<_MM_SHUFFLE(1,2,0,0)>()
#define tspt shuffle_ro<_MM_SHUFFLE(1,2,0,1)>()
#define pspt shuffle_ro<_MM_SHUFFLE(1,2,0,2)>()
#define stpt shuffle_ro<_MM_SHUFFLE(1,2,1,0)>()
#define ttpt shuffle_ro<_MM_SHUFFLE(1,2,1,1)>()
#define ptpt shuffle_ro<_MM_SHUFFLE(1,2,1,2)>()
#define qtpt shuffle_ro<_MM_SHUFFLE(1,2,1,3)>()
#define sppt shuffle_ro<_MM_SHUFFLE(1,2,2,0)>()
#define tppt shuffle_ro<_MM_SHUFFLE(1,2,2,1)>()
#define pppt shuffle_ro<_MM_SHUFFLE(1,2,2,2)>()
#define qppt shuffle_ro<_MM_SHUFFLE(1,2,2,3)>()
#define tqpt shuffle_ro<_MM_SHUFFLE(1,2,3,1)>()
#define pqpt shuffle_ro<_MM_SHUFFLE(1,2,3,2)>()
#define qqpt shuffle_ro<_MM_SHUFFLE(1,2,3,3)>()
#define ssqt shuffle_ro<_MM_SHUFFLE(1,3,0,0)>()
#define tsqt shuffle_ro<_MM_SHUFFLE(1,3,0,1)>()
#define qsqt shuffle_ro<_MM_SHUFFLE(1,3,0,3)>()
#define stqt shuffle_ro<_MM_SHUFFLE(1,3,1,0)>()
#define ttqt shuffle_ro<_MM_SHUFFLE(1,3,1,1)>()
#define ptqt shuffle_ro<_MM_SHUFFLE(1,3,1,2)>()
#define qtqt shuffle_ro<_MM_SHUFFLE(1,3,1,3)>()
#define tpqt shuffle_ro<_MM_SHUFFLE(1,3,2,1)>()
#define ppqt shuffle_ro<_MM_SHUFFLE(1,3,2,2)>()
#define qpqt shuffle_ro<_MM_SHUFFLE(1,3,2,3)>()
#define sqqt shuffle_ro<_MM_SHUFFLE(1,3,3,0)>()
#define tqqt shuffle_ro<_MM_SHUFFLE(1,3,3,1)>()
#define pqqt shuffle_ro<_MM_SHUFFLE(1,3,3,2)>()
#define qqqt shuffle_ro<_MM_SHUFFLE(1,3,3,3)>()
#define sssp shuffle_ro<_MM_SHUFFLE(2,0,0,0)>()
#define tssp shuffle_ro<_MM_SHUFFLE(2,0,0,1)>()
#define pssp shuffle_ro<_MM_SHUFFLE(2,0,0,2)>()
#define qssp shuffle_ro<_MM_SHUFFLE(2,0,0,3)>()
#define stsp shuffle_ro<_MM_SHUFFLE(2,0,1,0)>()
#define ttsp shuffle_ro<_MM_SHUFFLE(2,0,1,1)>()
#define ptsp shuffle_ro<_MM_SHUFFLE(2,0,1,2)>()
#define spsp shuffle_ro<_MM_SHUFFLE(2,0,2,0)>()
#define tpsp shuffle_ro<_MM_SHUFFLE(2,0,2,1)>()
#define ppsp shuffle_ro<_MM_SHUFFLE(2,0,2,2)>()
#define qpsp shuffle_ro<_MM_SHUFFLE(2,0,2,3)>()
#define sqsp shuffle_ro<_MM_SHUFFLE(2,0,3,0)>()
#define pqsp shuffle_ro<_MM_SHUFFLE(2,0,3,2)>()
#define qqsp shuffle_ro<_MM_SHUFFLE(2,0,3,3)>()
#define sstp shuffle_ro<_MM_SHUFFLE(2,1,0,0)>()
#define tstp shuffle_ro<_MM_SHUFFLE(2,1,0,1)>()
#define pstp shuffle_ro<_MM_SHUFFLE(2,1,0,2)>()
#define sttp shuffle_ro<_MM_SHUFFLE(2,1,1,0)>()
#define tttp shuffle_ro<_MM_SHUFFLE(2,1,1,1)>()
#define pttp shuffle_ro<_MM_SHUFFLE(2,1,1,2)>()
#define qttp shuffle_ro<_MM_SHUFFLE(2,1,1,3)>()
#define sptp shuffle_ro<_MM_SHUFFLE(2,1,2,0)>()
#define tptp shuffle_ro<_MM_SHUFFLE(2,1,2,1)>()
#define pptp shuffle_ro<_MM_SHUFFLE(2,1,2,2)>()
#define qptp shuffle_ro<_MM_SHUFFLE(2,1,2,3)>()
#define tqtp shuffle_ro<_MM_SHUFFLE(2,1,3,1)>()
#define pqtp shuffle_ro<_MM_SHUFFLE(2,1,3,2)>()
#define qqtp shuffle_ro<_MM_SHUFFLE(2,1,3,3)>()
#define sspp shuffle_ro<_MM_SHUFFLE(2,2,0,0)>()
#define tspp shuffle_ro<_MM_SHUFFLE(2,2,0,1)>()
#define pspp shuffle_ro<_MM_SHUFFLE(2,2,0,2)>()
#define qspp shuffle_ro<_MM_SHUFFLE(2,2,0,3)>()
#define stpp shuffle_ro<_MM_SHUFFLE(2,2,1,0)>()
#define ttpp shuffle_ro<_MM_SHUFFLE(2,2,1,1)>()
#define ptpp shuffle_ro<_MM_SHUFFLE(2,2,1,2)>()
#define qtpp shuffle_ro<_MM_SHUFFLE(2,2,1,3)>()
#define sppp shuffle_ro<_MM_SHUFFLE(2,2,2,0)>()
#define tppp shuffle_ro<_MM_SHUFFLE(2,2,2,1)>()
#define pppp shuffle_ro<_MM_SHUFFLE(2,2,2,2)>()
#define qppp shuffle_ro<_MM_SHUFFLE(2,2,2,3)>()
#define sqpp shuffle_ro<_MM_SHUFFLE(2,2,3,0)>()
#define tqpp shuffle_ro<_MM_SHUFFLE(2,2,3,1)>()
#define pqpp shuffle_ro<_MM_SHUFFLE(2,2,3,2)>()
#define qqpp shuffle_ro<_MM_SHUFFLE(2,2,3,3)>()
#define ssqp shuffle_ro<_MM_SHUFFLE(2,3,0,0)>()
#define psqp shuffle_ro<_MM_SHUFFLE(2,3,0,2)>()
#define qsqp shuffle_ro<_MM_SHUFFLE(2,3,0,3)>()
#define ttqp shuffle_ro<_MM_SHUFFLE(2,3,1,1)>()
#define ptqp shuffle_ro<_MM_SHUFFLE(2,3,1,2)>()
#define qtqp shuffle_ro<_MM_SHUFFLE(2,3,1,3)>()
#define spqp shuffle_ro<_MM_SHUFFLE(2,3,2,0)>()
#define tpqp shuffle_ro<_MM_SHUFFLE(2,3,2,1)>()
#define ppqp shuffle_ro<_MM_SHUFFLE(2,3,2,2)>()
#define qpqp shuffle_ro<_MM_SHUFFLE(2,3,2,3)>()
#define sqqp shuffle_ro<_MM_SHUFFLE(2,3,3,0)>()
#define tqqp shuffle_ro<_MM_SHUFFLE(2,3,3,1)>()
#define pqqp shuffle_ro<_MM_SHUFFLE(2,3,3,2)>()
#define qqqp shuffle_ro<_MM_SHUFFLE(2,3,3,3)>()
#define sssq shuffle_ro<_MM_SHUFFLE(3,0,0,0)>()
#define tssq shuffle_ro<_MM_SHUFFLE(3,0,0,1)>()
#define pssq shuffle_ro<_MM_SHUFFLE(3,0,0,2)>()
#define qssq shuffle_ro<_MM_SHUFFLE(3,0,0,3)>()
#define stsq shuffle_ro<_MM_SHUFFLE(3,0,1,0)>()
#define ttsq shuffle_ro<_MM_SHUFFLE(3,0,1,1)>()
#define qtsq shuffle_ro<_MM_SHUFFLE(3,0,1,3)>()
#define spsq shuffle_ro<_MM_SHUFFLE(3,0,2,0)>()
#define ppsq shuffle_ro<_MM_SHUFFLE(3,0,2,2)>()
#define qpsq shuffle_ro<_MM_SHUFFLE(3,0,2,3)>()
#define sqsq shuffle_ro<_MM_SHUFFLE(3,0,3,0)>()
#define tqsq shuffle_ro<_MM_SHUFFLE(3,0,3,1)>()
#define pqsq shuffle_ro<_MM_SHUFFLE(3,0,3,2)>()
#define qqsq shuffle_ro<_MM_SHUFFLE(3,0,3,3)>()
#define sstq shuffle_ro<_MM_SHUFFLE(3,1,0,0)>()
#define tstq shuffle_ro<_MM_SHUFFLE(3,1,0,1)>()
#define qstq shuffle_ro<_MM_SHUFFLE(3,1,0,3)>()
#define sttq shuffle_ro<_MM_SHUFFLE(3,1,1,0)>()
#define tttq shuffle_ro<_MM_SHUFFLE(3,1,1,1)>()
#define pttq shuffle_ro<_MM_SHUFFLE(3,1,1,2)>()
#define qttq shuffle_ro<_MM_SHUFFLE(3,1,1,3)>()
#define tptq shuffle_ro<_MM_SHUFFLE(3,1,2,1)>()
#define pptq shuffle_ro<_MM_SHUFFLE(3,1,2,2)>()
#define qptq shuffle_ro<_MM_SHUFFLE(3,1,2,3)>()
#define sqtq shuffle_ro<_MM_SHUFFLE(3,1,3,0)>()
#define tqtq shuffle_ro<_MM_SHUFFLE(3,1,3,1)>()
#define pqtq shuffle_ro<_MM_SHUFFLE(3,1,3,2)>()
#define qqtq shuffle_ro<_MM_SHUFFLE(3,1,3,3)>()
#define sspq shuffle_ro<_MM_SHUFFLE(3,2,0,0)>()
#define pspq shuffle_ro<_MM_SHUFFLE(3,2,0,2)>()
#define qspq shuffle_ro<_MM_SHUFFLE(3,2,0,3)>()
#define ttpq shuffle_ro<_MM_SHUFFLE(3,2,1,1)>()
#define ptpq shuffle_ro<_MM_SHUFFLE(3,2,1,2)>()
#define qtpq shuffle_ro<_MM_SHUFFLE(3,2,1,3)>()
#define sppq shuffle_ro<_MM_SHUFFLE(3,2,2,0)>()
#define tppq shuffle_ro<_MM_SHUFFLE(3,2,2,1)>()
#define pppq shuffle_ro<_MM_SHUFFLE(3,2,2,2)>()
#define qppq shuffle_ro<_MM_SHUFFLE(3,2,2,3)>()
#define sqpq shuffle_ro<_MM_SHUFFLE(3,2,3,0)>()
#define tqpq shuffle_ro<_MM_SHUFFLE(3,2,3,1)>()
#define pqpq shuffle_ro<_MM_SHUFFLE(3,2,3,2)>()
#define qqpq shuffle_ro<_MM_SHUFFLE(3,2,3,3)>()
#define ssqq shuffle_ro<_MM_SHUFFLE(3,3,0,0)>()
#define tsqq shuffle_ro<_MM_SHUFFLE(3,3,0,1)>()
#define psqq shuffle_ro<_MM_SHUFFLE(3,3,0,2)>()
#define qsqq shuffle_ro<_MM_SHUFFLE(3,3,0,3)>()
#define stqq shuffle_ro<_MM_SHUFFLE(3,3,1,0)>()
#define ttqq shuffle_ro<_MM_SHUFFLE(3,3,1,1)>()
#define ptqq shuffle_ro<_MM_SHUFFLE(3,3,1,2)>()
#define qtqq shuffle_ro<_MM_SHUFFLE(3,3,1,3)>()
#define spqq shuffle_ro<_MM_SHUFFLE(3,3,2,0)>()
#define tpqq shuffle_ro<_MM_SHUFFLE(3,3,2,1)>()
#define ppqq shuffle_ro<_MM_SHUFFLE(3,3,2,2)>()
#define qpqq shuffle_ro<_MM_SHUFFLE(3,3,2,3)>()
#define sqqq shuffle_ro<_MM_SHUFFLE(3,3,3,0)>()
#define tqqq shuffle_ro<_MM_SHUFFLE(3,3,3,1)>()
#define pqqq shuffle_ro<_MM_SHUFFLE(3,3,3,2)>()
#define qqqq shuffle_ro<_MM_SHUFFLE(3,3,3,3)>()

#endif



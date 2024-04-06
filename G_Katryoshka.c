#include <stdio.h>

int main() {
    long long int eye, mouth, body, ans=0, min;
    scanf("%lld %lld %lld", &eye, &mouth, &body);
    if (eye < mouth && eye < body)
    {
        min = eye;
    }else if ( mouth < eye && mouth < body)
    {
        min = mouth;
    }
    else
    {
        min = body;
    }
    ans = min;
    eye -=min;
    mouth -= min;
    body -= min;
    long long int restEye = eye/2;
    
    if(restEye<=body){
        ans += restEye;
    }else
    {
        ans += body;
    }
    
    printf("%lld",ans);
    return 0;
}
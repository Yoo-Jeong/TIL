## Doxygen 사용해보기  
캡스톤 프로젝트에 사용했던 코드를 알아보기 쉽고 편하게 정리할 뭔가가 없을까 찾다가 발견한 프로그램.  

실제로 사용해보며 사용법을 적어볼 생각이다.😌  

<br/>

## **Doxygen**(독시젠)이란?
코드에 주석을 작성하면 그 코드를 읽어 자동으로 문서를 만들어주는 소프트웨어

## Doxygen 주석
* 주석 작성법이 따로 있다.
* 비주얼스튜디오에서 제공하는 /// 주석도 읽어주는 것 같다.

#### 함수 주석 예시 `C#`
```C#
    /**
    * @brief 함수 간략 설명
    * @details 함수 자세히 설명
    * @param string email 이메일
    * @param string password 비밀번호
    * @return 반환
    **/
```
또는  
```C#
    /// <summary>
    /// 이메일 로그인 함수
    /// </summary>
    /// <param name="email">이메일</param>
    /// <param name="password">비밀번호</param>
```

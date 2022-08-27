# 마크다운 문법 메모

## 줄바꿈  
끝에 공백 2칸  
줄바꿈을 여러번 하고싶다면 `<br/>`

--- 

## 수평선  
```
* * *
***
- - -
---
```

---

## 제목 (Header)
```
# 제목 1
## 제목 2
### 제목 3
#### 제목 4
##### 제목 5
###### 제목 6
```
# 제목 1
## 제목 2
### 제목 3
#### 제목 4
##### 제목 5
###### 제목 6

---
  
## 코드블럭 ( ``` )
맨 뒤에 . <빼기
```
```cpp
```.
```
```cpp
int a = 0;
```


---  

## 강조
```
**볼드** or __볼드__  
*이텔릭* or _이텔릭_  
~~취소선~~
<u>밑줄</u>
`코드강조`
```
**볼드(두껍게)**  
*이텔릭*  
~~취소선~~  
<u>밑줄</u>  
`코드강조`

---
## 리스트(목록)
```
* 리스트 1
  * 리스트 1-1
    * 리스트 1-1-1

+ 리스트 2
  + 리스트 2-1
    + 리스트 2-1-1

1. 리스트
2. 리스트
3. 리스트
```

* 리스트 1
  * 리스트 1-1
    * 리스트 1-1-1

+ 리스트 2
  + 리스트 2-1
    + 리스트 2-1-1

1. 리스트
2. 리스트
3. 리스트

---

## 표(테이블)  
[Markdown Tables Generator](https://www.tablesgenerator.com/markdown_tables#)  

```
| 0 |   |   |   |   |   |   |   |
|---|---|---|---|---|---|---|---|
```
| 0 |   |   |   |   |   |   |   |
|---|---|---|---|---|---|---|---|
  


---

## 링크삽입  
```
[TIL링크](https://github.com/Yoo-Jeong/TIL)

TIL 링크 : https://github.com/Yoo-Jeong/TIL
TIL 링크 : <https://github.com/Yoo-Jeong/TIL>
```
[TIL링크](https://github.com/Yoo-Jeong/TIL)  

TIL 링크 : https://github.com/Yoo-Jeong/TIL  
TIL 링크 : <https://github.com/Yoo-Jeong/TIL>  

---

### 토글 (접기/펼치기)
```
<details markdown="1">
<summary>접기/펼치기</summary>


</details>
```
<details markdown="1">
<summary>접기/펼치기</summary>

hi👋


</details>

---

## 특수문자
HTML Number끝에 **;** 붙여서 사용

| symbol | HTML Number | HTML Name | Description |
|--------|-------------|-----------|-------------|
| +      | &#43        |           | plus sign   |

---

## 문서 내부 링크 이동 (북마크,목차)
* 알파벳은 소문자만 가능
* 띄어쓰기는 `-`
```
[맨 위로](#마크다운-문법-메모)
```
[맨 위로](#마크다운-문법-메모)  


---
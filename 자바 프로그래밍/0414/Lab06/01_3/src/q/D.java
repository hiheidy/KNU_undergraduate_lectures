/* 2020114658 이윤서 */
/* 본인은 이 소스파일 다른 사람의 소스를 복사하지 않고 직접 작성하였습니다. */

package q;

import p.B;

class D extends B {
	void f() {
		n=3; // protected 와 달리 default 는 상속을 하더라도 참조할 수 없음
		g(); // 메소드도 마찬가 
	}
}

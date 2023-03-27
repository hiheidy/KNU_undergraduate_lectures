// 2020114658 ������

class Friend {
	
	String name;
	int age;
	
	public Friend(String name, int age) {
		this.name = name;
		this.age = age;
	}
	
	public String printFriend() {
		return String.format("%s %d", name,age);
	}
}


public class FriendTest {

	public static void main(String[] args) {
		
		String[] names = {"ȫ�浿", "�̹̿�","�̼���","������"};
		int[] ages= {28,24,26,23};
		
		Friend[] myFriends = new Friend[4];
		for (int i=0;i<names.length;i++) {
			myFriends[i] = new Friend(names[i],ages[i]);
		}
		
		for (Friend friend : myFriends) {
			System.out.println(friend.printFriend());
		}
	}
}

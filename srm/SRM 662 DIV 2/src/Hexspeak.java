import java.util.*;
import java.math.*;
import static java.lang.Math.*;

public class Hexspeak {

	/**
	 * Cipher text
	 * @param ciphertext
	 * @return
	 */
	public String decode(long ciphertext) {
		StringBuffer buf = new StringBuffer();
		String str = Long.toHexString(ciphertext);
		byte[] b = str.getBytes();
		for (char ch: str.toCharArray()) {
			int charNum = Character.getNumericValue(ch);
			if (1 < charNum && charNum < 10) {
				return "Error!";
			} else if (ch == '1') {
				buf.append("I");
			} else if (ch == '0') {
				buf.append("O");
			} else {
				buf.append(ch);
			}
		}
		return buf.toString().toUpperCase();
	}
}

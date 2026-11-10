/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c39e4; name: str
 */


/* std::stringbuf::str() const */

void std::stringbuf::str(void)

{
  long in_x0;
  undefined1 *puVar1;
  ulong *in_x8;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  
  if ((*(uint *)(in_x0 + 0x60) >> 4 & 1) == 0) {
    if ((*(uint *)(in_x0 + 0x60) >> 3 & 1) == 0) {
      in_x8[1] = 0;
      in_x8[2] = 0;
      *in_x8 = 0;
      return;
    }
    puVar3 = *(undefined1 **)(in_x0 + 0x10);
    puVar4 = *(undefined1 **)(in_x0 + 0x20);
    uVar5 = (long)puVar4 - (long)puVar3;
    if (0xffffffffffffffef < uVar5) goto LAB_001c3b14;
    if (uVar5 < 0x17) {
      *(char *)in_x8 = (char)((int)uVar5 << 1);
      puVar1 = (undefined1 *)((long)in_x8 + 1);
    }
    else {
      uVar2 = uVar5 + 0x10 & 0xfffffffffffffff0;
      puVar1 = operator_new(uVar2);
      in_x8[1] = uVar5;
      in_x8[2] = (ulong)puVar1;
      *in_x8 = uVar2 | 1;
    }
    for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
      *puVar1 = *puVar3;
      puVar1 = puVar1 + 1;
    }
  }
  else {
    puVar4 = *(undefined1 **)(in_x0 + 0x30);
    puVar3 = *(undefined1 **)(in_x0 + 0x58);
    if (*(undefined1 **)(in_x0 + 0x58) < puVar4) {
      *(undefined1 **)(in_x0 + 0x58) = puVar4;
      puVar3 = puVar4;
    }
    puVar4 = *(undefined1 **)(in_x0 + 0x28);
    uVar5 = (long)puVar3 - (long)puVar4;
    if (0xffffffffffffffef < uVar5) {
LAB_001c3b14:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar5 < 0x17) {
      puVar1 = (undefined1 *)((long)in_x8 + 1);
      *(char *)in_x8 = (char)((int)uVar5 << 1);
    }
    else {
      uVar2 = uVar5 + 0x10 & 0xfffffffffffffff0;
      puVar1 = operator_new(uVar2);
      in_x8[1] = uVar5;
      in_x8[2] = (ulong)puVar1;
      *in_x8 = uVar2 | 1;
    }
    for (; puVar4 != puVar3; puVar4 = puVar4 + 1) {
      *puVar1 = *puVar4;
      puVar1 = puVar1 + 1;
    }
  }
  *puVar1 = 0;
  return;
}



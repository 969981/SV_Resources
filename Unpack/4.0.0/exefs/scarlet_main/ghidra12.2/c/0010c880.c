/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0010c880; name: FUN_0010c880
 */


undefined4 FUN_0010c880(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if ((((param_1 != 0x6b4b4942) &&
       (3 < (param_1 + 0x99b4b6beU >> 0x18 | (param_1 + 0x99b4b6beU) * 0x100))) &&
      (uVar2 = 1, param_1 != 0x6632424b)) && ((param_1 != 0x6732424b && (param_1 != 0x6832424b)))) {
    uVar1 = param_1 + 0x96cdbdb5U >> 0x18 | (param_1 + 0x96cdbdb5U) * 0x100;
    if (5 < uVar1) {
      return 0;
    }
    uVar2 = *(undefined4 *)(&DAT_03cb4b60 + (long)(int)uVar1 * 4);
  }
  return uVar2;
}



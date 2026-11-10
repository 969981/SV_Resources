/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea194c; name: FUN_01ea194c
 */


bool FUN_01ea194c(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  
  if (((*param_2 != 0) && (*(short *)(*param_2 + 0x1a) != 0)) || ((char)param_2[3] != '\0')) {
    uVar1 = (*(code *)**(undefined8 **)param_2[2])();
    if ((uint)*(byte *)*param_1 == (uVar1 & 0xff)) {
      return (uint)*(ushort *)((byte *)*param_1 + 2) == uVar1 >> 0x10;
    }
  }
  return false;
}



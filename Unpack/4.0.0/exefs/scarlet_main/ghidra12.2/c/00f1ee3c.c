/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f1ee3c; name: FUN_00f1ee3c
 */


ulong FUN_00f1ee3c(long *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_1[6] == 0) {
    uVar2 = (ulong)(uint)(param_2 % 2);
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x840))();
    if ((uVar1 & 0xff) != 10) {
      uVar2 = FUN_00f1eea8(*(undefined8 *)(param_1[8] + 0x290),uVar1);
      return uVar2;
    }
    uVar2 = 5;
  }
  return uVar2;
}



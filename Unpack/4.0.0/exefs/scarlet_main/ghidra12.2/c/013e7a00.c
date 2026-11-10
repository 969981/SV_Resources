/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013e7a00; name: FUN_013e7a00
 */


void FUN_013e7a00(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  *(undefined4 *)(param_1 + 0x120) = 1;
  FUN_01014118();
  if (*(int *)(param_1 + 0x120) == 1) {
    uVar1 = FUN_0101442c(param_1);
    uVar2 = FUN_010147e4(param_1);
    if (((uVar1 & 1) == 0) || ((uVar2 & 1) == 0)) goto LAB_013e7a44;
    *(undefined4 *)(param_1 + 0x120) = 2;
  }
  else if (*(int *)(param_1 + 0x120) != 2) goto LAB_013e7a44;
  FUN_010161a0(param_1);
  *(undefined4 *)(param_1 + 0x120) = 3;
  FUN_013e7a84(param_1);
LAB_013e7a44:
  FUN_013e7a84(param_1);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a64e0c; name: FUN_00a64e0c
 */


void FUN_00a64e0c(ushort *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*param_1 & 0xfffe) != 0x298 && *param_1 != 0x2e8) {
    uVar1 = param_3;
  }
  FUN_00a65d24(param_1,param_2,uVar1);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0277c570; name: FUN_0277c570
 */


void FUN_0277c570(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_0277c65c(param_1 + 0x18,uVar1);
    *(ulong *)(param_1 + 8) = uVar1 + 0x90;
  }
  else {
    FUN_0277c8c0(param_1,param_2,param_3);
  }
  return;
}



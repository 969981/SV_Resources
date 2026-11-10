/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029848a8; name: FUN_029848a8
 */


void FUN_029848a8(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x200))(param_2);
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_01246e90(param_1);
    FUN_02930330(uVar2,param_2);
    return;
  }
  return;
}



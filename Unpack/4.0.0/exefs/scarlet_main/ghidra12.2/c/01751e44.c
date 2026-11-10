/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01751e44; name: FUN_01751e44
 */


void FUN_01751e44(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_0175254c(param_1 + 0x18,uVar1);
    *(ulong *)(param_1 + 8) = uVar1 + 0x10;
    return;
  }
  FUN_01752418(param_1,param_2);
  return;
}



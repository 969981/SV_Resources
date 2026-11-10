/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02982fc4; name: FUN_02982fc4
 */


void FUN_02982fc4(long param_1,undefined4 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_014813f4();
  if ((param_3 & 1) == 0) {
    FUN_0124b0ac(*(undefined8 *)(param_1 + 0x20),param_2,param_4);
    FUN_01246e90(param_1);
    FUN_0293b298();
    return;
  }
  FUN_0197495c(*(undefined8 *)(param_1 + 0x20),uVar1);
  FUN_0124b0ac(*(undefined8 *)(param_1 + 0x20),param_2,param_4);
  FUN_01246e90(param_1);
  FUN_0293b298();
  FUN_018521d8(*(undefined8 *)(param_1 + 0x20),uVar1);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea13ac; name: FUN_01ea13ac
 */


void FUN_01ea13ac(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  FUN_01d0e1a8(param_1 + 0x20,param_2 + 0x18);
  FUN_01d0e1a8(param_1 + 0x40,param_2 + 0x38);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f7b408; name: FUN_01f7b408
 */


void FUN_01f7b408(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_01d0e1a8(param_1 + 0x10,param_2 + 8);
  FUN_01d0e1a8(param_1 + 0x30,param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  return;
}



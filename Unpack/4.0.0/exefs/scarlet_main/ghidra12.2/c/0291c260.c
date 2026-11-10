/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0291c260; name: FUN_0291c260
 */


void FUN_0291c260(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *(undefined8 *)(param_1 + 0x50) = *param_2;
  FUN_010a9ba8(*(undefined8 *)(param_1 + 0x30));
  uVar1 = FUN_012440f0(*(undefined8 *)(param_1 + 0x30),100);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  return;
}



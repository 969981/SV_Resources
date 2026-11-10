/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a9b60; name: FUN_010a9b60
 */


void FUN_010a9b60(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  *(undefined8 *)(param_1 + 0x98) = param_2[2];
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  FUN_010a9ba8(*(undefined8 *)(param_1 + 0x30));
  FUN_010a9bc4(param_1);
  FUN_010a9c90(param_1);
  FUN_010a9c04(param_1);
  return;
}



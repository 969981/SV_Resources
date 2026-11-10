/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02628da0; name: FUN_02628da0
 */


void FUN_02628da0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  FUN_02263160(param_2,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  param_2[6] = 0;
  param_2[3] = uVar1;
  param_2[4] = uVar3;
  param_2[2] = uVar2;
  param_2[5] = 0;
  FUN_00d334b4(param_2 + 5,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[7] = uVar2;
  FUN_00c96b7c(param_2 + 8,param_1 + 0x40);
  param_2[10] = *(undefined8 *)(param_1 + 0x50);
  return;
}



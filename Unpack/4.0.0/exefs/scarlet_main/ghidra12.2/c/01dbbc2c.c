/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dbbc2c; name: FUN_01dbbc2c
 */


void FUN_01dbbc2c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x174);
  uVar2 = *(undefined8 *)(param_2 + 0x17c);
  uVar3 = *(undefined8 *)(param_2 + 0x184);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18c);
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  *param_1 = uVar1;
  return;
}



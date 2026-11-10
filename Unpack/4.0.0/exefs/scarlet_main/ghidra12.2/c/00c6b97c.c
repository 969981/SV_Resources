/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c6b97c; name: FUN_00c6b97c
 */


void FUN_00c6b97c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[7];
  *(undefined8 *)(param_1 + 0x38) = param_2[5];
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x18) = param_2[1];
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x20) = param_2[2];
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = param_2[4];
  *(undefined8 *)(param_1 + 0x40) = param_2[6];
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}



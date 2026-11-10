/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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



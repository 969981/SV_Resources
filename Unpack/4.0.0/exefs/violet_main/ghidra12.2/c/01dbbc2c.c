/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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



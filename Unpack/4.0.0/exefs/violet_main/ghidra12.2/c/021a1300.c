/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021a1300; name: FUN_021a1300
 */


void FUN_021a1300(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  FUN_021a0ee8(param_2,param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 2) = uVar1;
  FUN_00e27c6c(param_2 + 3,param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_2[5] = uVar2;
  return;
}



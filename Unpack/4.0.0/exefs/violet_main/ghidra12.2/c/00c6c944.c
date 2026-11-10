/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c6c944; name: FUN_00c6c944
 */


void FUN_00c6c944(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  FUN_00c43ef0(param_2,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x15);
  param_2[4] = 0;
  *(undefined8 *)((long)param_2 + 0x15) = uVar2;
  param_2[2] = uVar1;
  param_2[5] = 0;
  FUN_00c6c994(param_2 + 4,param_1 + 0x20);
  return;
}



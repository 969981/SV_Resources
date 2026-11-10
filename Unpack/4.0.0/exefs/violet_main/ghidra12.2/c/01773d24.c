/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01773d24; name: FUN_01773d24
 */


void FUN_01773d24(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  uVar1 = FUN_017740c8(*(undefined8 *)(param_2 + 8));
  FUN_01773d84(param_1,uVar1);
  local_28 = 0;
  local_38 = 0x8000;
  uStack_30 = 0x100;
  FUN_00d560a0(*param_1,&local_38,2,0,0);
  return;
}



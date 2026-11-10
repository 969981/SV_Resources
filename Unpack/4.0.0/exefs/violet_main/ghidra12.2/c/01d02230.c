/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d02230; name: FUN_01d02230
 */


void FUN_01d02230(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_2 + 0x10);
  lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,0x60,8);
  *param_1 = lVar2;
  param_1[1] = (long)(param_2 + 0x10);
  FUN_01cfa5b0(lVar2 + 0x20,param_3);
  FUN_01cfa5b0(lVar2 + 0x40,param_3 + 0x20);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



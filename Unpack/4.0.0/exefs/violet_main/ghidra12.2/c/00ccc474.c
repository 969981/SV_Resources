/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ccc474; name: FUN_00ccc474
 */


undefined1  [16] FUN_00ccc474(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  *param_1 = *param_2;
  plVar1 = (long *)FUN_00cccb68(param_1 + 1,param_1);
  lVar3 = *param_2;
  *param_2 = 0;
  lVar2 = *plVar1;
  *plVar1 = lVar3;
  if (lVar2 != 0) {
    FUN_02754328(plVar1 + 1);
  }
  lVar2 = param_2[1];
  lVar3 = param_2[3];
  plVar1[2] = param_2[2];
  plVar1[3] = lVar3;
  plVar1[1] = lVar2;
  auVar4._8_8_ = *param_1;
  auVar4._0_8_ = 1;
  return auVar4;
}



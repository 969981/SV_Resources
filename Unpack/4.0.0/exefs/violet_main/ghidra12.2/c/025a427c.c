/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025a427c; name: FUN_025a427c
 */


undefined1  [16] FUN_025a427c(long *param_1,code *param_2,ulong param_3)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  long lVar4;
  long local_58;
  long local_50;
  long lStack_48;
  
  if (*param_1 == 0) {
    local_58 = 0;
  }
  else {
    FUN_025a4318(&local_50);
    local_58 = local_50;
    if (local_50 != 0) {
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *(long *)(local_50 + ((long)param_3 >> 1)));
      }
      plVar1 = (long *)(*param_2)();
      lVar4 = plVar1[1];
      lVar3 = *plVar1;
      FUN_025a43a4(&local_58);
      local_50 = lVar3;
      lStack_48 = lVar4;
      goto LAB_025a4308;
    }
  }
  FUN_025a43a4(&local_58);
  FUN_01667884(&local_50);
LAB_025a4308:
  auVar2._8_8_ = lStack_48;
  auVar2._0_8_ = local_50;
  return auVar2;
}



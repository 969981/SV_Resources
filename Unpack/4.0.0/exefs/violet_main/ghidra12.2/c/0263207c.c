/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0263207c; name: FUN_0263207c
 */


undefined1  [16] FUN_0263207c(long param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 auVar2 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long *local_28;
  
  auVar2._8_8_ = unaff_x20;
  auVar2._0_8_ = unaff_x19;
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    local_40 = *param_4;
    uStack_38 = param_4[1];
    local_30 = param_4[2];
    local_28 = (long *)param_4[3];
    param_4[3] = 0;
    auVar2 = (*param_2)(plVar1,&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return auVar2;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0227a200; name: FUN_0227a200
 */


undefined8
FUN_0227a200(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = *param_4;
  uStack_28 = param_4[1];
  lVar2 = *param_3;
  local_20 = param_4[2];
  local_18 = (long *)param_4[3];
  param_4[3] = 0;
  local_50 = *param_5;
  uStack_48 = param_5[1];
  local_40 = param_5[2];
  local_38 = (long *)param_5[3];
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x20;
  }
  param_5[3] = 0;
  FUN_022759dc(param_2,lVar1,&local_30,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return 1;
}



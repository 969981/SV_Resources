/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02354d04; name: FUN_02354d04
 */


void FUN_02354d04(long *param_1,code *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 *param_6,undefined8 *param_7,undefined8 param_8,byte param_9)

{
  long *plVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  
  plVar1 = (long *)(*param_1 + ((long)param_3 >> 1));
  if ((param_3 & 1) != 0) {
    param_2 = *(code **)(param_2 + *plVar1);
  }
  local_70 = *param_6;
  uStack_68 = param_6[1];
  local_60 = param_6[2];
  local_58 = (long *)param_6[3];
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  local_90 = *param_7;
  uStack_88 = param_7[1];
  local_80 = param_7[2];
  local_78 = (long *)param_7[3];
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x18))();
  }
  (*param_2)(plVar1,param_4,param_5,&local_70,&local_90,param_8,param_9 & 1);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026391e4; name: FUN_026391e4
 */


undefined1  [16]
FUN_026391e4(long *param_1,code *param_2,ulong param_3,undefined8 *param_4,undefined8 *param_5)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  
  plVar1 = (long *)(*param_1 + ((long)param_3 >> 1));
  if ((param_3 & 1) != 0) {
    param_2 = *(code **)(param_2 + *plVar1);
  }
  local_50 = *param_4;
  uStack_48 = param_4[1];
  local_40 = param_4[2];
  local_38 = (long *)param_4[3];
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  local_70 = *param_5;
  uStack_68 = param_5[1];
  local_60 = param_5[2];
  local_58 = (long *)param_5[3];
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  auVar2 = (*param_2)(plVar1,&local_50,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return auVar2;
}



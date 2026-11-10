/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02355c34; name: FUN_02355c34
 */


void FUN_02355c34(long *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long *local_38;
  
  plVar1 = (long *)(*param_1 + ((long)param_3 >> 1));
  if ((param_3 & 1) != 0) {
    param_2 = *(code **)(param_2 + *plVar1);
  }
  local_68 = *param_4;
  uStack_60 = param_4[1];
  local_58 = param_4[2];
  local_50 = (long *)param_4[3];
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x18))();
  }
  local_48 = param_4[4];
  uStack_40 = param_4[5];
  local_38 = (long *)param_4[6];
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  (*param_2)(plVar1,&local_68);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  return;
}



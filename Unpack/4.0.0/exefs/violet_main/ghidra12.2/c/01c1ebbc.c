/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c1ebbc; name: FUN_01c1ebbc
 */


void FUN_01c1ebbc(void *param_1,undefined8 param_2,code *param_3,ulong param_4,undefined4 *param_5)

{
  long *plVar1;
  long local_38;
  
  FUN_01c1e1e8(&local_38);
  if (local_38 == 0) {
    FUN_01c1dff8(&local_38);
    memset(param_1,0,0x948);
    *(undefined4 *)((long)param_1 + 0x91c) = 0xffffffff;
    *(undefined1 *)((long)param_1 + 0x920) = 0;
    *(undefined8 *)((long)param_1 + 0x928) = 0;
    *(undefined1 *)((long)param_1 + 0x938) = 0;
  }
  else {
    plVar1 = (long *)(local_38 + ((long)param_4 >> 1));
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *plVar1);
    }
    (*param_3)(param_1,plVar1,*param_5);
    FUN_01c1dff8(&local_38);
  }
  return;
}



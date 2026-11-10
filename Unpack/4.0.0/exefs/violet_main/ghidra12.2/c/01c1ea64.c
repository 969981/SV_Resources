/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c1ea64; name: FUN_01c1ea64
 */


void FUN_01c1ea64(void *param_1,long param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4,
                 undefined4 *param_5)

{
  long *plVar1;
  
  if (param_2 == 0) {
    memset(param_1,0,0x948);
    *(undefined4 *)((long)param_1 + 0x91c) = 0xffffffff;
    *(undefined1 *)((long)param_1 + 0x920) = 0;
    *(undefined8 *)((long)param_1 + 0x928) = 0;
    *(undefined1 *)((long)param_1 + 0x938) = 0;
    return;
  }
  plVar1 = (long *)(param_2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x01c1ea9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,plVar1,*param_5);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0256edbc; name: FUN_0256edbc
 */


void FUN_0256edbc(undefined8 *param_1,long *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4,
                 undefined8 param_5,undefined8 *param_6,undefined4 *param_7,undefined4 *param_8,
                 undefined4 *param_9,undefined4 *param_10)

{
  long *plVar1;
  
  if (*param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0x8000000000000000;
    *(undefined4 *)(param_1 + 2) = 0;
    return;
  }
  plVar1 = (long *)(*param_2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0256edf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_6,*param_7,plVar1,param_5,*param_8,*param_9,*param_10);
  return;
}



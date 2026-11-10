/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02328658; name: FUN_02328658
 */


undefined8
FUN_02328658(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4,
            undefined4 *param_5,undefined8 *param_6,undefined4 *param_7)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (((*param_1 != '\x01') && (*param_1 != '\0')) || (*(long *)(param_1 + 8) == 0)) {
    return 0;
  }
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x02328698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(*param_5,plVar1,param_4,*param_6,*param_7);
  return uVar2;
}



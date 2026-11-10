/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01974f1c; name: FUN_01974f1c
 */


undefined8
FUN_01974f1c(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 *param_4,
            undefined8 *param_5,undefined8 *param_6)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (((*param_1 != '\0') && (*param_1 != '\x01')) || (*(long *)(param_1 + 8) == 0)) {
    return 0;
  }
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x01974f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(plVar1,*param_4,*param_5,*param_6);
  return uVar2;
}



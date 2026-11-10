/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f7c3c0; name: FUN_00f7c3c0
 */


void FUN_00f7c3c0(undefined8 *param_1,char *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4,
                 undefined4 *param_5)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  cVar1 = *param_2;
  if (cVar1 == '\x02') {
    if ((*(long *)(param_2 + 8) == 0) ||
       (lVar3 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar3 == 0)) {
LAB_00f7c424:
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    plVar2 = (long *)(lVar3 + ((long)param_4 >> 1) + -0x28);
  }
  else {
    if (cVar1 == '\x03') {
      FUN_00f7cc24(param_2 + 8,UNRECOVERED_JUMPTABLE);
      return;
    }
    if (((cVar1 != '\x01') && (cVar1 != '\0')) || (*(long *)(param_2 + 8) == 0)) goto LAB_00f7c424;
    plVar2 = (long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1));
  }
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00f7c3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar2,*param_5);
  return;
}



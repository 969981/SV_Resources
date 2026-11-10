/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0169aee4; name: FUN_0169aee4
 */


ulong FUN_0169aee4(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long local_18;
  
  cVar2 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar2 == '\x02') {
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar5 == 0)) {
      return 0;
    }
    plVar3 = (long *)(lVar5 + lVar1 + -0x28);
  }
  else {
    if (cVar2 == '\x03') {
      FUN_02307c4c(&local_18,param_1 + 8);
      if (local_18 == 0) {
        uVar4 = 0;
      }
      else {
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_18 + lVar1));
        }
        uVar4 = (*UNRECOVERED_JUMPTABLE)((long *)(local_18 + lVar1),param_4);
        uVar4 = uVar4 & 0xffffffff;
      }
      FUN_01774eac(&local_18);
      return uVar4;
    }
    if ((cVar2 != '\x01') && (cVar2 != '\0')) {
      return 0;
    }
    if (*(long *)(param_1 + 8) == 0) {
      return 0;
    }
    plVar3 = (long *)(*(long *)(param_1 + 8) + lVar1);
  }
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0169af1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*UNRECOVERED_JUMPTABLE)(plVar3,param_4);
  return uVar4;
}



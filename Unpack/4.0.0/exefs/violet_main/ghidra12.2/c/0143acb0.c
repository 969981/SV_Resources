/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0143acb0; name: FUN_0143acb0
 */


ulong FUN_0143acb0(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,char *param_4)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long local_38;
  long local_18;
  
  cVar2 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar2 == '\x02') {
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar6 == 0)) {
      return 0;
    }
    plVar4 = (long *)(lVar6 + lVar1 + -0x28);
  }
  else {
    if (cVar2 == '\x03') {
      if (*(long *)(param_1 + 8) == 0) {
        local_38 = 0;
      }
      else {
        FUN_01ba8128(&local_18);
        local_38 = local_18;
        if (local_18 != 0) {
          if ((param_3 & 1) != 0) {
            UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_18 + lVar1));
          }
          uVar3 = (*UNRECOVERED_JUMPTABLE)((long *)(local_18 + lVar1),*param_4 != '\0');
          FUN_01ba81b4(&local_38);
          return (ulong)(uVar3 & 1);
        }
      }
      FUN_01ba81b4(&local_38);
      return 0;
    }
    if ((cVar2 != '\x01') && (cVar2 != '\0')) {
      return 0;
    }
    if (*(long *)(param_1 + 8) == 0) {
      return 0;
    }
    plVar4 = (long *)(*(long *)(param_1 + 8) + lVar1);
  }
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0143ace8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*UNRECOVERED_JUMPTABLE)(plVar4,*param_4);
  return uVar5;
}



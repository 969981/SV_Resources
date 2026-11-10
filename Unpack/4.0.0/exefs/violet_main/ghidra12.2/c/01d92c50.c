/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d92c50; name: FUN_01d92c50
 */


void FUN_01d92c50(byte *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined4 *param_4,
                 undefined8 param_5,char *param_6,undefined4 *param_7)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_50;
  long local_48;
  
  if (*param_1 < 4) {
    lVar1 = (long)param_3 >> 1;
    switch(*param_1) {
    case 0:
      if (*(long *)(param_1 + 8) != 0) {
        plVar2 = (long *)(*(long *)(param_1 + 8) + lVar1);
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
        }
                    /* WARNING: Could not recover jumptable at 0x01d92ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar2,*param_4,param_5,*param_6,*param_7);
        return;
      }
      break;
    case 1:
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
      plVar2 = (long *)(*(long *)(param_1 + 8) + lVar1);
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x01d92d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar2,*param_4,param_5,*param_6,*param_7);
      return;
    case 2:
      if ((*(long *)(param_1 + 8) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar3 == 0)) {
        return;
      }
      plVar2 = (long *)(lVar3 + lVar1 + -0x28);
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x01d92d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar2,*param_4,param_5,*param_6,*param_7);
      return;
    case 3:
      if (*(long *)(param_1 + 8) == 0) {
        local_50 = 0;
      }
      else {
        FUN_01d92b4c(&local_48);
        local_50 = local_48;
        if (local_48 != 0) {
          if ((param_3 & 1) != 0) {
            UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_48 + lVar1));
          }
          (*UNRECOVERED_JUMPTABLE)
                    ((long *)(local_48 + lVar1),*param_4,param_5,*param_6 != '\0',*param_7);
        }
      }
      FUN_01d92bd8(&local_50);
      return;
    }
  }
  return;
}



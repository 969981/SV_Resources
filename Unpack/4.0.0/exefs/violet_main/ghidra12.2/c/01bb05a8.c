/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bb05a8; name: FUN_01bb05a8
 */


void FUN_01bb05a8(byte *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_40;
  long local_38;
  
  if (*param_1 < 4) {
    lVar1 = (long)param_3 >> 1;
    switch(*param_1) {
    default:
      if (*(long *)(param_1 + 8) != 0) {
        plVar2 = (long *)(*(long *)(param_1 + 8) + lVar1);
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar2);
        }
                    /* WARNING: Could not recover jumptable at 0x01bb05f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(plVar2,param_4,*param_5);
        return;
      }
      break;
    case 2:
      if ((*(long *)(param_1 + 8) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar3 == 0)) {
        return;
      }
      plVar2 = (long *)(lVar3 + lVar1 + -0x28);
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x01bb0640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(plVar2,param_4,*param_5);
      return;
    case 3:
      if (*(long *)(param_1 + 8) == 0) {
        local_40 = 0;
      }
      else {
        FUN_01bb04a4(&local_38);
        local_40 = local_38;
        if (local_38 != 0) {
          if ((param_3 & 1) != 0) {
            UNRECOVERED_JUMPTABLE_00 =
                 *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)(local_38 + lVar1));
          }
          (*UNRECOVERED_JUMPTABLE_00)((long *)(local_38 + lVar1),param_4,*param_5);
        }
      }
      FUN_01bb0530(&local_40);
      return;
    }
  }
  return;
}



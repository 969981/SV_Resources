/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026996fc; name: FUN_026996fc
 */


void FUN_026996fc(byte *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

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
                    /* WARNING: Could not recover jumptable at 0x0269974c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(*param_7,plVar2,*param_4,*param_5,*param_6);
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
                    /* WARNING: Could not recover jumptable at 0x026997a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(*param_7,plVar2,*param_4,*param_5,*param_6);
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
                    /* WARNING: Could not recover jumptable at 0x026997e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(*param_7,plVar2,*param_4,*param_5,*param_6);
      return;
    case 3:
      if (*(long *)(param_1 + 8) == 0) {
        local_50 = 0;
      }
      else {
        FUN_02698f30(&local_48);
        local_50 = local_48;
        if (local_48 != 0) {
          if ((param_3 & 1) != 0) {
            UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_48 + lVar1));
          }
          (*UNRECOVERED_JUMPTABLE)(*param_7,(long *)(local_48 + lVar1),*param_4,*param_5,*param_6);
        }
      }
      FUN_02698fbc(&local_50);
      return;
    }
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017874d0; name: FUN_017874d0
 */


void FUN_017874d0(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long local_48;
  long local_28;
  
  cVar2 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar2 != '\x01') {
    if (cVar2 == '\x03') {
      if (*(long *)(param_1 + 8) == 0) {
        local_48 = 0;
      }
      else {
        FUN_026691c0(&local_28);
        local_48 = local_28;
        if (local_28 != 0) {
          if ((param_3 & 1) != 0) {
            UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_28 + lVar1));
          }
          (*UNRECOVERED_JUMPTABLE)((long *)(local_28 + lVar1),param_4,param_5,param_6);
        }
      }
      FUN_0266924c(&local_48);
      return;
    }
    if (cVar2 == '\x02') {
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
      lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x10);
      if (lVar4 == 0) {
        return;
      }
      plVar3 = (long *)(lVar4 + lVar1 + -0x28);
      goto joined_r0x01787544;
    }
    if (cVar2 != '\0') {
      return;
    }
  }
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  plVar3 = (long *)(*(long *)(param_1 + 8) + lVar1);
joined_r0x01787544:
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x01787504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar3,param_4,param_5,param_6);
  return;
}



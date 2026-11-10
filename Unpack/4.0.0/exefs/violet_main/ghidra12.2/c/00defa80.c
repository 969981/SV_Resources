/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00defa80; name: FUN_00defa80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00defa80(undefined8 *param_1,char *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = _UNK_03cabe58;
  uVar3 = _DAT_03cabe50;
  cVar2 = *param_2;
  lVar1 = (long)param_4 >> 1;
  if (cVar2 == '\x02') {
    if ((*(long *)(param_2 + 8) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar5 != 0)) {
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar5 + lVar1 + -0x28))
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x00defab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    if (cVar2 == '\x03') {
      FUN_00deff90(param_2 + 8);
      return;
    }
    if (cVar2 == '\x01') {
      if (*(long *)(param_2 + 8) != 0) {
        if ((param_4 & 1) != 0) {
          UNRECOVERED_JUMPTABLE =
               *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_2 + 8) + lVar1));
        }
                    /* WARNING: Could not recover jumptable at 0x00defb04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
    else if ((cVar2 == '\0') && (*(long *)(param_2 + 8) != 0)) {
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_2 + 8) + lVar1));
      }
                    /* WARNING: Could not recover jumptable at 0x00defae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01428858; name: FUN_01428858
 */


undefined1  [16] FUN_01428858(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long local_38;
  long local_28;
  
  cVar2 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar2 == '\x02') {
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar3 != 0)) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar3 + lVar1 + -0x28))
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x01428888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar5 = (*UNRECOVERED_JUMPTABLE)();
      return auVar5;
    }
LAB_014288e0:
    return ZEXT816(0);
  }
  if (cVar2 != '\x03') {
    if (cVar2 == '\x01') {
      if (*(long *)(param_1 + 8) != 0) {
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE =
               *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
        }
                    /* WARNING: Could not recover jumptable at 0x014288dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar5 = (*UNRECOVERED_JUMPTABLE)();
        return auVar5;
      }
    }
    else if ((cVar2 == '\0') && (*(long *)(param_1 + 8) != 0)) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
      }
                    /* WARNING: Could not recover jumptable at 0x014288b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar5 = (*UNRECOVERED_JUMPTABLE)();
      return auVar5;
    }
    goto LAB_014288e0;
  }
  if (*(long *)(param_1 + 8) == 0) {
    local_38 = 0;
  }
  else {
    FUN_01bacaf0(&local_28);
    local_38 = local_28;
    if (local_28 != 0) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_28 + lVar1));
      }
      auVar5 = (*UNRECOVERED_JUMPTABLE)();
      uVar6 = auVar5._8_8_;
      uVar4 = auVar5._0_8_;
      FUN_01bacb7c(&local_38);
      goto LAB_01428958;
    }
  }
  FUN_01bacb7c(&local_38);
  uVar4 = 0;
  uVar6 = 0;
LAB_01428958:
  auVar5._8_8_ = uVar6;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



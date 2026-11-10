/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023143c4; name: FUN_023143c4
 */


undefined8 FUN_023143c4(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
    if (*(long *)(param_1 + 8) != 0) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
      }
                    /* WARNING: Could not recover jumptable at 0x02314400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    break;
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
      }
                    /* WARNING: Could not recover jumptable at 0x0231441c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    break;
  case 2:
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar3 != 0)) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar3 + lVar1 + -0x28))
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x02314444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    break;
  case 3:
    uVar2 = FUN_02316a98(param_1 + 8);
    return uVar2;
  }
  return 0;
}



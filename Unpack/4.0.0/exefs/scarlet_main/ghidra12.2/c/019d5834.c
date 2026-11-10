/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019d5834; name: FUN_019d5834
 */


void FUN_019d5834(byte *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  
  if (3 < *param_1) {
    return;
  }
  switch(*param_1) {
  default:
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
    break;
  case 2:
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    if (lVar2 == 0) {
      return;
    }
    plVar1 = (long *)(lVar2 + ((long)param_3 >> 1) + -0x28);
    break;
  case 3:
    FUN_024929f0(param_1 + 8,UNRECOVERED_JUMPTABLE);
    return;
  }
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x019d5890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_4,param_5,param_6,param_7);
  return;
}



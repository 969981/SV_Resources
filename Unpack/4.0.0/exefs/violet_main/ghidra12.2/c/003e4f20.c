/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e4f20; name: FUN_003e4f20
 */


void FUN_003e4f20(undefined8 *param_1,ushort *param_2)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  do {
    if ((*param_2 & 0x306) != 0) goto switchD_003e4f7c_caseD_1;
    pcVar1 = *(char **)(param_2 + 0x10);
    if (*pcVar1 != '\0') {
      switch(*pcVar1) {
      case '\x01':
      case '\x02':
      case '\x06':
        break;
      default:
        goto switchD_003e4f7c_caseD_3;
      case '\x04':
        if ((*(long *)(pcVar1 + 0x20) != 0) &&
           (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(pcVar1 + 0x20) + 0x18),
           UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x003e4f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        break;
      case '\x05':
        if (((pcVar1 != (char *)0x0) && (*(long *)(pcVar1 + 0x20) != 0)) &&
           (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(pcVar1 + 0x20) + 0x20),
           UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x003e4fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
      }
      goto switchD_003e4f7c_caseD_1;
    }
    param_2 = *(ushort **)(pcVar1 + 0x10);
  } while (param_2 != (ushort *)0x0);
  if (*(long *)(pcVar1 + 0x20) == 0) {
    if (*(int *)(pcVar1 + 8) == 1) {
      *(int *)param_1 = (int)*(undefined8 *)(pcVar1 + 0x28);
      return;
    }
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(pcVar1 + 0x20) + 0x20);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003e4f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
switchD_003e4f7c_caseD_1:
  *param_1 = 0;
switchD_003e4f7c_caseD_3:
  return;
}



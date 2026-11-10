/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00133040; name: FUN_00133040
 */


undefined8 FUN_00133040(long param_1,undefined4 *param_2,long *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  
  if (param_2[4] != param_2[5]) {
    return 0;
  }
  uVar1 = 0;
  switch(*param_2) {
  case 1:
    *(undefined1 *)(param_3 + 1) = 0;
    break;
  case 2:
    bVar2 = 0x11;
    goto LAB_00133100;
  case 3:
    *(undefined1 *)(param_3 + 1) = 1;
    return 1;
  default:
    goto switchD_00133078_caseD_4;
  case 5:
    if (param_3 != (long *)0x0) {
      *param_3 = *(long *)(param_2 + 2);
      bVar2 = 0x13;
      goto LAB_00133100;
    }
    break;
  case 6:
    if (param_3 != (long *)0x0) {
      *param_3 = *(long *)(param_2 + 2);
      bVar2 = 3;
      goto LAB_00133100;
    }
    break;
  case 7:
    lVar3 = *(long *)(param_2 + 2);
    *param_3 = lVar3;
    bVar2 = *(byte *)(lVar3 + 8) | 0x40;
    goto LAB_00133100;
  case 0xb:
    plVar4 = (long *)(**(long **)(*(long *)(param_1 + 0x10) + 0x58) + (long)(int)param_2[2] * 0x18);
    *param_3 = *plVar4;
    bVar2 = *(byte *)(plVar4 + 1);
LAB_00133100:
    *(byte *)(param_3 + 1) = bVar2;
  }
  uVar1 = 1;
switchD_00133078_caseD_4:
  return uVar1;
}



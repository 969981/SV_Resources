/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a60688; name: FUN_01a60688
 */


void FUN_01a60688(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  int local_30 [4];
  
  lVar4 = *(long *)PTR_DAT_047d0a08;
  if (lVar4 == 0) {
switchD_01a606cc_caseD_2:
    lVar4 = *(long *)(*param_2 + 0x40);
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x48) == 0)) {
      if (*(char *)(lVar4 + 0xd0) == '\0') {
        *(undefined8 *)(lVar4 + 0xd8) = 0;
        *(undefined1 *)(lVar4 + 0xd0) = 1;
      }
      else {
        *(undefined8 *)(lVar4 + 0xd8) = 0;
      }
      FUN_0135d328(local_30,*(undefined8 *)(lVar4 + 0xe0),0);
      plVar2 = *(long **)(lVar4 + 0xe8);
      *(undefined8 *)(lVar4 + 0xe8) = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      FUN_0135d2ec(local_30);
      *(undefined4 *)(lVar4 + 0x48) = 1;
      FUN_0174a3b8(lVar4);
    }
  }
  else {
    switch(*(undefined4 *)(param_1 + 0x50)) {
    case 0:
      uVar1 = FUN_01581910(lVar4);
      if ((uVar1 & 1) != 0) {
        return;
      }
      if (*(char *)(lVar4 + 0x470) == '\0') {
        uVar3 = 2;
      }
      else {
        FUN_01a607bc(local_30,lVar4);
        uVar3 = 3;
        if (local_30[0] == 0) {
          uVar3 = 1;
        }
      }
      break;
    case 1:
      uVar1 = FUN_01581910(lVar4);
      if ((uVar1 & 1) != 0) {
        return;
      }
      FUN_0193d150(local_30,lVar4);
      uVar3 = 2;
      if (local_30[0] != 0) {
        uVar3 = 3;
      }
      break;
    case 2:
    case 3:
      goto switchD_01a606cc_caseD_2;
    default:
      goto switchD_01a606cc_default;
    }
    *(undefined4 *)(param_1 + 0x50) = uVar3;
  }
switchD_01a606cc_default:
  return;
}



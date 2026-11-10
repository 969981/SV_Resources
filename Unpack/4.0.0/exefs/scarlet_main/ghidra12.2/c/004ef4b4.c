/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004ef4b4; name: FUN_004ef4b4
 */


long FUN_004ef4b4(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  
  iVar3 = *(int *)(PTR_DAT_047cd750 + (ulong)*(byte *)(param_1 + 1) * 4);
  if (*(char *)((long)param_1 + 9) == '\0') {
    if (iVar3 == 10) {
      if ((*(byte *)((long)param_1 + 10) >> 4 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x004ef584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar1 = (**(code **)(*(long *)*param_1 + 0x88))();
        return lVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x004ef59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (**(code **)(*(long *)*param_1 + 0x60))();
      return lVar1;
    }
    if (iVar3 == 9) {
      lVar1 = FUN_0052b0a0(*param_1);
      return lVar1 + 0x18;
    }
switchD_004ef4f4_default:
    return 0;
  }
  switch(iVar3) {
  case 1:
  case 3:
  case 6:
  case 8:
    iVar3 = *(int *)(*param_1 + 4);
    lVar1 = (long)iVar3 << 2;
    break;
  case 2:
  case 4:
  case 5:
    iVar3 = *(int *)(*param_1 + 4);
    lVar1 = (long)iVar3 << 3;
    break;
  case 7:
    iVar3 = *(int *)(*param_1 + 4);
    lVar1 = (long)iVar3;
    break;
  case 9:
    lVar5 = *param_1;
    lVar1 = (long)*(int *)(lVar5 + 0xc) << 3;
    piVar4 = *(int **)(lVar5 + 0x10);
    if (piVar4 != (int *)0x0) {
      if (0 < *piVar4) {
        lVar6 = 0;
        do {
          lVar2 = FUN_0052b0a0(*(undefined8 *)(piVar4 + lVar6 * 2 + 2));
          lVar1 = lVar1 + lVar2 + 0x18;
          piVar4 = *(int **)(lVar5 + 0x10);
          lVar6 = lVar6 + 1;
        } while (lVar6 < *piVar4);
      }
      lVar1 = lVar1 + 8;
    }
    return lVar1 + 0x18;
  case 10:
    lVar5 = *param_1;
    lVar1 = (long)*(int *)(lVar5 + 0xc) << 3;
    piVar4 = *(int **)(lVar5 + 0x10);
    if (piVar4 != (int *)0x0) {
      if (0 < *piVar4) {
        lVar6 = 0;
        do {
          lVar2 = (**(code **)(**(long **)(piVar4 + lVar6 * 2 + 2) + 0x88))();
          piVar4 = *(int **)(lVar5 + 0x10);
          lVar6 = lVar6 + 1;
          lVar1 = lVar2 + lVar1;
        } while (lVar6 < *piVar4);
      }
      lVar1 = lVar1 + 8;
    }
    return lVar1 + 0x18;
  default:
    goto switchD_004ef4f4_default;
  }
  lVar1 = lVar1 + 0x18;
  if (iVar3 < 1) {
    lVar1 = 0x10;
  }
  return lVar1;
}



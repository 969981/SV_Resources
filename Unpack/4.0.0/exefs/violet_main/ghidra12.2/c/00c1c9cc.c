/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c1c9cc; name: FUN_00c1c9cc
 */


ulong FUN_00c1c9cc(long *param_1)

{
  int iVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  
  iVar3 = *(int *)(PTR_DAT_047dad58 + (ulong)*(byte *)(param_1 + 1) * 4);
  if (*(char *)((long)param_1 + 9) == '\0') {
    if (iVar3 == 10) {
      if ((*(byte *)((long)param_1 + 10) >> 4 & 1) == 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)*param_1 + 0xa0);
      }
      else {
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)*param_1 + 0x58);
      }
                    /* WARNING: Could not recover jumptable at 0x00c1cacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    if (iVar3 == 9) {
      puVar4 = (uint *)*param_1;
      if (((*puVar4 & 1) == 0) ||
         ((puVar4 <= *(uint **)(puVar4 + 4) && (*(uint **)(puVar4 + 4) < puVar4 + 6)))) {
        return 0x18;
      }
      return (ulong)((*puVar4 & 0xfffffffe) + 0x17);
    }
switchD_00c1ca14_default:
    uVar2 = 0;
  }
  else {
    switch(iVar3) {
    case 1:
    case 3:
    case 6:
    case 8:
      if (*(long *)(*param_1 + 8) == 0) {
        return 0x10;
      }
      iVar3 = *(int *)(*param_1 + 4) << 2;
      break;
    case 2:
    case 4:
    case 5:
      if (*(long *)(*param_1 + 8) == 0) {
        return 0x10;
      }
      iVar3 = *(int *)(*param_1 + 4) << 3;
      break;
    case 7:
      if (*(long *)(*param_1 + 8) == 0) {
        return 0x10;
      }
      iVar3 = *(int *)(*param_1 + 4);
      break;
    case 9:
      puVar4 = *(uint **)(*param_1 + 0x10);
      iVar3 = *(int *)(*param_1 + 0xc) << 3;
      if (puVar4 != (uint *)0x0) {
        uVar2 = (ulong)*puVar4;
        if (0 < (int)*puVar4) {
          do {
            puVar4 = puVar4 + 2;
            puVar6 = *(uint **)puVar4;
            if (((*puVar6 & 1) == 0) ||
               (puVar6 <= *(uint **)(puVar6 + 4) && *(uint **)(puVar6 + 4) < puVar6 + 6)) {
              iVar1 = 0;
            }
            else {
              iVar1 = (*puVar6 & 0xfffffffe) - 1;
            }
            iVar3 = iVar3 + iVar1 + 0x18;
            uVar2 = uVar2 - 1;
          } while (uVar2 != 0);
        }
        iVar3 = iVar3 + 8;
      }
      break;
    case 10:
      lVar7 = *param_1;
      iVar3 = *(int *)(lVar7 + 0xc) << 3;
      piVar5 = *(int **)(lVar7 + 0x10);
      if (piVar5 != (int *)0x0) {
        if (0 < *piVar5) {
          lVar8 = 0;
          do {
            iVar1 = (**(code **)(**(long **)(piVar5 + lVar8 * 2 + 2) + 0xa0))();
            piVar5 = *(int **)(lVar7 + 0x10);
            lVar8 = lVar8 + 1;
            iVar3 = iVar1 + iVar3;
          } while (lVar8 < *piVar5);
        }
        iVar3 = iVar3 + 8;
      }
      return (ulong)(iVar3 + 0x18);
    default:
      goto switchD_00c1ca14_default;
    }
    uVar2 = (ulong)(iVar3 + 0x18);
  }
  return uVar2;
}



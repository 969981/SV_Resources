/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f560c0; name: FUN_02f560c0
 */


void FUN_02f560c0(long param_1,int *param_2,long *param_3,long *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  
  iVar4 = (int)param_3[1];
  iVar9 = *(int *)(param_1 + 0x20);
  if (1 < iVar4) {
    uVar7 = (iVar9 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar9 * -0x61c8864f & 0xff00ffU) << 8;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
    while( true ) {
      uVar7 = iVar4 - 1U & uVar7;
      iVar3 = *(int *)(*param_3 + (long)(int)uVar7 * 4);
      if (iVar3 == -1) break;
      if (iVar3 == iVar9) {
        if ((int)uVar7 < iVar4) goto LAB_02f5622c;
        break;
      }
      uVar7 = uVar7 + 1;
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 8);
  iVar4 = (int)param_4[1];
  lVar5 = (long)iVar4;
  if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar4) {
    FUN_02f5e990(param_4,lVar5 + 1);
    iVar4 = (int)param_4[1];
  }
  puVar6 = (undefined8 *)(*param_4 + (long)iVar4 * 0xc);
  *puVar6 = CONCAT44(uVar1,iVar9);
  *(undefined4 *)(puVar6 + 1) = uVar2;
  *(int *)(param_4 + 1) = (int)(lVar5 + 1);
  iVar4 = (int)param_3[1];
  iVar9 = *(int *)(param_1 + 0x20);
  if (iVar4 <= (int)param_3[2] * 2) {
    FUN_02f5eb18(param_3,iVar4 << 1);
    iVar4 = (int)param_3[1];
  }
  uVar7 = (iVar9 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar9 * -0x61c8864f & 0xff00ffU) << 8;
  uVar7 = iVar4 - 1U & (uVar7 >> 0x10 | uVar7 << 0x10);
  lVar5 = *param_3;
  piVar8 = (int *)(lVar5 + (long)(int)uVar7 * 4);
  if (*piVar8 == -1) {
    iVar4 = 1;
  }
  else if (*piVar8 == iVar9) {
    iVar4 = 0;
  }
  else {
    do {
      uVar7 = uVar7 + 1 & iVar4 - 1U;
      iVar3 = *(int *)(lVar5 + (long)(int)uVar7 * 4);
      if (iVar3 == -1) {
        iVar4 = 1;
        goto LAB_02f56210;
      }
    } while (iVar3 != iVar9);
    iVar4 = 0;
LAB_02f56210:
    piVar8 = (int *)(lVar5 + (long)(int)uVar7 * 4);
  }
  *(int *)(param_3 + 2) = (int)param_3[2] + iVar4;
  *piVar8 = iVar9;
  iVar9 = *(int *)(param_1 + 0x20);
LAB_02f5622c:
  *param_2 = iVar9;
  param_2[1] = *(int *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x18);
  lVar5 = (long)iVar4;
  if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) <= iVar4) {
    FUN_02f5ed94(param_1 + 0x10,PTR_PTR_047d1a50,lVar5 + 1);
    iVar4 = *(int *)(param_1 + 0x18);
  }
  *(int **)(*(long *)(param_1 + 0x10) + (long)iVar4 * 8) = param_2;
  *(int *)(param_1 + 0x18) = (int)(lVar5 + 1);
  return;
}



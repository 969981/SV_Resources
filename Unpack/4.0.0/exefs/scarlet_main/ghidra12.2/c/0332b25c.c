/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0332b25c; name: FUN_0332b25c
 */


ulong FUN_0332b25c(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  uint local_38;
  
  uVar6 = *(uint *)(param_1 + 0x2b4);
  iVar11 = *(int *)(param_1 + 0x220);
  if ((int)uVar6 < *(int *)(param_1 + 0x2b0) * 2) {
    FUN_02ef5fd4((long *)(param_1 + 0x2a8),PTR_PTR_047d1a50,uVar6 * 2 + 2);
    uVar6 = *(uint *)(param_1 + 0x2b4);
  }
  uVar1 = (int)param_2 * -0x61c8864f;
  uVar2 = (int)((ulong)param_2 >> 0x20) * -0x61c8864f;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  lVar9 = *(long *)(param_1 + 0x2a8);
  uVar3 = (ulong)(uVar6 & (uVar1 + (uVar1 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2));
  plVar10 = (long *)(lVar9 + uVar3 * 0x10);
  if (*plVar10 == -1) {
LAB_0332b328:
    *plVar10 = param_2;
    *(long *)(*(long *)(param_1 + 0x2a8) + uVar3 * 0x10 + 8) = (long)iVar11;
    lVar9 = *(long *)(param_1 + 0x2a8);
    *(int *)(param_1 + 0x2b0) = *(int *)(param_1 + 0x2b0) + 1;
  }
  else if (*plVar10 != param_2) {
    do {
      uVar3 = (ulong)((int)uVar3 + 1U & uVar6);
      plVar10 = (long *)(lVar9 + uVar3 * 0x10);
      if (*plVar10 == -1) goto LAB_0332b328;
    } while (*plVar10 != param_2);
  }
  uVar3 = *(ulong *)(lVar9 + ((long)(uVar3 << 0x20) >> 0x1c) + 8);
  iVar11 = (int)uVar3;
  if (*(int *)(param_1 + 0x220) != iVar11) goto LAB_0332b484;
  local_38 = local_38 & 0xffffff00;
  iVar8 = iVar11 + 1;
  iVar7 = iVar11;
  if (iVar11 < (int)(*(uint *)(param_1 + 0x224) & 0x7fffffff)) {
LAB_0332b3b0:
    *(int *)(param_1 + 0x220) = iVar8;
    if (iVar7 <= iVar11) {
      puVar4 = (undefined8 *)(*(long *)(param_1 + 0x218) + (long)iVar7 * 0x18);
      uVar6 = (iVar11 - iVar7) + 1;
      if (iVar7 != iVar11) {
        iVar8 = -(uVar6 & 0xfffffffe);
        puVar5 = puVar4;
        do {
          iVar8 = iVar8 + 2;
          *puVar5 = 0;
          puVar5[1] = 0;
          *(uint *)(puVar5 + 2) = local_38;
          *(undefined4 *)((long)puVar5 + 0x14) = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar4 = puVar5 + 6;
          *(uint *)(puVar5 + 5) = local_38;
          *(undefined4 *)((long)puVar5 + 0x2c) = 0;
          puVar5 = puVar4;
        } while (iVar8 != 0);
      }
      if ((uVar6 & 1) != 0) {
        *puVar4 = 0;
        puVar4[1] = 0;
        *(uint *)(puVar4 + 2) = local_38;
        *(undefined4 *)((long)puVar4 + 0x14) = 0;
      }
    }
  }
  else {
    FUN_033277d4(param_1 + 0x218,PTR_PTR_047d1a50,(long)iVar8);
    iVar7 = *(int *)(param_1 + 0x220);
    if (iVar7 <= iVar11) goto LAB_0332b3b0;
    if (iVar8 < iVar7) {
      *(int *)(param_1 + 0x220) = iVar8;
    }
  }
  lVar9 = (long)iVar11 * 2 + (long)iVar11;
  *(undefined8 *)(*(long *)(param_1 + 0x218) + lVar9 * 8) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x218) + lVar9 * 8 + 8) = 0;
  iVar11 = *(int *)(param_1 + 0x288);
  lVar9 = (long)iVar11;
  if ((int)(*(uint *)(param_1 + 0x28c) & 0x7fffffff) <= iVar11) {
    FUN_0133bb88(param_1 + 0x280,PTR_PTR_047d1a50,lVar9 + 1);
    iVar11 = *(int *)(param_1 + 0x288);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x280) + (long)iVar11 * 4) = 0;
  *(int *)(param_1 + 0x288) = (int)(lVar9 + 1);
LAB_0332b484:
  return uVar3 & 0xffffffff;
}



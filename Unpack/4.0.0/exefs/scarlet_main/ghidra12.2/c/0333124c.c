/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0333124c; name: FUN_0333124c
 */


void FUN_0333124c(long param_1,int param_2)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong *puVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  uint local_58;
  
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x218) + (long)param_2 * 0x18);
  uVar3 = *puVar9;
  puVar4 = (ulong *)puVar9[1];
  lVar16 = (long)param_2;
  if (puVar4 != (ulong *)0x0) {
    puVar10 = puVar4;
    do {
      uVar12 = *puVar10;
      if (((uint)uVar12 >> 2 & 1) != 0) {
        uVar12 = puVar10[(uVar12 >> 1 & 1) + (uVar12 & 1) + 2];
        if ((uVar12 & 1) != 0) {
          piVar1 = (int *)((uVar12 & 0xfffffffffffffffe) + 8);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = *piVar1 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        goto LAB_033312d4;
      }
      puVar10 = (ulong *)puVar10[1];
    } while (puVar10 != (ulong *)0x0);
  }
  uVar12 = 0;
LAB_033312d4:
  uVar8 = *(uint *)(param_1 + 0x388);
  lVar11 = (long)(int)uVar8;
  uVar5 = ~uVar8;
  if ((int)(*(uint *)(param_1 + 0x38c) & 0x7fffffff) <= (int)uVar8) {
    FUN_031bc0f4(param_1 + 0x380,PTR_PTR_047d1a50,lVar11 + 1);
    uVar8 = *(uint *)(param_1 + 0x388);
  }
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x380) + (long)(int)uVar8 * 0x18);
  *puVar9 = uVar3;
  puVar9[1] = puVar4;
  puVar9[2] = uVar12;
  *(int *)(param_1 + 0x388) = (int)(lVar11 + 1);
  plVar2 = (long *)(param_1 + 0x218);
  *(uint *)(*(long *)(param_1 + 0x280) + lVar16 * 4) = uVar5;
  local_58 = local_58 & 0xffffff00;
  iVar14 = *(int *)(param_1 + 0x220);
  iVar15 = iVar14;
  if (iVar14 <= param_2) {
    iVar15 = param_2 + 1;
  }
  if ((int)(*(uint *)(param_1 + 0x224) & 0x7fffffff) < iVar15) {
    FUN_033277d4(plVar2,PTR_PTR_047d1a50,(long)iVar15);
    iVar14 = *(int *)(param_1 + 0x220);
  }
  uVar8 = iVar15 - iVar14;
  if (uVar8 == 0 || iVar15 < iVar14) {
    if (iVar15 < iVar14) {
      *(int *)(param_1 + 0x220) = iVar15;
    }
  }
  else {
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x218) + (long)iVar14 * 0x18);
    *(int *)(param_1 + 0x220) = iVar15;
    if (iVar15 != iVar14 + 1) {
      iVar15 = -(uVar8 & 0xfffffffe);
      puVar13 = puVar9;
      do {
        iVar15 = iVar15 + 2;
        *puVar13 = 0;
        puVar13[1] = 0;
        *(uint *)(puVar13 + 2) = local_58;
        *(undefined4 *)((long)puVar13 + 0x14) = 0;
        puVar13[3] = 0;
        puVar13[4] = 0;
        puVar9 = puVar13 + 6;
        *(uint *)(puVar13 + 5) = local_58;
        *(undefined4 *)((long)puVar13 + 0x2c) = 0;
        puVar13 = puVar9;
      } while (iVar15 != 0);
    }
    if ((uVar8 & 1) != 0) {
      *puVar9 = 0;
      puVar9[1] = 0;
      *(uint *)(puVar9 + 2) = local_58;
      *(undefined4 *)((long)puVar9 + 0x14) = 0;
    }
  }
  *(undefined8 *)(*plVar2 + lVar16 * 0x18) = 0;
  *(undefined8 *)(*plVar2 + lVar16 * 0x18 + 8) = 0;
  return;
}



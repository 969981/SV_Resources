/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03195090; name: FUN_03195090
 */


void FUN_03195090(long *param_1,long param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  void *__dest;
  void *__src;
  long *plVar3;
  char *pcVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  size_t sVar9;
  void *pvVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  ulong *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long *plVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  undefined2 *puVar20;
  void *__src_00;
  undefined4 *puVar21;
  long *plVar22;
  ulong uVar23;
  ulong *puVar24;
  
  puVar8 = PTR_DAT_047e5800;
  param_1[2] = 1;
  param_1[3] = 0;
  *param_1 = (long)(puVar8 + 0x10);
  param_1[1] = 0xffffffff;
  puVar8 = PTR_PTR_047d1a50;
  pcVar4 = (char *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffe);
  if (pcVar4 != (char *)0x0) {
    sVar9 = strlen(pcVar4);
    sVar9 = (size_t)((int)sVar9 + 1);
    pvVar10 = (void *)(**(code **)(*(long *)puVar8 + 0x18))(puVar8,sVar9);
    memcpy(pvVar10,pcVar4,sVar9);
    param_1[3] = (ulong)pvVar10 | 1;
  }
  param_1[4] = 0;
  param_1[5] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x28);
  if ((int)uVar5 < 1) {
    param_1[4] = 0;
    param_1[5] = -0x8000000000000000;
  }
  else {
    puVar20 = *(undefined2 **)(param_2 + 0x20);
    puVar11 = (undefined2 *)(**(code **)(*(long *)puVar8 + 0x18))(puVar8,(ulong)uVar5 << 1);
    uVar17 = uVar5 & 3;
    param_1[4] = (long)puVar11;
    *(uint *)(param_1 + 5) = uVar5;
    *(uint *)((long)param_1 + 0x2c) = uVar5;
    if (2 < uVar5 - 1) {
      iVar18 = -(uVar5 & 0xfffffffc);
      puVar12 = puVar11;
      do {
        *puVar12 = *puVar20;
        puVar12[1] = puVar20[1];
        puVar12[2] = puVar20[2];
        puVar1 = puVar20 + 3;
        puVar11 = puVar12 + 4;
        puVar20 = puVar20 + 4;
        iVar18 = iVar18 + 4;
        puVar12[3] = *puVar1;
        puVar12 = puVar11;
      } while (iVar18 != 0);
    }
    for (; uVar17 != 0; uVar17 = uVar17 - 1) {
      *puVar11 = *puVar20;
      puVar11 = puVar11 + 1;
      puVar20 = puVar20 + 1;
    }
  }
  param_1[6] = 0;
  param_1[7] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x38);
  uVar23 = (ulong)uVar5;
  if ((int)uVar5 < 1) {
    param_1[6] = 0;
    param_1[7] = -0x8000000000000000;
  }
  else {
    puVar24 = *(ulong **)(param_2 + 0x30);
    puVar13 = (ulong *)(**(code **)(*(long *)puVar8 + 0x18))(puVar8,uVar23 << 4);
    param_1[6] = (long)puVar13;
    *(uint *)(param_1 + 7) = uVar5;
    *(uint *)((long)param_1 + 0x3c) = uVar5;
    do {
      *puVar13 = 0;
      if (puVar13 != puVar24) {
        pcVar4 = (char *)(*puVar24 & 0xfffffffffffffffe);
        if (pcVar4 != (char *)0x0) {
          sVar9 = strlen(pcVar4);
          sVar9 = (size_t)((int)sVar9 + 1);
          pvVar10 = (void *)(**(code **)(*(long *)puVar8 + 0x18))(puVar8,sVar9);
          memcpy(pvVar10,pcVar4,sVar9);
          *puVar13 = (ulong)pvVar10 | 1;
        }
        *(char *)(puVar13 + 1) = (char)puVar24[1];
      }
      uVar5 = (int)uVar23 - 1;
      uVar23 = (ulong)uVar5;
      puVar24 = puVar24 + 2;
      puVar13 = puVar13 + 2;
    } while (uVar5 != 0);
  }
  param_1[8] = 0;
  param_1[9] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x48);
  if ((int)uVar5 < 1) {
    param_1[8] = 0;
    param_1[9] = -0x8000000000000000;
  }
  else {
    __src_00 = *(void **)(param_2 + 0x40);
    pvVar10 = (void *)(**(code **)(*(long *)puVar8 + 0x18))(puVar8,(ulong)uVar5 * 0x30);
    param_1[8] = (long)pvVar10;
    *(uint *)(param_1 + 9) = uVar5;
    *(uint *)((long)param_1 + 0x4c) = uVar5;
    if (uVar5 != 1) {
      iVar18 = -(uVar5 & 0xfffffffe);
      do {
        memcpy(pvVar10,__src_00,0x30);
        __dest = (void *)((long)pvVar10 + 0x30);
        __src = (void *)((long)__src_00 + 0x30);
        pvVar10 = (void *)((long)pvVar10 + 0x60);
        __src_00 = (void *)((long)__src_00 + 0x60);
        memcpy(__dest,__src,0x30);
        iVar18 = iVar18 + 2;
      } while (iVar18 != 0);
    }
    if ((uVar5 & 1) != 0) {
      memcpy(pvVar10,__src_00,0x30);
    }
  }
  param_1[10] = 0;
  param_1[0xb] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x58);
  if ((int)uVar5 < 1) {
    param_1[10] = 0;
    param_1[0xb] = -0x8000000000000000;
  }
  else {
    puVar21 = *(undefined4 **)(param_2 + 0x50);
    puVar14 = (undefined4 *)(**(code **)(*(long *)puVar8 + 0x18))(puVar8,(ulong)uVar5 << 2);
    uVar17 = uVar5 & 3;
    param_1[10] = (long)puVar14;
    *(uint *)(param_1 + 0xb) = uVar5;
    *(uint *)((long)param_1 + 0x5c) = uVar5;
    if (2 < uVar5 - 1) {
      iVar18 = -(uVar5 & 0xfffffffc);
      puVar15 = puVar14;
      do {
        *puVar15 = *puVar21;
        puVar15[1] = puVar21[1];
        puVar15[2] = puVar21[2];
        puVar2 = puVar21 + 3;
        puVar14 = puVar15 + 4;
        puVar21 = puVar21 + 4;
        iVar18 = iVar18 + 4;
        puVar15[3] = *puVar2;
        puVar15 = puVar14;
      } while (iVar18 != 0);
    }
    for (; uVar17 != 0; uVar17 = uVar17 - 1) {
      *puVar14 = *puVar21;
      puVar14 = puVar14 + 1;
      puVar21 = puVar21 + 1;
    }
  }
  param_1[0xc] = 0;
  param_1[0xd] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x68);
  uVar23 = (ulong)uVar5;
  if ((int)uVar5 < 1) {
    param_1[0xc] = 0;
    param_1[0xd] = -0x8000000000000000;
  }
  else {
    puVar24 = *(ulong **)(param_2 + 0x60);
    puVar13 = (ulong *)(**(code **)(*(long *)puVar8 + 0x18))(puVar8,uVar23 << 3);
    param_1[0xc] = (long)puVar13;
    *(uint *)(param_1 + 0xd) = uVar5;
    *(uint *)((long)param_1 + 0x6c) = uVar5;
    do {
      *puVar13 = 0;
      pcVar4 = (char *)(*puVar24 & 0xfffffffffffffffe);
      if (pcVar4 != (char *)0x0) {
        sVar9 = strlen(pcVar4);
        sVar9 = (size_t)((int)sVar9 + 1);
        pvVar10 = (void *)(**(code **)(*(long *)puVar8 + 0x18))(puVar8,sVar9);
        memcpy(pvVar10,pcVar4,sVar9);
        *puVar13 = (ulong)pvVar10 | 1;
      }
      uVar5 = (int)uVar23 - 1;
      uVar23 = (ulong)uVar5;
      puVar24 = puVar24 + 1;
      puVar13 = puVar13 + 1;
    } while (uVar5 != 0);
  }
  param_1[0xe] = 0;
  param_1[0xf] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x78);
  if ((int)uVar5 < 1) {
    param_1[0xe] = 0;
    param_1[0xf] = -0x8000000000000000;
  }
  else {
    plVar22 = *(long **)(param_2 + 0x70);
    plVar16 = (long *)(**(code **)(*(long *)puVar8 + 0x18))(puVar8,(ulong)uVar5 << 4);
    uVar17 = 0;
    param_1[0xe] = (long)plVar16;
    *(uint *)(param_1 + 0xf) = uVar5;
    *(uint *)((long)param_1 + 0x7c) = uVar5;
    do {
      lVar19 = *plVar22;
      *plVar16 = lVar19;
      if ((lVar19 != 0) && (*(long *)(lVar19 + 8) != 0)) {
        plVar3 = (long *)(lVar19 + 0x10);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *plVar3 = *plVar3 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      uVar17 = uVar17 + 1;
      *(short *)(plVar16 + 1) = (short)plVar22[1];
      plVar16 = plVar16 + 2;
      plVar22 = plVar22 + 2;
    } while (uVar17 != uVar5);
  }
  param_1[0x10] = 0;
  param_1[0x11] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x88);
  uVar23 = (ulong)uVar5;
  if ((int)uVar5 < 1) {
    param_1[0x10] = 0;
    param_1[0x11] = -0x8000000000000000;
  }
  else {
    puVar24 = *(ulong **)(param_2 + 0x80);
    puVar13 = (ulong *)(**(code **)(*(long *)puVar8 + 0x18))(puVar8,uVar23 << 4);
    param_1[0x10] = (long)puVar13;
    *(uint *)(param_1 + 0x11) = uVar5;
    *(uint *)((long)param_1 + 0x8c) = uVar5;
    do {
      *puVar13 = 0;
      pcVar4 = (char *)(*puVar24 & 0xfffffffffffffffe);
      if (pcVar4 != (char *)0x0) {
        sVar9 = strlen(pcVar4);
        sVar9 = (size_t)((int)sVar9 + 1);
        pvVar10 = (void *)(**(code **)(*(long *)puVar8 + 0x18))(puVar8,sVar9);
        memcpy(pvVar10,pcVar4,sVar9);
        *puVar13 = (ulong)pvVar10 | 1;
      }
      *(short *)(puVar13 + 1) = (short)puVar24[1];
      puVar11 = (undefined2 *)((long)puVar24 + 10);
      uVar5 = (int)uVar23 - 1;
      uVar23 = (ulong)uVar5;
      puVar24 = puVar24 + 2;
      *(undefined2 *)((long)puVar13 + 10) = *puVar11;
      puVar13 = puVar13 + 2;
    } while (uVar5 != 0);
  }
  return;
}



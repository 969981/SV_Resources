/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03041d00; name: FUN_03041d00
 */


void FUN_03041d00(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long *plVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  undefined1 *puVar20;
  undefined4 *puVar21;
  undefined8 *puVar22;
  long *plVar23;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  lVar19 = param_2[2];
  param_1[2] = lVar19;
  if ((lVar19 != 0) && (*(long *)(lVar19 + 8) != 0)) {
    plVar14 = (long *)(lVar19 + 0x10);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar8) {
        *plVar14 = *plVar14 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  memcpy(param_1 + 3,param_2 + 3,0x6c);
  param_1[0x11] = 0;
  param_1[0x12] = 0x8000000000000000;
  puVar9 = PTR_PTR_047d1a50;
  uVar6 = *(uint *)(param_2 + 0x12);
  if ((int)uVar6 < 1) {
    param_1[0x11] = 0;
    param_1[0x12] = 0x8000000000000000;
  }
  else {
    puVar22 = (undefined8 *)param_2[0x11];
    puVar10 = (undefined8 *)
              (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar6 << 4);
    param_1[0x11] = puVar10;
    *(uint *)(param_1 + 0x12) = uVar6;
    *(uint *)((long)param_1 + 0x94) = uVar6;
    if (uVar6 != 1) {
      iVar17 = -(uVar6 & 0xfffffffe);
      puVar11 = puVar10;
      do {
        puVar11[1] = puVar22[1];
        *puVar11 = *puVar22;
        puVar11[3] = puVar22[3];
        puVar3 = puVar22 + 2;
        puVar10 = puVar11 + 4;
        puVar22 = puVar22 + 4;
        iVar17 = iVar17 + 2;
        puVar11[2] = *puVar3;
        puVar11 = puVar10;
      } while (iVar17 != 0);
    }
    if ((uVar6 & 1) != 0) {
      puVar10[1] = puVar22[1];
      *puVar10 = *puVar22;
    }
  }
  param_1[0x13] = 0;
  param_1[0x14] = 0x8000000000000000;
  uVar6 = *(uint *)(param_2 + 0x14);
  if ((int)uVar6 < 1) {
    param_1[0x13] = 0;
    param_1[0x14] = 0x8000000000000000;
  }
  else {
    puVar22 = (undefined8 *)param_2[0x13];
    puVar10 = (undefined8 *)(**(code **)(*(long *)puVar9 + 0x18))(puVar9,(ulong)uVar6 << 4);
    param_1[0x13] = puVar10;
    *(uint *)(param_1 + 0x14) = uVar6;
    *(uint *)((long)param_1 + 0xa4) = uVar6;
    if (uVar6 != 1) {
      iVar17 = -(uVar6 & 0xfffffffe);
      puVar11 = puVar10;
      do {
        puVar11[1] = puVar22[1];
        *puVar11 = *puVar22;
        puVar11[3] = puVar22[3];
        puVar3 = puVar22 + 2;
        puVar10 = puVar11 + 4;
        puVar22 = puVar22 + 4;
        iVar17 = iVar17 + 2;
        puVar11[2] = *puVar3;
        puVar11 = puVar10;
      } while (iVar17 != 0);
    }
    if ((uVar6 & 1) != 0) {
      puVar10[1] = puVar22[1];
      *puVar10 = *puVar22;
    }
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0x8000000000000000;
  uVar6 = *(uint *)(param_2 + 0x16);
  if ((int)uVar6 < 1) {
    param_1[0x15] = 0;
    param_1[0x16] = 0x8000000000000000;
  }
  else {
    puVar22 = (undefined8 *)param_2[0x15];
    puVar10 = (undefined8 *)(**(code **)(*(long *)puVar9 + 0x18))(puVar9,(ulong)uVar6 << 4);
    param_1[0x15] = puVar10;
    *(uint *)(param_1 + 0x16) = uVar6;
    *(uint *)((long)param_1 + 0xb4) = uVar6;
    if (uVar6 != 1) {
      iVar17 = -(uVar6 & 0xfffffffe);
      puVar11 = puVar10;
      do {
        puVar11[1] = puVar22[1];
        *puVar11 = *puVar22;
        puVar11[3] = puVar22[3];
        puVar3 = puVar22 + 2;
        puVar10 = puVar11 + 4;
        puVar22 = puVar22 + 4;
        iVar17 = iVar17 + 2;
        puVar11[2] = *puVar3;
        puVar11 = puVar10;
      } while (iVar17 != 0);
    }
    if ((uVar6 & 1) != 0) {
      puVar10[1] = puVar22[1];
      *puVar10 = *puVar22;
    }
  }
  param_1[0x17] = 0;
  param_1[0x18] = 0x8000000000000000;
  uVar6 = *(uint *)(param_2 + 0x18);
  if ((int)uVar6 < 1) {
    param_1[0x17] = 0;
    param_1[0x18] = 0x8000000000000000;
  }
  else {
    puVar22 = (undefined8 *)param_2[0x17];
    puVar10 = (undefined8 *)(**(code **)(*(long *)puVar9 + 0x18))(puVar9,(ulong)uVar6 << 4);
    param_1[0x17] = puVar10;
    *(uint *)(param_1 + 0x18) = uVar6;
    *(uint *)((long)param_1 + 0xc4) = uVar6;
    if (uVar6 != 1) {
      iVar17 = -(uVar6 & 0xfffffffe);
      puVar11 = puVar10;
      do {
        puVar11[1] = puVar22[1];
        *puVar11 = *puVar22;
        puVar11[3] = puVar22[3];
        puVar3 = puVar22 + 2;
        puVar10 = puVar11 + 4;
        puVar22 = puVar22 + 4;
        iVar17 = iVar17 + 2;
        puVar11[2] = *puVar3;
        puVar11 = puVar10;
      } while (iVar17 != 0);
    }
    if ((uVar6 & 1) != 0) {
      puVar10[1] = puVar22[1];
      *puVar10 = *puVar22;
    }
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0x8000000000000000;
  uVar6 = *(uint *)(param_2 + 0x1a);
  if ((int)uVar6 < 1) {
    param_1[0x19] = 0;
    param_1[0x1a] = 0x8000000000000000;
  }
  else {
    puVar21 = (undefined4 *)param_2[0x19];
    puVar12 = (undefined4 *)(**(code **)(*(long *)puVar9 + 0x18))(puVar9,(ulong)uVar6 << 2);
    uVar18 = uVar6 & 3;
    param_1[0x19] = puVar12;
    *(uint *)(param_1 + 0x1a) = uVar6;
    *(uint *)((long)param_1 + 0xd4) = uVar6;
    if (2 < uVar6 - 1) {
      iVar17 = -(uVar6 & 0xfffffffc);
      puVar13 = puVar12;
      do {
        *puVar13 = *puVar21;
        puVar13[1] = puVar21[1];
        puVar13[2] = puVar21[2];
        puVar2 = puVar21 + 3;
        puVar12 = puVar13 + 4;
        puVar21 = puVar21 + 4;
        iVar17 = iVar17 + 4;
        puVar13[3] = *puVar2;
        puVar13 = puVar12;
      } while (iVar17 != 0);
    }
    for (; uVar18 != 0; uVar18 = uVar18 - 1) {
      *puVar12 = *puVar21;
      puVar12 = puVar12 + 1;
      puVar21 = puVar21 + 1;
    }
  }
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x8000000000000000;
  uVar6 = *(uint *)(param_2 + 0x1c);
  if ((int)uVar6 < 1) {
    param_1[0x1b] = 0;
    param_1[0x1c] = 0x8000000000000000;
  }
  else {
    puVar21 = (undefined4 *)param_2[0x1b];
    puVar12 = (undefined4 *)(**(code **)(*(long *)puVar9 + 0x18))(puVar9,(ulong)uVar6 << 2);
    uVar18 = uVar6 & 3;
    param_1[0x1b] = puVar12;
    *(uint *)(param_1 + 0x1c) = uVar6;
    *(uint *)((long)param_1 + 0xe4) = uVar6;
    if (2 < uVar6 - 1) {
      iVar17 = -(uVar6 & 0xfffffffc);
      puVar13 = puVar12;
      do {
        *puVar13 = *puVar21;
        puVar13[1] = puVar21[1];
        puVar13[2] = puVar21[2];
        puVar2 = puVar21 + 3;
        puVar12 = puVar13 + 4;
        puVar21 = puVar21 + 4;
        iVar17 = iVar17 + 4;
        puVar13[3] = *puVar2;
        puVar13 = puVar12;
      } while (iVar17 != 0);
    }
    for (; uVar18 != 0; uVar18 = uVar18 - 1) {
      *puVar12 = *puVar21;
      puVar12 = puVar12 + 1;
      puVar21 = puVar21 + 1;
    }
  }
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x8000000000000000;
  uVar6 = *(uint *)(param_2 + 0x1e);
  if ((int)uVar6 < 1) {
    param_1[0x1d] = 0;
    param_1[0x1e] = 0x8000000000000000;
  }
  else {
    plVar23 = (long *)param_2[0x1d];
    plVar14 = (long *)(**(code **)(*(long *)puVar9 + 0x18))(puVar9,(ulong)uVar6 << 3);
    uVar18 = 0;
    param_1[0x1d] = plVar14;
    *(uint *)(param_1 + 0x1e) = uVar6;
    *(uint *)((long)param_1 + 0xf4) = uVar6;
    do {
      lVar19 = *plVar23;
      *plVar14 = lVar19;
      if ((lVar19 != 0) && (*(long *)(lVar19 + 8) != 0)) {
        plVar4 = (long *)(lVar19 + 0x10);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar8) {
            *plVar4 = *plVar4 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      uVar18 = uVar18 + 1;
      plVar14 = plVar14 + 1;
      plVar23 = plVar23 + 1;
    } while (uVar18 != uVar6);
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0x8000000000000000;
  uVar6 = *(uint *)(param_2 + 0x20);
  if ((int)uVar6 < 1) {
    param_1[0x1f] = 0;
    param_1[0x20] = 0x8000000000000000;
  }
  else {
    puVar21 = (undefined4 *)param_2[0x1f];
    puVar12 = (undefined4 *)(**(code **)(*(long *)puVar9 + 0x18))(puVar9,(ulong)uVar6 << 2);
    uVar18 = uVar6 & 3;
    param_1[0x1f] = puVar12;
    *(uint *)(param_1 + 0x20) = uVar6;
    *(uint *)((long)param_1 + 0x104) = uVar6;
    if (2 < uVar6 - 1) {
      iVar17 = -(uVar6 & 0xfffffffc);
      puVar13 = puVar12;
      do {
        *puVar13 = *puVar21;
        puVar13[1] = puVar21[1];
        puVar13[2] = puVar21[2];
        puVar2 = puVar21 + 3;
        puVar12 = puVar13 + 4;
        puVar21 = puVar21 + 4;
        iVar17 = iVar17 + 4;
        puVar13[3] = *puVar2;
        puVar13 = puVar12;
      } while (iVar17 != 0);
    }
    for (; uVar18 != 0; uVar18 = uVar18 - 1) {
      *puVar12 = *puVar21;
      puVar12 = puVar12 + 1;
      puVar21 = puVar21 + 1;
    }
  }
  param_1[0x21] = 0;
  param_1[0x22] = 0x8000000000000000;
  uVar6 = *(uint *)(param_2 + 0x22);
  if ((int)uVar6 < 1) {
    param_1[0x21] = 0;
    param_1[0x22] = 0x8000000000000000;
  }
  else {
    puVar20 = (undefined1 *)param_2[0x21];
    puVar15 = (undefined1 *)(**(code **)(*(long *)puVar9 + 0x18))(puVar9,uVar6);
    uVar18 = uVar6 & 3;
    param_1[0x21] = puVar15;
    *(uint *)(param_1 + 0x22) = uVar6;
    *(uint *)((long)param_1 + 0x114) = uVar6;
    if (2 < uVar6 - 1) {
      iVar17 = -(uVar6 & 0xfffffffc);
      puVar16 = puVar15;
      do {
        *puVar16 = *puVar20;
        puVar16[1] = puVar20[1];
        puVar16[2] = puVar20[2];
        puVar1 = puVar20 + 3;
        puVar15 = puVar16 + 4;
        puVar20 = puVar20 + 4;
        iVar17 = iVar17 + 4;
        puVar16[3] = *puVar1;
        puVar16 = puVar15;
      } while (iVar17 != 0);
    }
    for (; uVar18 != 0; uVar18 = uVar18 - 1) {
      *puVar15 = *puVar20;
      puVar15 = puVar15 + 1;
      puVar20 = puVar20 + 1;
    }
  }
  return;
}



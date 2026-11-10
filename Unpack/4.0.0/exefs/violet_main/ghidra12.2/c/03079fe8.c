/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03079fe8; name: FUN_03079fe8
 */


void FUN_03079fe8(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,long param_5,
                 undefined8 *param_6,undefined8 *param_7,uint param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  void *__s;
  long *plVar9;
  float *pfVar10;
  long lVar11;
  int *piVar12;
  int iVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  byte *pbVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  float fVar26;
  int iVar27;
  float fVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  int local_a0 [2];
  int local_98 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int local_70 [2];
  int local_68 [2];
  
  lVar6 = *(long *)(param_2 + 0x20);
  if ((int)*(uint *)(param_1 + 0x40) < 1) {
    uVar14 = 0xffffffff;
  }
  else {
    uVar14 = 0;
    piVar12 = (int *)(*(long *)(param_1 + 0x38) + 0x1c);
    do {
      if (*piVar12 == *(int *)(lVar6 + 0x178)) goto LAB_0307a074;
      uVar14 = uVar14 + 1;
      piVar12 = piVar12 + 0x40;
    } while (*(uint *)(param_1 + 0x40) != uVar14);
    uVar14 = 0xffffffff;
  }
LAB_0307a074:
  iVar13 = (int)uVar14;
  lVar11 = (long)iVar13;
  plVar9 = (long *)(*(long *)(param_1 + 0x38) + lVar11 * 0x100);
  if (*(char *)(param_2 + 0x30) != '\x01') {
    lVar6 = FUN_0307d71c(param_2 + 0x20);
  }
  *(int *)(lVar6 + 0x17c) = iVar13;
  if (*(long *)(param_2 + 8) != 0) {
    plVar7 = (long *)(param_2 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar7 = (long *)*plVar9;
  *plVar9 = param_2;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar1 = plVar7 + 2;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  pbVar17 = (byte *)(plVar9 + 0x1e);
  *pbVar17 = *pbVar17 | 1;
  if ((param_8 >> 1 & 1) == 0) {
    lVar6 = *(long *)(param_2 + 0x60);
    plVar9[7] = *(long *)(param_2 + 0x68);
    plVar9[6] = lVar6;
    lVar6 = *(long *)(param_2 + 0x70);
    plVar9[9] = *(long *)(param_2 + 0x78);
    plVar9[8] = lVar6;
    lVar6 = *(long *)(param_2 + 0x80);
    plVar9[0xb] = *(long *)(param_2 + 0x88);
    plVar9[10] = lVar6;
    lVar6 = *(long *)(param_2 + 0x90);
    plVar9[0xd] = *(long *)(param_2 + 0x98);
    plVar9[0xc] = lVar6;
    lVar6 = *(long *)(param_2 + 0xa0);
    plVar9[0xf] = *(long *)(param_2 + 0xa8);
    plVar9[0xe] = lVar6;
    lVar6 = *(long *)(param_2 + 0xb0);
    plVar9[0x11] = *(long *)(param_2 + 0xb8);
    plVar9[0x10] = lVar6;
    if (param_5 == 0) goto LAB_0307a2a0;
  }
  else {
    lVar6 = plVar9[6];
    *(long *)(param_2 + 0x68) = plVar9[7];
    *(long *)(param_2 + 0x60) = lVar6;
    lVar6 = plVar9[8];
    *(long *)(param_2 + 0x78) = plVar9[9];
    *(long *)(param_2 + 0x70) = lVar6;
    lVar6 = plVar9[10];
    *(long *)(param_2 + 0x88) = plVar9[0xb];
    *(long *)(param_2 + 0x80) = lVar6;
    lVar6 = plVar9[0xc];
    *(long *)(param_2 + 0x98) = plVar9[0xd];
    *(long *)(param_2 + 0x90) = lVar6;
    lVar6 = plVar9[0xe];
    *(long *)(param_2 + 0xa8) = plVar9[0xf];
    *(long *)(param_2 + 0xa0) = lVar6;
    lVar6 = plVar9[0x10];
    *(long *)(param_2 + 0xb8) = plVar9[0x11];
    *(long *)(param_2 + 0xb0) = lVar6;
    if (param_5 == 0) goto LAB_0307a2a0;
    lVar6 = plVar9[6];
    *(long *)(param_5 + 0x48) = plVar9[7];
    *(long *)(param_5 + 0x40) = lVar6;
    lVar6 = plVar9[8];
    *(long *)(param_5 + 0x58) = plVar9[9];
    *(long *)(param_5 + 0x50) = lVar6;
    lVar6 = plVar9[10];
    *(long *)(param_5 + 0x68) = plVar9[0xb];
    *(long *)(param_5 + 0x60) = lVar6;
    lVar6 = plVar9[0xc];
    *(long *)(param_5 + 0x78) = plVar9[0xd];
    *(long *)(param_5 + 0x70) = lVar6;
  }
  if (*(long *)(*(long *)(param_1 + 0x38) + lVar11 * 0x100 + 0x10) == 0) {
    if (*(char *)(param_5 + 0x30) == '\x01') {
      lVar6 = *(long *)(param_5 + 0x20);
    }
    else {
      lVar6 = FUN_00e0e904();
    }
    *(int *)(lVar6 + 0x60) = iVar13;
    if (*(long *)(param_5 + 8) != 0) {
      plVar7 = (long *)(param_5 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar7 = (long *)plVar9[2];
    plVar9[2] = param_5;
    if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
      plVar9 = plVar7 + 2;
      do {
        lVar6 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
    *pbVar17 = *pbVar17 | 4;
    for (; param_6 != param_7; param_6 = param_6 + 1) {
      local_68[0] = iVar13;
      FUN_0307a574(param_1,local_68,*param_6);
    }
    lVar6 = *(long *)(*(long *)(param_5 + 0x20) + 0x68);
    iVar25 = *(int *)(lVar6 + 0x78);
    if (iVar25 != 0) {
      lVar16 = (long)iVar25 << 4;
      puVar15 = (undefined8 *)(*(long *)(lVar6 + 0x70) + 8);
      do {
        local_70[0] = iVar13;
        FUN_0307a574(param_1,local_70,*puVar15);
        lVar16 = lVar16 + -0x10;
        puVar15 = puVar15 + 2;
      } while (lVar16 != 0);
    }
    FUN_030879d4(param_5,param_1);
  }
LAB_0307a2a0:
  lVar6 = *(long *)(*(long *)(param_2 + 0x20) + 0x68);
  uStack_88 = *(undefined8 *)(lVar6 + 0x98);
  local_90 = *(undefined8 *)(lVar6 + 0x90);
  uStack_78 = *(undefined8 *)(lVar6 + 0xa8);
  uStack_80 = *(undefined8 *)(lVar6 + 0xa0);
  fVar18 = (float)uStack_80;
  fVar24 = (float)local_90;
  iVar25 = -(uint)(fVar18 < fVar24);
  fVar19 = (float)((ulong)uStack_80 >> 0x20);
  fVar21 = (float)((ulong)local_90 >> 0x20);
  iVar27 = -(uint)(fVar19 < fVar21);
  fVar20 = (float)uStack_78;
  fVar22 = (float)uStack_88;
  iVar29 = -(uint)(fVar20 < fVar22);
  if (CONCAT13((byte)((uint)iVar27 >> 0x18) | (byte)((uint)iVar25 >> 0x18) |
               (byte)((uint)iVar29 >> 0x18),
               CONCAT12((byte)((uint)iVar27 >> 0x10) | (byte)((uint)iVar25 >> 0x10) |
                        (byte)((uint)iVar29 >> 0x10),
                        CONCAT11((byte)((uint)iVar27 >> 8) | (byte)((uint)iVar25 >> 8) |
                                 (byte)((uint)iVar29 >> 8),
                                 (byte)iVar27 | (byte)iVar25 | (byte)iVar29))) == 0) {
    fVar26 = (fVar24 + fVar18) * 0.5;
    fVar28 = (fVar21 + fVar19) * 0.5;
    fVar30 = (fVar22 + fVar20) * 0.5;
    fVar18 = (fVar18 - fVar24) * 0.5;
    fVar19 = (fVar19 - fVar21) * 0.5;
    fVar20 = (fVar20 - fVar22) * 0.5;
    fVar31 = (float)*(undefined8 *)(param_2 + 0x70);
    fVar32 = (float)((ulong)*(undefined8 *)(param_2 + 0x70) >> 0x20);
    fVar33 = (float)*(undefined8 *)(param_2 + 0x78);
    fVar34 = (float)((ulong)*(undefined8 *)(param_2 + 0x78) >> 0x20);
    fVar24 = (float)*(undefined8 *)(param_2 + 0x60);
    fVar21 = (float)((ulong)*(undefined8 *)(param_2 + 0x60) >> 0x20);
    fVar22 = (float)*(undefined8 *)(param_2 + 0x68);
    fVar23 = (float)((ulong)*(undefined8 *)(param_2 + 0x68) >> 0x20);
    fVar39 = (float)*(undefined8 *)(param_2 + 0x80);
    fVar40 = (float)((ulong)*(undefined8 *)(param_2 + 0x80) >> 0x20);
    fVar41 = (float)*(undefined8 *)(param_2 + 0x88);
    fVar42 = (float)((ulong)*(undefined8 *)(param_2 + 0x88) >> 0x20);
    fVar35 = ABS(fVar24 * fVar18) + ABS(fVar31 * fVar19) + ABS(fVar39 * fVar20);
    fVar36 = ABS(fVar21 * fVar18) + ABS(fVar32 * fVar19) + ABS(fVar40 * fVar20);
    fVar37 = ABS(fVar22 * fVar18) + ABS(fVar33 * fVar19) + ABS(fVar41 * fVar20);
    fVar38 = ABS(fVar23 * fVar18) + ABS(fVar34 * fVar19) + ABS(fVar42 * fVar20);
    fVar18 = (float)*(undefined8 *)(param_2 + 0x90) +
             fVar39 * fVar30 + fVar24 * fVar26 + fVar31 * fVar28;
    fVar19 = (float)((ulong)*(undefined8 *)(param_2 + 0x90) >> 0x20) +
             fVar40 * fVar30 + fVar21 * fVar26 + fVar32 * fVar28;
    fVar20 = (float)*(undefined8 *)(param_2 + 0x98) +
             fVar41 * fVar30 + fVar22 * fVar26 + fVar33 * fVar28;
    fVar24 = (float)((ulong)*(undefined8 *)(param_2 + 0x98) >> 0x20) +
             fVar42 * fVar30 + fVar23 * fVar26 + fVar34 * fVar28;
    uStack_80 = CONCAT44(fVar19 + fVar36,fVar18 + fVar35);
    uStack_78 = CONCAT44(fVar24 + fVar38,fVar20 + fVar37);
    local_90 = CONCAT44(fVar19 - fVar36,fVar18 - fVar35);
    uStack_88 = CONCAT44(fVar24 - fVar38,fVar20 - fVar37);
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar8 = FUN_0307f764();
  }
  uVar5 = FUN_0086f578(uVar8,&local_90,uVar14 & 0xffffffff);
  *(undefined4 *)(*(long *)(param_1 + 0x38) + lVar11 * 0x100 + 0x18) = uVar5;
  fVar18 = *(float *)(*(long *)(*(long *)(param_2 + 0x20) + 0x68) + 0xb0);
  pfVar10 = (float *)(param_1 + (long)*(int *)(*(long *)(param_2 + 0x20) + 0x180) * 4 + 0x60);
  if (*pfVar10 != fVar18) {
    *pfVar10 = fVar18;
  }
  puVar4 = PTR_DAT_047d1a08;
  if ((param_8 & 1) != 0) {
    if (*(long *)(param_1 + 0x58) == 0) {
      local_90 = 0x330;
      __s = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_90,0);
      if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
        (**(code **)(puVar4 + 0x10))(__s,"hkaiNavMeshClearanceCacheManager");
      }
      memset(__s,0,0x330);
      FUN_0307f4a0(__s);
      plVar9 = *(long **)(param_1 + 0x58);
      *(void **)(param_1 + 0x58) = __s;
      if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
        plVar7 = plVar9 + 2;
        do {
          lVar6 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))();
        }
      }
    }
    iVar25 = *(int *)(*(long *)(param_2 + 0x20) + 0x17c);
    if (iVar25 != -1) {
      local_90 = CONCAT44(local_90._4_4_,iVar25);
      FUN_0307d2b8(param_1,&local_90);
    }
  }
  puVar4 = PTR_DAT_047e4f38;
  iVar25 = *(int *)PTR_DAT_047e4f38;
  lVar6 = tpidr_el0;
  lVar11 = *(long *)(lVar6 + 0x1000b8);
  if (lVar11 == 0) {
    lVar11 = FUN_00e5d3b4();
    *(long *)(lVar6 + 0x1000b8) = lVar11;
  }
  if (*(long *)(lVar11 + (long)iVar25 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  for (; param_3 != param_4; param_3 = param_3 + 1) {
    local_98[0] = iVar13;
    FUN_0307a738(param_1,local_98,*param_3);
  }
  iVar25 = *(int *)puVar4;
  lVar11 = *(long *)(lVar6 + 0x1000b8);
  if (lVar11 == 0) {
    lVar11 = FUN_00e5d3b4();
    *(long *)(lVar6 + 0x1000b8) = lVar11;
  }
  if (*(long *)(lVar11 + (long)iVar25 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  lVar6 = *(long *)(*(long *)(param_2 + 0x20) + 0x68);
  iVar25 = *(int *)(lVar6 + 0x50);
  if (iVar25 != 0) {
    lVar11 = (long)iVar25 << 4;
    puVar15 = (undefined8 *)(*(long *)(lVar6 + 0x48) + 8);
    do {
      local_a0[0] = iVar13;
      FUN_0307a738(param_1,local_a0,*puVar15);
      lVar11 = lVar11 + -0x10;
      puVar15 = puVar15 + 2;
    } while (lVar11 != 0);
  }
  return;
}



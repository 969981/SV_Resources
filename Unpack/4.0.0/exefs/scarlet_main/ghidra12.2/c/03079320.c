/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03079320; name: FUN_03079320
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03079320(long param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  bool bVar11;
  undefined4 uVar12;
  long *plVar13;
  undefined8 uVar14;
  void *__s;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int iVar28;
  float fVar29;
  int iVar30;
  float fVar31;
  int iVar32;
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
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    lVar18 = *(long *)(param_1 + 0x38);
    lVar19 = (long)*(int *)(param_1 + 0x40) << 8;
    do {
      FUN_0307e0e0(lVar18 + -0x100 + lVar19);
      lVar19 = lVar19 + -0x100;
    } while (lVar19 != 0);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x44)) && (*(long *)(param_1 + 0x38) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x38),(ulong)*(uint *)(param_1 + 0x44) << 8);
  }
  plVar20 = (long *)(param_1 + 0x38);
  *plVar20 = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  FUN_0307f25c(plVar20,1);
  uVar9 = _UNK_03cabe68;
  uVar8 = _DAT_03cabe60;
  uVar5 = DAT_03cab628;
  uVar4 = DAT_03cab620;
  uVar3 = _UNK_03caa5b8;
  uVar14 = _DAT_03caa5b0;
  uVar1 = *(uint *)(param_1 + 0x40);
  if ((int)uVar1 < 1) {
    puVar15 = *(undefined8 **)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x40) = 1;
    uVar7 = _UNK_03cabe58;
    uVar6 = _DAT_03cabe50;
    puVar16 = puVar15 + (long)(int)uVar1 * 0x20;
    do {
      *puVar16 = 0;
      puVar16[1] = 0;
      bVar11 = puVar16 != puVar15;
      puVar16[4] = 0;
      puVar16[0x18] = &DAT_03d7702c;
      *(undefined4 *)(puVar16 + 0x19) = 0;
      puVar16[0x1c] = &DAT_03d7702c;
      *(undefined4 *)(puVar16 + 0x1d) = 0;
      *(undefined1 *)(puVar16 + 0x1e) = 0;
      *(undefined1 *)(puVar16 + 0x12) = 0;
      puVar16[2] = 0;
      puVar16[3] = 0xffffffffffffffff;
      puVar16[0xe] = 0;
      puVar16[0xf] = 0;
      puVar16[0x10] = 0;
      puVar16[0x11] = 0;
      puVar16[0x16] = 0;
      puVar16[0x17] = 0x8000000000000000;
      puVar16[0x1a] = 0;
      puVar16[0x1b] = 0x8000000000000000;
      puVar16[0x14] = 0;
      puVar16[0x15] = 0;
      puVar16[7] = uVar5;
      puVar16[6] = uVar4;
      puVar16[9] = uVar9;
      puVar16[8] = uVar8;
      puVar16[0xb] = uVar3;
      puVar16[10] = uVar14;
      puVar16[0xd] = uVar7;
      puVar16[0xc] = uVar6;
      puVar16 = puVar16 + 0x20;
    } while (bVar11);
  }
  else if (uVar1 != 1) {
    lVar18 = (ulong)uVar1 - 1;
    lVar19 = *(long *)(param_1 + 0x38) + lVar18 * 0x100;
    *(undefined4 *)(param_1 + 0x40) = 1;
    do {
      FUN_0307e0e0(lVar19);
      lVar18 = lVar18 + -1;
      lVar19 = lVar19 + -0x100;
    } while (lVar18 != 0);
  }
  if (param_2 == 0) {
    plVar17 = *(long **)*plVar20;
    *(long *)*plVar20 = 0;
    if ((plVar17 != (long *)0x0) && (plVar17[1] != 0)) {
      plVar13 = plVar17 + 2;
      do {
        lVar19 = *plVar13;
        cVar2 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar11) {
          *plVar13 = lVar19 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar19 + -1 == 0) {
        (**(code **)(*plVar17 + 0x18))();
      }
    }
    *(undefined4 *)(*plVar20 + 0x1c) = *(undefined4 *)(_DAT_00000020 + 0x178);
    puVar16 = (undefined8 *)&DAT_00000060;
  }
  else {
    if (*(char *)(param_2 + 0x30) == '\x01') {
      lVar19 = *(long *)(param_2 + 0x20);
    }
    else {
      lVar19 = FUN_0307d71c();
    }
    *(undefined4 *)(lVar19 + 0x17c) = 0;
    *(undefined4 *)(param_1 + (long)*(int *)(*(long *)(param_2 + 0x20) + 0x180) * 4 + 0x60) =
         *(undefined4 *)(*(long *)(*(long *)(param_2 + 0x20) + 0x68) + 0xb0);
    plVar17 = *(long **)(param_1 + 0x38);
    if (*(long *)(param_2 + 8) != 0) {
      plVar13 = (long *)(param_2 + 0x10);
      do {
        cVar2 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar11) {
          *plVar13 = *plVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar13 = (long *)*plVar17;
    *plVar17 = param_2;
    if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
      plVar17 = plVar13 + 2;
      do {
        lVar19 = *plVar17;
        cVar2 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar11) {
          *plVar17 = lVar19 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar19 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))();
      }
    }
    *(undefined4 *)(*plVar20 + 0x1c) = *(undefined4 *)(*(long *)(param_2 + 0x20) + 0x178);
    puVar16 = (undefined8 *)(param_2 + 0x60);
  }
  uVar14 = *puVar16;
  lVar19 = *plVar20;
  *(undefined8 *)(lVar19 + 0x38) = puVar16[1];
  *(undefined8 *)(lVar19 + 0x30) = uVar14;
  uVar14 = puVar16[2];
  *(undefined8 *)(lVar19 + 0x48) = puVar16[3];
  *(undefined8 *)(lVar19 + 0x40) = uVar14;
  uVar14 = puVar16[4];
  *(undefined8 *)(lVar19 + 0x58) = puVar16[5];
  *(undefined8 *)(lVar19 + 0x50) = uVar14;
  uVar14 = puVar16[6];
  *(undefined8 *)(lVar19 + 0x68) = puVar16[7];
  *(undefined8 *)(lVar19 + 0x60) = uVar14;
  uVar14 = puVar16[8];
  *(undefined8 *)(lVar19 + 0x78) = puVar16[9];
  *(undefined8 *)(lVar19 + 0x70) = uVar14;
  uVar14 = puVar16[10];
  *(undefined8 *)(lVar19 + 0x88) = puVar16[0xb];
  *(undefined8 *)(lVar19 + 0x80) = uVar14;
  *(int *)(*plVar20 + 0x20) = *(int *)(*plVar20 + 0x20) + 1;
  *(byte *)(*plVar20 + 0xf0) = *(byte *)(*plVar20 + 0xf0) | 1;
  if (param_3 != 0) {
    if (*(char *)(param_3 + 0x30) == '\x01') {
      lVar19 = *(long *)(param_3 + 0x20);
    }
    else {
      lVar19 = FUN_00e0e904();
    }
    *(undefined4 *)(lVar19 + 0x60) = 0;
    lVar19 = *plVar20;
    if (*(long *)(param_3 + 8) != 0) {
      plVar17 = (long *)(param_3 + 0x10);
      do {
        cVar2 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar11) {
          *plVar17 = *plVar17 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar17 = *(long **)(lVar19 + 0x10);
    *(long *)(lVar19 + 0x10) = param_3;
    if ((plVar17 != (long *)0x0) && (plVar17[1] != 0)) {
      plVar13 = plVar17 + 2;
      do {
        lVar19 = *plVar13;
        cVar2 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar11) {
          *plVar13 = lVar19 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar19 + -1 == 0) {
        (**(code **)(*plVar17 + 0x18))();
      }
    }
    *(int *)(*plVar20 + 0x20) = *(int *)(*plVar20 + 0x20) + 1;
    *(byte *)(*plVar20 + 0xf0) = *(byte *)(*plVar20 + 0xf0) | 4;
  }
  lVar19 = *(long *)(*(long *)(param_2 + 0x20) + 0x68);
  uStack_68 = *(undefined8 *)(lVar19 + 0x98);
  local_70 = *(undefined8 *)(lVar19 + 0x90);
  uStack_58 = *(undefined8 *)(lVar19 + 0xa8);
  uStack_60 = *(undefined8 *)(lVar19 + 0xa0);
  fVar21 = (float)uStack_60;
  fVar27 = (float)local_70;
  iVar28 = -(uint)(fVar21 < fVar27);
  fVar22 = (float)((ulong)uStack_60 >> 0x20);
  fVar24 = (float)((ulong)local_70 >> 0x20);
  iVar30 = -(uint)(fVar22 < fVar24);
  fVar23 = (float)uStack_58;
  fVar25 = (float)uStack_68;
  iVar32 = -(uint)(fVar23 < fVar25);
  if (CONCAT13((byte)((uint)iVar30 >> 0x18) | (byte)((uint)iVar28 >> 0x18) |
               (byte)((uint)iVar32 >> 0x18),
               CONCAT12((byte)((uint)iVar30 >> 0x10) | (byte)((uint)iVar28 >> 0x10) |
                        (byte)((uint)iVar32 >> 0x10),
                        CONCAT11((byte)((uint)iVar30 >> 8) | (byte)((uint)iVar28 >> 8) |
                                 (byte)((uint)iVar32 >> 8),
                                 (byte)iVar30 | (byte)iVar28 | (byte)iVar32))) == 0) {
    fVar29 = (fVar27 + fVar21) * 0.5;
    fVar31 = (fVar24 + fVar22) * 0.5;
    fVar33 = (fVar25 + fVar23) * 0.5;
    fVar21 = (fVar21 - fVar27) * 0.5;
    fVar22 = (fVar22 - fVar24) * 0.5;
    fVar23 = (fVar23 - fVar25) * 0.5;
    fVar34 = (float)*(undefined8 *)(param_2 + 0x70);
    fVar35 = (float)((ulong)*(undefined8 *)(param_2 + 0x70) >> 0x20);
    fVar36 = (float)*(undefined8 *)(param_2 + 0x78);
    fVar37 = (float)((ulong)*(undefined8 *)(param_2 + 0x78) >> 0x20);
    fVar27 = (float)*(undefined8 *)(param_2 + 0x60);
    fVar24 = (float)((ulong)*(undefined8 *)(param_2 + 0x60) >> 0x20);
    fVar25 = (float)*(undefined8 *)(param_2 + 0x68);
    fVar26 = (float)((ulong)*(undefined8 *)(param_2 + 0x68) >> 0x20);
    fVar42 = (float)*(undefined8 *)(param_2 + 0x80);
    fVar43 = (float)((ulong)*(undefined8 *)(param_2 + 0x80) >> 0x20);
    fVar44 = (float)*(undefined8 *)(param_2 + 0x88);
    fVar45 = (float)((ulong)*(undefined8 *)(param_2 + 0x88) >> 0x20);
    fVar38 = ABS(fVar27 * fVar21) + ABS(fVar34 * fVar22) + ABS(fVar42 * fVar23);
    fVar39 = ABS(fVar24 * fVar21) + ABS(fVar35 * fVar22) + ABS(fVar43 * fVar23);
    fVar40 = ABS(fVar25 * fVar21) + ABS(fVar36 * fVar22) + ABS(fVar44 * fVar23);
    fVar41 = ABS(fVar26 * fVar21) + ABS(fVar37 * fVar22) + ABS(fVar45 * fVar23);
    fVar21 = (float)*(undefined8 *)(param_2 + 0x90) +
             fVar42 * fVar33 + fVar27 * fVar29 + fVar34 * fVar31;
    fVar22 = (float)((ulong)*(undefined8 *)(param_2 + 0x90) >> 0x20) +
             fVar43 * fVar33 + fVar24 * fVar29 + fVar35 * fVar31;
    fVar23 = (float)*(undefined8 *)(param_2 + 0x98) +
             fVar44 * fVar33 + fVar25 * fVar29 + fVar36 * fVar31;
    fVar27 = (float)((ulong)*(undefined8 *)(param_2 + 0x98) >> 0x20) +
             fVar45 * fVar33 + fVar26 * fVar29 + fVar37 * fVar31;
    uStack_60 = CONCAT44(fVar22 + fVar39,fVar21 + fVar38);
    uStack_58 = CONCAT44(fVar27 + fVar41,fVar23 + fVar40);
    local_70 = CONCAT44(fVar22 - fVar39,fVar21 - fVar38);
    uStack_68 = CONCAT44(fVar27 - fVar41,fVar23 - fVar40);
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar14 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar14 = FUN_0307f764();
  }
  uVar12 = FUN_0086f578(uVar14,&local_70,0);
  *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x18) = uVar12;
  puVar10 = PTR_DAT_047d1a08;
  if ((param_4 & 1) != 0) {
    if (*(long *)(param_1 + 0x58) == 0) {
      local_70 = 0x330;
      __s = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_70,0);
      if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
        (**(code **)(puVar10 + 0x10))(__s,"hkaiNavMeshClearanceCacheManager");
      }
      memset(__s,0,0x330);
      FUN_0307f4a0(__s);
      plVar20 = *(long **)(param_1 + 0x58);
      *(void **)(param_1 + 0x58) = __s;
      if ((plVar20 != (long *)0x0) && (plVar20[1] != 0)) {
        plVar17 = plVar20 + 2;
        do {
          lVar19 = *plVar17;
          cVar2 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar11) {
            *plVar17 = lVar19 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar19 + -1 == 0) {
          (**(code **)(*plVar20 + 0x18))();
        }
      }
    }
    iVar28 = *(int *)(*(long *)(param_2 + 0x20) + 0x17c);
    if (iVar28 != -1) {
      local_70 = CONCAT44(local_70._4_4_,iVar28);
      FUN_0307d2b8(param_1,&local_70);
    }
  }
  return;
}



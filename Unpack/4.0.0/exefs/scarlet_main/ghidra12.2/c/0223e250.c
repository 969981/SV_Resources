/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0223e250; name: FUN_0223e250
 */


void FUN_0223e250(undefined1 param_1 [16],undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  int iVar11;
  ushort uVar12;
  int iVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  bool bVar20;
  short sVar21;
  ushort *puVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  undefined8 uVar26;
  char *pcVar27;
  undefined8 uVar28;
  byte bVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar37;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  byte local_110;
  byte bStack_10f;
  byte bStack_10e;
  byte bStack_10d;
  byte bStack_10c;
  byte bStack_10b;
  byte bStack_10a;
  byte bStack_109;
  byte bStack_108;
  byte bStack_107;
  byte bStack_106;
  byte bStack_105;
  byte bStack_104;
  byte bStack_103;
  byte bStack_102;
  byte bStack_101;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined8 uStack_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  piVar15 = (int *)*param_2;
  uVar37 = param_1._8_8_;
  auVar34._0_8_ = param_1._0_8_;
  puVar22 = (ushort *)((long)piVar15 - (long)*piVar15);
  if (*puVar22 < 0xb) {
    iVar18 = 0;
    iVar13 = 0;
    iVar11 = 0;
    if (8 < *puVar22) goto LAB_0223e2a4;
  }
  else {
    iVar11 = 0;
    if ((ulong)puVar22[5] != 0) {
      iVar11 = *(int *)((long)piVar15 + (ulong)puVar22[5]);
    }
LAB_0223e2a4:
    iVar18 = iVar11;
    if ((ulong)puVar22[4] == 0) {
      iVar13 = 0;
    }
    else {
      iVar13 = *(int *)((long)piVar15 + (ulong)puVar22[4]);
    }
  }
  if (iVar18 - iVar13 == 1) {
    return;
  }
  local_a8 = param_2[0x22];
  uStack_a0 = param_2[0x23];
  local_98 = param_2[0x24];
  plVar25 = (long *)param_2[0x25];
  local_90 = plVar25;
  if (plVar25 != (long *)0x0) {
    (**(code **)(*plVar25 + 0x18))(plVar25);
  }
  if ((code *)param_2[2] == (code *)0x0) {
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
  }
  else {
    (*(code *)param_2[2])(&local_88,param_2 + 6,&local_a8);
    plVar25 = local_90;
  }
  if (plVar25 != (long *)0x0) {
    (**(code **)(*plVar25 + 0x20))(plVar25);
  }
  if (local_88 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_88 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_88 + 0x1a);
    sVar21 = *(short *)((long)local_88 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar21) {
        cVar3 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar20) {
          *psVar1 = sVar21 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0223e3a0;
        bVar20 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0223e3a0:
        bVar20 = false;
      }
      if (bVar20) {
        lVar16 = local_88[2];
        if (lVar16 == 0) goto LAB_0223e6ec;
        lVar14 = FUN_00ded3a0(lVar16 + 0xe0,&local_d0);
        if (lVar14 == 0) goto LAB_0223e6d4;
        uVar19 = param_2[0x2c];
        uStack_f8 = 0;
        local_100 = 0;
        if (uVar19 == 0) goto LAB_0223e4e8;
        uVar23 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
        uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
        uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar23 < 2) {
          uVar24 = uVar19 - 1 & 0x55c0d7a581349f0f;
        }
        else {
          uVar24 = 0x55c0d7a581349f0f;
          if (uVar19 < 0x55c0d7a581349f10) {
            uVar24 = 0;
            if (uVar19 != 0) {
              uVar24 = 0x55c0d7a581349f0f / uVar19;
            }
            uVar24 = 0x55c0d7a581349f0f - uVar24 * uVar19;
          }
        }
        plVar25 = *(long **)(param_2[0x2b] + uVar24 * 8);
        if ((plVar25 == (long *)0x0) || (plVar25 = (long *)*plVar25, plVar25 == (long *)0x0))
        goto LAB_0223e4e8;
        if (1 < uVar23) goto LAB_0223e4a8;
        goto LAB_0223e45c;
      }
      sVar21 = sVar2;
    } while (sVar2 != 0);
    goto LAB_0223e6e8;
  }
  goto LAB_0223e6ec;
LAB_0223e4a8:
  do {
    uVar23 = plVar25[1];
    if (uVar23 == 0x55c0d7a581349f0f) {
      if (plVar25[2] == 0x55c0d7a581349f0f) goto LAB_0223e4e0;
    }
    else {
      if (uVar19 <= uVar23) {
        uVar4 = 0;
        if (uVar19 != 0) {
          uVar4 = uVar23 / uVar19;
        }
        uVar23 = uVar23 - uVar4 * uVar19;
      }
      if (uVar23 != uVar24) break;
    }
    plVar25 = (long *)*plVar25;
  } while (plVar25 != (long *)0x0);
  goto LAB_0223e4e8;
LAB_0223e4e0:
  uStack_f8 = SUB168(*(undefined1 (*) [16])(plVar25 + 6),8);
  local_100 = SUB168(*(undefined1 (*) [16])(plVar25 + 6),0);
  goto LAB_0223e4e8;
  while (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0) {
LAB_0223e45c:
    if (plVar25[1] == 0x55c0d7a581349f0f) {
      if (plVar25[2] == 0x55c0d7a581349f0f) goto LAB_0223e4e0;
    }
    else if ((plVar25[1] & uVar19 - 1) != uVar24) break;
  }
LAB_0223e4e8:
  FUN_02123748(&local_d0,param_2,0x100000001);
  cVar3 = (char)local_d0;
  bStack_108 = (byte)uStack_b8;
  bStack_107 = (byte)((ulong)uStack_b8 >> 8);
  bStack_106 = (byte)((ulong)uStack_b8 >> 0x10);
  bStack_105 = (byte)((ulong)uStack_b8 >> 0x18);
  bStack_104 = (byte)((ulong)uStack_b8 >> 0x20);
  bStack_103 = (byte)((ulong)uStack_b8 >> 0x28);
  bStack_102 = (byte)((ulong)uStack_b8 >> 0x30);
  bStack_101 = (byte)((ulong)uStack_b8 >> 0x38);
  local_110 = (byte)local_c0;
  bStack_10f = (byte)((ulong)local_c0 >> 8);
  bStack_10e = (byte)((ulong)local_c0 >> 0x10);
  bStack_10d = (byte)((ulong)local_c0 >> 0x18);
  bStack_10c = (byte)((ulong)local_c0 >> 0x20);
  bStack_10b = (byte)((ulong)local_c0 >> 0x28);
  bStack_10a = (byte)((ulong)local_c0 >> 0x30);
  bStack_109 = (byte)((ulong)local_c0 >> 0x38);
  if ((char)local_d0 != '\0') {
    local_d0 = (undefined8 *)((ulong)local_d0 & 0xffffffffffffff00);
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar13 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  bVar29 = -(cVar3 == '\0');
  uVar26 = *(undefined8 *)PTR_DAT_047d3e30;
  pcVar27 = *(char **)(PTR_DAT_047d3e30 + 8);
  uVar28 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  plVar25 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (plVar25 != (long *)0x0) {
    (**(code **)(*plVar25 + 0x18))(plVar25);
  }
  FUN_01340a44(&local_d0,param_2,1);
  plVar10 = local_b0;
  uVar9 = local_c8;
  if ((char)local_d0 != '\0') {
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x18))(local_b0);
    }
    if (plVar25 != (long *)0x0) {
      (**(code **)(*plVar25 + 0x20))(plVar25);
    }
    plVar25 = plVar10;
    uVar26 = uVar9;
    pcVar27 = local_c0;
    uVar28 = uStack_b8;
    if ((char)local_d0 != '\0') {
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
      local_d0 = (undefined8 *)((ulong)local_d0 & 0xffffffffffffff00);
    }
  }
  local_110 = local_110 & ~bVar29;
  bStack_10f = bStack_10f & ~bVar29;
  bStack_10e = bStack_10e & ~bVar29;
  bStack_10d = bStack_10d & ~bVar29;
  bStack_10c = bStack_10c & ~bVar29;
  bStack_10b = bStack_10b & ~bVar29;
  bStack_10a = bStack_10a & ~bVar29;
  bStack_109 = bStack_109 & ~bVar29;
  bStack_108 = bStack_108 & ~bVar29;
  bStack_107 = bStack_107 & ~bVar29;
  bStack_106 = bStack_106 & ~bVar29;
  bStack_105 = bStack_105 & ~bVar29;
  bStack_104 = bStack_104 & ~bVar29;
  bStack_103 = bStack_103 & ~bVar29;
  bStack_102 = bStack_102 & ~bVar29;
  bStack_101 = bStack_101 & ~bVar29;
  if (*pcVar27 != '\0') {
    local_f0 = uVar26;
    pcStack_e8 = pcVar27;
    local_e0 = uVar28;
    local_d8 = plVar25;
    if (plVar25 != (long *)0x0) {
      (**(code **)(*plVar25 + 0x18))(plVar25);
    }
    if ((code *)param_2[2] == (code *)0x0) {
      local_d0 = (undefined8 *)0x0;
      local_c8 = 0;
    }
    else {
      (*(code *)param_2[2])(&local_d0,param_2 + 6,&local_f0);
    }
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x20))();
    }
    if (local_d0 != (undefined8 *)0x0) {
      if (*(short *)((long)local_d0 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_d0 + 0x1a);
        sVar21 = *(short *)((long)local_d0 + 0x1a);
        do {
          sVar2 = *psVar1;
          if (sVar2 == sVar21) {
            cVar3 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar20) {
              *psVar1 = sVar21 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_0223e8b8;
            bVar20 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_0223e8b8:
            bVar20 = false;
          }
          if (bVar20) {
            lVar17 = local_d0[2];
            if (lVar17 == 0) goto LAB_0223e8fc;
            auVar5 = *(undefined1 (*) [16])(lVar17 + 0xb8);
            bStack_108 = auVar5[8];
            bStack_107 = auVar5[9];
            bStack_106 = auVar5[10];
            bStack_105 = auVar5[0xb];
            bStack_104 = auVar5[0xc];
            bStack_103 = auVar5[0xd];
            bStack_102 = auVar5[0xe];
            bStack_101 = auVar5[0xf];
            local_110 = auVar5[0];
            bStack_10f = auVar5[1];
            bStack_10e = auVar5[2];
            bStack_10d = auVar5[3];
            bStack_10c = auVar5[4];
            bStack_10b = auVar5[5];
            bStack_10a = auVar5[6];
            bStack_109 = auVar5[7];
            (**(code **)(*(long *)(lVar17 + -0x28) + 0x60))();
            break;
          }
          sVar21 = sVar2;
        } while (sVar2 != 0);
        if (local_d0 == (undefined8 *)0x0) goto LAB_0223e5f8;
      }
LAB_0223e8fc:
      puVar8 = local_d0;
      psVar1 = (short *)(local_d0 + 3);
      do {
        sVar21 = *psVar1;
        cVar3 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar20) {
          *psVar1 = sVar21 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar21 == 1) {
        piVar15 = (int *)((long)local_d0 + 0x1c);
        do {
          iVar13 = *piVar15;
          cVar3 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar20) {
            *piVar15 = -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_78 = *puVar8;
          FUN_00c44438(lVar17 + 0x8040,&local_78);
        }
      }
      else if (sVar21 == 0) goto LAB_0223e70c;
    }
  }
LAB_0223e5f8:
  uVar12 = FUN_012595d8(param_2,0x200000001);
  iVar13 = -(uint)(uVar12 < 0x100 || (uVar12 & 0xff) == 0);
  fVar31 = (float)CONCAT13(bStack_105,CONCAT12(bStack_106,CONCAT11(bStack_107,bStack_108)));
  fVar32 = (float)(CONCAT17(bStack_101,
                            CONCAT16(bStack_102,CONCAT15(bStack_103,CONCAT14(bStack_104,fVar31))))
                  >> 0x20);
  fVar30 = (float)CONCAT13(bStack_10d,CONCAT12(bStack_10e,CONCAT11(bStack_10f,local_110)));
  auVar6[1] = bStack_10f;
  auVar6[0] = local_110;
  auVar6[2] = bStack_10e;
  auVar6[3] = bStack_10d;
  auVar6[4] = bStack_10c;
  auVar6[5] = bStack_10b;
  auVar6[6] = bStack_10a;
  auVar6[7] = bStack_109;
  auVar6[8] = bStack_108;
  auVar6[9] = bStack_107;
  auVar6[10] = bStack_106;
  auVar6[0xb] = bStack_105;
  uVar38 = (undefined1)iVar13;
  uVar39 = (undefined1)((uint)iVar13 >> 8);
  uVar40 = (undefined1)((uint)iVar13 >> 0x10);
  uVar41 = (undefined1)((uint)iVar13 >> 0x18);
  auVar33._0_4_ = (float)local_100 + fVar30;
  auVar33._4_4_ =
       local_100._4_4_ +
       (float)(CONCAT17(bStack_109,
                        CONCAT16(bStack_10a,CONCAT15(bStack_10b,CONCAT14(bStack_10c,fVar30)))) >>
              0x20);
  auVar33._8_4_ = (float)uStack_f8 + fVar31;
  auVar33._12_4_ = uStack_f8._4_4_ + fVar32;
  auVar6._12_4_ = fVar32;
  auVar5[4] = uVar38;
  auVar5._0_4_ = iVar13;
  auVar5[5] = uVar39;
  auVar5[6] = uVar40;
  auVar5[7] = uVar41;
  auVar5[8] = uVar38;
  auVar5[9] = uVar39;
  auVar5[10] = uVar40;
  auVar5[0xb] = uVar41;
  auVar5[0xc] = uVar38;
  auVar5[0xd] = uVar39;
  auVar5[0xe] = uVar40;
  auVar5[0xf] = uVar41;
  auVar33 = auVar33 ^ (auVar33 ^ auVar6) & auVar5;
  uVar23 = FUN_01259734(param_2,0x300000001);
  puVar7 = PTR_PTR_047d9248;
  uVar19 = 0;
  if ((uVar23 & 0xff) != 0) {
    uVar19 = uVar23 >> 0x20;
  }
  auVar34._8_8_ = uVar37;
  fVar30 = (float)(**(code **)(PTR_PTR_047d9248 + uVar19 * 8))(auVar34);
  auVar35._8_8_ = uVar37;
  auVar35._0_8_ = auVar34._0_8_;
  fVar31 = (float)(**(code **)(puVar7 + uVar19 * 8))(auVar35);
  fVar31 = local_100._4_4_ + fVar31 * (auVar33._4_4_ - local_100._4_4_);
  auVar36._8_8_ = uVar37;
  auVar36._0_8_ = auVar34._0_8_;
  fVar32 = (float)(**(code **)(puVar7 + uVar19 * 8))(auVar36,(char)local_100);
  *(ulong *)(lVar14 + 0x278) =
       (ulong)(uint)((float)uStack_f8 + fVar32 * (auVar33._8_4_ - (float)uStack_f8));
  *(ulong *)(lVar14 + 0x270) =
       CONCAT17((char)((uint)fVar31 >> 0x18),
                CONCAT16((char)((uint)fVar31 >> 0x10),
                         CONCAT15((char)((uint)fVar31 >> 8),
                                  CONCAT14(SUB41(fVar31,0),
                                           (float)local_100 +
                                           fVar30 * (auVar33._0_4_ - (float)local_100)))));
  if (plVar25 != (long *)0x0) {
    (**(code **)(*plVar25 + 0x20))(plVar25);
  }
LAB_0223e6d4:
  (**(code **)(*(long *)(lVar16 + -0x28) + 0x60))((long *)(lVar16 + -0x28));
LAB_0223e6e8:
  if (local_88 != (undefined8 *)0x0) {
LAB_0223e6ec:
    puVar8 = local_88;
    psVar1 = (short *)(local_88 + 3);
    do {
      sVar21 = *psVar1;
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar21 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar21 == 1) {
      piVar15 = (int *)((long)local_88 + 0x1c);
      do {
        iVar13 = *piVar15;
        cVar3 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar20) {
          *piVar15 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_d0 = (undefined8 *)*puVar8;
        FUN_00c44438(lVar16 + 0x8040,&local_d0);
      }
    }
    else if (sVar21 == 0) {
LAB_0223e70c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}



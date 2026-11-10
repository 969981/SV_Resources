/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0221ed64; name: FUN_0221ed64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0221ed64(undefined8 *param_1)

{
  ulong *puVar1;
  short *psVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  undefined *puVar8;
  ulong *puVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong uVar12;
  float *pfVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  ushort *puVar19;
  bool bVar20;
  short sVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  byte bVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [12];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  int iVar62;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar57 [16];
  undefined1 auVar56 [16];
  undefined1 auVar55 [16];
  undefined1 auVar54 [16];
  undefined1 auVar61 [16];
  undefined1 auVar60 [16];
  undefined1 auVar59 [16];
  undefined1 auVar58 [16];
  int iVar63;
  int iVar70;
  undefined1 auVar64 [12];
  int iVar69;
  undefined1 in_q3 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  int iVar71;
  undefined1 auVar68 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar80 [16];
  undefined1 auVar79 [16];
  undefined1 auVar78 [16];
  undefined1 auVar77 [16];
  undefined1 auVar84 [16];
  undefined1 auVar83 [16];
  undefined1 auVar82 [16];
  undefined1 auVar81 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar92 [16];
  undefined1 auVar91 [16];
  undefined1 auVar90 [16];
  undefined1 auVar89 [16];
  undefined1 auVar96 [16];
  undefined1 auVar95 [16];
  undefined1 auVar94 [16];
  undefined1 auVar93 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  float fVar103;
  undefined1 auVar104 [12];
  float fVar111;
  float fVar112;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  float fVar113;
  float fVar119;
  float fVar120;
  undefined1 auVar114 [16];
  float fVar121;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  float fVar122;
  float fVar124;
  float fVar125;
  float fVar126;
  undefined1 auVar123 [16];
  int iVar132;
  int iVar133;
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  float fVar134;
  float fVar135;
  float fVar136;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  ulong *local_130;
  undefined8 uStack_128;
  ulong *local_120;
  undefined8 uStack_118;
  undefined8 *local_110;
  char *local_108;
  undefined8 local_100;
  long *local_f8;
  undefined8 *local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  long *local_d8;
  ulong local_d0;
  undefined8 *local_c8;
  char *local_c0;
  undefined8 uStack_b8;
  long *local_b0;
  ulong *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  ulong *local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  local_90 = param_1[0x22];
  uStack_88 = param_1[0x23];
  local_80 = param_1[0x24];
  plVar17 = (long *)param_1[0x25];
  local_78 = plVar17;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x18))(plVar17);
  }
  if ((code *)param_1[2] == (code *)0x0) {
    local_70 = (ulong *)0x0;
    uStack_68 = 0;
  }
  else {
    (*(code *)param_1[2])(&local_70,param_1 + 6,&local_90);
    plVar17 = local_78;
  }
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x20))(plVar17);
  }
  local_a0 = (ulong *)0x0;
  uStack_98 = 0;
  FUN_01340a44(&local_d0,param_1,1);
  if ((char)local_d0 != '\0') {
    local_f0 = local_c8;
    pcStack_e8 = local_c0;
    local_e0 = uStack_b8;
    local_d8 = local_b0;
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x18))();
    }
    if ((code *)param_1[2] == (code *)0x0) {
      local_110 = (undefined8 *)0x0;
      local_108 = (char *)0x0;
    }
    else {
      (*(code *)param_1[2])(&local_110,param_1 + 6,&local_f0);
    }
    FUN_00d0a34c(&local_a0,&local_110);
    puVar11 = local_110;
    if (local_110 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_110 + 3);
      do {
        sVar21 = *psVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar20) {
          *psVar2 = sVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar21 == 1) {
        piVar15 = (int *)((long)local_110 + 0x1c);
        do {
          iVar10 = *piVar15;
          cVar5 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar20) {
            *piVar15 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_58 = *puVar11;
          FUN_00c44438(lVar14 + 0x8040,&local_58);
        }
      }
      else if (sVar21 == 0) goto LAB_0221ef8c;
    }
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x20))();
    }
    if ((char)local_d0 != '\0') {
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
      local_d0 = local_d0 & 0xffffffffffffff00;
    }
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_110 = *(undefined8 **)PTR_DAT_047d3e30;
  local_108 = *(char **)(PTR_DAT_047d3e30 + 8);
  local_100 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  local_f8 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x18))();
  }
  FUN_01340a44(&local_d0,param_1,0x100000001);
  plVar17 = local_b0;
  if ((char)local_d0 != '\0') {
    local_110 = local_c8;
    local_108 = local_c0;
    local_100 = uStack_b8;
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x18))(local_b0);
    }
    plVar18 = local_f8;
    local_f8 = plVar17;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x20))();
    }
    if ((char)local_d0 != '\0') {
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
      local_d0 = local_d0 & 0xffffffffffffff00;
    }
  }
  if ((local_70 != (ulong *)0x0) && (*(short *)((long)local_70 + 0x1a) != 0)) {
    psVar2 = (short *)((long)local_70 + 0x1a);
    sVar21 = *(short *)((long)local_70 + 0x1a);
    do {
      sVar4 = *psVar2;
      if (sVar4 == sVar21) {
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar20) {
          *psVar2 = sVar21 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_0221f1f0;
        bVar20 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0221f1f0:
        bVar20 = false;
      }
      if (bVar20) {
        plVar17 = (long *)(local_70[2] - 0x28);
        if (local_70[2] != 0) {
          FUN_02123748(&local_d0,param_1,0x200000001);
          bVar28 = -((char)local_d0 == '\0');
          if ((char)local_d0 != '\0') {
            local_d0 = local_d0 & 0xffffffffffffff00;
          }
          local_140 = (float)CONCAT13((byte)((ulong)local_c0 >> 0x18) & ~bVar28,
                                      CONCAT12((byte)((ulong)local_c0 >> 0x10) & ~bVar28,
                                               CONCAT11((byte)((ulong)local_c0 >> 8) & ~bVar28,
                                                        (byte)local_c0 & ~bVar28)));
          auVar31._0_8_ =
               CONCAT17((byte)((ulong)local_c0 >> 0x38) & ~bVar28,
                        CONCAT16((byte)((ulong)local_c0 >> 0x30) & ~bVar28,
                                 CONCAT15((byte)((ulong)local_c0 >> 0x28) & ~bVar28,
                                          CONCAT14((byte)((ulong)local_c0 >> 0x20) & ~bVar28,
                                                   local_140))));
          auVar31[8] = (byte)uStack_b8 & ~bVar28;
          auVar31[9] = (byte)((ulong)uStack_b8 >> 8) & ~bVar28;
          auVar31[10] = (byte)((ulong)uStack_b8 >> 0x10) & ~bVar28;
          auVar31[0xb] = (byte)((ulong)uStack_b8 >> 0x18) & ~bVar28;
          auVar114[0xc] = (byte)((ulong)uStack_b8 >> 0x20) & ~bVar28;
          auVar114._0_12_ = auVar31;
          auVar114[0xd] = (byte)((ulong)uStack_b8 >> 0x28) & ~bVar28;
          auVar114[0xe] = (byte)((ulong)uStack_b8 >> 0x30) & ~bVar28;
          auVar114[0xf] = (byte)((ulong)uStack_b8 >> 0x38) & ~bVar28;
          fStack_138 = auVar31._8_4_;
          fStack_134 = auVar114._12_4_;
          fStack_13c = (float)((ulong)auVar31._0_8_ >> 0x20);
          uVar12 = FUN_01259734(param_1,0x300000001);
          if (((uVar12 & 0xff) != 0) && (iVar10 = (int)(uVar12 >> 0x20), iVar10 != 0))
          goto LAB_0221f274;
          if ((local_a0 == (ulong *)0x0) || (*(short *)((long)local_a0 + 0x1a) == 0))
          goto LAB_0221f5fc;
          psVar2 = (short *)((long)local_a0 + 0x1a);
          sVar21 = *(short *)((long)local_a0 + 0x1a);
          goto LAB_0221f904;
        }
        break;
      }
      sVar21 = sVar4;
    } while (sVar4 != 0);
  }
LAB_0221eee0:
  local_d0 = 0x178243c67380d9e6;
  puVar11 = (undefined8 *)FUN_01235878(param_1 + 0x2b,&local_d0);
  puVar8 = PTR_LAB_047dcd90;
  *(undefined1 *)(puVar11 + 2) = 0;
  *puVar11 = puVar8;
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  puVar9 = local_a0;
  if (local_a0 != (ulong *)0x0) {
    puVar1 = local_a0 + 3;
    do {
      sVar21 = (short)*puVar1;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar20) {
        *(short *)puVar1 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar15 = (int *)((long)local_a0 + 0x1c);
      do {
        iVar10 = *piVar15;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar20) {
          *piVar15 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_d0 = *puVar9;
        FUN_00c44438(lVar14 + 0x8040,&local_d0);
      }
    }
    else if (sVar21 == 0) goto LAB_0221ef8c;
  }
  puVar9 = local_70;
  if (local_70 != (ulong *)0x0) {
    puVar1 = local_70 + 3;
    do {
      sVar21 = (short)*puVar1;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar20) {
        *(short *)puVar1 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar15 = (int *)((long)local_70 + 0x1c);
      do {
        iVar10 = *piVar15;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar20) {
          *piVar15 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_d0 = *puVar9;
        FUN_00c44438(lVar14 + 0x8040,&local_d0);
      }
    }
    else if (sVar21 == 0) {
LAB_0221ef8c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
LAB_0221f904:
  sVar4 = *psVar2;
  if (sVar4 == sVar21) {
    cVar5 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar20) {
      *psVar2 = sVar21 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_0221f928;
    bVar20 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_0221f928:
    bVar20 = false;
  }
  if (!bVar20) goto code_r0x0221f930;
  if (local_a0[2] == 0) goto LAB_0221f5fc;
  (**(code **)(*(long *)(local_a0[2] - 0x28) + 0x60))();
  iVar10 = 0;
LAB_0221f274:
  if ((local_a0 != (ulong *)0x0) && (*(short *)((long)local_a0 + 0x1a) != 0)) {
    psVar2 = (short *)((long)local_a0 + 0x1a);
    sVar21 = *(short *)((long)local_a0 + 0x1a);
    do {
      sVar4 = *psVar2;
      if (sVar4 == sVar21) {
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar20) {
          *psVar2 = sVar21 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_0221f8e0;
        bVar20 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0221f8e0:
        bVar20 = false;
      }
      if (bVar20) {
        uVar12 = local_a0[2];
        plVar18 = (long *)(uVar12 - 0x28);
        if (uVar12 == 0) break;
        lVar14 = FUN_01104bd8(uVar12 + 0xe0,&local_d0);
        plVar3 = (long *)(uVar12 + 0xd0);
        if (lVar14 != 0) {
          plVar3 = (long *)(lVar14 + 0x128);
        }
        if (iVar10 == 2) {
          pfVar13 = (float *)(**(code **)(*plVar18 + 0x68))(plVar18);
          fVar134 = *pfVar13;
          fVar135 = pfVar13[1];
          fVar136 = pfVar13[2];
          fVar30 = pfVar13[3];
          fVar103 = pfVar13[4];
          fVar29 = pfVar13[5];
          fVar111 = pfVar13[6];
          fVar112 = pfVar13[7];
          auVar22._0_4_ = fVar134 * fVar134 + fVar135 * fVar135;
          auVar22._4_4_ = fVar136 * fVar136 + fVar30 * fVar30;
          auVar22._8_4_ = fVar134 * fVar134 + fVar135 * fVar135;
          auVar22._12_4_ = fVar136 * fVar136 + fVar30 * fVar30;
          auVar114 = NEON_ext(auVar22,auVar22,4,1);
          auVar23._0_4_ = auVar114._0_4_ + auVar114._4_4_;
          auVar23._4_4_ = auVar114._8_4_ + auVar114._12_4_;
          auVar23._8_4_ = auVar114._0_4_ + auVar114._4_4_;
          auVar23._12_4_ = auVar114._8_4_ + auVar114._12_4_;
          auVar114 = NEON_frsqrte(auVar23,4);
          auVar72._0_4_ = auVar23._0_4_ * auVar114._0_4_;
          auVar72._4_4_ = auVar23._4_4_ * auVar114._4_4_;
          auVar72._8_4_ = auVar23._8_4_ * auVar114._8_4_;
          auVar72._12_4_ = auVar23._12_4_ * auVar114._12_4_;
          auVar106 = NEON_frsqrts(auVar114,auVar72,4);
          auVar67._0_4_ = auVar114._0_4_ * auVar106._0_4_;
          auVar67._4_4_ = auVar114._4_4_ * auVar106._4_4_;
          auVar67._8_4_ = auVar114._8_4_ * auVar106._8_4_;
          auVar67._12_4_ = auVar114._12_4_ * auVar106._12_4_;
          auVar73._0_4_ = auVar23._0_4_ * auVar67._0_4_;
          auVar73._4_4_ = auVar23._4_4_ * auVar67._4_4_;
          auVar73._8_4_ = auVar23._8_4_ * auVar67._8_4_;
          auVar73._12_4_ = auVar23._12_4_ * auVar67._12_4_;
          iVar10 = -(uint)(auVar23._0_4_ == 0.0);
          iVar132 = -(uint)(auVar23._4_4_ == 0.0);
          iVar133 = -(uint)(auVar23._8_4_ == 0.0);
          iVar62 = -(uint)(auVar23._12_4_ == 0.0);
          auVar114 = NEON_frsqrts(auVar67,auVar73,4);
          fVar134 = fVar134 * auVar67._0_4_ * auVar114._0_4_;
          fVar135 = fVar135 * auVar67._4_4_ * auVar114._4_4_;
          fVar136 = fVar136 * auVar67._8_4_ * auVar114._8_4_;
          fVar30 = fVar30 * auVar67._12_4_ * auVar114._12_4_;
          auVar24._0_4_ = fVar103 * fVar103 + fVar29 * fVar29;
          auVar24._4_4_ = fVar111 * fVar111 + fVar112 * fVar112;
          auVar24._8_4_ = fVar103 * fVar103 + fVar29 * fVar29;
          auVar24._12_4_ = fVar111 * fVar111 + fVar112 * fVar112;
          auVar114 = NEON_ext(auVar24,auVar24,4,1);
          auVar25._0_4_ = auVar114._0_4_ + auVar114._4_4_;
          auVar25._4_4_ = auVar114._8_4_ + auVar114._12_4_;
          auVar25._8_4_ = auVar114._0_4_ + auVar114._4_4_;
          auVar25._12_4_ = auVar114._8_4_ + auVar114._12_4_;
          auVar114 = NEON_frsqrte(auVar25,4);
          auVar85._0_4_ = auVar25._0_4_ * auVar114._0_4_;
          auVar85._4_4_ = auVar25._4_4_ * auVar114._4_4_;
          auVar85._8_4_ = auVar25._8_4_ * auVar114._8_4_;
          auVar85._12_4_ = auVar25._12_4_ * auVar114._12_4_;
          auVar106 = NEON_frsqrts(auVar114,auVar85,4);
          auVar74._0_4_ = auVar114._0_4_ * auVar106._0_4_;
          auVar74._4_4_ = auVar114._4_4_ * auVar106._4_4_;
          auVar74._8_4_ = auVar114._8_4_ * auVar106._8_4_;
          auVar74._12_4_ = auVar114._12_4_ * auVar106._12_4_;
          auVar86._0_4_ = auVar25._0_4_ * auVar74._0_4_;
          auVar86._4_4_ = auVar25._4_4_ * auVar74._4_4_;
          auVar86._8_4_ = auVar25._8_4_ * auVar74._8_4_;
          auVar86._12_4_ = auVar25._12_4_ * auVar74._12_4_;
          iVar63 = -(uint)(auVar25._0_4_ == 0.0);
          iVar69 = -(uint)(auVar25._4_4_ == 0.0);
          iVar70 = -(uint)(auVar25._8_4_ == 0.0);
          iVar71 = -(uint)(auVar25._12_4_ == 0.0);
          auVar114 = NEON_frsqrts(auVar74,auVar86,4);
          fVar103 = fVar103 * auVar74._0_4_ * auVar114._0_4_;
          fVar29 = fVar29 * auVar74._4_4_ * auVar114._4_4_;
          fVar111 = fVar111 * auVar74._8_4_ * auVar114._8_4_;
          fVar112 = fVar112 * auVar74._12_4_ * auVar114._12_4_;
          fVar113 = pfVar13[8];
          fVar119 = pfVar13[9];
          fVar120 = pfVar13[10];
          fVar121 = pfVar13[0xb] * pfVar13[0xb];
          auVar26._0_4_ = fVar113 * fVar113 + fVar119 * fVar119;
          auVar26._4_4_ = fVar120 * fVar120 + fVar121;
          auVar26._8_4_ = fVar113 * fVar113 + fVar119 * fVar119;
          auVar26._12_4_ = fVar120 * fVar120 + fVar121;
          auVar114 = NEON_ext(auVar26,auVar26,4,1);
          auVar27._0_4_ = auVar114._0_4_ + auVar114._4_4_;
          auVar27._4_4_ = auVar114._8_4_ + auVar114._12_4_;
          auVar27._8_4_ = auVar114._0_4_ + auVar114._4_4_;
          auVar27._12_4_ = auVar114._8_4_ + auVar114._12_4_;
          auVar114 = NEON_frsqrte(auVar27,4);
          auVar107._0_4_ = auVar27._0_4_ * auVar114._0_4_;
          auVar107._4_4_ = auVar27._4_4_ * auVar114._4_4_;
          auVar107._8_4_ = auVar27._8_4_ * auVar114._8_4_;
          auVar107._12_4_ = auVar27._12_4_ * auVar114._12_4_;
          auVar106 = NEON_frsqrts(auVar114,auVar107,4);
          auVar99._0_4_ = auVar114._0_4_ * auVar106._0_4_;
          auVar99._4_4_ = auVar114._4_4_ * auVar106._4_4_;
          auVar99._8_4_ = auVar114._8_4_ * auVar106._8_4_;
          auVar99._12_4_ = auVar114._12_4_ * auVar106._12_4_;
          auVar108._0_4_ = auVar27._0_4_ * auVar99._0_4_;
          auVar108._4_4_ = auVar27._4_4_ * auVar99._4_4_;
          auVar108._8_4_ = auVar27._8_4_ * auVar99._8_4_;
          auVar108._12_4_ = auVar27._12_4_ * auVar99._12_4_;
          auVar114 = NEON_frsqrts(auVar99,auVar108,4);
          fVar122 = (float)CONCAT13((byte)((uint)fVar134 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                                    CONCAT12((byte)((uint)fVar134 >> 0x10) &
                                             ~(byte)((uint)iVar10 >> 0x10),
                                             CONCAT11((byte)((uint)fVar134 >> 8) &
                                                      ~(byte)((uint)iVar10 >> 8),
                                                      SUB41(fVar134,0) & ~(byte)iVar10)));
          auVar104._0_8_ =
               CONCAT17((byte)((uint)fVar135 >> 0x18) & ~(byte)((uint)iVar132 >> 0x18),
                        CONCAT16((byte)((uint)fVar135 >> 0x10) & ~(byte)((uint)iVar132 >> 0x10),
                                 CONCAT15((byte)((uint)fVar135 >> 8) & ~(byte)((uint)iVar132 >> 8),
                                          CONCAT14(SUB41(fVar135,0) & ~(byte)iVar132,fVar122))));
          auVar104[8] = SUB41(fVar136,0) & ~(byte)iVar133;
          auVar104[9] = (byte)((uint)fVar136 >> 8) & ~(byte)((uint)iVar133 >> 8);
          auVar104[10] = (byte)((uint)fVar136 >> 0x10) & ~(byte)((uint)iVar133 >> 0x10);
          auVar104[0xb] = (byte)((uint)fVar136 >> 0x18) & ~(byte)((uint)iVar133 >> 0x18);
          auVar109[0xc] = SUB41(fVar30,0) & ~(byte)iVar62;
          auVar109._0_12_ = auVar104;
          auVar109[0xd] = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar62 >> 8);
          auVar109[0xe] = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10);
          auVar109[0xf] = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18);
          iVar10 = -(uint)(auVar27._0_4_ == 0.0);
          iVar132 = -(uint)(auVar27._4_4_ == 0.0);
          iVar133 = -(uint)(auVar27._8_4_ == 0.0);
          fVar121 = (float)CONCAT13((byte)((uint)fVar103 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18),
                                    CONCAT12((byte)((uint)fVar103 >> 0x10) &
                                             ~(byte)((uint)iVar63 >> 0x10),
                                             CONCAT11((byte)((uint)fVar103 >> 8) &
                                                      ~(byte)((uint)iVar63 >> 8),
                                                      SUB41(fVar103,0) & ~(byte)iVar63)));
          auVar51._0_8_ =
               CONCAT17((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18),
                        CONCAT16((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10),
                                 CONCAT15((byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar69 >> 8),
                                          CONCAT14(SUB41(fVar29,0) & ~(byte)iVar69,fVar121))));
          auVar51[8] = SUB41(fVar111,0) & ~(byte)iVar70;
          auVar51[9] = (byte)((uint)fVar111 >> 8) & ~(byte)((uint)iVar70 >> 8);
          auVar51[10] = (byte)((uint)fVar111 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10);
          auVar51[0xb] = (byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18);
          auVar51[0xc] = SUB41(fVar112,0) & ~(byte)iVar71;
          auVar51[0xd] = (byte)((uint)fVar112 >> 8) & ~(byte)((uint)iVar71 >> 8);
          auVar51[0xe] = (byte)((uint)fVar112 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10);
          auVar51[0xf] = (byte)((uint)fVar112 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18);
          fVar113 = fVar113 * auVar99._0_4_ * auVar114._0_4_;
          fVar119 = fVar119 * auVar99._4_4_ * auVar114._4_4_;
          fVar120 = fVar120 * auVar99._8_4_ * auVar114._8_4_;
          fVar29 = (float)CONCAT13((byte)((uint)fVar113 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                                   CONCAT12((byte)((uint)fVar113 >> 0x10) &
                                            ~(byte)((uint)iVar10 >> 0x10),
                                            CONCAT11((byte)((uint)fVar113 >> 8) &
                                                     ~(byte)((uint)iVar10 >> 8),
                                                     SUB41(fVar113,0) & ~(byte)iVar10)));
          auVar64._0_8_ =
               CONCAT17((byte)((uint)fVar119 >> 0x18) & ~(byte)((uint)iVar132 >> 0x18),
                        CONCAT16((byte)((uint)fVar119 >> 0x10) & ~(byte)((uint)iVar132 >> 0x10),
                                 CONCAT15((byte)((uint)fVar119 >> 8) & ~(byte)((uint)iVar132 >> 8),
                                          CONCAT14(SUB41(fVar119,0) & ~(byte)iVar132,fVar29))));
          auVar64[8] = SUB41(fVar120,0) & ~(byte)iVar133;
          auVar64[9] = (byte)((uint)fVar120 >> 8) & ~(byte)((uint)iVar133 >> 8);
          auVar64[10] = (byte)((uint)fVar120 >> 0x10) & ~(byte)((uint)iVar133 >> 0x10);
          auVar64[0xb] = (byte)((uint)fVar120 >> 0x18) & ~(byte)((uint)iVar133 >> 0x18);
          auVar114 = NEON_fmov(0x3f800000,4);
          fVar134 = (float)((ulong)auVar51._0_8_ >> 0x20);
          fVar103 = auVar64._8_4_;
          fVar135 = auVar114._0_4_ + (float)_DAT_03cab3a0 * fVar122 + (float)_DAT_03cac210 * fVar134
                    + (float)_DAT_03cabb00 * fVar103;
          fVar136 = auVar114._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar122 +
                    (float)((ulong)_DAT_03cac210 >> 0x20) * fVar134 +
                    (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar103;
          fVar30 = auVar114._8_4_ + (float)_UNK_03cab3a8 * fVar122 + (float)_UNK_03cac218 * fVar134
                   + (float)_UNK_03cabb08 * fVar103;
          fVar103 = auVar114._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar122 +
                    (float)((ulong)_UNK_03cac218 >> 0x20) * fVar134 +
                    (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar103;
          fVar111 = (float)((ulong)auVar64._0_8_ >> 0x20);
          auVar114 = NEON_fmov(0x40800000,4);
          auVar75._0_4_ = SQRT(fVar135) * 0.5 * auVar114._0_4_;
          auVar75._4_4_ = SQRT(fVar136) * 0.5 * auVar114._4_4_;
          auVar75._8_4_ = SQRT(fVar30) * 0.5 * auVar114._8_4_;
          auVar75._12_4_ = SQRT(fVar103) * 0.5 * auVar114._12_4_;
          auVar114 = NEON_frecpe(auVar75,4);
          auVar116 = NEON_ext(auVar51,auVar51,8,1);
          auVar128 = NEON_ext(auVar109,auVar109,8,1);
          auVar106 = NEON_frecps(auVar114,auVar75,4);
          auVar87._0_4_ = auVar114._0_4_ * auVar106._0_4_;
          auVar87._4_4_ = auVar114._4_4_ * auVar106._4_4_;
          auVar87._8_4_ = auVar114._8_4_ * auVar106._8_4_;
          auVar87._12_4_ = auVar114._12_4_ * auVar106._12_4_;
          fVar134 = auVar116._0_4_;
          auVar114 = NEON_frecps(auVar87,auVar75,4);
          fVar112 = auVar87._0_4_ * auVar114._0_4_;
          fVar113 = auVar87._4_4_ * auVar114._4_4_;
          fVar119 = auVar87._8_4_ * auVar114._8_4_;
          fVar120 = auVar87._12_4_ * auVar114._12_4_;
          fVar124 = (float)((ulong)auVar104._0_8_ >> 0x20);
          fVar122 = auVar128._0_4_ + fVar29;
          auVar6._8_4_ = fVar134 + -fVar111;
          auVar6._4_4_ = fVar122;
          auVar117._4_4_ = fVar135;
          auVar117._0_4_ = fVar135;
          auVar117._8_4_ = fVar135;
          auVar117._12_4_ = fVar135;
          auVar106._4_4_ = fVar136;
          auVar106._0_4_ = fVar136;
          auVar106._8_4_ = fVar136;
          auVar106._12_4_ = fVar136;
          auVar116._4_4_ = -(uint)(fVar135 <= fVar136);
          auVar116._0_4_ = -(uint)(fVar135 <= fVar136);
          auVar116._8_4_ = -(uint)(fVar135 <= fVar136);
          auVar116._12_4_ = -(uint)(fVar135 <= fVar136);
          auVar117 = auVar117 ^ (auVar117 ^ auVar106) & auVar116;
          auVar123._4_4_ = fVar30;
          auVar123._0_4_ = fVar30;
          auVar123._8_4_ = fVar30;
          auVar123._12_4_ = fVar30;
          auVar6._0_4_ = (fVar124 + fVar121) * fVar112;
          auVar100._0_8_ = auVar6._0_8_ << 0x20;
          auVar100._8_4_ = fVar122 * fVar112;
          auVar100._12_4_ = (fVar134 + -fVar111) * fVar112;
          auVar129._0_4_ = (fVar124 + fVar121) * fVar113;
          auVar129._4_4_ = fVar113 * 0.0;
          auVar129._8_4_ = (fVar134 + fVar111) * fVar113;
          auVar129._12_4_ = (fVar29 + -auVar104._8_4_) * fVar113;
          fVar122 = (float)_UNK_03cab648;
          fVar125 = (float)((ulong)_UNK_03cab648 >> 0x20);
          fVar112 = (float)_DAT_03cab640;
          fVar113 = (float)((ulong)_DAT_03cab640 >> 0x20);
          auVar101._4_12_ = auVar100._4_12_;
          auVar101._0_4_ = SQRT(fVar135) * 0.5;
          auVar68._0_4_ = (auVar128._0_4_ + fVar29) * fVar119;
          auVar68._4_4_ = (fVar134 + fVar111) * fVar119;
          auVar68._12_4_ = (fVar124 - fVar121) * fVar119;
          auVar130._8_8_ = auVar129._8_8_;
          auVar130._4_4_ = SQRT(fVar136) * 0.5;
          auVar130._0_4_ = auVar129._0_4_;
          auVar68._8_4_ = SQRT(fVar30) * 0.5;
          auVar52._0_4_ = (fVar134 - fVar111) * fVar120;
          auVar52._4_4_ = (fVar29 - auVar104._8_4_) * fVar120;
          auVar52._8_4_ = (fVar124 - fVar121) * fVar120;
          auVar128._4_4_ = -(uint)(fVar135 <= fVar136);
          auVar128._0_4_ = -(uint)(fVar135 <= fVar136);
          auVar128._8_4_ = -(uint)(fVar135 <= fVar136);
          auVar128._12_4_ = -(uint)(fVar135 <= fVar136);
          auVar131._0_4_ = -(uint)(auVar117._0_4_ <= fVar30);
          auVar131._4_4_ = -(uint)(auVar117._4_4_ <= fVar30);
          auVar131._8_4_ = -(uint)(auVar117._8_4_ <= fVar30);
          auVar131._12_4_ = -(uint)(auVar117._12_4_ <= fVar30);
          auVar117 = auVar117 ^ (auVar117 ^ auVar123) & auVar131;
          auVar52._12_4_ = SQRT(fVar103) * 0.5;
          auVar68 = auVar68 ^ (auVar68 ^ auVar101 ^ (auVar101 ^ auVar130) & auVar128) & ~auVar131;
          auVar33._0_4_ = -(uint)(auVar117._0_4_ <= fVar103);
          auVar33._4_4_ = -(uint)(auVar117._4_4_ <= fVar103);
          auVar33._8_4_ = -(uint)(auVar117._8_4_ <= fVar103);
          auVar33._12_4_ = -(uint)(auVar117._12_4_ <= fVar103);
          auVar88._4_4_ = fStack_138;
          auVar88._0_4_ = fStack_138;
          auVar88._8_4_ = fStack_138;
          auVar88._12_4_ = fStack_138;
          auVar68 = auVar68 ^ (auVar68 ^ auVar52) & auVar33;
          fVar135 = auVar68._0_4_;
          auVar54._0_4_ = -fVar135;
          fVar136 = auVar68._4_4_;
          fVar29 = -fVar136;
          fVar30 = auVar68._8_4_;
          auVar53._8_4_ = -fVar30;
          fVar103 = auVar68._12_4_;
          auVar89._4_12_ = auVar88._4_12_;
          auVar89._0_4_ = local_140;
          auVar91._0_8_ = auVar89._0_8_;
          auVar91._8_4_ = fStack_13c;
          auVar91._12_4_ = fStack_138;
          auVar90._8_8_ = auVar91._8_8_;
          auVar90._4_4_ = fStack_138;
          auVar90._0_4_ = local_140;
          auVar92._0_12_ = auVar90._0_12_;
          auVar92._12_4_ = fStack_138;
          auVar110._4_4_ = fVar30;
          auVar110._0_4_ = fVar30;
          auVar110._8_4_ = fVar30;
          auVar110._12_4_ = fVar30;
          auVar106 = NEON_ext(auVar110,auVar68,0xc,1);
          auVar118._4_4_ = fVar136;
          auVar118._0_4_ = fVar136;
          auVar118._8_4_ = fVar136;
          auVar118._12_4_ = fVar136;
          auVar128 = NEON_ext(auVar92,auVar92,8,1);
          fVar134 = auVar128._0_4_;
          auVar93._4_12_ = auVar92._4_12_;
          auVar93._0_4_ = fVar134;
          auVar95._0_8_ = auVar93._0_8_;
          auVar95._8_4_ = auVar128._8_4_;
          auVar95._12_4_ = fStack_138;
          auVar94._8_8_ = auVar95._8_8_;
          auVar94._4_4_ = local_140;
          auVar94._0_4_ = fVar134;
          auVar96._0_12_ = auVar94._0_12_;
          auVar96._12_4_ = fStack_13c;
          auVar116 = NEON_ext(auVar118,auVar106,0xc,1);
          auVar114 = NEON_ext(auVar96,auVar128,8,1);
          auVar114 = NEON_ext(auVar114,auVar114,0xc,1);
          auVar102._0_4_ =
               (local_140 * fVar103 + fVar135 * fVar112 * 0.0 +
               auVar114._0_4_ * auVar116._0_4_ * fVar112) - auVar106._0_4_ * fVar134;
          auVar102._4_4_ =
               (fStack_13c * fVar103 + fVar136 * fVar113 * 0.0 +
               auVar114._4_4_ * auVar116._4_4_ * fVar113) - auVar106._4_4_ * auVar128._4_4_;
          auVar102._8_4_ =
               (fStack_138 * fVar103 + fVar30 * fVar122 * 0.0 +
               auVar114._8_4_ * auVar116._8_4_ * fVar122) - auVar106._8_4_ * auVar128._8_4_;
          auVar102._12_4_ =
               (fVar103 * 0.0 + local_140 * fVar135 * fVar125 +
               auVar114._12_4_ * auVar116._12_4_ * fVar125) - auVar106._12_4_ * auVar128._12_4_;
          auVar53._4_4_ = auVar53._8_4_;
          auVar53._0_4_ = auVar53._8_4_;
          auVar53._12_4_ = auVar53._8_4_;
          auVar34._4_4_ = auVar102._8_4_;
          auVar34._0_4_ = auVar102._8_4_;
          auVar34._8_4_ = auVar102._8_4_;
          auVar34._12_4_ = auVar102._8_4_;
          auVar39._4_4_ = auVar102._4_4_;
          auVar39._0_4_ = auVar102._4_4_;
          auVar39._8_4_ = auVar102._4_4_;
          auVar39._12_4_ = auVar102._4_4_;
          auVar114 = NEON_ext(auVar34,auVar102,0xc,1);
          auVar106 = NEON_ext(auVar39,auVar114,0xc,1);
          auVar54._4_12_ = auVar53._4_12_;
          auVar56._0_8_ = auVar54._0_8_;
          auVar56._8_4_ = fVar29;
          auVar56._12_4_ = auVar53._8_4_;
          auVar55._8_8_ = auVar56._8_8_;
          auVar55._4_4_ = auVar53._8_4_;
          auVar55._0_4_ = auVar54._0_4_;
          auVar57._0_12_ = auVar55._0_12_;
          auVar57._12_4_ = auVar53._8_4_;
          in_q3 = NEON_ext(auVar57,auVar57,8,1);
          fVar134 = in_q3._0_4_;
          auVar58._4_12_ = auVar57._4_12_;
          auVar58._0_4_ = fVar134;
          auVar60._0_8_ = auVar58._0_8_;
          auVar60._8_4_ = in_q3._8_4_;
          auVar60._12_4_ = auVar53._8_4_;
          auVar59._8_8_ = auVar60._8_8_;
          auVar59._4_4_ = auVar54._0_4_;
          auVar59._0_4_ = fVar134;
          auVar61._0_12_ = auVar59._0_12_;
          auVar61._12_4_ = fVar29;
          auVar116 = NEON_ext(auVar61,in_q3,8,1);
          auVar116 = NEON_ext(auVar116,auVar116,0xc,1);
          local_140 = (auVar54._0_4_ * auVar102._12_4_ + fVar103 * auVar102._0_4_ * fVar112 +
                      auVar116._0_4_ * auVar106._0_4_ * fVar112) - auVar114._0_4_ * fVar134;
          fStack_13c = (fVar29 * auVar102._12_4_ + fVar103 * auVar102._4_4_ * fVar113 +
                       auVar116._4_4_ * auVar106._4_4_ * fVar113) - auVar114._4_4_ * in_q3._4_4_;
          fStack_138 = (auVar53._8_4_ * auVar102._12_4_ + fVar103 * auVar102._8_4_ * fVar122 +
                       auVar116._8_4_ * auVar106._8_4_ * fVar122) - auVar114._8_4_ * in_q3._8_4_;
          fStack_134 = 0.0;
        }
        if (*local_108 == '\0') {
          lVar14 = (**(code **)(*plVar18 + 0x68))(plVar18);
          auVar31 = SUB1612(*(undefined1 (*) [16])(lVar14 + 0x30),0);
        }
        else {
          (**(code **)(*plVar3 + 0x50))(plVar3,&local_110);
          auVar31 = in_q3._0_12_;
        }
        local_140 = local_140 + auVar31._0_4_;
        fStack_13c = fStack_13c + auVar31._4_4_;
        fStack_138 = fStack_138 + auVar31._8_4_;
        fStack_134 = fStack_134 + 0.0;
        (**(code **)(*plVar18 + 0x60))(plVar18);
        goto LAB_0221f5fc;
      }
      sVar21 = sVar4;
      if (sVar4 == 0) break;
    } while( true );
  }
  local_120 = (ulong *)0x0;
  uStack_118 = 0;
  FUN_00d0a71c(&local_120,&local_70);
  lVar14 = FUN_01180e7c(param_1,&local_120);
  puVar9 = local_120;
  if (local_120 != (ulong *)0x0) {
    puVar1 = local_120 + 3;
    do {
      sVar21 = (short)*puVar1;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar20) {
        *(short *)puVar1 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar15 = (int *)((long)local_120 + 0x1c);
      do {
        iVar132 = *piVar15;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar20) {
          *piVar15 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar132 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar132 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar132 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_d0 = *puVar9;
        FUN_00c44438(lVar16 + 0x8040,&local_d0);
      }
    }
    else if (sVar21 == 0) goto LAB_0221ef8c;
  }
  if (lVar14 != 0) {
    if (iVar10 == 2) {
      fVar30 = *(float *)(lVar14 + 0xc4);
      fVar103 = *(float *)(lVar14 + 200);
      fVar135 = *(float *)(lVar14 + 0xd4);
      fVar136 = *(float *)(lVar14 + 0xd8);
      fVar29 = fmodf(*(float *)(lVar14 + 0xd0) + *(float *)(lVar14 + 0xc0),360.0);
      fVar134 = fVar29 + 360.0;
      if (0.0 <= fVar29) {
        fVar134 = fVar29;
      }
      fVar30 = fmodf(fVar135 + fVar30,360.0);
      fVar135 = fVar30 + 360.0;
      if (0.0 <= fVar30) {
        fVar135 = fVar30;
      }
      fVar30 = fmodf(fVar136 + fVar103,360.0);
      fVar136 = fVar30 + 360.0;
      if (0.0 <= fVar30) {
        fVar136 = fVar30;
      }
      fVar30 = *(float *)PTR_FloatPi_047d23a0 / *(float *)PTR_FloatDegree180_047d2390;
      fVar103 = fVar136 * fVar30 * 0.5;
      fVar29 = fVar134 * fVar30 * 0.5;
      fVar111 = fVar135 * fVar30 * 0.5;
      iVar10 = -(uint)(fVar103 == 0.0);
      iVar132 = -(uint)(fVar29 == 0.0);
      iVar133 = -(uint)(fVar111 == 0.0);
      auVar127[0] = ~(byte)iVar10;
      auVar127[1] = ~(byte)((uint)iVar10 >> 8);
      auVar127[2] = ~(byte)((uint)iVar10 >> 0x10);
      auVar127[3] = ~(byte)((uint)iVar10 >> 0x18);
      auVar127[4] = ~(byte)iVar132;
      auVar127[5] = ~(byte)((uint)iVar132 >> 8);
      auVar127[6] = ~(byte)((uint)iVar132 >> 0x10);
      auVar127[7] = ~(byte)((uint)iVar132 >> 0x18);
      auVar127[8] = ~(byte)iVar133;
      auVar127[9] = ~(byte)((uint)iVar133 >> 8);
      auVar127[10] = ~(byte)((uint)iVar133 >> 0x10);
      auVar127[0xb] = ~(byte)((uint)iVar133 >> 0x18);
      auVar127._12_4_ = 0;
      iVar10 = -(uint)(ABS(fVar103) == INFINITY);
      iVar132 = -(uint)(ABS(fVar29) == INFINITY);
      iVar133 = -(uint)(ABS(fVar111) == INFINITY);
      auVar35[0] = ~(byte)iVar10;
      auVar35[1] = ~(byte)((uint)iVar10 >> 8);
      auVar35[2] = ~(byte)((uint)iVar10 >> 0x10);
      auVar35[3] = ~(byte)((uint)iVar10 >> 0x18);
      auVar35[4] = ~(byte)iVar132;
      auVar35[5] = ~(byte)((uint)iVar132 >> 8);
      auVar35[6] = ~(byte)((uint)iVar132 >> 0x10);
      auVar35[7] = ~(byte)((uint)iVar132 >> 0x18);
      auVar35[8] = ~(byte)iVar133;
      auVar35[9] = ~(byte)((uint)iVar133 >> 8);
      auVar35[10] = ~(byte)((uint)iVar133 >> 0x10);
      auVar35[0xb] = ~(byte)((uint)iVar133 >> 0x18);
      auVar35[0xc] = 0xff;
      auVar35[0xd] = 0xff;
      auVar35[0xe] = 0xff;
      auVar35[0xf] = 0xff;
      auVar97._0_4_ =
           (int)((float)(-(uint)(0.0 <= fVar103) & 0x80000000 ^ 0xbf000000) + fVar103 * 0.15915494);
      auVar97._4_4_ =
           (int)((float)(-(uint)(0.0 <= fVar29) & 0x80000000 ^ 0xbf000000) + fVar29 * 0.15915494);
      auVar97._8_4_ =
           (int)((float)(-(uint)(0.0 <= fVar111) & 0x80000000 ^ 0xbf000000) + fVar111 * 0.15915494);
      auVar97._12_4_ = 0;
      auVar114 = NEON_scvtf(auVar97,4);
      fVar134 = fVar103 + 1.5707964;
      fVar135 = fVar29 + 1.5707964;
      fVar136 = fVar111 + 1.5707964;
      fVar103 = fVar103 - auVar114._0_4_ * 6.2831855;
      fVar29 = fVar29 - auVar114._4_4_ * 6.2831855;
      fVar111 = fVar111 - auVar114._8_4_ * 6.2831855;
      fVar112 = 0.0 - auVar114._12_4_ * 6.2831855;
      iVar10 = -(uint)(ABS(fVar134) == INFINITY);
      iVar132 = -(uint)(ABS(fVar135) == INFINITY);
      iVar133 = -(uint)(ABS(fVar136) == INFINITY);
      auVar65[0] = ~(byte)iVar10;
      auVar65[1] = ~(byte)((uint)iVar10 >> 8);
      auVar65[2] = ~(byte)((uint)iVar10 >> 0x10);
      auVar65[3] = ~(byte)((uint)iVar10 >> 0x18);
      auVar65[4] = ~(byte)iVar132;
      auVar65[5] = ~(byte)((uint)iVar132 >> 8);
      auVar65[6] = ~(byte)((uint)iVar132 >> 0x10);
      auVar65[7] = ~(byte)((uint)iVar132 >> 0x18);
      auVar65[8] = ~(byte)iVar133;
      auVar65[9] = ~(byte)((uint)iVar133 >> 8);
      auVar65[10] = ~(byte)((uint)iVar133 >> 0x10);
      auVar65[0xb] = ~(byte)((uint)iVar133 >> 0x18);
      auVar65[0xc] = 0xff;
      auVar65[0xd] = 0xff;
      auVar65[0xe] = 0xff;
      auVar65[0xf] = 0xff;
      fVar103 = (float)((uint)fVar103 ^
                       ((uint)fVar103 ^ (uint)(-3.1415927 - fVar103)) &
                       -(uint)(fVar103 < -1.5707964));
      fVar29 = (float)((uint)fVar29 ^
                      ((uint)fVar29 ^ (uint)(-3.1415927 - fVar29)) & -(uint)(fVar29 < -1.5707964));
      fVar111 = (float)((uint)fVar111 ^
                       ((uint)fVar111 ^ (uint)(-3.1415927 - fVar111)) &
                       -(uint)(fVar111 < -1.5707964));
      fVar112 = (float)((uint)fVar112 ^
                       ((uint)fVar112 ^ (uint)(-3.1415927 - fVar112)) &
                       -(uint)(fVar112 < -1.5707964));
      auVar40._0_4_ =
           (int)((float)(~-(uint)(0.0 <= fVar134) & 0x80000000 ^ 0x3f000000) + fVar134 * 0.15915494)
      ;
      auVar40._4_4_ =
           (int)((float)(~-(uint)(0.0 <= fVar135) & 0x80000000 ^ 0x3f000000) + fVar135 * 0.15915494)
      ;
      auVar40._8_4_ =
           (int)((float)(~-(uint)(0.0 <= fVar136) & 0x80000000 ^ 0x3f000000) + fVar136 * 0.15915494)
      ;
      auVar40._12_4_ = 0;
      auVar114 = NEON_scvtf(auVar40,4);
      fVar134 = fVar134 - auVar114._0_4_ * 6.2831855;
      fVar135 = fVar135 - auVar114._4_4_ * 6.2831855;
      fVar136 = fVar136 - auVar114._8_4_ * 6.2831855;
      fVar30 = 1.5707964 - auVar114._12_4_ * 6.2831855;
      fVar103 = (float)((uint)fVar103 ^
                       ((uint)fVar103 ^ (uint)(3.1415927 - fVar103)) & -(uint)(1.5707964 < fVar103))
      ;
      fVar29 = (float)((uint)fVar29 ^
                      ((uint)fVar29 ^ (uint)(3.1415927 - fVar29)) & -(uint)(1.5707964 < fVar29));
      fVar111 = (float)((uint)fVar111 ^
                       ((uint)fVar111 ^ (uint)(3.1415927 - fVar111)) & -(uint)(1.5707964 < fVar111))
      ;
      fVar112 = (float)((uint)fVar112 ^
                       ((uint)fVar112 ^ (uint)(3.1415927 - fVar112)) & -(uint)(1.5707964 < fVar112))
      ;
      fVar113 = fVar103 * fVar103;
      fVar119 = fVar29 * fVar29;
      fVar120 = fVar111 * fVar111;
      fVar121 = fVar112 * fVar112;
      fVar134 = (float)((uint)fVar134 ^
                       ((uint)fVar134 ^ (uint)(-3.1415927 - fVar134)) &
                       -(uint)(fVar134 < -1.5707964));
      fVar135 = (float)((uint)fVar135 ^
                       ((uint)fVar135 ^ (uint)(-3.1415927 - fVar135)) &
                       -(uint)(fVar135 < -1.5707964));
      fVar136 = (float)((uint)fVar136 ^
                       ((uint)fVar136 ^ (uint)(-3.1415927 - fVar136)) &
                       -(uint)(fVar136 < -1.5707964));
      fVar30 = (float)((uint)fVar30 ^
                      ((uint)fVar30 ^ (uint)(-3.1415927 - fVar30)) & -(uint)(fVar30 < -1.5707964));
      auVar36._8_4_ = 0x7fc00000;
      auVar36._0_8_ = 0x7fc000007fc00000;
      auVar36._12_4_ = 0x7fc00000;
      fVar134 = (float)((uint)fVar134 ^
                       ((uint)fVar134 ^ (uint)(3.1415927 - fVar134)) & -(uint)(1.5707964 < fVar134))
      ;
      fVar135 = (float)((uint)fVar135 ^
                       ((uint)fVar135 ^ (uint)(3.1415927 - fVar135)) & -(uint)(1.5707964 < fVar135))
      ;
      fVar136 = (float)((uint)fVar136 ^
                       ((uint)fVar136 ^ (uint)(3.1415927 - fVar136)) & -(uint)(1.5707964 < fVar136))
      ;
      fVar30 = (float)((uint)fVar30 ^
                      ((uint)fVar30 ^ (uint)(3.1415927 - fVar30)) & -(uint)(1.5707964 < fVar30));
      auVar114 = NEON_fmov(0x3f800000,4);
      fVar122 = fVar134 * fVar134;
      fVar124 = fVar135 * fVar135;
      fVar125 = fVar136 * fVar136;
      fVar126 = fVar30 * fVar30;
      auVar41._0_4_ =
           fVar134 * (auVar114._0_4_ +
                     fVar122 * (fVar122 * (fVar122 * (fVar122 * (fVar122 * -2.5052108e-08 +
                                                                2.7557319e-06) + -0.0001984127) +
                                          0.008333334) + -0.16666667));
      auVar41._4_4_ =
           fVar135 * (auVar114._4_4_ +
                     fVar124 * (fVar124 * (fVar124 * (fVar124 * (fVar124 * -2.5052108e-08 +
                                                                2.7557319e-06) + -0.0001984127) +
                                          0.008333334) + -0.16666667));
      auVar41._8_4_ =
           fVar136 * (auVar114._8_4_ +
                     fVar125 * (fVar125 * (fVar125 * (fVar125 * (fVar125 * -2.5052108e-08 +
                                                                2.7557319e-06) + -0.0001984127) +
                                          0.008333334) + -0.16666667));
      auVar41._12_4_ =
           fVar30 * (auVar114._12_4_ +
                    fVar126 * (fVar126 * (fVar126 * (fVar126 * (fVar126 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
      auVar41 = auVar41 ^ (auVar41 ^ auVar36) & ~auVar65;
      auVar66._0_4_ =
           fVar103 * (auVar114._0_4_ +
                     fVar113 * (fVar113 * (fVar113 * (fVar113 * (fVar113 * -2.5052108e-08 +
                                                                2.7557319e-06) + -0.0001984127) +
                                          0.008333334) + -0.16666667));
      auVar66._4_4_ =
           fVar29 * (auVar114._4_4_ +
                    fVar119 * (fVar119 * (fVar119 * (fVar119 * (fVar119 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
      auVar66._8_4_ =
           fVar111 * (auVar114._8_4_ +
                     fVar120 * (fVar120 * (fVar120 * (fVar120 * (fVar120 * -2.5052108e-08 +
                                                                2.7557319e-06) + -0.0001984127) +
                                          0.008333334) + -0.16666667));
      auVar66._12_4_ =
           fVar112 * (auVar114._12_4_ +
                     fVar121 * (fVar121 * (fVar121 * (fVar121 * (fVar121 * -2.5052108e-08 +
                                                                2.7557319e-06) + -0.0001984127) +
                                          0.008333334) + -0.16666667));
      auVar66 = auVar66 ^ (auVar66 ^ auVar36) & ~auVar35;
      fVar30 = auVar66._0_4_;
      auVar36 = auVar36 ^ (auVar36 ^ auVar41 ^ (auVar41 ^ auVar114) & ~auVar127) & auVar35;
      fVar134 = auVar36._0_4_;
      fVar135 = auVar36._4_4_;
      fVar103 = auVar66._4_4_;
      fVar136 = auVar36._8_4_;
      fVar29 = auVar66._8_4_;
      auVar76._4_4_ = fStack_138;
      auVar76._0_4_ = fStack_138;
      auVar76._8_4_ = fStack_138;
      auVar76._12_4_ = fStack_138;
      auVar77._4_12_ = auVar76._4_12_;
      auVar77._0_4_ = local_140;
      auVar79._0_8_ = auVar77._0_8_;
      auVar79._8_4_ = fStack_13c;
      auVar79._12_4_ = fStack_138;
      auVar78._8_8_ = auVar79._8_8_;
      auVar78._4_4_ = fStack_138;
      auVar78._0_4_ = local_140;
      auVar80._0_12_ = auVar78._0_12_;
      auVar80._12_4_ = fStack_138;
      fVar113 = (float)_UNK_03cab648;
      fVar119 = (float)((ulong)_UNK_03cab648 >> 0x20);
      fVar111 = (float)_DAT_03cab640;
      fVar112 = (float)((ulong)_DAT_03cab640 >> 0x20);
      auVar128 = NEON_ext(auVar80,auVar80,8,1);
      auVar37._0_4_ = fVar136 * fVar134 * fVar103 + fVar29 * fVar135 * fVar30 * (float)_DAT_03cab3a0
      ;
      auVar37._4_4_ =
           fVar29 * fVar134 * fVar135 +
           fVar136 * fVar103 * fVar30 * (float)((ulong)_DAT_03cab3a0 >> 0x20);
      auVar37._8_4_ = fVar136 * fVar30 * fVar135 + fVar29 * fVar103 * fVar134 * (float)_UNK_03cab3a8
      ;
      auVar37._12_4_ =
           fVar136 * fVar134 * fVar135 +
           fVar29 * fVar103 * fVar30 * (float)((ulong)_UNK_03cab3a8 >> 0x20);
      fVar134 = auVar128._0_4_;
      auVar81._4_12_ = auVar80._4_12_;
      auVar81._0_4_ = fVar134;
      auVar83._0_8_ = auVar81._0_8_;
      auVar83._8_4_ = auVar128._8_4_;
      auVar83._12_4_ = fStack_138;
      auVar82._8_8_ = auVar83._8_8_;
      auVar82._4_4_ = local_140;
      auVar82._0_4_ = fVar134;
      auVar84._0_12_ = auVar82._0_12_;
      auVar84._12_4_ = fStack_13c;
      auVar43._0_4_ = -auVar37._0_4_;
      fVar135 = -auVar37._4_4_;
      auVar42._8_4_ = -auVar37._8_4_;
      auVar105._4_4_ = auVar37._8_4_;
      auVar105._0_4_ = auVar37._8_4_;
      auVar105._8_4_ = auVar37._8_4_;
      auVar105._12_4_ = auVar37._8_4_;
      auVar106 = NEON_ext(auVar105,auVar37,0xc,1);
      auVar115._4_4_ = auVar37._4_4_;
      auVar115._0_4_ = auVar37._4_4_;
      auVar115._8_4_ = auVar37._4_4_;
      auVar115._12_4_ = auVar37._4_4_;
      auVar116 = NEON_ext(auVar115,auVar106,0xc,1);
      auVar114 = NEON_ext(auVar84,auVar128,8,1);
      auVar114 = NEON_ext(auVar114,auVar114,0xc,1);
      auVar98._0_4_ =
           (local_140 * auVar37._12_4_ + auVar37._0_4_ * fVar111 * 0.0 +
           auVar114._0_4_ * auVar116._0_4_ * fVar111) - auVar106._0_4_ * fVar134;
      auVar98._4_4_ =
           (fStack_13c * auVar37._12_4_ + auVar37._4_4_ * fVar112 * 0.0 +
           auVar114._4_4_ * auVar116._4_4_ * fVar112) - auVar106._4_4_ * auVar128._4_4_;
      auVar98._8_4_ =
           (fStack_138 * auVar37._12_4_ + auVar37._8_4_ * fVar113 * 0.0 +
           auVar114._8_4_ * auVar116._8_4_ * fVar113) - auVar106._8_4_ * auVar128._8_4_;
      auVar98._12_4_ =
           (auVar37._12_4_ * 0.0 + local_140 * auVar37._0_4_ * fVar119 +
           auVar114._12_4_ * auVar116._12_4_ * fVar119) - auVar106._12_4_ * auVar128._12_4_;
      auVar42._4_4_ = auVar42._8_4_;
      auVar42._0_4_ = auVar42._8_4_;
      auVar42._12_4_ = auVar42._8_4_;
      auVar32._4_4_ = auVar98._8_4_;
      auVar32._0_4_ = auVar98._8_4_;
      auVar32._8_4_ = auVar98._8_4_;
      auVar32._12_4_ = auVar98._8_4_;
      auVar38._4_4_ = auVar98._4_4_;
      auVar38._0_4_ = auVar98._4_4_;
      auVar38._8_4_ = auVar98._4_4_;
      auVar38._12_4_ = auVar98._4_4_;
      auVar114 = NEON_ext(auVar32,auVar98,0xc,1);
      auVar106 = NEON_ext(auVar38,auVar114,0xc,1);
      auVar43._4_12_ = auVar42._4_12_;
      auVar45._0_8_ = auVar43._0_8_;
      auVar45._8_4_ = fVar135;
      auVar45._12_4_ = auVar42._8_4_;
      auVar44._8_8_ = auVar45._8_8_;
      auVar44._4_4_ = auVar42._8_4_;
      auVar44._0_4_ = auVar43._0_4_;
      auVar46._0_12_ = auVar44._0_12_;
      auVar46._12_4_ = auVar42._8_4_;
      auVar128 = NEON_ext(auVar46,auVar46,8,1);
      fVar134 = auVar128._0_4_;
      auVar47._4_12_ = auVar46._4_12_;
      auVar47._0_4_ = fVar134;
      auVar49._0_8_ = auVar47._0_8_;
      auVar49._8_4_ = auVar128._8_4_;
      auVar49._12_4_ = auVar42._8_4_;
      auVar48._8_8_ = auVar49._8_8_;
      auVar48._4_4_ = auVar43._0_4_;
      auVar48._0_4_ = fVar134;
      auVar50._0_12_ = auVar48._0_12_;
      auVar50._12_4_ = fVar135;
      auVar116 = NEON_ext(auVar50,auVar128,8,1);
      auVar116 = NEON_ext(auVar116,auVar116,0xc,1);
      local_140 = (auVar43._0_4_ * auVar98._12_4_ + auVar37._12_4_ * auVar98._0_4_ * fVar111 +
                  auVar116._0_4_ * auVar106._0_4_ * fVar111) - auVar114._0_4_ * fVar134;
      fStack_13c = (fVar135 * auVar98._12_4_ + auVar37._12_4_ * auVar98._4_4_ * fVar112 +
                   auVar116._4_4_ * auVar106._4_4_ * fVar112) - auVar114._4_4_ * auVar128._4_4_;
      fStack_138 = (auVar42._8_4_ * auVar98._12_4_ + auVar37._12_4_ * auVar98._8_4_ * fVar113 +
                   auVar116._8_4_ * auVar106._8_4_ * fVar113) - auVar114._8_4_ * auVar128._8_4_;
      fStack_134 = 0.0;
    }
    auVar114 = *(undefined1 (*) [16])(lVar14 + 0x50);
    local_140 = local_140 + auVar114._0_4_;
    fStack_13c = fStack_13c + auVar114._4_4_;
    fStack_138 = fStack_138 + auVar114._8_4_;
    fStack_134 = fStack_134 + auVar114._12_4_;
  }
LAB_0221f5fc:
  local_130 = (ulong *)0x0;
  uStack_128 = 0;
  FUN_00d0a71c(&local_130,&local_70);
  lVar14 = FUN_01180e7c(param_1,&local_130);
  puVar9 = local_130;
  if (local_130 != (ulong *)0x0) {
    puVar1 = local_130 + 3;
    do {
      sVar21 = (short)*puVar1;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar20) {
        *(short *)puVar1 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar15 = (int *)((long)local_130 + 0x1c);
      do {
        iVar10 = *piVar15;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar20) {
          *piVar15 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_d0 = *puVar9;
        FUN_00c44438(lVar16 + 0x8040,&local_d0);
      }
    }
    else if (sVar21 == 0) goto LAB_0221ef8c;
  }
  if (lVar14 != 0) {
    piVar15 = (int *)*param_1;
    puVar19 = (ushort *)((long)piVar15 - (long)*piVar15);
    if (*puVar19 < 0xb) {
      iVar133 = 0;
      iVar10 = 0;
      iVar132 = 0;
      if (8 < *puVar19) goto LAB_0221f64c;
    }
    else {
      iVar132 = 0;
      if ((ulong)puVar19[5] != 0) {
        iVar132 = *(int *)((long)piVar15 + (ulong)puVar19[5]);
      }
LAB_0221f64c:
      iVar133 = iVar132;
      if ((ulong)puVar19[4] == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)((long)piVar15 + (ulong)puVar19[4]);
      }
    }
    if (iVar133 - iVar10 == 1) {
      auVar7._8_4_ = fStack_138;
      auVar7._0_8_ = CONCAT44(fStack_13c,local_140);
      auVar7._12_4_ = fStack_134;
      *(undefined1 *)(lVar14 + 0xe0) = 1;
      *(long *)(lVar14 + 0x58) = auVar7._8_8_;
      *(ulong *)(lVar14 + 0x50) = CONCAT44(fStack_13c,local_140);
    }
    else {
      puVar11 = (undefined8 *)FUN_01235878(param_1 + 0x2b,&DAT_03d634b8);
      puVar8 = PTR_LAB_047dcdd0;
      *puVar11 = PTR_LAB_047dcdd0;
      puVar11[3] = CONCAT44(fStack_134,fStack_138);
      puVar11[2] = CONCAT44(fStack_13c,local_140);
      auVar114 = *(undefined1 (*) [16])(lVar14 + 0x50);
      puVar11 = (undefined8 *)FUN_01235878(param_1 + 0x2b,&DAT_03d634c0);
      *puVar11 = puVar8;
      puVar11[3] = auVar114._8_8_;
      puVar11[2] = auVar114._0_8_;
    }
  }
  (**(code **)(*plVar17 + 0x60))(plVar17);
  goto LAB_0221eee0;
code_r0x0221f930:
  sVar21 = sVar4;
  if (sVar4 == 0) goto LAB_0221f5fc;
  goto LAB_0221f904;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011665e0; name: FUN_011665e0
 */


void FUN_011665e0(long param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  short *psVar2;
  uint *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  long *plVar6;
  uint uVar7;
  ushort uVar8;
  short sVar9;
  char cVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  int *piVar25;
  long lVar26;
  ushort *puVar27;
  short sVar28;
  ushort *puVar29;
  undefined4 uVar30;
  int iVar31;
  undefined8 uVar32;
  long *plVar33;
  ulong uVar34;
  undefined4 uVar35;
  long *plVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  undefined1 auVar42 [16];
  float local_180;
  float fStack_17c;
  float fStack_178;
  undefined4 uStack_174;
  long *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 auStack_128 [24];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_100 [16];
  uint local_f0;
  int local_ec;
  undefined4 local_e8;
  float local_e4;
  float fStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  undefined **local_b8;
  long *local_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  local_b8 = &PTR_FUN_0459d010;
  local_b0 = (long *)0x0;
  local_a8 = 0;
  local_a0 = (long *)0x0;
  lVar19 = *(long *)(param_1 + 0xd0) + (param_2 >> 2 & 0x3fffffff) * 0x40;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uVar32 = *(undefined8 *)(lVar19 + 0x10);
  FUN_01169468(&local_140,uVar32);
  plVar33 = local_b0;
  if ((local_140 != (undefined8 *)0x0) && (*(short *)((long)local_140 + 0x1a) != 0)) {
    psVar2 = (short *)((long)local_140 + 0x1a);
    sVar28 = *(short *)((long)local_140 + 0x1a);
LAB_01167378:
    sVar9 = *psVar2;
    if (sVar9 == sVar28) {
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar14) {
        *psVar2 = sVar28 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
      if (cVar10 != '\0') goto LAB_0116739c;
      bVar14 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0116739c:
      bVar14 = false;
    }
    if (!bVar14) goto code_r0x011673a4;
    lVar20 = local_140[2];
    if (lVar20 != 0) {
      local_b0 = (long *)0x0;
      if (plVar33 != (long *)0x0) {
        lVar26 = plVar33[6];
        psVar2 = (short *)(lVar26 + 0x1a);
        do {
          sVar28 = *psVar2;
          cVar10 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar14) {
            *psVar2 = sVar28 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (sVar28 == 1) {
          *(undefined8 *)(lVar26 + 0x10) = 0;
          (**(code **)(*plVar33 + 0x50))();
        }
        else if (sVar28 == 0) goto LAB_0116744c;
      }
      local_b0 = (long *)(lVar20 + -0x28);
      goto LAB_01166660;
    }
  }
LAB_01166650:
  uVar32 = 0;
  local_b0 = (long *)0x0;
  if (plVar33 != (long *)0x0) {
    lVar20 = plVar33[6];
    psVar2 = (short *)(lVar20 + 0x1a);
    do {
      sVar28 = *psVar2;
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar14) {
        *psVar2 = sVar28 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar28 == 1) {
      *(undefined8 *)(lVar20 + 0x10) = 0;
      (**(code **)(*plVar33 + 0x50))();
    }
    else if (sVar28 == 0) goto LAB_0116744c;
    uVar32 = 0;
  }
LAB_01166660:
  puVar5 = local_140;
  local_a8 = uVar32;
  if (local_140 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_140 + 3);
    do {
      sVar28 = *psVar2;
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar14) {
        *psVar2 = sVar28 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar28 == 1) {
      piVar25 = (int *)((long)local_140 + 0x1c);
      do {
        iVar18 = *piVar25;
        cVar10 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar25,0x10);
        if (bVar14) {
          *piVar25 = -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar18 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar18 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar18 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar20 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar20;
        local_170 = (long *)*puVar5;
        FUN_00c44438(lVar20 + 0x8040,&local_170);
      }
    }
    else if (sVar28 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  plVar33 = *(long **)(lVar19 + 0x18);
  if (plVar33 != (long *)0x0) {
    lVar20 = plVar33[6];
    if (*(long *)(lVar20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar20 + 0x1a);
    do {
      sVar28 = *psVar2;
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar14) {
        *psVar2 = sVar28 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar28 == 0) {
      uVar32 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
      *(undefined8 *)(lVar20 + 8) = uVar32;
      *(undefined4 *)(lVar20 + 0x1c) = 0xfffffffe;
    }
    else if (sVar28 == -1) {
      pcVar21 = "count != 0";
      pcVar22 = "AddReference";
      pcVar23 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
      ;
      pcVar24 = "Reference counter overflows.";
      goto LAB_01167030;
    }
  }
  if (local_a0 != (long *)0x0) {
    lVar20 = local_a0[6];
    psVar2 = (short *)(lVar20 + 0x1a);
    do {
      sVar28 = *psVar2;
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar14) {
        *psVar2 = sVar28 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar28 == 1) {
      *(undefined8 *)(lVar20 + 0x10) = 0;
      lVar20 = *local_a0;
      local_a0 = plVar33;
      (**(code **)(lVar20 + 0x50))();
      plVar33 = local_a0;
    }
    else {
      local_a0 = plVar33;
      if (sVar28 == 0) {
LAB_0116744c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  local_a0 = plVar33;
  FUN_00cef9d0(&local_98,lVar19 + 0x20);
  FUN_00ceffd4(&local_88,lVar19 + 0x30);
  local_b8 = &PTR_FUN_0459cff0;
  if (local_b0 == (long *)0x0) goto LAB_01167204;
  piVar25 = *(int **)((long)local_b0 + 0x210);
  puVar27 = (ushort *)((long)piVar25 - (long)*piVar25);
  if ((*puVar27 < 5) || ((ulong)puVar27[2] == 0)) goto LAB_01167204;
  puVar3 = (uint *)((long)piVar25 + (ulong)puVar27[2]);
  piVar4 = (int *)((long)puVar3 + (ulong)*puVar3);
  puVar29 = (ushort *)((long)piVar4 - (long)*piVar4);
  uVar8 = *puVar29;
  if ((uVar8 < 5) ||
     (((ulong)puVar29[2] == 0 ||
      (iVar18 = *(int *)((long)piVar4 + (ulong)puVar29[2]), iVar18 != 1 && iVar18 != 3))))
  goto LAB_01167204;
  if (6 < uVar8) {
    iVar17 = 0;
    if ((ulong)puVar29[3] != 0) {
      iVar17 = *(int *)((long)piVar4 + (ulong)puVar29[3]);
    }
    if (uVar8 < 9) {
      iVar31 = 0;
    }
    else {
      iVar31 = 0;
      if ((ulong)puVar29[4] != 0) {
        iVar31 = *(int *)((long)piVar4 + (ulong)puVar29[4]);
      }
    }
    if (iVar17 != iVar31) goto LAB_01167204;
  }
  uVar30 = 4;
  if (iVar18 == 3) {
    uVar30 = 1;
  }
  if ((*puVar27 < 7) || ((ulong)puVar27[3] == 0)) goto LAB_01167204;
  puVar3 = (uint *)((long)piVar25 + (ulong)puVar27[3]);
  auVar11 = *(undefined1 (*) [16])(*(long *)(param_1 + 0x38) + 0x310);
  auVar12 = *(undefined1 (*) [16])(*(long *)(param_1 + 0x38) + 800);
  uVar7 = *puVar3;
  plVar33 = *(long **)(param_1 + 8);
  if ((uVar8 < 7) || ((ulong)puVar29[3] == 0)) {
    uVar35 = 0;
  }
  else {
    uVar35 = *(undefined4 *)((long)piVar4 + (ulong)puVar29[3]);
  }
  uVar45 = auVar12._8_8_;
  uVar32 = auVar12._0_8_;
  if (((DAT_04865a38 & 1) == 0) && (iVar18 = __cxa_guard_acquire(&DAT_04865a38), iVar18 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar19 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_011675bc;
  *(long **)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = plVar33;
  *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
  lVar20 = (**(code **)(*plVar33 + 0x10))(plVar33,0x48,8);
  if (lVar20 != 0) {
    FUN_01168e8c(lVar20,(long)puVar3 + (ulong)uVar7 + 4,uVar30,(uint)param_2 & 3,uVar35);
    *(undefined4 *)(lVar20 + 0x18) = 0x80048;
    *(long **)(lVar20 + 8) = plVar33;
    *(long *)(lVar20 + 0x10) = lVar20;
    *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
    piVar25 = (int *)(lVar20 + 0x28);
    do {
      iVar18 = *piVar25;
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(piVar25,0x10);
      if (bVar14) {
        *piVar25 = iVar18 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar18 == -1) goto LAB_01167594;
    lVar19 = *(long *)(param_1 + 0x108);
    plVar33 = *(long **)(lVar19 + (param_2 & 0xffffffff) * 8);
    *(undefined8 *)(lVar19 + (param_2 & 0xffffffff) * 8) = 0;
    if (plVar33 != (long *)0x0) {
      plVar36 = plVar33 + 5;
      do {
        lVar26 = *plVar36;
        iVar18 = (int)lVar26 + -1;
        cVar10 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar36,0x10);
        if (bVar14) {
          *(int *)plVar36 = iVar18;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar18 == 0) {
        (**(code **)(*plVar33 + 0x10))();
        goto LAB_01166848;
      }
      if ((int)lVar26 != 0) goto LAB_01166848;
LAB_01167010:
      pcVar21 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar22 = "DecrementReferenceInternal";
      pcVar23 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar24 = "Reference counter underflows.";
LAB_01167030:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar21,pcVar22,pcVar23,0x58,pcVar24);
    }
LAB_01166848:
    uVar34 = param_2 & 0xffffffff;
    *(long *)(lVar19 + uVar34 * 8) = lVar20;
    puVar5 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 0x288) + uVar34 * 0x80);
    local_140 = (undefined8 *)*puVar5;
    local_138 = puVar5[1];
    local_130 = puVar5[2];
    memcpy(auStack_128,puVar5 + 3,100);
    if (local_f0 < 2) {
      iVar18 = 0;
    }
    else if (local_f0 < 4) {
      iVar18 = 1;
    }
    else {
      iVar17 = (int)local_f0 >> 3;
      if (iVar17 == 0) {
        iVar18 = 2;
      }
      else {
        iVar18 = 2;
        do {
          iVar17 = iVar17 >> 1;
          iVar18 = iVar18 + 1;
        } while (iVar17 != 0);
      }
    }
    local_170 = (long *)CONCAT44(local_170._4_4_,iVar18);
    iVar17 = (**(code **)(param_1 + 0x1d0))(param_1 + 0x1f0,&local_140,&local_170);
    iVar18 = iVar17 + -1;
    if (2 < iVar17 - 2U) {
      iVar18 = 1;
    }
    if (iVar18 == 0) {
      iVar17 = 2;
    }
    else {
      iVar18 = iVar18 + -1;
      if (iVar18 == 0) {
        iVar17 = 4;
      }
      else {
        iVar31 = 8;
        do {
          iVar17 = iVar31;
          iVar18 = iVar18 + -1;
          iVar31 = iVar17 << 1;
        } while (iVar18 != 0);
      }
    }
    plVar33 = *(long **)(param_1 + 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar18 = __cxa_guard_acquire(&DAT_04865a38), iVar18 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar19 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar19 + 0x80)) {
LAB_011675bc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = plVar33;
    *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
    lVar20 = (**(code **)(*plVar33 + 0x10))(plVar33,0x110,0x10);
    if (lVar20 != 0) {
      FUN_01169808(lVar20,iVar17);
      *(undefined4 *)(lVar20 + 0x18) = 0x100110;
      *(long **)(lVar20 + 8) = plVar33;
      *(long *)(lVar20 + 0x10) = lVar20;
      *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
      piVar25 = (int *)(lVar20 + 0x28);
      do {
        iVar18 = *piVar25;
        cVar10 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar25,0x10);
        if (bVar14) {
          *piVar25 = iVar18 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar18 == -1) {
LAB_01167594:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      lVar19 = *(long *)(param_1 + 0x98);
      plVar33 = *(long **)(lVar19 + uVar34 * 8);
      *(undefined8 *)(lVar19 + uVar34 * 8) = 0;
      if (plVar33 != (long *)0x0) {
        plVar36 = plVar33 + 5;
        do {
          lVar26 = *plVar36;
          iVar18 = (int)lVar26 + -1;
          cVar10 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar36,0x10);
          if (bVar14) {
            *(int *)plVar36 = iVar18;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar18 == 0) {
          (**(code **)(*plVar33 + 0x10))();
        }
        else if ((int)lVar26 == 0) goto LAB_01167010;
      }
      *(long *)(lVar19 + uVar34 * 8) = lVar20;
      if (*(long *)(param_1 + 0x38) == 0) {
        lVar19 = FUN_00da5204();
      }
      else {
        lVar19 = *(long *)(param_1 + 0x38) + 0x40;
      }
      FUN_00ffd4c8(&local_170,lVar19,&local_140,&DAT_03c886bc);
      lVar19 = *(long *)(*(long *)(param_1 + 0x98) + uVar34 * 8);
      plVar33 = *(long **)(lVar19 + 0xa0);
      *(undefined8 *)(lVar19 + 0xa0) = 0;
      if (plVar33 != (long *)0x0) {
        (**(code **)(*plVar33 + 0x20))();
      }
      plVar33 = local_170;
      local_170 = (long *)0x0;
      *(long **)(lVar19 + 0xa0) = plVar33;
      *(undefined8 *)(lVar19 + 0xa8) = local_168;
      *(undefined8 *)(lVar19 + 0xb0) = local_160;
      *(undefined8 *)(lVar19 + 0xb8) = local_158;
      plVar33 = *(long **)(lVar19 + 0xc0);
      *(undefined8 *)(lVar19 + 0xc0) = 0;
      if (plVar33 != (long *)0x0) {
        (**(code **)(*plVar33 + 0x20))(plVar33);
      }
      uVar13 = local_150;
      local_150 = 0;
      *(undefined8 *)(lVar19 + 0xc0) = uVar13;
      *(undefined4 *)(lVar19 + 200) = local_148;
      if (local_170 != (long *)0x0) {
        (**(code **)(*local_170 + 0x20))();
      }
      *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x98) + uVar34 * 8) + 0xd4) = local_e8;
      iVar18 = 0x40;
      if ((param_3 & 1) == 0) {
        iVar18 = local_ec;
      }
      lVar19 = *(long *)(*(long *)(param_1 + 0x98) + uVar34 * 8);
      plVar36 = *(long **)(lVar19 + 0x30);
      plVar6 = *(long **)(lVar19 + 0x38);
      if (plVar36 == plVar6) {
        *(long *)(lVar19 + 0xe8) = auVar11._8_8_;
        *(long *)(lVar19 + 0xe0) = auVar11._0_8_;
        *(undefined8 *)(lVar19 + 0xf8) = uVar45;
        *(undefined8 *)(lVar19 + 0xf0) = uVar32;
LAB_011671e0:
        uVar34 = uVar34 >> 3 & 0x1ffffffc;
        *(uint *)(*(long *)(param_1 + 0x158) + uVar34) =
             *(uint *)(*(long *)(param_1 + 0x158) + uVar34) | 1 << (ulong)((uint)param_2 & 0x1f);
LAB_01167204:
        FUN_01168d28(&local_b8);
        return;
      }
      while( true ) {
        plVar33 = *(long **)(param_1 + 8);
        if (((DAT_04865a38 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_04865a38), iVar17 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar19 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_011675bc;
        *(long **)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = plVar33;
        *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
        lVar20 = (**(code **)(*plVar33 + 0x10))(plVar33,0x68,8);
        if (lVar20 == 0) break;
        FUN_01167908(lVar20,iVar18);
        *(undefined4 *)(lVar20 + 0x18) = 0x80068;
        *(long **)(lVar20 + 8) = plVar33;
        *(long *)(lVar20 + 0x10) = lVar20;
        *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
        piVar25 = (int *)(lVar20 + 0x28);
        do {
          iVar17 = *piVar25;
          cVar10 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar25,0x10);
          if (bVar14) {
            *piVar25 = iVar17 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar17 == -1) goto LAB_01167594;
        plVar33 = (long *)*plVar36;
        *plVar36 = 0;
        if (plVar33 != (long *)0x0) {
          plVar1 = plVar33 + 5;
          do {
            lVar19 = *plVar1;
            iVar17 = (int)lVar19 + -1;
            cVar10 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar14) {
              *(int *)plVar1 = iVar17;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar17 == 0) {
            (**(code **)(*plVar33 + 0x10))();
          }
          else if ((int)lVar19 == 0) goto LAB_01167010;
        }
        *plVar36 = lVar20;
        FUN_01167660(*(undefined8 *)(lVar20 + 0x30),*(long *)(param_1 + 0x108) + uVar34 * 8);
        lVar19 = *plVar36;
        lVar20 = *(long *)(param_1 + 0x140);
        if (lVar20 != 0) {
          piVar25 = (int *)(lVar20 + 0x28);
          do {
            iVar17 = *piVar25;
            cVar10 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar25,0x10);
            if (bVar14) {
              *piVar25 = iVar17 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar17 == -1) goto LAB_01167594;
        }
        plVar33 = *(long **)(lVar19 + 0x40);
        *(long *)(lVar19 + 0x40) = lVar20;
        if (plVar33 != (long *)0x0) {
          plVar1 = plVar33 + 5;
          do {
            lVar19 = *plVar1;
            iVar17 = (int)lVar19 + -1;
            cVar10 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar14) {
              *(int *)plVar1 = iVar17;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar17 == 0) {
            (**(code **)(*plVar33 + 0x10))();
          }
          else if ((int)lVar19 == 0) goto LAB_01167010;
        }
        lVar19 = *plVar36;
        lVar20 = *(long *)(param_1 + 0x148);
        if (lVar20 != 0) {
          piVar25 = (int *)(lVar20 + 0x28);
          do {
            iVar17 = *piVar25;
            cVar10 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar25,0x10);
            if (bVar14) {
              *piVar25 = iVar17 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar17 == -1) goto LAB_01167594;
        }
        plVar33 = *(long **)(lVar19 + 0x48);
        *(long *)(lVar19 + 0x48) = lVar20;
        if (plVar33 != (long *)0x0) {
          plVar1 = plVar33 + 5;
          do {
            lVar19 = *plVar1;
            iVar17 = (int)lVar19 + -1;
            cVar10 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar14) {
              *(int *)plVar1 = iVar17;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar17 == 0) {
            (**(code **)(*plVar33 + 0x10))();
          }
          else if ((int)lVar19 == 0) goto LAB_01167010;
        }
        lVar19 = *plVar36;
        lVar20 = *(long *)(param_1 + 0x150);
        if (lVar20 != 0) {
          piVar25 = (int *)(lVar20 + 0x28);
          do {
            iVar17 = *piVar25;
            cVar10 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar25,0x10);
            if (bVar14) {
              *piVar25 = iVar17 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar17 == -1) goto LAB_01167594;
        }
        plVar33 = *(long **)(lVar19 + 0x50);
        *(long *)(lVar19 + 0x50) = lVar20;
        if (plVar33 != (long *)0x0) {
          plVar1 = plVar33 + 5;
          do {
            lVar19 = *plVar1;
            iVar17 = (int)lVar19 + -1;
            cVar10 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar14) {
              *(int *)plVar1 = iVar17;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar17 == 0) {
            (**(code **)(*plVar33 + 0x10))();
          }
          else if ((int)lVar19 == 0) goto LAB_01167010;
        }
        iVar17 = local_ec;
        lVar20 = *(long *)(*plVar36 + 0x30);
        plVar33 = (long *)(lVar20 + 0x1b8);
        lVar19 = nn::os::GetCurrentThread();
LAB_01166cd8:
        if (*plVar33 == 0) goto code_r0x01166ce0;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x1c0));
        do {
          if (*plVar33 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x1c0));
              while (*plVar33 == 0) {
                cVar10 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                if (bVar14) {
                  *plVar33 = lVar19;
                  cVar10 = ExclusiveMonitorsStatus();
                }
                if (cVar10 == '\0') goto LAB_01166ce8;
              }
            } while( true );
          }
          cVar10 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar14) {
            *plVar33 = lVar19;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
LAB_01166ce8:
        if (*(int *)(lVar20 + 0x120) != iVar17) {
          *(int *)(lVar20 + 0x120) = iVar17;
          *(undefined1 *)(lVar20 + 0x1b0) = 1;
          *(undefined1 *)(lVar20 + 0x170) = 0;
          *(undefined8 *)(lVar20 + 0x174) = 0;
          *(undefined8 *)(lVar20 + 0x17c) = 0;
        }
        *(undefined8 *)(lVar20 + 0x1b8) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar20 + 0x1c0));
        fVar39 = fStack_e0;
        fVar38 = local_e4;
        lVar20 = *(long *)(*plVar36 + 0x30);
        plVar33 = (long *)(lVar20 + 0x1b8);
        lVar19 = nn::os::GetCurrentThread();
        while (*plVar33 == 0) {
          cVar10 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar14) {
            *plVar33 = lVar19;
            cVar10 = ExclusiveMonitorsStatus();
          }
          if (cVar10 == '\0') goto LAB_01166d2c;
        }
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x1c0));
        do {
          if (*plVar33 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x1c0));
              while (*plVar33 == 0) {
                cVar10 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                if (bVar14) {
                  *plVar33 = lVar19;
                  cVar10 = ExclusiveMonitorsStatus();
                }
                if (cVar10 == '\0') goto LAB_01166d2c;
              }
            } while( true );
          }
          cVar10 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar14) {
            *plVar33 = lVar19;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
LAB_01166d2c:
        fVar37 = *(float *)(lVar20 + 0xd4) - fVar38;
        bVar14 = true;
        if ((fVar37 <= 1.1920929e-07) && (bVar14 = false, !NAN(fVar37))) {
          bVar14 = fVar37 < -1.1920929e-07;
        }
        if (bVar14) {
          *(float *)(lVar20 + 0xd4) = fVar38;
          *(undefined1 *)(lVar20 + 0x1b0) = 1;
          *(undefined1 *)(lVar20 + 0x170) = 0;
          *(undefined8 *)(lVar20 + 0x174) = 0;
          *(undefined8 *)(lVar20 + 0x17c) = 0;
        }
        fVar38 = *(float *)(lVar20 + 0xd8) - fVar39;
        bVar14 = true;
        if ((fVar38 <= 1.1920929e-07) && (bVar14 = false, !NAN(fVar38))) {
          bVar14 = fVar38 < -1.1920929e-07;
        }
        if (bVar14) {
          *(float *)(lVar20 + 0xd8) = fVar39;
          *(undefined1 *)(lVar20 + 0x1b0) = 1;
          *(undefined1 *)(lVar20 + 0x170) = 0;
          *(undefined8 *)(lVar20 + 0x174) = 0;
          *(undefined8 *)(lVar20 + 0x17c) = 0;
        }
        *(undefined8 *)(lVar20 + 0x1b8) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar20 + 0x1c0));
        fVar39 = fStack_cc;
        fVar38 = local_d0;
        lVar20 = *(long *)(*plVar36 + 0x30);
        plVar33 = (long *)(lVar20 + 0x1b8);
        lVar19 = nn::os::GetCurrentThread();
        while (*plVar33 == 0) {
          cVar10 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar14) {
            *plVar33 = lVar19;
            cVar10 = ExclusiveMonitorsStatus();
          }
          if (cVar10 == '\0') goto LAB_01166dc4;
        }
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x1c0));
        do {
          if (*plVar33 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x1c0));
              while (*plVar33 == 0) {
                cVar10 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                if (bVar14) {
                  *plVar33 = lVar19;
                  cVar10 = ExclusiveMonitorsStatus();
                }
                if (cVar10 == '\0') goto LAB_01166dc4;
              }
            } while( true );
          }
          cVar10 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar14) {
            *plVar33 = lVar19;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
LAB_01166dc4:
        fVar37 = *(float *)(lVar20 + 0xdc) - fVar38;
        bVar14 = true;
        if ((fVar37 <= 1.1920929e-07) && (bVar14 = false, !NAN(fVar37))) {
          bVar14 = fVar37 < -1.1920929e-07;
        }
        if (bVar14) {
          *(float *)(lVar20 + 0xdc) = fVar38;
          *(undefined1 *)(lVar20 + 0x1b0) = 1;
          *(undefined1 *)(lVar20 + 0x170) = 0;
          *(undefined8 *)(lVar20 + 0x174) = 0;
          *(undefined8 *)(lVar20 + 0x17c) = 0;
        }
        fVar38 = *(float *)(lVar20 + 0xe0) - fVar39;
        bVar14 = true;
        if ((fVar38 <= 1.1920929e-07) && (bVar14 = false, !NAN(fVar38))) {
          bVar14 = fVar38 < -1.1920929e-07;
        }
        if (bVar14) {
          *(float *)(lVar20 + 0xe0) = fVar39;
          *(undefined1 *)(lVar20 + 0x1b0) = 1;
          *(undefined1 *)(lVar20 + 0x170) = 0;
          *(undefined8 *)(lVar20 + 0x174) = 0;
          *(undefined8 *)(lVar20 + 0x17c) = 0;
        }
        *(undefined8 *)(lVar20 + 0x1b8) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar20 + 0x1c0));
        fVar38 = local_c8;
        lVar20 = *(long *)(*plVar36 + 0x30);
        plVar33 = (long *)(lVar20 + 0x1b8);
        lVar19 = nn::os::GetCurrentThread();
        while (*plVar33 == 0) {
          cVar10 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar14) {
            *plVar33 = lVar19;
            cVar10 = ExclusiveMonitorsStatus();
          }
          if (cVar10 == '\0') goto LAB_01166e5c;
        }
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x1c0));
        do {
          if (*plVar33 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x1c0));
              while (*plVar33 == 0) {
                cVar10 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                if (bVar14) {
                  *plVar33 = lVar19;
                  cVar10 = ExclusiveMonitorsStatus();
                }
                if (cVar10 == '\0') goto LAB_01166e5c;
              }
            } while( true );
          }
          cVar10 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar14) {
            *plVar33 = lVar19;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
LAB_01166e5c:
        fVar39 = *(float *)(lVar20 + 0xe4) - fVar38;
        bVar14 = true;
        if ((fVar39 <= 1.1920929e-07) && (bVar14 = false, !NAN(fVar39))) {
          bVar14 = fVar39 < -1.1920929e-07;
        }
        if (bVar14) {
          *(float *)(lVar20 + 0xe4) = fVar38;
          *(undefined1 *)(lVar20 + 0x1b0) = 1;
          *(undefined1 *)(lVar20 + 0x170) = 0;
          *(undefined8 *)(lVar20 + 0x174) = 0;
          *(undefined8 *)(lVar20 + 0x17c) = 0;
        }
        *(undefined8 *)(lVar20 + 0x1b8) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar20 + 0x1c0));
        FUN_011677a8(local_dc,uStack_d8,local_d4,*(undefined8 *)(*plVar36 + 0x30));
        lVar19 = *(long *)(*plVar36 + 0x30);
        *(undefined8 *)(lVar19 + 0x108) = uStack_108;
        *(undefined8 *)(lVar19 + 0x100) = local_110;
        plVar33 = plVar36 + 1;
        lVar19 = *(long *)(*plVar36 + 0x30);
        *(long *)(lVar19 + 0x118) = local_100._8_8_;
        *(long *)(lVar19 + 0x110) = local_100._0_8_;
        plVar36 = plVar33;
        if (plVar33 == plVar6) {
          local_180 = auVar11._0_4_;
          fStack_17c = auVar11._4_4_;
          fStack_178 = auVar11._8_4_;
          uStack_174 = auVar11._12_4_;
          lVar19 = *(long *)(*(long *)(param_1 + 0x98) + uVar34 * 8);
          *(float *)(lVar19 + 0xe8) = fStack_178;
          *(undefined4 *)(lVar19 + 0xec) = uStack_174;
          *(float *)(lVar19 + 0xe0) = local_180;
          *(float *)(lVar19 + 0xe4) = fStack_17c;
          *(undefined8 *)(lVar19 + 0xf8) = uVar45;
          *(undefined8 *)(lVar19 + 0xf0) = uVar32;
          plVar33 = *(long **)(lVar19 + 0x30);
          plVar36 = *(long **)(lVar19 + 0x38);
          do {
            if (plVar33 == plVar36) goto LAB_011671e0;
            lVar20 = *(long *)(*plVar33 + 0x30);
            plVar6 = (long *)(lVar20 + 0x1b8);
            lVar19 = nn::os::GetCurrentThread();
            while (*plVar6 == 0) {
              cVar10 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar14) {
                *plVar6 = lVar19;
                cVar10 = ExclusiveMonitorsStatus();
              }
              if (cVar10 == '\0') goto LAB_01167088;
            }
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x1c0));
            do {
              if (*plVar6 != 0) {
                do {
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x1c0));
                  while (*plVar6 == 0) {
                    cVar10 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                    if (bVar14) {
                      *plVar6 = lVar19;
                      cVar10 = ExclusiveMonitorsStatus();
                    }
                    if (cVar10 == '\0') goto LAB_01167088;
                  }
                } while( true );
              }
              cVar10 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar14) {
                *plVar6 = lVar19;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
LAB_01167088:
            fVar38 = *(float *)(lVar20 + 400) - local_180;
            fVar39 = *(float *)(lVar20 + 0x194) - fStack_17c;
            fVar37 = *(float *)(lVar20 + 0x198) - fStack_178;
            fVar41 = *(float *)(lVar20 + 0x1a0) - auVar12._0_4_;
            fVar43 = *(float *)(lVar20 + 0x1a4) - auVar12._4_4_;
            fVar44 = *(float *)(lVar20 + 0x1a8) - auVar12._8_4_;
            fVar38 = fVar38 * fVar38;
            fVar39 = fVar39 * fVar39;
            fVar37 = fVar37 * fVar37;
            fVar41 = fVar41 * fVar41;
            fVar43 = fVar43 * fVar43;
            fVar44 = fVar44 * fVar44;
            auVar40._0_4_ = fVar38 + fVar39;
            auVar40._4_4_ = fVar37 + 0.0;
            auVar40._8_4_ = fVar38 + fVar39;
            auVar40._12_4_ = fVar37 + 0.0;
            auVar42._0_4_ = fVar41 + fVar43;
            auVar42._4_4_ = fVar44 + 0.0;
            auVar42._8_4_ = fVar41 + fVar43;
            auVar42._12_4_ = fVar44 + 0.0;
            auVar40 = NEON_ext(auVar40,auVar40,4,1);
            auVar42 = NEON_ext(auVar42,auVar42,4,1);
            fVar38 = auVar42._0_4_ + auVar42._4_4_;
            bVar14 = false;
            bVar15 = false;
            bVar16 = false;
            if (auVar40._0_4_ + auVar40._4_4_ <= 1.1920929e-07) {
              bVar14 = false;
              bVar15 = false;
              bVar16 = true;
              if (!NAN(fVar38)) {
                bVar14 = fVar38 < 1.1920929e-07;
                bVar15 = fVar38 == 1.1920929e-07;
                bVar16 = false;
              }
            }
            if (!bVar15 && bVar14 == bVar16) {
              *(undefined1 *)(lVar20 + 0x1b0) = 1;
              *(undefined1 *)(lVar20 + 0x170) = 0;
              *(long *)(lVar20 + 0x198) = auVar11._8_8_;
              *(long *)(lVar20 + 400) = auVar11._0_8_;
              *(undefined8 *)(lVar20 + 0x1a8) = uVar45;
              *(undefined8 *)(lVar20 + 0x1a0) = uVar32;
              *(undefined8 *)(lVar20 + 0x174) = 0;
              *(undefined8 *)(lVar20 + 0x17c) = 0;
            }
            *(undefined8 *)(lVar20 + 0x1b8) = 0;
            nn::os::SignalLightEvent((LightEventType *)(lVar20 + 0x1c0));
            plVar33 = plVar33 + 1;
          } while( true );
        }
      }
      lVar19 = *plVar33;
      goto LAB_011675c8;
    }
  }
  lVar19 = *plVar33;
LAB_011675c8:
  (**(code **)(lVar19 + 0xe8))(plVar33);
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("ptr","Create",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
             ,0x40);
code_r0x011673a4:
  sVar28 = sVar9;
  if (sVar9 == 0) goto LAB_01166650;
  goto LAB_01167378;
code_r0x01166ce0:
  cVar10 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar33,0x10);
  if (bVar14) {
    *plVar33 = lVar19;
    cVar10 = ExclusiveMonitorsStatus();
  }
  if (cVar10 == '\0') goto LAB_01166ce8;
  goto LAB_01166cd8;
}



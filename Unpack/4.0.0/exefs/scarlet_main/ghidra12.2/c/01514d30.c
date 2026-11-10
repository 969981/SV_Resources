/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01514d30; name: FUN_01514d30
 */


void FUN_01514d30(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  short *psVar16;
  long *plVar17;
  long lVar18;
  ushort *puVar19;
  ushort *puVar20;
  ushort *puVar21;
  long lVar22;
  ulong uVar23;
  undefined2 uVar24;
  ulong uVar25;
  bool bVar26;
  short sVar27;
  short *psVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  bool bVar32;
  ushort *puVar33;
  ushort *puVar34;
  undefined8 uVar35;
  long lVar36;
  ushort *puVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  long local_1d0;
  ulong local_1c8;
  undefined2 *local_1c0;
  undefined2 *local_1b8;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  long *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  long *local_158;
  undefined8 local_150;
  undefined8 *local_148;
  undefined8 local_140;
  undefined1 auStack_138 [24];
  long *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  long *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long *local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  undefined8 local_88;
  undefined2 local_80;
  
  lVar30 = *(long *)(param_3 + 0x360);
  lVar29 = *(long *)(param_3 + 0x358);
  if (lVar30 == 0) {
    FUN_01515e30(lVar29,param_4);
  }
  else {
    *(undefined4 *)(lVar30 + 0xcc) = 0;
    *(undefined2 *)(lVar30 + 0xd0) = 0;
    *(undefined4 *)(lVar30 + 0xd4) = 0;
    *(undefined4 *)(lVar30 + 0xdc) = 0;
    FUN_0109c76c(lVar30,param_4);
    if (*(char *)(lVar29 + 0x54) != '\0') {
      **(undefined2 **)(lVar29 + 0x30) = 0;
      *(undefined2 *)(lVar29 + 0x52) = 0;
    }
    FUN_0109c334(lVar30,lVar29,param_4,0,0);
  }
  *(undefined8 *)(param_3 + 0x248) = 0;
  *(undefined1 *)(param_3 + 0x220) = 0;
  *(undefined4 *)(param_3 + 0x278) = param_5;
  FUN_00c80fd0(&local_b0,param_3,*(undefined8 *)(param_3 + 0x30));
  plVar17 = local_98;
  uVar8 = local_a0;
  uVar35 = uStack_a8;
  uVar31 = local_b0;
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x18))(local_98);
  }
  *(undefined8 *)(param_3 + 0x228) = uVar31;
  *(undefined8 *)(param_3 + 0x230) = uVar35;
  *(undefined8 *)(param_3 + 0x238) = uVar8;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x18))(plVar17);
  }
  plVar15 = *(long **)(param_3 + 0x240);
  *(long **)(param_3 + 0x240) = plVar17;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))();
  }
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x20))(plVar17);
  }
  puVar4 = PTR_DAT_047db110;
  if (((*PTR_DAT_047db110 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_047db110), iVar13 != 0)) {
    FUN_00100190(PTR_LAB_047dda40,PTR_DAT_047db118,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047db110);
  }
  puVar6 = PTR_DAT_047db120;
  puVar5 = PTR_DAT_047db118;
  local_d8 = local_b0;
  uStack_d0 = uStack_a8;
  uVar31 = *(undefined8 *)PTR_DAT_047db118;
  *(undefined8 *)PTR_DAT_047db120 = uVar31;
  local_c8 = local_a0;
  local_c0 = local_98;
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x18))();
  }
  uVar3 = *(int *)(param_3 + 0x278) - 2;
  if (uVar3 < 8) {
    uVar38 = *(undefined4 *)(&DAT_03cbf220 + (long)(int)uVar3 * 4);
  }
  else {
    uVar38 = 0;
  }
  FUN_00c82174(&local_b8,uVar31,&local_d8,uVar38);
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  plVar17 = *(long **)(param_3 + 0x30);
  lVar29 = plVar17[1];
  if ((lVar29 == 0) || (*(short *)(lVar29 + 0x1a) == 0)) {
LAB_01514e9c:
    if (local_b8 != (long *)0x0) {
      plVar17 = local_b8 + 5;
      do {
        lVar29 = *plVar17;
        iVar13 = (int)lVar29 + -1;
        cVar10 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar26) {
          *(int *)plVar17 = iVar13;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar13 == 0) {
        (**(code **)(*local_b8 + 0x10))();
      }
      else if ((int)lVar29 == 0) {
LAB_015159d8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    return;
  }
  psVar28 = (short *)(lVar29 + 0x1a);
  sVar27 = *(short *)(lVar29 + 0x1a);
LAB_01514fb4:
  sVar12 = *psVar28;
  if (sVar12 == sVar27) {
    cVar10 = '\x01';
    bVar26 = (bool)ExclusiveMonitorPass(psVar28,0x10);
    if (bVar26) {
      *psVar28 = sVar27 + 1;
      cVar10 = ExclusiveMonitorsStatus();
    }
    if (cVar10 != '\0') goto LAB_01514fd8;
    bVar26 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_01514fd8:
    bVar26 = false;
  }
  if (!bVar26) {
    sVar27 = sVar12;
    if (sVar12 == 0) goto LAB_01514e9c;
    goto LAB_01514fb4;
  }
  lVar29 = *(long *)(lVar29 + 0x10);
  if (lVar29 == 0) goto LAB_01514e9c;
  lVar30 = *plVar17;
  *(undefined4 *)(param_3 + 0x27c) = *(undefined4 *)(param_3 + 0x280);
  uVar31 = FUN_02254f98(local_b8);
  FUN_02254fa0(lVar30,uVar31);
  if (((*puVar4 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_047db110), iVar13 != 0)) {
    FUN_00100190(PTR_LAB_047dda40,PTR_DAT_047db118,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047db110);
  }
  uVar31 = *(undefined8 *)puVar5;
  local_f8 = local_b0;
  uStack_f0 = uStack_a8;
  *(undefined8 *)puVar6 = uVar31;
  local_e8 = local_a0;
  local_e0 = local_98;
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x18))();
  }
  uVar3 = *(int *)(param_3 + 0x278) - 2;
  if (uVar3 < 8) {
    uVar38 = *(undefined4 *)(&DAT_03cbf220 + (long)(int)uVar3 * 4);
  }
  else {
    uVar38 = 0;
  }
  uVar38 = FUN_00f383e0(uVar31,&local_f8,uVar38);
  local_88 = CONCAT44(param_2,uVar38);
  FUN_02255130(lVar30,&local_88);
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (1 < *(int *)(param_3 + 0x284)) {
    lVar36 = 1;
    do {
      lVar18 = *(long *)(param_3 + 0x30);
      lVar22 = *(long *)(lVar18 + lVar36 * 0x90 + 8);
      if ((lVar22 != 0) && (*(short *)(lVar22 + 0x1a) != 0)) {
        psVar28 = (short *)(lVar22 + 0x1a);
        sVar27 = *(short *)(lVar22 + 0x1a);
LAB_01515b78:
        sVar12 = *psVar28;
        if (sVar12 == sVar27) {
          cVar10 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(psVar28,0x10);
          if (bVar26) {
            *psVar28 = sVar27 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
          if (cVar10 != '\0') goto LAB_01515b9c;
          bVar26 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01515b9c:
          bVar26 = false;
        }
        if (!bVar26) goto code_r0x01515ba4;
        lVar22 = *(long *)(lVar22 + 0x10);
        if (lVar22 != 0) {
          uVar35 = *(undefined8 *)(lVar18 + lVar36 * 0x90);
          uVar31 = FUN_02254f98(local_b8);
          FUN_02254fa0(uVar35,uVar31);
          if (((*puVar4 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar4), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047dda40,puVar5,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar4);
          }
          uVar31 = *(undefined8 *)puVar5;
          local_118 = local_b0;
          uStack_110 = uStack_a8;
          *(undefined8 *)puVar6 = uVar31;
          local_108 = local_a0;
          local_100 = local_98;
          if (local_98 != (long *)0x0) {
            (**(code **)(*local_98 + 0x18))();
          }
          uVar3 = *(int *)(param_3 + 0x278) - 2;
          if (uVar3 < 8) {
            uVar38 = *(undefined4 *)(&DAT_03cbf220 + (long)(int)uVar3 * 4);
          }
          else {
            uVar38 = 0;
          }
          uVar38 = FUN_00f383e0(uVar31,&local_118,uVar38);
          local_88 = CONCAT44(param_2,uVar38);
          FUN_02255130(uVar35,&local_88);
          if (local_100 != (long *)0x0) {
            (**(code **)(*local_100 + 0x20))();
          }
          lVar18 = *(long *)(lVar22 + 8);
          psVar28 = (short *)(lVar18 + 0x1a);
          do {
            sVar27 = *psVar28;
            cVar10 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(psVar28,0x10);
            if (bVar26) {
              *psVar28 = sVar27 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (sVar27 == 1) {
            *(undefined8 *)(lVar18 + 0x10) = 0;
            (**(code **)(*(long *)(lVar22 + -0x28) + 0x50))();
          }
          else if (sVar27 == 0) goto LAB_015153b0;
        }
      }
LAB_015150c8:
      FUN_00c80fd0(auStack_138,param_3,*(long *)(param_3 + 0x30) + lVar36 * 0x90);
      if (local_120 != (long *)0x0) {
        (**(code **)(*local_120 + 0x20))();
      }
      lVar36 = lVar36 + 1;
    } while (lVar36 < *(int *)(param_3 + 0x284));
  }
  if (((*puVar4 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_047db110), iVar13 != 0)) {
    FUN_00100190(PTR_LAB_047dda40,PTR_DAT_047db118,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047db110);
  }
  uVar31 = *(undefined8 *)puVar5;
  *(undefined8 *)puVar6 = uVar31;
  uVar35 = *(undefined8 *)(*(long *)(param_3 + 0x358) + 0x30);
  local_150 = **(undefined8 **)(param_3 + 0x30);
  local_140 = 0;
  local_148 = (undefined8 *)0x0;
  FUN_00c81640(&local_148,*(undefined8 **)(param_3 + 0x30) + 1);
  uVar38 = FUN_0196c63c(*(undefined8 *)(param_3 + 0x358));
  local_170 = local_b0;
  uStack_168 = uStack_a8;
  local_160 = local_a0;
  local_158 = local_98;
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x18))();
  }
  FUN_00c81310(uVar31,uVar35,&local_150,uVar38,param_5,&local_170,1);
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x20))();
  }
  puVar7 = local_148;
  if (local_148 != (undefined8 *)0x0) {
    psVar28 = (short *)(local_148 + 3);
    do {
      sVar27 = *psVar28;
      cVar10 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(psVar28,0x10);
      if (bVar26) {
        *psVar28 = sVar27 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar27 == 1) {
      piVar1 = (int *)((long)local_148 + 0x1c);
      do {
        iVar13 = *piVar1;
        cVar10 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar26) {
          *piVar1 = -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar36 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar36;
        local_88 = *puVar7;
        FUN_00c44438(lVar36 + 0x8040,&local_88);
      }
    }
    else if (sVar27 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  FUN_01319038(param_3,*(undefined8 *)(param_3 + 0x358));
  psVar28 = *(short **)(*(long *)(param_3 + 0x50) + 0x30);
LAB_015151b8:
  if (*psVar28 == 0x10) goto LAB_015151d4;
  if (*psVar28 != 0) {
    lVar36 = 1;
    goto LAB_015151cc;
  }
  lVar18 = *(long *)(param_3 + 0x50);
  lVar36 = *(long *)(param_3 + 0x348);
  if (*(ushort *)(lVar18 + 0x50) <= *(ushort *)(lVar36 + 0x50)) {
    puVar37 = *(ushort **)(lVar18 + 0x30);
    uVar24 = 0x20;
    if (4 < *(int *)(param_3 + 0x278) - 2U) {
      uVar24 = 0x3000;
    }
    puVar33 = *(ushort **)(lVar36 + 0x30);
    if (*(char *)(lVar36 + 0x54) != '\0') {
      *puVar33 = 0;
      *(undefined2 *)(lVar36 + 0x52) = 0;
    }
    lVar36 = *(long *)(param_3 + 0x350);
    if (*(char *)(lVar36 + 0x54) != '\0') {
      **(undefined2 **)(lVar36 + 0x30) = 0;
      *(undefined2 *)(lVar36 + 0x52) = 0;
    }
    bVar32 = false;
    bVar26 = false;
    puVar21 = puVar37;
LAB_01515280:
    do {
      uVar2 = *puVar37;
      if (uVar2 == 0x10) {
        if ((char)(puVar37[2] >> 8) == -0x43) {
          lVar36 = (ulong)puVar37[1] + 2;
          if ((puVar37[2] & 0xff) == 6) {
            puVar37 = puVar37 + lVar36;
            uVar23 = FUN_02255230(puVar37);
            if ((uVar23 & 1) != 0) {
              local_1b8 = (undefined2 *)0x0;
              local_1d0 = *(long *)(*(long *)(param_3 + 0x350) + 0x30);
              local_1c8 = 0;
              puVar19 = puVar21;
              do {
                if (((*puVar37 == 0 || *puVar37 == 10) ||
                    (uVar23 = FUN_0225527c(puVar37), (uVar23 & 1) != 0)) ||
                   (uVar23 = FUN_022552ac(puVar37), (uVar23 & 1) != 0)) {
                  uVar23 = FUN_0225527c(puVar37);
                  if ((uVar23 & 1) == 0) {
                    uVar23 = FUN_022552ac(puVar37);
                    if ((uVar23 & 1) == 0) goto LAB_01515680;
                    if (*puVar37 == 0x10) {
                      puVar21 = puVar37 + 1;
                      uVar2 = *puVar21;
                      uVar23 = local_1c8 + 1;
                      uVar3 = uVar2 + 1;
                      uVar25 = (ulong)uVar3 & 7;
                      *(undefined2 *)(local_1d0 + local_1c8 * 2) = 0x10;
                      puVar20 = puVar21;
                      local_1c8 = uVar23;
                      if ((uVar3 & 7) != 0) {
                        do {
                          puVar21 = puVar20 + 1;
                          uVar25 = uVar25 - 1;
                          *(ushort *)(local_1d0 + local_1c8 * 2) = *puVar20;
                          local_1c8 = local_1c8 + 1;
                          puVar20 = puVar21;
                        } while (uVar25 != 0);
                      }
                      puVar37 = puVar37 + (ulong)uVar2 + 2;
                      if (6 < uVar2) {
                        puVar20 = (ushort *)(local_1d0 + local_1c8 * 2 + 8);
                        do {
                          puVar20[-4] = *puVar21;
                          puVar20[-3] = puVar21[1];
                          puVar20[-2] = puVar21[2];
                          puVar20[-1] = puVar21[3];
                          *puVar20 = puVar21[4];
                          puVar20[1] = puVar21[5];
                          puVar20[2] = puVar21[6];
                          local_1c8 = local_1c8 + 8;
                          puVar34 = puVar21 + 7;
                          puVar21 = puVar21 + 8;
                          puVar20[3] = *puVar34;
                          puVar20 = puVar20 + 8;
                        } while (puVar37 != puVar21);
                      }
                    }
                    local_1c0 = (undefined2 *)(local_1d0 + (long)(int)local_1c8 * 2);
                    *local_1c0 = 10;
                    bVar32 = true;
                    puVar21 = puVar37;
                  }
                  else {
                    puVar21 = puVar37;
                    if (*puVar37 == 0x10) {
                      puVar21 = puVar37 + (ulong)puVar37[1] + 2;
                    }
                    puVar37 = (ushort *)
                              ((long)puVar37 + ((long)puVar21 - (long)puVar37 & 0xfffffffffffffffeU)
                              );
LAB_01515680:
                    local_1c0 = (undefined2 *)(local_1d0 + local_1c8 * 2);
                    bVar32 = false;
                    *local_1c0 = uVar24;
                    puVar21 = puVar37;
                  }
                  FUN_01515e30(*(undefined8 *)(param_3 + 0x350),*(undefined8 *)(param_3 + 0x350));
                  local_90 = *(long **)(param_3 + 0x350);
                  if (local_90 == (long *)0x0) {
                    plVar17 = (long *)0x0;
                  }
                  else {
                    plVar17 = local_90 + 5;
                    do {
                      lVar36 = *plVar17;
                      cVar10 = '\x01';
                      bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                      if (bVar9) {
                        *(int *)plVar17 = (int)lVar36 + 1;
                        cVar10 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar10 != '\0');
                    if ((int)lVar36 == -1) {
                    /* WARNING: Subroutine does not return */
                      nn::diag::detail::AbortImpl
                                ("count != 0","IncrementReferenceInternal",
                                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                                 ,0x53,"Reference counter overflows.");
                    }
                    plVar17 = local_90;
                  }
                  bVar11 = FUN_022552e0(param_3,&local_90);
                  if (plVar17 != (long *)0x0) {
                    plVar15 = plVar17 + 5;
                    do {
                      lVar36 = *plVar15;
                      iVar13 = (int)lVar36 + -1;
                      cVar10 = '\x01';
                      bVar9 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                      if (bVar9) {
                        *(int *)plVar15 = iVar13;
                        cVar10 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar10 != '\0');
                    if (iVar13 == 0) {
                      (**(code **)(*plVar17 + 0x10))(plVar17);
                    }
                    else if ((int)lVar36 == 0) goto LAB_015159d8;
                  }
                  if (((uint)local_1c8 < 0x7b & bVar11) == 0) {
                    if (local_1b8 == (undefined2 *)0x0) {
                      local_1b8 = (undefined2 *)0x0;
                      *local_1c0 = 10;
                    }
                    else if (!bVar26) {
                      if (*puVar21 != 0) {
                        local_88 = DAT_03d63540;
                        lVar36 = 0;
                        local_80 = DAT_03d63548;
                        sVar27 = 0x10;
                        do {
                          *(short *)((long)local_1c0 + lVar36) = sVar27;
                          sVar27 = *(short *)(((ulong)&local_88 | 2) + lVar36);
                          lVar36 = lVar36 + 2;
                        } while (sVar27 != 0);
                        *(undefined2 *)((long)local_1c0 + lVar36) = 0;
                        local_1b8 = local_1c0;
                        puVar19 = puVar21;
                      }
                    }
                    else {
                      local_88 = DAT_03d63540;
                      lVar36 = 0;
                      local_80 = DAT_03d63548;
                      sVar27 = 0x10;
                      do {
                        *(short *)((long)local_1b8 + lVar36) = sVar27;
                        sVar27 = *(short *)(((ulong)&local_88 | 2) + lVar36);
                        lVar36 = lVar36 + 2;
                      } while (sVar27 != 0);
                      *(undefined2 *)((long)local_1b8 + lVar36) = 0;
                      puVar21 = puVar19;
                    }
                    FUN_0225544c(param_3);
                    bVar26 = false;
                    if (*puVar21 != 0) {
                      local_1d0 = *(long *)(*(long *)(param_3 + 0x350) + 0x30);
                      local_1c8 = 0xffffffff;
                      local_1c0 = local_1b8;
                      goto LAB_015158b0;
                    }
                    break;
                  }
                  puVar37 = puVar21;
                  if (bVar32) {
                    FUN_0225544c(param_3);
                    bVar26 = false;
                    if (*puVar21 == 0) {
                      bVar32 = true;
                      goto LAB_01515280;
                    }
                    local_1d0 = *(long *)(*(long *)(param_3 + 0x350) + 0x30);
                    local_1c8._0_4_ = 0xffffffff;
                    puVar19 = puVar21;
                  }
                  else {
                    if (*puVar21 == 0) {
                      FUN_0225544c(param_3);
                      bVar32 = true;
                      bVar26 = true;
                      goto LAB_01515280;
                    }
                    bVar26 = true;
                    puVar19 = puVar21;
                  }
LAB_015158b4:
                  puVar21 = puVar21 + 1;
                  local_1b8 = local_1c0;
                }
                else {
                  if (*puVar37 != 0x10) {
                    *(ushort *)(local_1d0 + local_1c8 * 2) = *puVar37;
                    local_1c0 = local_1b8;
                    puVar21 = puVar37;
LAB_015158b0:
                    goto LAB_015158b4;
                  }
                  lVar36 = (ulong)puVar37[1] * 2 + 4;
                  uVar23 = local_1c8;
                  if ((uint)local_1c8 < 0x80) {
                    uVar23 = 0x7f;
                  }
                  puVar21 = puVar37 + (ulong)puVar37[1] + 2;
                  do {
                    if (lVar36 == 0) goto LAB_015159cc;
                    puVar20 = puVar37 + 1;
                    lVar36 = lVar36 + -2;
                    *(ushort *)(local_1d0 + local_1c8 * 2) = *puVar37;
                    local_1c8 = local_1c8 + 1;
                    puVar37 = puVar20;
                  } while (uVar23 + 1 != local_1c8);
                  local_1c8 = 0x80;
                  puVar21 = puVar20;
LAB_015159cc:
                  local_1c8._0_4_ = (int)local_1c8 - 1;
                }
                uVar3 = (uint)local_1c8 + 1;
                local_1c8 = (ulong)uVar3;
                puVar37 = puVar21;
              } while (uVar3 < 0x80);
              bVar32 = true;
              puVar37 = puVar21;
              puVar21 = puVar19;
            }
            goto LAB_01515280;
          }
        }
        else {
          lVar36 = (ulong)puVar37[1] + 2;
        }
        puVar20 = puVar37 + lVar36;
        puVar34 = puVar33 + 1;
        *puVar33 = 0x10;
        uVar23 = lVar36 * 2 - 4;
        uVar3 = ((uint)(uVar23 >> 1) & 0x7fffffff) + 1;
        puVar19 = puVar37 + 1;
        puVar33 = puVar34;
        if ((uVar3 & 7) != 0) {
          lVar36 = -((ulong)uVar3 & 7);
          puVar37 = puVar19;
          do {
            puVar19 = puVar37 + 1;
            bVar9 = lVar36 != -1;
            lVar36 = lVar36 + 1;
            puVar33 = puVar34 + 1;
            *puVar34 = *puVar37;
            puVar37 = puVar19;
            puVar34 = puVar33;
          } while (bVar9);
        }
        puVar37 = puVar20;
        if (0xd < uVar23) {
          do {
            *puVar33 = *puVar19;
            puVar33[1] = puVar19[1];
            puVar33[2] = puVar19[2];
            puVar33[3] = puVar19[3];
            puVar33[4] = puVar19[4];
            puVar33[5] = puVar19[5];
            puVar33[6] = puVar19[6];
            puVar34 = puVar19 + 7;
            puVar19 = puVar19 + 8;
            puVar33[7] = *puVar34;
            puVar33 = puVar33 + 8;
          } while (puVar20 != puVar19);
        }
        goto LAB_01515280;
      }
      if (uVar2 == 0) goto LAB_0151534c;
      *puVar33 = uVar2;
      puVar33 = puVar33 + 1;
      puVar37 = puVar37 + 1;
    } while( true );
  }
LAB_01515364:
  iVar13 = FUN_01446910(*(undefined4 *)(param_3 + 0x27c),*(undefined8 *)(lVar18 + 0x30),
                        *(undefined8 *)(param_3 + 0x270),0);
  fVar40 = *(float *)(lVar30 + 0x50);
  if (fVar40 < (float)iVar13) {
    if (((*puVar4 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_047db110), iVar14 != 0)) {
      FUN_00100190(PTR_LAB_047dda40,PTR_DAT_047db118,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047db110);
    }
    uVar31 = *(undefined8 *)puVar5;
    local_190 = local_b0;
    uStack_188 = uStack_a8;
    *(undefined8 *)puVar6 = uVar31;
    local_180 = local_a0;
    local_178 = local_98;
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x18))();
    }
    uVar3 = *(int *)(param_3 + 0x278) - 2;
    if (uVar3 < 8) {
      uVar38 = *(undefined4 *)(&DAT_03cbf220 + (long)(int)uVar3 * 4);
    }
    else {
      uVar38 = 0;
    }
    local_88._0_4_ = FUN_00f383e0(uVar31,&local_190,uVar38);
    local_88._4_4_ = param_2;
    if (local_178 != (long *)0x0) {
      (**(code **)(*local_178 + 0x20))();
    }
    fVar40 = (fVar40 / (float)iVar13) * *(float *)(param_3 + 0x27c);
    *(float *)(param_3 + 0x27c) = fVar40;
    local_88 = CONCAT44(local_88._4_4_,fVar40 + -0.05);
    if (0 < *(int *)(param_3 + 0x284)) {
      lVar30 = 0;
      do {
        lVar36 = *(long *)(param_3 + 0x30);
        lVar18 = *(long *)(lVar36 + lVar30 * 0x90 + 8);
        if ((lVar18 != 0) && (*(short *)(lVar18 + 0x1a) != 0)) {
          psVar28 = (short *)(lVar18 + 0x1a);
          sVar27 = *(short *)(lVar18 + 0x1a);
LAB_01515d50:
          sVar12 = *psVar28;
          if (sVar12 == sVar27) {
            cVar10 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(psVar28,0x10);
            if (bVar26) {
              *psVar28 = sVar27 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
            if (cVar10 != '\0') goto LAB_01515d74;
            bVar26 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01515d74:
            bVar26 = false;
          }
          if (!bVar26) goto code_r0x01515d7c;
          lVar18 = *(long *)(lVar18 + 0x10);
          if (lVar18 != 0) {
            FUN_02255130(*(undefined8 *)(lVar36 + lVar30 * 0x90),&local_88);
            lVar36 = *(long *)(lVar18 + 8);
            psVar28 = (short *)(lVar36 + 0x1a);
            do {
              sVar27 = *psVar28;
              cVar10 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(psVar28,0x10);
              if (bVar26) {
                *psVar28 = sVar27 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (sVar27 == 1) {
              *(undefined8 *)(lVar36 + 0x10) = 0;
              (**(code **)(*(long *)(lVar18 + -0x28) + 0x50))((long *)(lVar18 + -0x28));
            }
            else if (sVar27 == 0) goto LAB_015153b0;
          }
        }
LAB_01515600:
        lVar30 = lVar30 + 1;
      } while (lVar30 < *(int *)(param_3 + 0x284));
    }
  }
  lVar30 = *(long *)(lVar29 + 8);
  psVar28 = (short *)(lVar30 + 0x1a);
  do {
    sVar27 = *psVar28;
    cVar10 = '\x01';
    bVar26 = (bool)ExclusiveMonitorPass(psVar28,0x10);
    if (bVar26) {
      *psVar28 = sVar27 + -1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if (sVar27 == 1) {
    *(undefined8 *)(lVar30 + 0x10) = 0;
    (**(code **)(*(long *)(lVar29 + -0x28) + 0x50))();
  }
  else if (sVar27 == 0) {
LAB_015153b0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  goto LAB_01514e9c;
code_r0x01515ba4:
  sVar27 = sVar12;
  if (sVar12 == 0) goto LAB_015150c8;
  goto LAB_01515b78;
LAB_015151d4:
  cVar10 = FUN_022551bc(psVar28);
  if ((cVar10 == -0x43) && (cVar10 = FUN_0109e33c(psVar28), cVar10 == '\a')) {
    uVar41 = *(undefined4 *)(param_3 + 0x27c);
    uVar38 = FUN_022551e0(psVar28,0);
    fVar40 = (float)FUN_02255214(uVar41,param_3 + 0x200,uVar38);
    psVar16 = psVar28;
    if (*psVar28 == 0x10) {
      psVar16 = psVar28 + (ulong)(ushort)psVar28[1] + 2;
    }
    fVar39 = (float)FUN_02173240(*(undefined4 *)(param_3 + 0x27c),param_3 + 0x200,psVar16,
                                 *(undefined8 *)(param_3 + 0x270));
    sVar27 = 1000;
    if (fVar40 < fVar39) {
      param_2 = 0x447a0000;
      sVar27 = (short)(int)((fVar40 / fVar39) * 1000.0);
    }
    sVar12 = FUN_0109e330(0xbd,8);
    psVar28[2] = sVar12;
    psVar28[3] = sVar27;
  }
  if (*psVar28 == 0x10) {
    lVar36 = (ulong)(ushort)psVar28[1] + 2;
LAB_015151cc:
    psVar28 = psVar28 + lVar36;
  }
  goto LAB_015151b8;
LAB_0151534c:
  if (bVar32) {
    lVar36 = *(long *)(*(long *)(param_3 + 0x348) + 0x30);
    iVar13 = FUN_0196c63c();
    puVar33 = (ushort *)(lVar36 + (ulong)(iVar13 - 1) * 2);
    if (*puVar33 == 10) goto LAB_01515350;
  }
  else {
LAB_01515350:
    *puVar33 = 0;
  }
  FUN_01319038(param_3,*(undefined8 *)(param_3 + 0x348));
  lVar18 = *(long *)(param_3 + 0x50);
  goto LAB_01515364;
code_r0x01515d7c:
  sVar27 = sVar12;
  if (sVar12 == 0) goto LAB_01515600;
  goto LAB_01515d50;
}



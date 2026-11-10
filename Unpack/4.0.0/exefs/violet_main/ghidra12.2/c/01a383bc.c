/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a383bc; name: FUN_01a383bc
 */


void FUN_01a383bc(undefined4 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  float fVar6;
  short sVar7;
  char cVar8;
  bool bVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  char cVar13;
  ulong uVar14;
  int iVar15;
  undefined8 uVar16;
  long lVar17;
  void *pvVar18;
  code *pcVar19;
  long lVar20;
  ulong uVar21;
  float *pfVar22;
  ulong uVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  long *plVar27;
  ulong uVar28;
  ulong uVar29;
  long *plVar30;
  bool bVar31;
  long *plVar32;
  float fVar33;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 *local_a0 [2];
  long *local_90;
  long *local_88;
  char local_80;
  undefined7 uStack_7f;
  undefined8 local_78;
  
  FUN_00d5f508(local_a0,param_4);
  local_d8 = (undefined8 *)0x0;
  uStack_d0 = 0;
  FUN_01032b10(&local_d8,local_a0);
  local_c0 = CONCAT44(local_c0._4_4_,param_1);
  uVar5 = *(undefined4 *)(param_2 + 0xa4);
  local_c8 = param_5;
  local_b8 = param_7;
  FUN_00f338dc(&local_90,param_2);
  uVar16 = FUN_01032970(local_90,&local_d8);
  cVar13 = local_80;
  plVar12 = local_88;
  plVar11 = local_90;
  puVar4 = local_d8;
  *(undefined4 *)(param_2 + 0xa4) = uVar5;
  if (local_d8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_d8 + 3);
    do {
      sVar7 = *psVar1;
      cVar8 = '\x01';
      bVar31 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar31) {
        *psVar1 = sVar7 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar7 == 1) {
      piVar2 = (int *)((long)local_d8 + 0x1c);
      do {
        iVar15 = *piVar2;
        cVar8 = '\x01';
        bVar31 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar31) {
          *piVar2 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar15 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_90 = (long *)*puVar4;
        FUN_00c44438(lVar17 + 0x8040,&local_90);
      }
    }
    else if (sVar7 == 0) goto LAB_01a388b4;
  }
  puVar4 = local_a0[0];
  if (local_a0[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_a0[0] + 3);
    do {
      sVar7 = *psVar1;
      cVar8 = '\x01';
      bVar31 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar31) {
        *psVar1 = sVar7 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar7 == 1) {
      piVar2 = (int *)((long)local_a0[0] + 0x1c);
      do {
        iVar15 = *piVar2;
        cVar8 = '\x01';
        bVar31 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar31) {
          *piVar2 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar15 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_90 = (long *)*puVar4;
        FUN_00c44438(lVar17 + 0x8040,&local_90);
      }
    }
    else if (sVar7 == 0) goto LAB_01a388b4;
  }
  uStack_d0 = *param_3;
  local_c8 = param_3[1];
  local_b8 = *param_6;
  local_a8 = 0;
  local_b0 = (undefined8 *)0x0;
  local_d8 = param_2;
  local_c0 = uVar16;
  FUN_00c6c994(&local_b0,param_6 + 1);
  plVar30 = plVar11 + 0x33;
  fVar6 = *(float *)(param_2 + 0xa4);
  lVar25 = *plVar30;
  lVar17 = nn::os::GetCurrentThread();
  if (lVar17 != lVar25) {
    lVar17 = nn::os::GetCurrentThread();
LAB_01a384b4:
    if (*plVar30 == 0) goto code_r0x01a384bc;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar11 + 0x34));
    do {
      if (*plVar30 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar11 + 0x34));
          while (*plVar30 == 0) {
            cVar8 = '\x01';
            bVar31 = (bool)ExclusiveMonitorPass(plVar30,0x10);
            if (bVar31) {
              *plVar30 = lVar17;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') goto LAB_01a384c4;
          }
        } while( true );
      }
      cVar8 = '\x01';
      bVar31 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar31) {
        *plVar30 = lVar17;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
LAB_01a384c4:
    bVar31 = false;
    goto LAB_01a384c8;
  }
  plVar30 = (long *)0x0;
  bVar31 = true;
LAB_01a384c8:
  lVar25 = *plVar11;
  plVar32 = (long *)(lVar25 + 0x30);
  lVar26 = *plVar32;
  lVar17 = nn::os::GetCurrentThread();
  if (lVar17 != lVar26) {
    lVar17 = nn::os::GetCurrentThread();
LAB_01a384ec:
    if (*plVar32 == 0) goto code_r0x01a384f4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0x38));
    do {
      if (*plVar32 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0x38));
          while (*plVar32 == 0) {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar32,0x10);
            if (bVar9) {
              *plVar32 = lVar17;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') goto LAB_01a384fc;
          }
        } while( true );
      }
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar9) {
        *plVar32 = lVar17;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
LAB_01a384fc:
    lVar17 = *(long *)(lVar25 + 0x1f8);
    if (lVar17 == 0) {
      local_a0[0] = *(undefined8 **)(lVar25 + 8);
      FUN_0103caf0(&local_90,local_a0[0],local_a0);
      plVar32 = local_90;
      local_90 = (long *)0x0;
      lVar17 = *(long *)(lVar25 + 0x1f8);
      *(long **)(lVar25 + 0x1f8) = plVar32;
      if (lVar17 == 0) {
        *(undefined8 *)(lVar25 + 0x210) = local_78;
        *(ulong *)(lVar25 + 0x208) = CONCAT71(uStack_7f,local_80);
        *(long **)(lVar25 + 0x200) = local_88;
        local_90 = (long *)0x0;
      }
      else {
        FUN_0103e9d8(lVar25 + 0x200);
        plVar32 = local_90;
        *(undefined8 *)(lVar25 + 0x210) = local_78;
        *(ulong *)(lVar25 + 0x208) = CONCAT71(uStack_7f,local_80);
        *(long **)(lVar25 + 0x200) = local_88;
        local_90 = (long *)0x0;
        if (plVar32 != (long *)0x0) {
          FUN_0103e9d8(&local_88);
        }
      }
      lVar17 = *(long *)(lVar25 + 0x1f8);
    }
    local_a0[0] = (undefined8 *)CONCAT44(local_a0[0]._4_4_,fVar6);
LAB_01a38518:
    lVar26 = *(long *)(lVar17 + 0x80) - *(long *)(lVar17 + 0x78);
    if (lVar26 != 0) goto code_r0x01a38524;
    plVar32 = (long *)(*(long *)(lVar17 + 0x10) - *(long *)(lVar17 + 8) >> 7);
    FUN_01a38d78(lVar17 + 8,&local_d8);
LAB_01a385ec:
    *(long *)(lVar17 + 0xb0) = (long)plVar32 + 1;
    goto LAB_01a385f4;
  }
  plVar24 = (long *)FUN_01a38ee0(fVar6,lVar25,&local_d8);
LAB_01a38728:
  local_90 = plVar24;
  FUN_01032ee0(plVar11 + 0x36,&local_90);
  if (!bVar31) {
    *plVar30 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar30 + 1));
  }
  puVar4 = local_b0;
  *(float *)(param_2 + 0xa4) = fVar6 + 0.01;
  if (local_b0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_b0 + 3);
    do {
      sVar7 = *psVar1;
      cVar8 = '\x01';
      bVar31 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar31) {
        *psVar1 = sVar7 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar7 == 1) {
      piVar2 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar15 = *piVar2;
        cVar8 = '\x01';
        bVar31 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar31) {
          *piVar2 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar15 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_90 = (long *)*puVar4;
        FUN_00c44438(lVar17 + 0x8040,&local_90);
      }
    }
    else if (sVar7 == 0) {
LAB_01a388b4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (cVar13 != '\0') {
    *plVar12 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar12 + 1));
  }
  return;
code_r0x01a384bc:
  cVar8 = '\x01';
  bVar31 = (bool)ExclusiveMonitorPass(plVar30,0x10);
  if (bVar31) {
    *plVar30 = lVar17;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_01a384c4;
  goto LAB_01a384b4;
code_r0x01a384f4:
  cVar8 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar32,0x10);
  if (bVar9) {
    *plVar32 = lVar17;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_01a384fc;
  goto LAB_01a384ec;
code_r0x01a38524:
  plVar32 = *(long **)(*(long *)(lVar17 + 0x80) + -8);
  *(long *)(lVar17 + 0x80) = lVar26 + *(long *)(lVar17 + 0x78) + -8;
  uVar23 = (ulong)plVar32 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(*(long *)(lVar17 + 0x40) + uVar23) =
       *(ulong *)(*(long *)(lVar17 + 0x40) + uVar23) &
       (1L << ((ulong)plVar32 & 0x3f) ^ 0xffffffffffffffffU);
  if (plVar32 < (long *)(*(long *)(lVar17 + 0x10) - *(long *)(lVar17 + 8) >> 7))
  goto code_r0x01a38560;
  goto LAB_01a38518;
code_r0x01a38560:
  puVar4 = (undefined8 *)(*(long *)(lVar17 + 8) + (long)plVar32 * 0x80);
  pcVar19 = (code *)puVar4[1];
  if (pcVar19 != (code *)0x0) {
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    (*pcVar19)(puVar4 + 4);
  }
  puVar4[6] = local_c8;
  puVar4[7] = local_c0;
  puVar4[4] = local_d8;
  puVar4[5] = uStack_d0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[8] = local_b8;
  FUN_00cacc64(puVar4 + 9,&local_b0);
  *puVar4 = &LAB_00fe9670;
  puVar4[1] = &LAB_02773394;
  puVar4[2] = &LAB_027734a4;
  puVar4[3] = &LAB_027734d4;
  if (*(long **)(lVar17 + 0xb0) <= plVar32) goto LAB_01a385ec;
LAB_01a385f4:
  plVar27 = (long *)(lVar17 + 0xc0);
  lVar26 = *plVar27;
  lVar20 = *(long *)(lVar17 + 200) - lVar26 >> 3;
  plVar24 = (long *)(lVar20 * -0x5555555555555555);
  local_90 = plVar32;
  if (plVar24 <= plVar32) {
    plVar3 = (long *)((long)plVar32 + 1);
    lVar20 = (long)plVar3 + lVar20 * 0x5555555555555555;
    if (plVar3 < plVar24 || lVar20 == 0) {
      if (plVar3 < plVar24) {
        *(long *)(lVar17 + 200) = lVar26 + (long)plVar3 * 0x18;
      }
    }
    else {
      FUN_00e93f30(plVar27,lVar20);
      lVar26 = *plVar27;
    }
  }
  plVar24 = (long *)(lVar17 + 0xf8);
  *(undefined1 *)(lVar26 + (long)plVar32 * 0x18) = 0;
  *(undefined8 *)(*(long *)(lVar17 + 0xc0) + (long)plVar32 * 0x18 + 8) = 1;
  uVar5 = local_a0[0]._0_4_;
  *(undefined4 *)(*(long *)(lVar17 + 0xc0) + (long)plVar32 * 0x18 + 0x10) = local_a0[0]._0_4_;
  uVar29 = *(ulong *)(lVar17 + 0x130);
  uVar23 = uVar29 + 1;
  *(ulong *)(lVar17 + 0x130) = uVar23;
  if (uVar29 == 0) {
    if (*(long *)(lVar17 + 0x100) - (long)*(undefined8 **)(lVar17 + 0xf8) >> 4 != 0) {
      **(undefined8 **)(lVar17 + 0xf8) = plVar32;
      lVar17 = *plVar24;
      goto LAB_01a38698;
    }
LAB_01a38a18:
    FUN_00fb23c4(plVar24,&local_90,local_a0);
  }
  else {
    pvVar18 = *(void **)(lVar17 + 0xf8);
    uVar28 = uVar29 - 1;
    uVar21 = *(long *)(lVar17 + 0x100) - (long)pvVar18 >> 4;
    if (fVar6 < *(float *)((long)pvVar18 + uVar28 * 0x10 + 8)) {
      if (uVar21 <= uVar23 && uVar23 - uVar21 != 0) {
        FUN_0103e51c(plVar24,uVar23 - uVar21);
        pvVar18 = (void *)*plVar24;
      }
      if (*(float *)((long)pvVar18 + 8) <= fVar6) {
        if (uVar29 - 2 < 3) {
          uVar23 = 1;
        }
        else {
          uVar21 = (ulong)((float)(uVar29 - 2) * 0.5);
          fVar33 = *(float *)((long)pvVar18 + (uVar21 + 1) * 0x10 + 8);
          if (fVar33 <= fVar6) {
            uVar10 = uVar28 - (uVar21 + 1);
          }
          else {
            uVar28 = uVar21 + 1;
            uVar10 = uVar21;
          }
          uVar23 = 1;
          if (fVar33 <= fVar6) {
            uVar23 = uVar21 + 1;
          }
          if (2 < uVar10) {
            uVar21 = uVar23 + (long)((float)uVar10 * 0.5);
            uVar14 = uVar21;
            uVar10 = (long)((float)uVar10 * 0.5);
            if (*(float *)((long)pvVar18 + uVar21 * 0x10 + 8) <= fVar6) {
              uVar23 = uVar21;
              uVar14 = uVar28;
              uVar10 = uVar28 - uVar21;
            }
            uVar28 = uVar14;
            if (2 < uVar10) {
              uVar21 = uVar23 + (long)((float)uVar10 * 0.5);
              uVar14 = uVar21;
              uVar10 = (long)((float)uVar10 * 0.5);
              if (*(float *)((long)pvVar18 + uVar21 * 0x10 + 8) <= fVar6) {
                uVar23 = uVar21;
                uVar14 = uVar28;
                uVar10 = uVar28 - uVar21;
              }
              while (uVar28 = uVar14, 2 < uVar10) {
                uVar21 = uVar23 + (long)((float)uVar10 * 0.5);
                uVar14 = uVar21;
                uVar10 = (long)((float)uVar10 * 0.5);
                if (*(float *)((long)pvVar18 + uVar21 * 0x10 + 8) <= fVar6) {
                  uVar23 = uVar21;
                  uVar14 = uVar28;
                  uVar10 = uVar28 - uVar21;
                }
              }
            }
          }
        }
        if (uVar28 <= uVar29 && uVar23 <= uVar28) {
          pfVar22 = (float *)((long)pvVar18 + uVar28 * 0x10 + 8);
          while (fVar6 < *pfVar22) {
            uVar28 = uVar28 - 1;
            if ((uVar28 < uVar23) || (pfVar22 = pfVar22 + -4, uVar29 < uVar28)) goto LAB_01a38c68;
          }
          uVar28 = uVar28 + 1;
        }
LAB_01a38c68:
        if (uVar28 <= uVar29 && uVar23 <= uVar28) {
          uVar23 = uVar28;
        }
        pvVar18 = (void *)((long)pvVar18 + uVar23 * 0x10);
        memmove((void *)((long)pvVar18 + 0x10),pvVar18,(uVar29 - uVar23) * 0x10);
        *(long **)(*plVar24 + uVar23 * 0x10) = plVar32;
        lVar17 = *plVar24 + uVar23 * 0x10;
      }
      else {
        memmove((void *)((long)pvVar18 + 0x10),pvVar18,uVar29 << 4);
        *(long **)*plVar24 = plVar32;
        lVar17 = *plVar24;
      }
    }
    else {
      if (uVar21 < uVar23) goto LAB_01a38a18;
      *(long **)((long)pvVar18 + uVar29 * 0x10) = plVar32;
      lVar17 = *plVar24 + uVar29 * 0x10;
    }
LAB_01a38698:
    *(undefined4 *)(lVar17 + 8) = uVar5;
  }
  local_90 = (long *)0x3;
  do {
    lVar17 = *(long *)(lVar25 + 0x160) - *(long *)(lVar25 + 0x158);
    local_88 = plVar32;
    if (lVar17 == 0) {
      plVar24 = (long *)(*(long *)(lVar25 + 0xf0) - *(long *)(lVar25 + 0xe8) >> 4);
      FUN_01062d64(lVar25 + 0xe8,&local_90);
LAB_01a38710:
      *(long *)(lVar25 + 400) = (long)plVar24 + 1;
      goto LAB_01a38718;
    }
    plVar24 = *(long **)(*(long *)(lVar25 + 0x160) + -8);
    *(long *)(lVar25 + 0x160) = lVar17 + *(long *)(lVar25 + 0x158) + -8;
    uVar23 = (ulong)plVar24 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(lVar25 + 0x120) + uVar23) =
         *(ulong *)(*(long *)(lVar25 + 0x120) + uVar23) &
         (1L << ((ulong)plVar24 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((long *)(*(long *)(lVar25 + 0xf0) - *(long *)(lVar25 + 0xe8) >> 4) <= plVar24);
  puVar4 = (undefined8 *)(*(long *)(lVar25 + 0xe8) + (long)plVar24 * 0x10);
  *puVar4 = 3;
  puVar4[1] = plVar32;
  if (*(long **)(lVar25 + 400) <= plVar24) goto LAB_01a38710;
LAB_01a38718:
  *(undefined8 *)(lVar25 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar25 + 0x38));
  goto LAB_01a38728;
}



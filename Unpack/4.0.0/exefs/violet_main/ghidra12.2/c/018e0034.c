/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018e0034; name: FUN_018e0034
 */


void FUN_018e0034(long param_1)

{
  undefined1 (*pauVar1) [12];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  char cVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  int iVar14;
  long lVar15;
  size_t __n;
  long *plVar16;
  bool bVar17;
  undefined8 uVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uStack_25b4;
  undefined4 uStack_25b0;
  undefined4 uStack_25ac;
  undefined4 uStack_25a8;
  undefined4 local_2590;
  undefined4 uStack_258c;
  undefined4 uStack_2588;
  undefined4 uStack_2574;
  undefined8 local_2570;
  undefined1 *local_2568;
  undefined4 local_2560 [2];
  undefined8 local_2558;
  undefined1 local_2550;
  undefined8 local_2548;
  long *local_2540;
  undefined8 local_2538;
  undefined2 local_2530;
  undefined4 local_252e;
  undefined2 local_252a;
  undefined8 local_2528;
  undefined8 uStack_2520;
  undefined4 local_2518;
  undefined8 local_2514;
  undefined8 local_250c;
  undefined1 local_2504;
  undefined8 local_2502;
  undefined1 auStack_24f8 [328];
  undefined1 auStack_23b0 [16];
  undefined4 local_23a0 [2];
  undefined8 local_2398 [2];
  undefined4 local_2388 [2];
  undefined8 local_2380 [4];
  undefined4 local_2360 [2];
  undefined8 local_2358 [2];
  undefined4 local_2348 [3];
  undefined1 local_233c [2];
  undefined8 local_233a;
  undefined8 local_232c [1113];
  
  memset(auStack_24f8,0,0x2490);
  lVar23 = 0;
  plVar22 = (long *)0x0;
  while( true ) {
    plVar19 = *(long **)(param_1 + lVar23 * 0x80);
    if (plVar19 != (long *)0x0) {
      plVar20 = plVar19 + 5;
      do {
        lVar15 = *plVar20;
        cVar8 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar17) {
          *(int *)plVar20 = (int)lVar15 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((int)lVar15 == -1) goto LAB_018e04ac;
    }
    lVar15 = param_1 + lVar23 * 0x80;
    auVar24 = *(undefined1 (*) [16])(lVar15 + 0x10);
    auVar27 = *(undefined1 (*) [16])(lVar15 + 0x20);
    uStack_2574 = auVar27._12_4_;
    uVar2 = *(undefined4 *)(lVar15 + 0x30);
    plVar20 = *(long **)(lVar15 + 0x38);
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
    if (plVar19 == (long *)0x0) break;
    uVar18 = *(undefined8 *)(lVar15 + 0x40);
    uVar10 = *(undefined8 *)(lVar15 + 0x48);
    pauVar1 = (undefined1 (*) [12])(lVar15 + 0x50);
    auVar13 = *pauVar1;
    auVar12 = *pauVar1;
    auVar11 = *pauVar1;
    uStack_25b4 = (undefined4)((ulong)*(undefined8 *)(lVar15 + 0x58) >> 0x20);
    uVar3 = *(undefined4 *)(lVar15 + 0x60);
    uVar4 = *(undefined4 *)(lVar15 + 100);
    uVar5 = *(undefined4 *)(lVar15 + 0x68);
    uVar7 = *(undefined1 *)(lVar15 + 0x6c);
    lVar21 = plVar19[0xe];
    uVar6 = *(undefined4 *)(lVar15 + 0x70);
    plVar16 = (long *)(lVar21 + 0x20);
    lVar15 = nn::os::GetCurrentThread();
    while (*plVar16 == 0) {
      cVar8 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar17) {
        *plVar16 = lVar15;
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 == '\0') goto LAB_018e0118;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x28));
    do {
      if (*plVar16 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x28));
          while (*plVar16 == 0) {
            cVar8 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar17) {
              *plVar16 = lVar15;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') goto LAB_018e0118;
          }
        } while( true );
      }
      cVar8 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar17) {
        *plVar16 = lVar15;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
LAB_018e0118:
    FUN_00f32a60(lVar21,auStack_24f8 + lVar23 * 0x1d4,auStack_23b0 + lVar23 * 0x1d4);
    *(undefined8 *)(lVar21 + 0x20) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar21 + 0x28));
    local_2590 = auVar24._0_4_;
    uStack_258c = auVar24._4_4_;
    uStack_2588 = auVar24._8_4_;
    auVar26 = NEON_ext(auVar27,auVar27,4,1);
    auVar24._4_4_ = uStack_2588;
    auVar24._0_4_ = local_2590;
    auVar24._8_4_ = local_2590;
    auVar24._12_4_ = uStack_2588;
    lVar15 = lVar23 * 0x1d4;
    local_23a0[lVar23 * 0x75] = local_2590;
    local_23a0[lVar23 * 0x75 + 1] = uStack_258c;
    auVar24 = NEON_ext(auVar24,auVar27,0xc,1);
    *(long *)((long)local_2398 + lVar15) = auVar24._0_8_;
    *(long *)((long)local_2398 + lVar15 + 8) = auVar26._0_8_;
    local_2388[lVar23 * 0x75] = uStack_2574;
    local_2388[lVar23 * 0x75 + 1] = uVar2;
    *(undefined8 *)((long)local_2380 + lVar15) = 0;
    *(undefined8 *)((long)local_2380 + lVar15 + 8) = 0;
    *(undefined8 *)((long)local_2380 + lVar15 + 0x10) = 0;
    *(undefined8 *)((long)local_2380 + lVar15 + 0x18) = 0;
    if (plVar20 == (long *)0x0) {
      __n = 0;
      plVar16 = (long *)PTR_PTR_047d4508;
LAB_018e018c:
      memcpy((void *)((long)local_2380 + lVar15),(void *)*plVar16,__n);
    }
    else {
      __n = plVar20[8];
      if (__n < 0x20) {
        plVar16 = plVar20 + 7;
        goto LAB_018e018c;
      }
    }
    uStack_25b0 = (undefined4)uVar18;
    uStack_25ac = (undefined4)((ulong)uVar18 >> 0x20);
    uStack_25a8 = (undefined4)uVar10;
    lVar15 = lVar23 * 0x1d4;
    local_2348[lVar23 * 0x75 + 1] = uVar4;
    auVar25._4_4_ = uStack_25a8;
    auVar25._0_4_ = uStack_25b0;
    auVar25._8_4_ = uStack_25b0;
    auVar25._12_4_ = uStack_25a8;
    local_2348[lVar23 * 0x75 + 2] = uVar5;
    local_233c[lVar15] = uVar7;
    auVar27._12_4_ = uStack_25b4;
    auVar27._0_12_ = auVar11;
    auVar26._12_4_ = uStack_25b4;
    auVar26._0_12_ = auVar12;
    auVar27 = NEON_ext(auVar27,auVar26,4,1);
    auVar9._12_4_ = uStack_25b4;
    auVar9._0_12_ = auVar13;
    auVar24 = NEON_ext(auVar25,auVar9,0xc,1);
    bVar17 = false;
    local_2348[lVar23 * 0x75] = uVar3;
    local_233c[lVar15 + 1] = (char)uVar6;
    local_2360[lVar23 * 0x75] = uStack_25b0;
    local_2360[lVar23 * 0x75 + 1] = uStack_25ac;
    *(long *)((long)local_2358 + lVar15) = auVar24._0_8_;
    *(long *)((long)local_2358 + lVar15 + 8) = auVar27._0_8_;
    *(undefined8 *)(local_233c + lVar15 + 2) = 0;
    *(undefined8 *)((long)local_232c + lVar15 + -6) = 0;
    *(undefined8 *)((long)local_232c + lVar15) = 0;
LAB_018e01e0:
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x20))(plVar20);
    }
    if (!bVar17) {
      plVar20 = plVar19 + 5;
      do {
        lVar15 = *plVar20;
        iVar14 = (int)lVar15 + -1;
        cVar8 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar17) {
          *(int *)plVar20 = iVar14;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar14 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
      else if ((int)lVar15 == 0) goto LAB_018e052c;
    }
    lVar23 = lVar23 + 1;
    if (lVar23 == 0x14) {
      if (((*PTR_DAT_047d4c98 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar14 != 0)) {
        FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4c98);
      }
      uVar18 = *(undefined8 *)PTR_DAT_047d4ca0;
      *(undefined8 *)PTR_DAT_047d4ca8 = uVar18;
      FUN_00d8fb98(&local_2558,PTR_DAT_047dcc90);
      uVar18 = FUN_00f844f4(uVar18,&local_2558);
      local_2560[0] = 0x173304d8;
      local_2568 = auStack_24f8;
      local_2570 = 0x2490;
      FUN_0182b208(uVar18,local_2560,&local_2568,&local_2570);
      if (local_2540 != (long *)0x0) {
        (**(code **)(*local_2540 + 0x20))();
      }
      if (plVar22 != (long *)0x0) {
        plVar19 = plVar22 + 5;
        do {
          lVar23 = *plVar19;
          iVar14 = (int)lVar23 + -1;
          cVar8 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar17) {
            *(int *)plVar19 = iVar14;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar14 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
        }
        else if ((int)lVar23 == 0) {
LAB_018e052c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      return;
    }
  }
  if (plVar22 == (long *)0x0) {
    local_2518 = 0xffffffff;
    local_2548 = 0xffffffffffffffff;
    local_2540 = (long *)0x3ffffffff;
    local_2502 = 0x10001000100;
    local_2538 = 0xffffffffffffffff;
    local_2558 = 0;
    local_2550 = 0;
    local_252e = 0;
    local_2504 = 0;
    local_2514 = 0;
    local_2528 = 0x1ffffffffff00ff;
    uStack_2520 = 0xffffffffffffffff;
    local_250c = 0xffff00000000;
    local_2530 = 0;
    local_252a = 0;
    plVar22 = (long *)FUN_00eebe4c(&local_2568,*(undefined8 *)(*(long *)PTR_DAT_047d3a88 + 8),
                                   &local_2558);
    if (plVar22 != (long *)0x0) {
      plVar16 = plVar22 + 5;
      do {
        lVar15 = *plVar16;
        cVar8 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar17) {
          *(int *)plVar16 = (int)lVar15 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((int)lVar15 == -1) {
LAB_018e04ac:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
  }
  lVar21 = plVar22[0xe];
  plVar16 = (long *)(lVar21 + 0x20);
  lVar15 = nn::os::GetCurrentThread();
LAB_018e0230:
  if (*plVar16 == 0) goto code_r0x018e0238;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x28));
  do {
    if (*plVar16 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x28));
        while (*plVar16 == 0) {
          cVar8 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar17) {
            *plVar16 = lVar15;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_018e0240;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar17) {
      *plVar16 = lVar15;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_018e0240:
  FUN_00f32a60(lVar21,auStack_24f8 + lVar23 * 0x1d4,auStack_23b0 + lVar23 * 0x1d4);
  *(undefined8 *)(lVar21 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar21 + 0x28));
  bVar17 = true;
  goto LAB_018e01e0;
code_r0x018e0238:
  cVar8 = '\x01';
  bVar17 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar17) {
    *plVar16 = lVar15;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_018e0240;
  goto LAB_018e0230;
}



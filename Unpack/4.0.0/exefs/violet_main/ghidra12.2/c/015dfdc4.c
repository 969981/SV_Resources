/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015dfdc4; name: FUN_015dfdc4
 */


uint FUN_015dfdc4(long param_1)

{
  undefined *puVar1;
  short *psVar2;
  long lVar3;
  short sVar4;
  char cVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  bool bVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined8 uVar22;
  ulong uVar23;
  float fVar24;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x148));
  plVar20 = (long *)(param_1 + 0x290);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar20 == 0 && *(long *)(param_1 + 0x298) == 0) {
    cVar5 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar13) {
      *plVar20 = lVar8;
      *(undefined8 *)(param_1 + 0x298) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_015dfe14;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2a0));
  do {
    if (*plVar20 != 0 || *(long *)(param_1 + 0x298) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2a0));
        while (*plVar20 == 0 && *(long *)(param_1 + 0x298) == 0) {
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar13) {
            *plVar20 = lVar8;
            *(undefined8 *)(param_1 + 0x298) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_015dfe14;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar13) {
      *plVar20 = lVar8;
      *(undefined8 *)(param_1 + 0x298) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_015dfe14:
  if (*(long *)(param_1 + 0x280) == 0) {
    uVar18 = *(uint *)(param_1 + 0x178);
    *(uint *)(param_1 + 0x178) = uVar18 + 1;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x280) + -1;
    uVar18 = *(uint *)(param_1 + lVar8 * 4 + 0x180);
    *(long *)(param_1 + 0x280) = lVar8;
  }
  *(ulong *)(param_1 + 0x288) =
       1L << ((ulong)(uVar18 - *(int *)(param_1 + 0x170)) & 0x3f) | *(ulong *)(param_1 + 0x288);
  *(int *)(param_1 + 0x17c) = *(int *)(param_1 + 0x17c) + 1;
  do {
    lVar8 = *plVar20;
    lVar10 = *(long *)(param_1 + 0x298);
    cVar5 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar13) {
      *plVar20 = lVar8;
      *(long *)(param_1 + 0x298) = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar14 = *plVar20;
    lVar3 = *(long *)(param_1 + 0x298);
    if (lVar14 != lVar8 || lVar3 != lVar10) {
      bVar13 = false;
      ClearExclusiveLocal();
      goto LAB_015dfedc;
    }
    cVar5 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar13) {
      *plVar20 = 0;
      *(long *)(param_1 + 0x294) = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar13 = true;
LAB_015dfedc:
  if (!bVar13) {
    do {
      lVar8 = *plVar20;
      lVar10 = *(long *)(param_1 + 0x298);
      if (lVar8 != lVar14 || lVar10 != lVar3) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto joined_r0x015e0804;
      }
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar13) {
        *plVar20 = 0;
        *(long *)(param_1 + 0x294) = lVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar13 = true;
joined_r0x015e0804:
    if (!bVar13) {
      do {
        lVar14 = *plVar20;
        lVar3 = *(long *)(param_1 + 0x298);
        if (lVar14 != lVar8 || lVar3 != lVar10) {
          bVar13 = false;
          ClearExclusiveLocal();
          lVar8 = lVar14;
          lVar10 = lVar3;
          goto joined_r0x015e0804;
        }
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar13) {
          *plVar20 = 0;
          *(long *)(param_1 + 0x294) = lVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar13 = true;
      lVar8 = lVar14;
      lVar10 = lVar3;
      goto joined_r0x015e0804;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2a0));
  plVar20 = *(long **)(param_1 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_015e0848;
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar20;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  plVar9 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0xf8,8);
  puVar1 = PTR_DAT_047d66f8;
  if (plVar9 == (long *)0x0) {
    lVar8 = *plVar20;
LAB_015e08bc:
    (**(code **)(lVar8 + 0xe8))(plVar20);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  plVar9[2] = 0;
  *(undefined4 *)(plVar9 + 3) = 0;
  *plVar9 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  puVar1 = PTR_DAT_047d8c78;
  if (lVar10 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = 0;
    if (*(long *)(lVar10 + 0x80) != 0) {
      lVar14 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8);
    }
  }
  *plVar9 = (long)(PTR_DAT_047d8c78 + 0x10);
  plVar9[1] = lVar14;
  plVar9[4] = (long)(puVar1 + 0x88);
  plVar21 = plVar9 + 5;
  *plVar21 = (long)(puVar1 + 0xd8);
  plVar19 = plVar9 + 6;
  *plVar19 = 0;
  plVar9[7] = 0;
  FUN_00d1a3f4(plVar19,plVar21);
  *plVar9 = (long)&PTR_FUN_045abf68;
  plVar9[4] = (long)&PTR_LAB_045abfe0;
  *plVar21 = (long)&DAT_045ac030;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  plVar9[0xc] = 0;
  plVar9[0xd] = 0;
  plVar9[0xe] = 0;
  plVar9[0xf] = 0;
  puVar1 = PTR_DAT_047ddc58 + 0x10;
  *(undefined4 *)(plVar9 + 0x16) = 0;
  *(undefined4 *)(plVar9 + 0x1b) = 0;
  plVar9[0x1c] = 0;
  *(undefined4 *)(plVar9 + 0x1e) = 0;
  plVar9[8] = 0;
  plVar9[9] = (long)puVar1;
  plVar9[0x10] = 0;
  plVar9[0x11] = 0;
  plVar9[0x14] = 0xfffffffffffffff;
  plVar9[0x15] = 0;
  plVar9[0x19] = 0xfffffffffffffff;
  plVar9[0x1a] = 0;
  plVar9[0x12] = 0;
  plVar9[0x13] = plVar9[1];
  plVar9[0x17] = 0;
  plVar9[0x18] = plVar9[1];
  *(undefined4 *)(plVar9 + 0x1d) = 0x3f800000;
  *(undefined4 *)(plVar9 + 3) = 0x800f8;
  plVar9[1] = (long)plVar20;
  plVar9[2] = (long)plVar9;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  lVar8 = *plVar19;
  if (*(long *)(lVar8 + 0x10) == 0) goto LAB_015e0864;
  psVar2 = (short *)(lVar8 + 0x1a);
  do {
    sVar4 = *psVar2;
    cVar5 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar13) {
      *psVar2 = sVar4 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar4 == 0) {
    uVar22 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
    *(undefined8 *)(lVar8 + 8) = uVar22;
    *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
  }
  else if (sVar4 == -1) goto LAB_015e088c;
  plVar20 = *(long **)(param_1 + 8);
  if (((*PTR_DAT_047d89c8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d89c8), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d9110,PTR_DAT_047d89d0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89c8);
  }
  lVar8 = *(long *)PTR_DAT_047d89d0;
  *(long *)PTR_DAT_047d89d8 = lVar8;
  uVar22 = *(undefined8 *)(lVar8 + 0x38);
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  lVar8 = *(long *)PTR_DAT_047d6c28;
  *(long *)PTR_DAT_047d6c30 = lVar8;
  plVar21 = *(long **)(lVar8 + 0x1b0);
  if (plVar21 != (long *)0x0) {
    lVar8 = plVar21[6];
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_015e0864;
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar13) {
        *psVar2 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar12;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_015e088c;
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  uVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(uVar11 + 0x80)) goto LAB_015e0848;
  *(long **)(uVar11 + *(ulong *)(uVar11 + 0x80) * 8) = plVar20;
  *(long *)(uVar11 + 0x80) = *(long *)(uVar11 + 0x80) + 1;
  lVar8 = (**(code **)(*plVar20 + 0x10))(plVar20,0x450,0x10);
  if (lVar8 == 0) {
    lVar8 = *plVar20;
    goto LAB_015e08bc;
  }
  FUN_015e0924(lVar8,uVar22,plVar21,uVar18);
  *(undefined4 *)(lVar8 + 0x18) = 0x100450;
  *(long **)(lVar8 + 8) = plVar20;
  *(long *)(lVar8 + 0x10) = lVar8;
  *(long *)(uVar11 + 0x80) = *(long *)(uVar11 + 0x80) + -1;
  lVar10 = *(long *)(lVar8 + 0x30);
  if (*(long *)(lVar10 + 0x10) == 0) goto LAB_015e0864;
  psVar2 = (short *)(lVar10 + 0x1a);
  do {
    sVar4 = *psVar2;
    cVar5 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar13) {
      *psVar2 = sVar4 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar4 == 0) {
    uVar22 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
    *(undefined8 *)(lVar10 + 8) = uVar22;
    *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
  }
  else if (sVar4 == -1) goto LAB_015e088c;
  plVar20 = (long *)plVar9[8];
  plVar9[8] = 0;
  if (plVar20 != (long *)0x0) {
    lVar10 = plVar20[6];
    psVar2 = (short *)(lVar10 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar13) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar20 + 0x50))();
    }
    else if (sVar4 == 0) goto LAB_015e03bc;
  }
  plVar9[8] = lVar8;
  if (plVar21 != (long *)0x0) {
    lVar8 = plVar21[6];
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar13) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar21 + 0x50))(plVar21);
    }
    else if (sVar4 == 0) goto LAB_015e03bc;
  }
  *(undefined4 *)(plVar9 + 0x1e) = 1;
  uVar23 = *(ulong *)(param_1 + 0xe8);
  plVar20 = (long *)(param_1 + 0xe0);
  uVar17 = (ulong)uVar18;
  if (uVar23 == 0) {
LAB_015e022c:
    plVar21 = (long *)(**(code **)(**(long **)(param_1 + 0x118) + 0x10))
                                (*(long **)(param_1 + 0x118),0x20,8);
    if (plVar21 == (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x118) + 0xe8))();
    }
    uVar22 = *(undefined8 *)(param_1 + 0x118);
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar8 != 0) {
      if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_015e0848:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar22;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    }
    *(uint *)(plVar21 + 2) = uVar18;
    plVar21[3] = (long)plVar9;
    lVar10 = plVar9[6];
    if (*(long *)(lVar10 + 0x10) == 0) {
LAB_015e0864:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar10 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar13) {
        *psVar2 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar22 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar22;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
LAB_015e088c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    }
    *plVar21 = 0;
    plVar21[1] = uVar17;
    fVar24 = (float)(*(long *)(param_1 + 0x138) + 1);
    if ((uVar23 == 0) || (*(float *)(param_1 + 0x140) * (float)uVar23 < fVar24)) {
      uVar11 = (ulong)(uVar23 < 3 || (uVar23 & uVar23 - 1) != 0) | uVar23 << 1;
      uVar23 = (ulong)(fVar24 / *(float *)(param_1 + 0x140));
      if (uVar23 <= uVar11) {
        uVar23 = uVar11;
      }
      FUN_012b2cdc(plVar20,uVar23);
      uVar23 = *(ulong *)(param_1 + 0xe8);
      if ((uVar23 & uVar23 - 1) == 0) {
        uVar11 = (ulong)((int)uVar23 - 1U & uVar18);
      }
      else if (uVar17 < uVar23) {
        uVar11 = uVar17;
      }
      else {
        uVar11 = 0;
        if (uVar23 != 0) {
          uVar11 = uVar17 / uVar23;
        }
        uVar11 = uVar17 - uVar11 * uVar23;
      }
    }
    plVar15 = *(long **)(*plVar20 + uVar11 * 8);
    if (plVar15 == (long *)0x0) {
      *plVar21 = *(long *)(param_1 + 0x110);
      *(long **)(param_1 + 0x110) = plVar21;
      *(long *)(*(long *)(param_1 + 0xe0) + uVar11 * 8) = param_1 + 0x110;
      if (*plVar21 != 0) {
        uVar11 = *(ulong *)(*plVar21 + 8);
        if ((uVar23 & uVar23 - 1) == 0) {
          uVar11 = uVar11 & uVar23 - 1;
        }
        else if (uVar23 <= uVar11) {
          uVar17 = 0;
          if (uVar23 != 0) {
            uVar17 = uVar11 / uVar23;
          }
          uVar11 = uVar11 - uVar17 * uVar23;
        }
        plVar15 = (long *)(*plVar20 + uVar11 * 8);
        goto LAB_015e0434;
      }
    }
    else {
      *plVar21 = *plVar15;
LAB_015e0434:
      *plVar15 = (long)plVar21;
    }
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
  }
  else {
    if ((uVar23 & uVar23 - 1) != 0) {
      uVar11 = uVar17;
      if (uVar23 <= uVar17) {
        uVar11 = 0;
        if (uVar23 != 0) {
          uVar11 = uVar17 / uVar23;
        }
        uVar11 = uVar17 - uVar11 * uVar23;
      }
      plVar21 = *(long **)(*plVar20 + uVar11 * 8);
      if (plVar21 != (long *)0x0) {
        while (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0) {
          uVar16 = plVar21[1];
          if (uVar16 != uVar17) {
            if (uVar23 <= uVar16) {
              uVar6 = 0;
              if (uVar23 != 0) {
                uVar6 = uVar16 / uVar23;
              }
              uVar16 = uVar16 - uVar6 * uVar23;
            }
            if (uVar16 != uVar11) break;
          }
          if (*(uint *)(plVar21 + 2) == uVar18) goto LAB_015e0348;
        }
      }
      goto LAB_015e022c;
    }
    uVar11 = (ulong)((int)uVar23 - 1U & uVar18);
    plVar21 = *(long **)(*plVar20 + uVar11 * 8);
    if (plVar21 == (long *)0x0) goto LAB_015e022c;
    do {
      plVar21 = (long *)*plVar21;
      if ((plVar21 == (long *)0x0) || (plVar21[1] != uVar17 && (plVar21[1] & uVar23 - 1) != uVar11))
      goto LAB_015e022c;
    } while (*(uint *)(plVar21 + 2) != uVar18);
  }
LAB_015e0348:
  lVar8 = *plVar19;
  psVar2 = (short *)(lVar8 + 0x1a);
  do {
    sVar4 = *psVar2;
    cVar5 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar13) {
      *psVar2 = sVar4 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar4 == 1) {
    *(undefined8 *)(lVar8 + 0x10) = 0;
    (**(code **)(*plVar9 + 0x50))(plVar9);
  }
  else if (sVar4 == 0) {
LAB_015e03bc:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x148));
  return uVar18;
}



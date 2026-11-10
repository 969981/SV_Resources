/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017c6490; name: FUN_017c6490
 */


ulong FUN_017c6490(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  short *psVar2;
  undefined8 *puVar3;
  int *piVar4;
  long lVar5;
  short sVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  ulong *puVar10;
  long *plVar11;
  undefined8 uVar12;
  bool bVar13;
  code *pcVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 local_70;
  undefined8 local_68;
  
  plVar1 = (long *)(param_1 + 0x30);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x38) == 0) {
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar9;
      *(undefined8 *)(param_1 + 0x38) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_017c64dc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x40));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x38) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x40));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x38) == 0) {
          cVar7 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar13) {
            *plVar1 = lVar9;
            *(undefined8 *)(param_1 + 0x38) = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_017c64dc;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar9;
      *(undefined8 *)(param_1 + 0x38) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_017c64dc:
  plVar19 = (long *)(param_1 + 0x50);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar19 == 0) {
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar13) {
      *plVar19 = lVar9;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_017c64f8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x58));
  do {
    if (*plVar19 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x58));
        while (*plVar19 == 0) {
          cVar7 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar13) {
            *plVar19 = lVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_017c64f8;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar13) {
      *plVar19 = lVar9;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_017c64f8:
  local_78 = 0;
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_00c43ef0(&local_88,param_2);
  plVar19 = *(long **)(param_1 + 0x68);
  local_70 = param_3;
  if (plVar19 != (long *)0x0) {
    lVar9 = plVar19[6];
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_017c6c3c;
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar6 = *psVar2;
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar13) {
        *psVar2 = sVar6 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar12;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar6 == -1) goto LAB_017c6c84;
  }
  nn::os::AcquireSemaphore((SemaphoreType *)(plVar19 + 0x87));
  puVar3 = (undefined8 *)(param_1 + 0x70);
LAB_017c6570:
  if (*(long *)(param_1 + 0xf8) != 0) goto LAB_017c699c;
  plVar11 = *(long **)*puVar3;
  if (plVar11 != (long *)0x0) {
    lVar9 = plVar11[6];
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_017c6c3c;
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar6 = *psVar2;
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar13) {
        *psVar2 = sVar6 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar12;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar6 == -1) goto LAB_017c6c84;
  }
  lVar9 = *(long *)(*(long *)plVar11[0x80] + 0x3b8);
  lVar17 = *(long *)(*(long *)plVar11[0x80] + 0x3b0);
  if (plVar11 != (long *)0x0) {
    lVar15 = plVar11[6];
    psVar2 = (short *)(lVar15 + 0x1a);
    do {
      sVar6 = *psVar2;
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar13) {
        *psVar2 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))(plVar11);
    }
    else if (sVar6 == 0) goto LAB_017c6c5c;
  }
  plVar11 = *(long **)*puVar3;
  if (plVar11 != (long *)0x0) {
    lVar15 = plVar11[6];
    if (*(long *)(lVar15 + 0x10) == 0) {
LAB_017c6c3c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar15 + 0x1a);
    do {
      sVar6 = *psVar2;
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar13) {
        *psVar2 = sVar6 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar12;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar6 == -1) {
LAB_017c6c84:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  uVar18 = (lVar9 - lVar17 >> 3) * -0x3333333333333333;
  lVar9 = *(long *)plVar11[0x80];
  if (*(ulong *)(lVar9 + 0x3b8) < *(ulong *)(lVar9 + 0x3c0)) {
    FUN_017c6e5c();
  }
  else {
    FUN_017c6f64(lVar9 + 0x3b0,&local_90);
  }
  lVar9 = plVar11[6];
  psVar2 = (short *)(lVar9 + 0x1a);
  do {
    sVar6 = *psVar2;
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar13) {
      *psVar2 = sVar6 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar6 == 1) {
    *(undefined8 *)(lVar9 + 0x10) = 0;
    pcVar14 = *(code **)(*plVar11 + 0x50);
    goto LAB_017c6a44;
  }
LAB_017c6778:
  if (sVar6 == 0) goto LAB_017c6c5c;
  goto LAB_017c677c;
LAB_017c699c:
  uVar16 = *(ulong *)(param_1 + 0xf0);
  uVar18 = *(ulong *)(*(long *)((long)*(undefined8 **)(param_1 + 0xb8) +
                               (uVar16 >> 6 & 0x3fffffffffffff8)) + (uVar16 & 0x1ff) * 8);
  *(ulong *)(param_1 + 0xf0) = uVar16 + 1;
  *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + -1;
  if (0x3ff < uVar16 + 1) {
    uVar12 = **(undefined8 **)(param_1 + 0xb8);
    plVar11 = *(long **)(param_1 + 0x100);
    uVar16 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar16 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,uVar12,0x1000,8);
    }
    else {
      FUN_00c48fe8(plVar11,uVar12,0x1000,8);
    }
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 8;
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + -0x200;
  }
  uVar16 = uVar18 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(*(long *)(param_1 + 0x78) + uVar16) =
       *(ulong *)(*(long *)(param_1 + 0x78) + uVar16) &
       (1L << (uVar18 & 0x3f) ^ 0xffffffffffffffffU);
  plVar11 = (long *)**(long **)(param_1 + 0x70);
  if (plVar11 != (long *)0x0) {
    lVar9 = plVar11[6];
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_017c6c3c;
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar6 = *psVar2;
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar13) {
        *psVar2 = sVar6 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar12;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar6 == -1) goto LAB_017c6c84;
  }
  lVar9 = *(long *)(*(long *)plVar11[0x80] + 0x3b8);
  lVar17 = *(long *)(*(long *)plVar11[0x80] + 0x3b0);
  if (plVar11 != (long *)0x0) {
    lVar15 = plVar11[6];
    psVar2 = (short *)(lVar15 + 0x1a);
    do {
      sVar6 = *psVar2;
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar13) {
        *psVar2 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))();
    }
    else if (sVar6 == 0) goto LAB_017c6c5c;
  }
  if (uVar18 < (ulong)((lVar9 - lVar17 >> 3) * -0x3333333333333333)) goto code_r0x017c65c0;
  goto LAB_017c6570;
code_r0x017c65c0:
  plVar11 = *(long **)*puVar3;
  if (plVar11 != (long *)0x0) {
    lVar9 = plVar11[6];
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_017c6c3c;
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar6 = *psVar2;
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar13) {
        *psVar2 = sVar6 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar12;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar6 == -1) goto LAB_017c6c84;
  }
  lVar9 = *(long *)(*(long *)plVar11[0x80] + 0x3b0);
  if ((ulong)((*(long *)(*(long *)plVar11[0x80] + 0x3b8) - lVar9 >> 3) * -0x3333333333333333) <=
      uVar18) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  puVar20 = (undefined8 *)(lVar9 + uVar18 * 0x28);
  *puVar20 = local_90;
  FUN_00c43ef0(puVar20 + 1,&local_88);
  puVar20[3] = CONCAT71(uStack_77,local_78);
  puVar20[4] = local_70;
  lVar9 = plVar11[6];
  psVar2 = (short *)(lVar9 + 0x1a);
  do {
    sVar6 = *psVar2;
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar13) {
      *psVar2 = sVar6 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar6 != 1) goto LAB_017c6778;
  *(undefined8 *)(lVar9 + 0x10) = 0;
  pcVar14 = *(code **)(*plVar11 + 0x50);
LAB_017c6a44:
  (*pcVar14)(plVar11);
LAB_017c677c:
  puVar10 = (ulong *)FUN_017c6cf0(puVar3,uVar18);
  *puVar10 = uVar18;
  lVar9 = FUN_017c6cf0(puVar3,uVar18);
  *(undefined1 *)(lVar9 + 0x18) = 0;
  nn::os::ReleaseSemaphore((SemaphoreType *)(plVar19 + 0x87));
  if (plVar19 != (long *)0x0) {
    lVar9 = plVar19[6];
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar6 = *psVar2;
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar13) {
        *psVar2 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar19 + 0x50))(plVar19);
    }
    else if (sVar6 == 0) {
LAB_017c6c5c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  puVar3 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_88 + 3);
    do {
      sVar6 = *psVar2;
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar13) {
        *psVar2 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar4 = (int *)((long)local_88 + 0x1c);
      do {
        iVar8 = *piVar4;
        cVar7 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar13) {
          *piVar4 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_68 = *puVar3;
        FUN_00c44438(lVar9 + 0x8040,&local_68);
      }
    }
    else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x58));
  do {
    lVar9 = *plVar1;
    lVar17 = *(long *)(param_1 + 0x38);
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x38) = lVar17;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar15 = *plVar1;
    lVar5 = *(long *)(param_1 + 0x38);
    if (lVar15 != lVar9 || lVar5 != lVar17) {
      bVar13 = false;
      ClearExclusiveLocal();
      goto LAB_017c68b0;
    }
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x34) = lVar17;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar13 = true;
LAB_017c68b0:
  if (!bVar13) {
    do {
      lVar9 = *plVar1;
      lVar17 = *(long *)(param_1 + 0x38);
      if (lVar9 != lVar15 || lVar17 != lVar5) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto joined_r0x017c6bfc;
      }
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x34) = lVar5;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar13 = true;
joined_r0x017c6bfc:
    if (!bVar13) {
      do {
        lVar15 = *plVar1;
        lVar5 = *(long *)(param_1 + 0x38);
        if (lVar15 != lVar9 || lVar5 != lVar17) {
          bVar13 = false;
          ClearExclusiveLocal();
          lVar9 = lVar15;
          lVar17 = lVar5;
          goto joined_r0x017c6bfc;
        }
        cVar7 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x34) = lVar17;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar13 = true;
      lVar9 = lVar15;
      lVar17 = lVar5;
      goto joined_r0x017c6bfc;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x40));
  return uVar18;
}



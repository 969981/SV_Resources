/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dda2d0; name: FUN_00dda2d0
 */


long * FUN_00dda2d0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  undefined1 *puVar21;
  ulong uVar22;
  undefined1 *puVar23;
  
  plVar8 = (long *)(**(code **)(*param_1 + 0x18))();
  puVar23 = &DAT_04865a38;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_00ddab24:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  plVar10 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0xe0,0x10);
  if (plVar10 == (long *)0x0) {
LAB_00ddab70:
    (**(code **)(*plVar8 + 0xe8))(plVar8);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_00ddabf0(plVar10,param_2,param_3);
  *(undefined4 *)(plVar10 + 3) = 0x1000e0;
  plVar10[1] = (long)plVar8;
  plVar10[2] = (long)plVar10;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  lVar9 = plVar10[6];
  if (*(long *)(lVar9 + 0x10) == 0) {
LAB_00ddab28:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar9 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 0) {
    uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
    *(undefined8 *)(lVar9 + 8) = uVar11;
    *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) goto LAB_00ddab48;
  plVar20 = param_1 + 2;
  lVar18 = *plVar20;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar18) {
    lVar9 = nn::os::GetCurrentThread();
LAB_00dda3dc:
    if (*plVar20 == 0) goto code_r0x00dda3e4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 3));
    do {
      if (*plVar20 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 3));
          while (*plVar20 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar4) {
              *plVar20 = lVar9;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_00dda3ec;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *plVar20 = lVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_00dda3ec:
    bVar4 = false;
    goto LAB_00dda3f0;
  }
  plVar20 = (long *)0x0;
  bVar4 = true;
LAB_00dda3f0:
  plVar19 = (long *)param_1[1];
  if (plVar19 == (long *)0x0) {
    plVar8 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
    lVar9 = (**(code **)(*param_1 + 0x18))(param_1);
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar18 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_00ddab24;
    *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar8;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
    plVar19 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0xf0,0x10);
    puVar6 = PTR_DAT_047d66f8;
    if (plVar19 == (long *)0x0) goto LAB_00ddab70;
    plVar19[2] = 0;
    *(undefined4 *)(plVar19 + 3) = 0;
    *plVar19 = (long)(puVar6 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    nn::os::GetTlsValue(DAT_04865a30);
    plVar13 = plVar19 + 5;
    *(int *)plVar13 = 0;
    plVar19[4] = (long)&PTR_LAB_045a0420;
    *(undefined4 *)(plVar19 + 0xc) = 0x3f800000;
    *plVar19 = (long)&PTR_FUN_045a03e8;
    plVar19[1] = (long)plVar8;
    plVar19[6] = 0;
    plVar19[7] = 0;
    plVar19[2] = (long)plVar19;
    *(undefined4 *)(plVar19 + 3) = 0x1000f0;
    plVar19[8] = lVar9;
    plVar19[9] = 0;
    plVar19[10] = lVar9;
    plVar19[0xb] = 0;
    plVar19[0xe] = 0;
    plVar19[0xf] = 0;
    plVar19[0x10] = 0;
    plVar19[0x11] = 0;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
    do {
      lVar9 = *plVar13;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = (int)lVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar9 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    plVar8 = (long *)param_1[1];
    param_1[1] = 0;
    if (plVar8 != (long *)0x0) {
      plVar13 = plVar8 + 5;
      do {
        lVar9 = *plVar13;
        iVar7 = (int)lVar9 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *(int *)plVar13 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    param_1[1] = (long)plVar19;
  }
  puVar21 = (undefined1 *)plVar19[7];
  plVar8 = plVar19 + 6;
  if (puVar21 != (undefined1 *)0x0) {
    if (((ulong)puVar21 & (ulong)(puVar21 + -1)) == 0) {
      puVar23 = (undefined1 *)((ulong)~(uint)puVar21 & 1);
      plVar13 = *(long **)(*plVar8 + (long)puVar23 * 8);
      if (plVar13 != (long *)0x0) {
        do {
          plVar13 = (long *)*plVar13;
          if ((plVar13 == (long *)0x0) ||
             (plVar13[1] != 1 && (undefined1 *)(plVar13[1] & (ulong)(puVar21 + -1)) != puVar23))
          goto LAB_00dda5d4;
        } while ((long *)plVar13[2] != plVar10);
        goto LAB_00dda44c;
      }
    }
    else {
      puVar23 = (undefined1 *)(ulong)((undefined1 *)0x1 < puVar21);
      plVar13 = *(long **)(*plVar8 + (long)puVar23 * 8);
      if (plVar13 != (long *)0x0) {
        do {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_00dda5d4;
          puVar15 = (undefined1 *)plVar13[1];
          if (puVar15 != (undefined1 *)0x1) {
            if (puVar21 <= puVar15) {
              uVar22 = 0;
              if (puVar21 != (undefined1 *)0x0) {
                uVar22 = (ulong)puVar15 / (ulong)puVar21;
              }
              puVar15 = puVar15 + -(uVar22 * (long)puVar21);
            }
            if (puVar15 != puVar23) goto LAB_00dda5d4;
          }
        } while ((long *)plVar13[2] != plVar10);
LAB_00dda44c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("pair.second","AddPoint",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/scene/scene_point_holder.cpp"
                   ,0x49);
      }
    }
  }
LAB_00dda5d4:
  plVar13 = (long *)(**(code **)(*(long *)plVar19[10] + 0x10))((long *)plVar19[10],0x18,8);
  if (plVar13 == (long *)0x0) {
    (**(code **)(*(long *)plVar19[10] + 0xe8))();
  }
  lVar9 = plVar19[10];
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar18 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar18 != 0) {
    if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_00ddab24;
    *(long *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = lVar9;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
  }
  plVar13[2] = (long)plVar10;
  lVar9 = plVar10[6];
  if (*(long *)(lVar9 + 0x10) == 0) goto LAB_00ddab28;
  psVar1 = (short *)(lVar9 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 0) {
    uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
    *(undefined8 *)(lVar9 + 8) = uVar11;
    *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) {
LAB_00ddab48:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  if (lVar18 != 0) {
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
  }
  *plVar13 = 0;
  plVar13[1] = 1;
  if ((puVar21 == (undefined1 *)0x0) ||
     (*(float *)(plVar19 + 0xc) * (float)puVar21 < (float)(plVar19[0xb] + 1))) {
    uVar22 = (ulong)(puVar21 < (undefined1 *)0x3 || ((ulong)puVar21 & (ulong)(puVar21 + -1)) != 0) |
             (long)puVar21 << 1;
    uVar16 = (ulong)((float)(plVar19[0xb] + 1) / *(float *)(plVar19 + 0xc));
    if (uVar16 <= uVar22) {
      uVar16 = uVar22;
    }
    if (uVar16 - 1 == 0) {
      uVar16 = 2;
    }
    else if ((uVar16 & uVar16 - 1) != 0) {
      uVar16 = std::__next_prime(uVar16);
    }
    uVar22 = plVar19[7];
    if (uVar22 < uVar16) {
      uVar12 = uVar16;
LAB_00dda6f0:
      FUN_00ddbae0(plVar8,uVar12);
    }
    else if (uVar16 < uVar22) {
      uVar12 = (ulong)((float)(ulong)plVar19[0xb] / *(float *)(plVar19 + 0xc));
      if ((uVar22 < 3) ||
         (uVar14 = uVar22 - (uVar22 >> 1 & 0x5555555555555555),
         uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333),
         1 < (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar12 = std::__next_prime(uVar12);
      }
      else if (1 < uVar12) {
        uVar12 = 1L << (-LZCOUNT(uVar12 - 1) & 0x3fU);
      }
      if (uVar12 <= uVar16) {
        uVar12 = uVar16;
      }
      if (uVar12 < uVar22) goto LAB_00dda6f0;
    }
    puVar21 = (undefined1 *)plVar19[7];
    if (((ulong)puVar21 & (ulong)(puVar21 + -1)) == 0) {
      puVar23 = (undefined1 *)((ulong)~(uint)puVar21 & 1);
    }
    else {
      puVar23 = (undefined1 *)(ulong)((undefined1 *)0x1 < puVar21);
    }
  }
  plVar17 = *(long **)(*plVar8 + (long)puVar23 * 8);
  if (plVar17 == (long *)0x0) {
    plVar17 = plVar19 + 9;
    *plVar13 = *plVar17;
    *plVar17 = (long)plVar13;
    *(long **)(plVar19[6] + (long)puVar23 * 8) = plVar17;
    if (*plVar13 == 0) goto LAB_00dda724;
    puVar23 = *(undefined1 **)(*plVar13 + 8);
    if (((ulong)puVar21 & (ulong)(puVar21 + -1)) == 0) {
      puVar23 = (undefined1 *)((ulong)puVar23 & (ulong)(puVar21 + -1));
    }
    else if (puVar21 <= puVar23) {
      uVar22 = 0;
      if (puVar21 != (undefined1 *)0x0) {
        uVar22 = (ulong)puVar23 / (ulong)puVar21;
      }
      puVar23 = puVar23 + -(uVar22 * (long)puVar21);
    }
    plVar17 = (long *)(*plVar8 + (long)puVar23 * 8);
  }
  else {
    *plVar13 = *plVar17;
  }
  *plVar17 = (long)plVar13;
LAB_00dda724:
  plVar19[0xb] = plVar19[0xb] + 1;
  if (!bVar4) {
    *plVar20 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar20 + 1));
  }
  lVar9 = plVar10[6];
  psVar1 = (short *)(lVar9 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 1) {
    *(undefined8 *)(lVar9 + 0x10) = 0;
    (**(code **)(*plVar10 + 0x50))(plVar10);
  }
  else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return plVar13 + 2;
code_r0x00dda3e4:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
  if (bVar4) {
    *plVar20 = lVar9;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_00dda3ec;
  goto LAB_00dda3dc;
}



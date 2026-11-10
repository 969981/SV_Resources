/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f535ac; name: FUN_00f535ac
 */


void FUN_00f535ac(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,byte param_5)

{
  short *psVar1;
  int *piVar2;
  ulong *puVar3;
  short sVar4;
  char cVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  bool bVar16;
  short sVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  ulong unaff_x27;
  undefined8 uVar21;
  float fVar22;
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x148));
  uVar12 = *(ulong *)(param_1 + 0xe8);
  if (uVar12 != 0) {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar20 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar13 = (ulong)param_2;
    if (uVar20 < 2) {
      uVar14 = (ulong)((int)uVar12 - 1U & param_2);
    }
    else {
      uVar14 = uVar13;
      if (uVar12 <= uVar13) {
        uVar14 = 0;
        if (uVar12 != 0) {
          uVar14 = uVar13 / uVar12;
        }
        uVar14 = uVar13 - uVar14 * uVar12;
      }
    }
    plVar18 = *(long **)(*(long *)(param_1 + 0xe0) + uVar14 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar20 < 2) {
        do {
          if (plVar18[1] == uVar13) {
            if (*(uint *)(plVar18 + 2) == param_2) goto LAB_00f53678;
          }
          else if ((plVar18[1] & uVar12 - 1) != uVar14) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar20 = plVar18[1];
          if (uVar20 == uVar13) {
            if (*(uint *)(plVar18 + 2) == param_2) goto LAB_00f53678;
          }
          else {
            if (uVar12 <= uVar20) {
              uVar15 = 0;
              if (uVar12 != 0) {
                uVar15 = uVar20 / uVar12;
              }
              uVar20 = uVar20 - uVar15 * uVar12;
            }
            if (uVar20 != uVar14) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  goto LAB_00f5368c;
LAB_00f53678:
  FUN_00f53cf4(&local_78,plVar18[3]);
  if (local_78 == (undefined8 *)0x0) goto LAB_00f5368c;
  if (*(short *)((long)local_78 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_78 + 0x1a);
    sVar17 = *(short *)((long)local_78 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar17) {
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00f53718;
        bVar16 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00f53718:
        bVar16 = false;
      }
      if (bVar16) {
        lVar9 = local_78[2];
        if (lVar9 != 0) {
          FUN_01221800(&local_68,param_3,param_4);
          puVar3 = (ulong *)PTR_DAT_047d8b70;
          if (local_68 != (long *)0x0) {
            puVar3 = (ulong *)(local_68 + 6);
          }
          uVar13 = *puVar3;
          uVar12 = *(ulong *)(lVar9 + 0x68);
          plVar18 = (long *)(lVar9 + 0x60);
          if (uVar12 == 0) goto LAB_00f53a38;
          uVar20 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
          uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
          uVar14 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          uVar20 = 0;
          if (uVar12 != 0) {
            uVar20 = uVar13 / uVar12;
          }
          if (uVar14 < 2) {
            uVar15 = uVar12 - 1 & uVar13;
          }
          else {
            uVar15 = uVar13;
            if (uVar12 <= uVar13) {
              uVar15 = uVar13 - uVar20 * uVar12;
            }
          }
          plVar19 = *(long **)(*plVar18 + uVar15 * 8);
          if ((plVar19 == (long *)0x0) || (plVar19 = (long *)*plVar19, plVar19 == (long *)0x0))
          goto LAB_00f53918;
          if (1 < uVar14) goto LAB_00f5386c;
          goto LAB_00f538d0;
        }
        break;
      }
      sVar17 = sVar4;
    } while (sVar4 != 0);
  }
  goto LAB_00f53728;
LAB_00f5386c:
  do {
    uVar14 = plVar19[1];
    if (uVar14 == uVar13) {
      puVar3 = (ulong *)PTR_DAT_047d8b70;
      if (plVar19[2] != 0) {
        puVar3 = (ulong *)(plVar19[2] + 0x30);
      }
      if (*puVar3 == uVar13) goto LAB_00f538b8;
    }
    else {
      if (uVar12 <= uVar14) {
        uVar6 = 0;
        if (uVar12 != 0) {
          uVar6 = uVar14 / uVar12;
        }
        uVar14 = uVar14 - uVar6 * uVar12;
      }
      if (uVar14 != uVar15) break;
    }
    plVar19 = (long *)*plVar19;
  } while (plVar19 != (long *)0x0);
  goto LAB_00f53914;
LAB_00f538b8:
  *(byte *)(plVar19 + 3) = param_5 & 1;
  goto LAB_00f53b1c;
  while (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0) {
LAB_00f538d0:
    if (plVar19[1] == uVar13) {
      puVar3 = (ulong *)PTR_DAT_047d8b70;
      if (plVar19[2] != 0) {
        puVar3 = (ulong *)(plVar19[2] + 0x30);
      }
      if (*puVar3 == uVar13) goto LAB_00f538b8;
    }
    else if ((plVar19[1] & uVar12 - 1) != uVar15) break;
  }
LAB_00f53914:
  if (uVar12 == 0) {
LAB_00f53a38:
    plVar19 = (long *)(**(code **)(**(long **)(lVar9 + 0x98) + 0x10))
                                (*(long **)(lVar9 + 0x98),0x20,8);
    if (plVar19 == (long *)0x0) {
      (**(code **)(**(long **)(lVar9 + 0x98) + 0xe8))();
    }
    uVar21 = *(undefined8 *)(lVar9 + 0x98);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 != 0) {
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar21;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    }
    plVar19[2] = (long)local_68;
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
    }
    *(undefined1 *)(plVar19 + 3) = 0;
    if (lVar11 != 0) {
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    *plVar19 = 0;
    plVar19[1] = uVar13;
    fVar22 = (float)(*(long *)(lVar9 + 0xb8) + 1);
    if ((uVar12 == 0) || (*(float *)(lVar9 + 0xc0) * (float)uVar12 < fVar22)) {
      uVar12 = (ulong)(uVar12 < 3 || (uVar12 & uVar12 - 1) != 0) | uVar12 << 1;
      uVar20 = (ulong)(fVar22 / *(float *)(lVar9 + 0xc0));
      if (uVar20 <= uVar12) {
        uVar20 = uVar12;
      }
      FUN_01452368(plVar18,uVar20);
      uVar12 = *(ulong *)(lVar9 + 0x68);
      if ((uVar12 & uVar12 - 1) == 0) {
        unaff_x27 = uVar12 - 1 & uVar13;
      }
      else if (uVar13 < uVar12) {
        unaff_x27 = uVar13;
      }
      else {
        uVar20 = 0;
        if (uVar12 != 0) {
          uVar20 = uVar13 / uVar12;
        }
        unaff_x27 = uVar13 - uVar20 * uVar12;
      }
    }
    plVar10 = *(long **)(*plVar18 + unaff_x27 * 8);
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)(lVar9 + 0x90);
      *plVar19 = *plVar10;
      *plVar10 = (long)plVar19;
      *(long **)(*(long *)(lVar9 + 0x60) + unaff_x27 * 8) = plVar10;
      if (*plVar19 != 0) {
        uVar13 = *(ulong *)(*plVar19 + 8);
        if ((uVar12 & uVar12 - 1) == 0) {
          uVar13 = uVar13 & uVar12 - 1;
        }
        else if (uVar12 <= uVar13) {
          uVar20 = 0;
          if (uVar12 != 0) {
            uVar20 = uVar13 / uVar12;
          }
          uVar13 = uVar13 - uVar20 * uVar12;
        }
        plVar10 = (long *)(*plVar18 + uVar13 * 8);
        goto LAB_00f53b04;
      }
    }
    else {
      *plVar19 = *plVar10;
LAB_00f53b04:
      *plVar10 = (long)plVar19;
    }
    *(long *)(lVar9 + 0xb8) = *(long *)(lVar9 + 0xb8) + 1;
  }
  else {
LAB_00f53918:
    uVar14 = uVar12 - 1;
    if ((uVar12 & uVar14) == 0) {
      unaff_x27 = uVar14 & uVar13;
      plVar19 = *(long **)(*plVar18 + unaff_x27 * 8);
      if (plVar19 == (long *)0x0) goto LAB_00f53a38;
      do {
        plVar19 = (long *)*plVar19;
        if ((plVar19 == (long *)0x0) || (plVar19[1] != uVar13 && (plVar19[1] & uVar14) != unaff_x27)
           ) goto LAB_00f53a38;
        puVar3 = (ulong *)PTR_DAT_047d8b70;
        if (plVar19[2] != 0) {
          puVar3 = (ulong *)(plVar19[2] + 0x30);
        }
      } while (*puVar3 != uVar13);
    }
    else {
      unaff_x27 = uVar13;
      if (uVar12 <= uVar13) {
        unaff_x27 = uVar13 - uVar20 * uVar12;
      }
      plVar19 = *(long **)(*plVar18 + unaff_x27 * 8);
      if (plVar19 == (long *)0x0) goto LAB_00f53a38;
      do {
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) goto LAB_00f53a38;
        uVar20 = plVar19[1];
        if (uVar20 != uVar13) {
          if (uVar12 <= uVar20) {
            uVar14 = 0;
            if (uVar12 != 0) {
              uVar14 = uVar20 / uVar12;
            }
            uVar20 = uVar20 - uVar14 * uVar12;
          }
          if (uVar20 != unaff_x27) goto LAB_00f53a38;
        }
        puVar3 = (ulong *)PTR_DAT_047d8b70;
        if (plVar19[2] != 0) {
          puVar3 = (ulong *)(plVar19[2] + 0x30);
        }
      } while (*puVar3 != uVar13);
    }
  }
  *(byte *)(plVar19 + 3) = param_5 & 1;
LAB_00f53b1c:
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  lVar11 = *(long *)(lVar9 + 8);
  psVar1 = (short *)(lVar11 + 0x1a);
  do {
    sVar17 = *psVar1;
    cVar5 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar16) {
      *psVar1 = sVar17 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar17 == 1) {
    *(undefined8 *)(lVar11 + 0x10) = 0;
    (**(code **)(*(long *)(lVar9 + -0x28) + 0x50))((long *)(lVar9 + -0x28));
  }
  else if (sVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_00f53728:
  puVar7 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_78 + 3);
    do {
      sVar17 = *psVar1;
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar16) {
        *psVar1 = sVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar17 == 1) {
      piVar2 = (int *)((long)local_78 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar16) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_68 = (long *)*puVar7;
        FUN_00c44438(lVar9 + 0x8040,&local_68);
      }
    }
    else if (sVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
LAB_00f5368c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x148));
  return;
}



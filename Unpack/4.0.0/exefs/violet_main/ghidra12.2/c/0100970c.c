/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0100970c; name: FUN_0100970c
 */


void FUN_0100970c(long *param_1)

{
  int *piVar1;
  short *psVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  short sVar7;
  char cVar8;
  bool bVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  undefined1 local_78 [8];
  long *local_70;
  long *local_68;
  
  puVar10 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar10 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar12 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = 0;
    if (*(long *)(lVar12 + 0x80) != 0) {
      lVar17 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_FUN_0459dd50;
  param_1[1] = lVar17;
  param_1[4] = (long)&PTR_LAB_0459dd88;
  plVar14 = param_1 + 6;
  *plVar14 = 0;
  plVar20 = param_1 + 7;
  *plVar20 = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
     (lVar12 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8), lVar12 == 0)) {
    lVar17 = tpidr_el0;
    lVar12 = *(long *)(lVar17 + 0x30);
    if (lVar12 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04859438), iVar11 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar12 = DAT_04859430;
      *(long *)(lVar17 + 0x30) = DAT_04859430;
    }
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  plVar21 = (long *)param_1[1];
  param_1[10] = lVar12;
  param_1[0xe] = 0;
  param_1[0xb] = 0x1fffffffffffffff;
  param_1[0xc] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_01009fa8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar21;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
  lVar17 = (**(code **)(*plVar21 + 0x10))(plVar21,0x130,0x10);
  if (lVar17 == 0) {
LAB_01009fb4:
    (**(code **)(*plVar21 + 0xe8))(plVar21);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_0100a118(lVar17,&DAT_0485a0a0);
  *(undefined4 *)(lVar17 + 0x18) = 0x100130;
  *(long **)(lVar17 + 8) = plVar21;
  *(long *)(lVar17 + 0x10) = lVar17;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  piVar1 = (int *)(lVar17 + 0x28);
  do {
    iVar11 = *piVar1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar9) {
      *piVar1 = iVar11 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (iVar11 == -1) {
LAB_0100a004:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  plVar21 = (long *)*plVar14;
  *plVar14 = 0;
  if (plVar21 != (long *)0x0) {
    plVar16 = plVar21 + 5;
    do {
      lVar12 = *plVar16;
      iVar11 = (int)lVar12 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar9) {
        *(int *)plVar16 = iVar11;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar21 + 0x10))();
    }
    else if ((int)lVar12 == 0) goto LAB_01009bdc;
  }
  lVar12 = param_1[7];
  plVar21 = (long *)param_1[8];
  param_1[6] = lVar17;
  if ((long)plVar21 - lVar12 == 0) {
    if (param_1[9] - (long)plVar21 >> 3 == 0) {
      uVar19 = param_1[0xb];
      if (0x7ffffffffffffffe < uVar19) {
        uVar19 = 0x7fffffffffffffff;
      }
      if (uVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar12 = param_1[9] - lVar12;
      uVar18 = lVar12 >> 2;
      uVar6 = 1;
      if (uVar18 != 0) {
        uVar6 = uVar18;
      }
      plVar21 = param_1 + 10;
      if (uVar19 >> 1 <= (ulong)(lVar12 >> 3)) {
        uVar6 = uVar19;
      }
      if (uVar6 == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = (**(code **)(*(long *)*plVar21 + 0x10))((long *)*plVar21,uVar6 << 3,8);
        if (lVar12 == 0) {
          (**(code **)(*(long *)*plVar21 + 0xe8))();
        }
      }
      lVar4 = lVar12 + 8;
      lVar5 = lVar12 + uVar6 * 8;
      lVar17 = 0;
      do {
        lVar23 = *plVar21;
        if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar13 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar13 == 0) {
          *(undefined8 *)(lVar12 + lVar17) = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_01009fa8;
          *(long *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = lVar23;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          *(undefined8 *)(lVar12 + lVar17) = 0;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        }
        lVar17 = lVar17 + 8;
      } while (lVar17 != 8);
      plVar16 = (long *)param_1[7];
      plVar22 = (long *)param_1[8];
      if (plVar22 == plVar16) {
        plVar22 = plVar16;
      }
      else {
        do {
          lVar12 = lVar12 + -8;
          plVar22 = plVar22 + -1;
          FUN_0100b0a0(plVar21,lVar12,plVar22);
        } while (plVar16 != plVar22);
        plVar16 = (long *)param_1[7];
        plVar22 = (long *)param_1[8];
      }
      lVar17 = param_1[9];
      param_1[7] = lVar12;
      param_1[8] = lVar4;
      param_1[9] = lVar5;
      do {
        while( true ) {
          do {
            if (plVar22 == plVar16) {
              if (plVar16 != (long *)0x0) {
                plVar21 = (long *)*plVar21;
                uVar19 = (**(code **)(*plVar21 + 0xf8))(plVar21);
                if (((uVar19 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar21 + 0x18))(plVar21,plVar16,lVar17 - (long)plVar16,8);
                }
                else {
                  FUN_00c48fe8(plVar21,plVar16,lVar17 - (long)plVar16,8);
                }
              }
              goto LAB_010099ec;
            }
            plVar22 = plVar22 + -1;
            plVar15 = (long *)*plVar22;
          } while (plVar15 == (long *)0x0);
          plVar3 = plVar15 + 5;
          do {
            lVar12 = *plVar3;
            iVar11 = (int)lVar12 + -1;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar9) {
              *(int *)plVar3 = iVar11;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar11 != 0) break;
          (**(code **)(*plVar15 + 0x10))();
        }
      } while ((int)lVar12 != 0);
      goto LAB_01009bdc;
    }
    FUN_0100b6b4(plVar20,1);
  }
  else if (1 < (ulong)((long)plVar21 - lVar12 >> 3)) {
    do {
      while( true ) {
        do {
          if ((long *)(lVar12 + 8) == plVar21) {
            param_1[8] = lVar12 + 8;
            goto LAB_010099ec;
          }
          plVar21 = plVar21 + -1;
          plVar16 = (long *)*plVar21;
        } while (plVar16 == (long *)0x0);
        plVar22 = plVar16 + 5;
        do {
          lVar17 = *plVar22;
          iVar11 = (int)lVar17 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar9) {
            *(int *)plVar22 = iVar11;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar11 != 0) break;
        (**(code **)(*plVar16 + 0x10))();
      }
    } while ((int)lVar17 != 0);
    goto LAB_01009bdc;
  }
LAB_010099ec:
  local_68 = (long *)**(long **)(*plVar14 + 0x30);
  if (local_68 != (long *)0x0) {
    plVar14 = local_68 + 5;
    do {
      lVar12 = *plVar14;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar9) {
        *(int *)plVar14 = (int)lVar12 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((int)lVar12 == -1) goto LAB_0100a004;
  }
  local_78[0] = 0;
  (**(code **)(*(long *)(DAT_0485a0c8 + 0x30) + 0x50))
            (&local_70,(long *)(DAT_0485a0c8 + 0x30),&local_68,local_78);
  if (local_68 != (long *)0x0) {
    plVar14 = local_68 + 5;
    do {
      lVar12 = *plVar14;
      iVar11 = (int)lVar12 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar9) {
        *(int *)plVar14 = iVar11;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar12 == 0) goto LAB_01009bdc;
  }
  plVar21 = (long *)param_1[1];
  if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_01009fa8;
  *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar21;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
  lVar17 = (**(code **)(*plVar21 + 0x10))(plVar21,0xa0,8);
  if (lVar17 == 0) goto LAB_01009fb4;
  local_68 = (long *)0x0;
  FUN_011689dc(lVar17,&local_70,&local_68);
  if (local_68 != (long *)0x0) {
    plVar14 = local_68 + 5;
    do {
      lVar4 = *plVar14;
      iVar11 = (int)lVar4 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar9) {
        *(int *)plVar14 = iVar11;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_01009bdc;
  }
  *(undefined4 *)(lVar17 + 0x18) = 0x800a0;
  *(long **)(lVar17 + 8) = plVar21;
  *(long *)(lVar17 + 0x10) = lVar17;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  piVar1 = (int *)(lVar17 + 0x28);
  do {
    iVar11 = *piVar1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar9) {
      *piVar1 = iVar11 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (iVar11 == -1) goto LAB_0100a004;
  plVar20 = (long *)*plVar20;
  plVar14 = (long *)*plVar20;
  *plVar20 = 0;
  if (plVar14 != (long *)0x0) {
    plVar21 = plVar14 + 5;
    do {
      lVar12 = *plVar21;
      iVar11 = (int)lVar12 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar9) {
        *(int *)plVar21 = iVar11;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
    else if ((int)lVar12 == 0) goto LAB_01009bdc;
  }
  *plVar20 = lVar17;
  if (local_70 != (long *)0x0) {
    plVar20 = local_70 + 5;
    do {
      lVar12 = *plVar20;
      iVar11 = (int)lVar12 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar9) {
        *(int *)plVar20 = iVar11;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    else if ((int)lVar12 == 0) {
LAB_01009bdc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (((*PTR_DAT_047d88d0 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88d0);
  }
  *(undefined8 *)PTR_DAT_047d88e0 = *(undefined8 *)PTR_DAT_047d88d8;
  FUN_01000b2c(&local_68);
  plVar20 = (long *)param_1[0xe];
  param_1[0xe] = 0;
  if (plVar20 != (long *)0x0) {
    lVar12 = plVar20[6];
    psVar2 = (short *)(lVar12 + 0x1a);
    do {
      sVar7 = *psVar2;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar9) {
        *psVar2 = sVar7 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar7 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar20 + 0x50))();
    }
    else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  param_1[0xe] = (long)local_68;
  return;
}



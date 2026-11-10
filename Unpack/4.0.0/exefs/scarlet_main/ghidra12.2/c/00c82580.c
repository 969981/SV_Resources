/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c82580; name: FUN_00c82580
 */


void FUN_00c82580(long param_1,long *param_2,undefined4 param_3,long *param_4,ulong param_5)

{
  short *psVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  uint uVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  void *__s;
  long lVar11;
  long lVar12;
  long *plVar13;
  void *pvVar14;
  code *pcVar15;
  ulong uVar16;
  undefined8 uVar17;
  short sVar18;
  ulong uVar19;
  long *plVar20;
  undefined8 uVar21;
  long lVar22;
  long *plVar23;
  undefined8 *puVar24;
  long local_98;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *plStack_68;
  
  plVar20 = (long *)(param_1 + 0x2d0);
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar20 == 0) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar8) {
      *plVar20 = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_00c825d0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2d8));
  do {
    if (*plVar20 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2d8));
        while (*plVar20 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar8) {
            *plVar20 = lVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_00c825d0;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar8) {
      *plVar20 = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_00c825d0:
  plVar13 = *(long **)(param_1 + 0x298);
  plVar23 = *(long **)(param_1 + 0x2a0);
  plVar20 = plVar13;
  if (plVar13 == plVar23) {
LAB_00c82614:
    if (plVar20 == plVar23) goto LAB_00c826f4;
    *(undefined4 *)(plVar20 + 3) = param_3;
    plVar20[4] = *param_4;
    plVar20[5] = param_4[1];
    plVar20[6] = param_4[2];
    plVar23 = (long *)param_4[3];
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
    plVar13 = (long *)plVar20[7];
    plVar20[7] = (long)plVar23;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x20))();
    }
    *(undefined1 *)(plVar20 + 8) = 1;
    lVar10 = plVar20[1];
    if ((lVar10 == 0) || (*(short *)(lVar10 + 0x1a) == 0)) goto LAB_00c8265c;
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar18 = *(short *)(lVar10 + 0x1a);
    do {
      sVar6 = *psVar1;
      if (sVar6 == sVar18) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar18 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_00c82dac;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00c82dac:
        bVar8 = false;
      }
      if (bVar8) {
        lVar10 = *(long *)(lVar10 + 0x10);
        plVar23 = (long *)(lVar10 + -0x28);
        plVar13 = (long *)0x0;
        if ((lVar10 != 0) && (plVar13 = plVar23, (param_5 & 1) == 0)) {
          lVar22 = FUN_00fa5b78(*plVar20,&DAT_03c32ba5);
          if (lVar22 == 0) {
            if (((*PTR_DAT_047db110 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047db110), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047dda40,PTR_DAT_047db118,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047db110);
            }
            *(undefined8 *)PTR_DAT_047db120 = *(undefined8 *)PTR_DAT_047db118;
            FUN_01fb5ed8(&local_80);
          }
          else {
            uVar5 = *(uint *)(lVar22 + 4);
            if (((*PTR_DAT_047db110 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047db110), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047dda40,PTR_DAT_047db118,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047db110);
            }
            uVar21 = *(undefined8 *)PTR_DAT_047db118;
            *(undefined8 *)PTR_DAT_047db120 = uVar21;
            FUN_02251914(&local_80,uVar21,*(undefined4 *)(lVar22 + (ulong)uVar5));
          }
          uVar21 = local_80;
          lVar22 = plVar20[9];
          if (plStack_68 != (long *)0x0) {
            (**(code **)(*plStack_68 + 0x18))(plStack_68);
          }
          *(undefined8 *)(lVar22 + 0x28) = uVar21;
          *(undefined8 *)(lVar22 + 0x30) = uStack_78;
          *(undefined8 *)(lVar22 + 0x38) = local_70;
          if (plStack_68 != (long *)0x0) {
            (**(code **)(*plStack_68 + 0x18))(plStack_68);
          }
          plVar20 = *(long **)(lVar22 + 0x40);
          *(long **)(lVar22 + 0x40) = plStack_68;
          if (plVar20 != (long *)0x0) {
            (**(code **)(*plVar20 + 0x20))();
          }
          if (plStack_68 != (long *)0x0) {
            (**(code **)(*plStack_68 + 0x20))(plStack_68);
            (**(code **)(*plStack_68 + 0x20))(plStack_68);
          }
        }
        if (lVar10 == 0) goto LAB_00c8265c;
        lVar10 = plVar13[6];
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar18 = *psVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar18 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar18 != 1) goto LAB_00c82e88;
        *(undefined8 *)(lVar10 + 0x10) = 0;
        pcVar15 = *(code **)(*plVar13 + 0x50);
        goto LAB_00c830fc;
      }
      sVar18 = sVar6;
      if (sVar6 == 0) goto LAB_00c8265c;
    } while( true );
  }
  do {
    if ((plVar20[1] == param_2[1]) && (*plVar20 == *param_2)) goto LAB_00c82614;
    plVar20 = plVar20 + 0xd;
  } while (plVar23 != plVar20);
LAB_00c826f4:
  if (plVar23 < *(long **)(param_1 + 0x2a8)) {
    uVar21 = *(undefined8 *)(param_1 + 0x2b0);
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar10 != 0) {
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00c83104;
      *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar21;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    }
    memset(plVar23,0,0x48);
    plVar23[6] = 0;
    plVar23[7] = 0;
    plVar23[4] = (long)&DAT_cbf29ce484222645;
    plVar23[5] = (long)&DAT_03c886bc;
    plVar23[9] = 0;
    plVar23[10] = 0;
    plVar23[0xb] = 0;
    plVar23[0xc] = 0;
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    }
    plVar23 = plVar23 + 0xd;
    *(long **)(param_1 + 0x2a0) = plVar23;
  }
  else {
    lVar10 = (long)plVar23 - (long)plVar13 >> 3;
    uVar19 = *(ulong *)(param_1 + 0x2b8);
    if (0x7ffffffffffffffe < uVar19) {
      uVar19 = 0x7fffffffffffffff;
    }
    uVar2 = lVar10 * 0x4ec4ec4ec4ec4ec5 + 1;
    if (uVar19 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar22 = (long)*(long **)(param_1 + 0x2a8) - (long)plVar13 >> 3;
    uVar16 = lVar22 * -0x6276276276276276;
    if (uVar2 <= uVar16) {
      uVar2 = uVar16;
    }
    if (uVar19 >> 1 <= (ulong)(lVar22 * 0x4ec4ec4ec4ec4ec5)) {
      uVar2 = uVar19;
    }
    if (uVar2 == 0) {
      local_98 = 0;
    }
    else {
      local_98 = (**(code **)(**(long **)(param_1 + 0x2b0) + 0x10))
                           (*(long **)(param_1 + 0x2b0),uVar2 * 0x68,8);
      if (local_98 == 0) {
        (**(code **)(**(long **)(param_1 + 0x2b0) + 0xe8))();
      }
    }
    uVar21 = *(undefined8 *)(param_1 + 0x2b0);
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar22 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar22 != 0) {
      if (0xf < *(ulong *)(lVar22 + 0x80)) goto LAB_00c83104;
      *(undefined8 *)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = uVar21;
      *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
    }
    __s = (void *)(local_98 + lVar10 * 8);
    lVar10 = local_98 + lVar10 * 8;
    memset(__s,0,0x48);
    *(undefined8 *)(lVar10 + 0x30) = 0;
    *(undefined8 *)(lVar10 + 0x38) = 0;
    *(undefined1 **)(lVar10 + 0x20) = &DAT_cbf29ce484222645;
    *(undefined1 **)(lVar10 + 0x28) = &DAT_03c886bc;
    *(undefined8 *)(lVar10 + 0x48) = 0;
    *(undefined8 *)(lVar10 + 0x50) = 0;
    *(undefined8 *)(lVar10 + 0x58) = 0;
    *(undefined8 *)(lVar10 + 0x60) = 0;
    if (lVar22 != 0) {
      *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
    }
    lVar10 = *(long *)(param_1 + 0x298);
    lVar22 = *(long *)(param_1 + 0x2a0);
    if (lVar22 == lVar10) {
      pvVar14 = __s;
      lVar22 = lVar10;
    }
    else {
      lVar12 = 0;
      do {
        uVar21 = *(undefined8 *)(param_1 + 0x2b0);
        if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar11 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar11 != 0) {
          if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00c83104;
          *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar21;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        }
        lVar4 = lVar22 + lVar12;
        uVar21 = *(undefined8 *)(lVar4 + -0x68);
        puVar24 = (undefined8 *)((long)__s + lVar12 + -0x60);
        *puVar24 = 0;
        *(undefined8 *)((long)__s + lVar12 + -0x68) = uVar21;
        *(undefined8 *)((long)__s + lVar12 + -0x58) = 0;
        FUN_0104d888(puVar24,lVar4 + -0x60);
        *(undefined4 *)((long)__s + lVar12 + -0x50) = *(undefined4 *)(lVar4 + -0x50);
        *(undefined8 *)((long)__s + lVar12 + -0x48) = *(undefined8 *)(lVar4 + -0x48);
        *(undefined8 *)((long)__s + lVar12 + -0x40) = *(undefined8 *)(lVar4 + -0x40);
        *(undefined8 *)((long)__s + lVar12 + -0x38) = *(undefined8 *)(lVar4 + -0x38);
        uVar21 = *(undefined8 *)(lVar4 + -0x30);
        *(undefined8 *)(lVar4 + -0x30) = 0;
        *(undefined8 *)((long)__s + lVar12 + -0x30) = uVar21;
        *(undefined1 *)((long)__s + lVar12 + -0x28) = *(undefined1 *)(lVar4 + -0x28);
        uVar21 = *(undefined8 *)(lVar4 + -0x20);
        *(undefined8 *)(lVar4 + -0x20) = 0;
        *(undefined8 *)((long)__s + lVar12 + -0x20) = uVar21;
        uVar21 = *(undefined8 *)(lVar4 + -0x18);
        uVar17 = *(undefined8 *)(lVar4 + -8);
        *(undefined8 *)((long)__s + lVar12 + -0x10) = *(undefined8 *)(lVar4 + -0x10);
        *(undefined8 *)((long)__s + lVar12 + -8) = uVar17;
        *(undefined8 *)((long)__s + lVar12 + -0x18) = uVar21;
        if (lVar11 != 0) {
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        }
        lVar12 = lVar12 + -0x68;
      } while (lVar10 - lVar22 != lVar12);
      lVar10 = *(long *)(param_1 + 0x2a0);
      pvVar14 = (void *)((long)__s + lVar12);
      lVar22 = *(long *)(param_1 + 0x298);
    }
    lVar12 = *(long *)(param_1 + 0x2a8);
    *(void **)(param_1 + 0x298) = pvVar14;
    *(long *)(param_1 + 0x2a0) = (long)__s + 0x68;
    *(ulong *)(param_1 + 0x2a8) = local_98 + uVar2 * 0x68;
    for (; lVar10 != lVar22; lVar10 = lVar10 + -0x68) {
      lVar11 = *(long *)(lVar10 + -0x20);
      *(undefined8 *)(lVar10 + -0x20) = 0;
      if (lVar11 != 0) {
        FUN_00c832cc(lVar10 + -0x18);
      }
      if (*(long **)(lVar10 + -0x30) != (long *)0x0) {
        (**(code **)(**(long **)(lVar10 + -0x30) + 0x20))();
      }
      puVar24 = *(undefined8 **)(lVar10 + -0x60);
      if (puVar24 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar24 + 3);
        do {
          sVar18 = *psVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar18 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar18 == 1) {
          piVar3 = (int *)((long)puVar24 + 0x1c);
          do {
            iVar9 = *piVar3;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar8) {
              *piVar3 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_80 = *puVar24;
            FUN_00c44438(lVar11 + 0x8040,&local_80);
          }
        }
        else if (sVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    if (lVar22 != 0) {
      plVar20 = *(long **)(param_1 + 0x2b0);
      lVar12 = lVar12 - lVar22;
      uVar19 = (**(code **)(*plVar20 + 0xf8))(plVar20);
      if (((uVar19 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar20 + 0x18))(plVar20,lVar22,lVar12,8);
      }
      else {
        FUN_00c48fe8(plVar20,lVar22,lVar12,8);
      }
    }
    plVar23 = *(long **)(param_1 + 0x2a0);
  }
  plVar23[-0xd] = *param_2;
  FUN_00c81640(plVar23 + -0xc,param_2 + 1);
  *(undefined4 *)(plVar23 + -10) = param_3;
  plVar23[-9] = *param_4;
  plVar23[-8] = param_4[1];
  plVar23[-7] = param_4[2];
  plVar20 = (long *)param_4[3];
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x18))(plVar20);
  }
  plVar13 = (long *)plVar23[-6];
  plVar23[-6] = (long)plVar20;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))();
  }
  plVar13 = *(long **)(param_1 + 8);
  plVar20 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x68,8);
  if (plVar20 == (long *)0x0) {
    lVar10 = 0;
    lVar22 = 0;
    plVar13 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_00c83104:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar13;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    FUN_01049774(plVar20);
    *plVar20 = (long)(PTR_DAT_047ddca0 + 0x10);
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    lVar22 = 0x68;
    lVar10 = 8;
  }
  lVar12 = plVar23[-4];
  plVar23[-4] = (long)plVar20;
  if (lVar12 != 0) {
    FUN_00c832cc(plVar23 + -3);
  }
  plVar23[-3] = (long)plVar13;
  plVar23[-2] = lVar22;
  plVar23[-1] = lVar10;
  if ((((param_5 & 1) != 0) || (lVar10 = plVar23[-0xc], lVar10 == 0)) ||
     (*(short *)(lVar10 + 0x1a) == 0)) goto LAB_00c8265c;
  psVar1 = (short *)(lVar10 + 0x1a);
  sVar18 = *(short *)(lVar10 + 0x1a);
  do {
    sVar6 = *psVar1;
    if (sVar6 == sVar18) {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar18 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
      if (cVar7 != '\0') goto LAB_00c828ac;
      bVar8 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00c828ac:
      bVar8 = false;
    }
    if (bVar8) {
      lVar10 = *(long *)(lVar10 + 0x10);
      plVar13 = (long *)(lVar10 + -0x28);
      if (lVar10 == 0) goto LAB_00c8265c;
      lVar12 = plVar23[-0xd];
      lVar22 = FUN_00fa5b78(lVar12,&DAT_03c32ba5);
      if (lVar22 == 0) {
        if (((*PTR_DAT_047db110 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047db110), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047dda40,PTR_DAT_047db118,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047db110);
        }
        *(undefined8 *)PTR_DAT_047db120 = *(undefined8 *)PTR_DAT_047db118;
        FUN_01fb5ed8(&local_80);
      }
      else {
        uVar5 = *(uint *)(lVar22 + 4);
        if (((*PTR_DAT_047db110 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047db110), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047dda40,PTR_DAT_047db118,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047db110);
        }
        uVar21 = *(undefined8 *)PTR_DAT_047db118;
        *(undefined8 *)PTR_DAT_047db120 = uVar21;
        FUN_02251914(&local_80,uVar21,*(undefined4 *)(lVar22 + (ulong)uVar5));
      }
      uVar21 = local_80;
      lVar22 = plVar23[-4];
      if (plStack_68 != (long *)0x0) {
        (**(code **)(*plStack_68 + 0x18))(plStack_68);
      }
      *(undefined8 *)(lVar22 + 0x28) = uVar21;
      *(undefined8 *)(lVar22 + 0x30) = uStack_78;
      *(undefined8 *)(lVar22 + 0x38) = local_70;
      if (plStack_68 != (long *)0x0) {
        (**(code **)(*plStack_68 + 0x18))(plStack_68);
      }
      plVar20 = *(long **)(lVar22 + 0x40);
      *(long **)(lVar22 + 0x40) = plStack_68;
      if (plVar20 != (long *)0x0) {
        (**(code **)(*plVar20 + 0x20))();
      }
      if (plStack_68 != (long *)0x0) {
        (**(code **)(*plStack_68 + 0x20))(plStack_68);
        (**(code **)(*plStack_68 + 0x20))(plStack_68);
      }
      lVar22 = plVar23[-4];
      bVar8 = *(long *)(lVar12 + 0x108) != lVar22;
      *(ushort *)(lVar12 + 0x114) =
           *(ushort *)(lVar12 + 0x114) & 0xfffb |
           (*(ushort *)(lVar12 + 0x114) >> 2 & 1 | (ushort)bVar8) << 2;
      if (bVar8) {
        *(long *)(lVar12 + 0x108) = lVar22;
      }
      lVar10 = *(long *)(lVar10 + 8);
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar18 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar18 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar18 != 1) {
LAB_00c82e88:
        if (sVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        goto LAB_00c8265c;
      }
      *(undefined8 *)(lVar10 + 0x10) = 0;
      pcVar15 = *(code **)(*plVar13 + 0x50);
LAB_00c830fc:
      (*pcVar15)(plVar13);
LAB_00c8265c:
      *(undefined8 *)(param_1 + 0x2d0) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2d8));
      return;
    }
    sVar18 = sVar6;
    if (sVar6 == 0) goto LAB_00c8265c;
  } while( true );
}



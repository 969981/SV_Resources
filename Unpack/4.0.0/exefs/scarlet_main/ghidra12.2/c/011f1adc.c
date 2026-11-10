/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011f1adc; name: FUN_011f1adc
 */


void FUN_011f1adc(long param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  ulong uVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  code *pcVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 *puVar24;
  long *plVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  plVar25 = (long *)(param_1 + 0x30);
  lVar11 = nn::os::GetCurrentThread();
  while (*plVar25 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
    if (bVar6) {
      *plVar25 = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_011f1b28;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
  do {
    if (*plVar25 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
        while (*plVar25 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar6) {
            *plVar25 = lVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_011f1b28;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
    if (bVar6) {
      *plVar25 = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_011f1b28:
  lVar11 = FUN_011f243c(param_1,param_2);
  plVar25 = *(long **)(lVar11 + 0x10);
  plVar21 = *(long **)(lVar11 + 0x18);
  if (((plVar25 != plVar21) && (*plVar25 != 0)) && (*(short *)(*plVar25 + 0x1a) != 0)) {
    do {
      plVar25 = plVar25 + 0x12;
      if (plVar21 == plVar25) {
        plVar25 = plVar21;
        goto LAB_011f1bdc;
      }
      if (*plVar25 == 0) goto LAB_011f1bdc;
    } while (*(short *)(*plVar25 + 0x1a) != 0);
  }
LAB_011f1bdc:
  plVar7 = plVar25;
  if (plVar25 != plVar21) {
    while (plVar7 = plVar7 + 0x12, plVar7 != plVar21) {
      if ((*plVar7 != 0) && (*(short *)(*plVar7 + 0x1a) != 0)) {
        FUN_00c96b7c(plVar25,plVar7);
        FUN_011f2dc0(plVar25 + 2,plVar7 + 2);
        plVar25 = plVar25 + 0x12;
      }
    }
  }
  lVar18 = *(long *)(lVar11 + 0x18) - (long)plVar25;
  if (lVar18 != 0) {
    uVar22 = FUN_011f2e60((long)plVar25 + lVar18,*(long *)(lVar11 + 0x18),plVar25);
    FUN_011f2ec0((undefined8 *)(lVar11 + 0x10),uVar22);
  }
  (**(code **)(*param_3 + 0x20))(local_78,param_3);
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  plVar25 = (long *)0x0;
  if (param_3 != (long *)0x0) {
    plVar25 = param_3 + 1;
  }
  if ((long *)local_78[0][2] == plVar25) {
    FUN_00d30d98(&local_88,local_78);
  }
  puVar26 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    psVar2 = (short *)(local_78[0] + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_78[0] + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_68 = *puVar26;
        FUN_00c44438(lVar18 + 0x8040,&local_68);
      }
    }
    else if (sVar4 == 0) goto LAB_011f20ec;
  }
  puVar26 = *(undefined8 **)(lVar11 + 0x18);
  if (puVar26 < *(undefined8 **)(lVar11 + 0x20)) {
    uVar22 = *(undefined8 *)(lVar11 + 0x28);
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar18 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar18 != 0) {
      if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_011f2430;
      *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar22;
      *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
    }
    *puVar26 = 0;
    puVar26[1] = 0;
    FUN_011f29f0(puVar26,&local_88);
    puVar26[2] = 0;
    puVar26[4] = 0;
    puVar26[5] = 0;
    puVar26[3] = 0;
    if ((code *)param_4[2] != (code *)0x0) {
      (*(code *)param_4[2])(param_4 + 4,puVar26 + 6);
      uVar22 = param_4[3];
      puVar26[3] = param_4[1];
      puVar26[5] = uVar22;
      uVar22 = *param_4;
      puVar26[4] = param_4[2];
      puVar26[2] = uVar22;
    }
    if (lVar18 != 0) {
      *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
    }
    *(undefined8 **)(lVar11 + 0x18) = puVar26 + 0x12;
  }
  else {
    uVar20 = *(ulong *)(lVar11 + 0x30);
    lVar18 = (long)puVar26 - *(long *)(lVar11 + 0x10) >> 4;
    if (0x7ffffffffffffffe < uVar20) {
      uVar20 = 0x7fffffffffffffff;
    }
    uVar1 = lVar18 * -0x71c71c71c71c71c7 + 1;
    if (uVar20 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar14 = (long)*(undefined8 **)(lVar11 + 0x20) - *(long *)(lVar11 + 0x10) >> 4;
    uVar16 = lVar14 * 0x1c71c71c71c71c72;
    if (uVar1 <= uVar16) {
      uVar1 = uVar16;
    }
    if (uVar20 >> 1 <= (ulong)(lVar14 * -0x71c71c71c71c71c7)) {
      uVar1 = uVar20;
    }
    if (uVar1 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = (**(code **)(**(long **)(lVar11 + 0x28) + 0x10))
                         (*(long **)(lVar11 + 0x28),uVar1 * 0x90,0x10);
      if (lVar14 == 0) {
        (**(code **)(**(long **)(lVar11 + 0x28) + 0xe8))();
      }
    }
    uVar22 = *(undefined8 *)(lVar11 + 0x28);
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar12 != 0) {
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_011f2430;
      *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar22;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    }
    puVar26 = (undefined8 *)(lVar14 + lVar18 * 0x10);
    *puVar26 = 0;
    puVar26[1] = 0;
    FUN_011f29f0(puVar26,&local_88);
    lVar23 = lVar14 + lVar18 * 0x10;
    *(undefined8 *)(lVar23 + 0x10) = 0;
    *(undefined8 *)(lVar23 + 0x20) = 0;
    *(undefined8 *)(lVar23 + 0x28) = 0;
    *(undefined8 *)(lVar23 + 0x18) = 0;
    if ((code *)param_4[2] != (code *)0x0) {
      (*(code *)param_4[2])(param_4 + 4,lVar14 + lVar18 * 0x10 + 0x30);
      uVar22 = param_4[3];
      *(undefined8 *)(lVar23 + 0x18) = param_4[1];
      *(undefined8 *)(lVar23 + 0x28) = uVar22;
      uVar22 = *param_4;
      *(undefined8 *)(lVar23 + 0x20) = param_4[2];
      *(undefined8 *)(lVar23 + 0x10) = uVar22;
    }
    if (lVar12 != 0) {
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    }
    puVar24 = *(undefined8 **)(lVar11 + 0x10);
    puVar27 = *(undefined8 **)(lVar11 + 0x18);
    if (puVar27 == puVar24) {
      puVar27 = puVar26;
      puVar13 = puVar24;
    }
    else {
      lVar18 = 0;
      do {
        uVar22 = *(undefined8 *)(lVar11 + 0x28);
        if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar12 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar12 != 0) {
          if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_011f2430:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar22;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        }
        *(undefined8 *)((long)puVar26 + lVar18 + -0x88) = 0;
        puVar13 = (undefined8 *)((long)puVar26 + lVar18 + -0x90);
        *puVar13 = 0;
        FUN_00c96b7c(puVar13,(long)puVar27 + lVar18 + -0x90);
        puVar13 = (undefined8 *)((long)puVar26 + lVar18 + -0x80);
        *puVar13 = 0;
        *(undefined8 *)((long)puVar26 + lVar18 + -0x70) = 0;
        *(undefined8 *)((long)puVar26 + lVar18 + -0x68) = 0;
        *(undefined8 *)((long)puVar26 + lVar18 + -0x78) = 0;
        pcVar15 = *(code **)((long)puVar27 + lVar18 + -0x68);
        if (pcVar15 != (code *)0x0) {
          lVar23 = (long)puVar27 + lVar18 + -0x60;
          (*pcVar15)(lVar23,(long)puVar26 + lVar18 + -0x60);
          puVar28 = (undefined8 *)((long)puVar27 + lVar18 + -0x80);
          uVar22 = *puVar28;
          uVar17 = *(undefined8 *)((long)puVar27 + lVar18 + -0x78);
          *(undefined8 *)((long)puVar26 + lVar18 + -0x68) =
               *(undefined8 *)((long)puVar27 + lVar18 + -0x68);
          uVar19 = *(undefined8 *)((long)puVar27 + lVar18 + -0x70);
          *(undefined8 *)((long)puVar26 + lVar18 + -0x78) = uVar17;
          *(undefined8 *)((long)puVar26 + lVar18 + -0x70) = uVar19;
          *puVar13 = uVar22;
          pcVar15 = *(code **)((long)puVar27 + lVar18 + -0x78);
          if (pcVar15 != (code *)0x0) {
            *(undefined8 *)((long)puVar27 + lVar18 + -0x70) = 0;
            *(undefined8 *)((long)puVar27 + lVar18 + -0x68) = 0;
            *puVar28 = 0;
            *(undefined8 *)((long)puVar27 + lVar18 + -0x78) = 0;
            (*pcVar15)(lVar23);
          }
        }
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        }
        lVar18 = lVar18 + -0x90;
      } while ((long)puVar24 - (long)puVar27 != lVar18);
      puVar24 = *(undefined8 **)(lVar11 + 0x18);
      puVar27 = (undefined8 *)((long)puVar26 + lVar18);
      puVar13 = *(undefined8 **)(lVar11 + 0x10);
    }
    lVar18 = *(long *)(lVar11 + 0x20);
    *(undefined8 **)(lVar11 + 0x10) = puVar27;
    *(undefined8 **)(lVar11 + 0x18) = puVar26 + 0x12;
    *(ulong *)(lVar11 + 0x20) = lVar14 + uVar1 * 0x90;
    puVar9 = PTR_DAT_047d3918;
    puVar8 = PTR_DAT_047d3908;
    while (puVar24 != puVar13) {
      puVar26 = puVar24 + -0x12;
      pcVar15 = (code *)puVar24[-0xf];
      if (pcVar15 != (code *)0x0) {
        puVar24[-0xe] = 0;
        puVar24[-0xd] = 0;
        puVar24[-0x10] = 0;
        puVar24[-0xf] = 0;
        (*pcVar15)(puVar24 + -0xc);
      }
      puVar27 = (undefined8 *)*puVar26;
      puVar24 = puVar26;
      if (puVar27 != (undefined8 *)0x0) {
        psVar2 = (short *)(puVar27 + 3);
        do {
          sVar4 = *psVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          piVar3 = (int *)((long)puVar27 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != -1) {
            if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(puVar8);
            }
            lVar14 = *(long *)PTR_DAT_047d3910;
            *(long *)puVar9 = lVar14;
            local_78[0] = (undefined8 *)*puVar27;
            FUN_00c44438(lVar14 + 0x8040,local_78);
          }
        }
        else if (sVar4 == 0) goto LAB_011f20ec;
      }
    }
    if (puVar13 != (undefined8 *)0x0) {
      plVar25 = *(long **)(lVar11 + 0x28);
      lVar18 = lVar18 - (long)puVar13;
      uVar20 = (**(code **)(*plVar25 + 0xf8))(plVar25);
      if (((uVar20 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
        (**(code **)(*plVar25 + 0x18))(plVar25,puVar13,lVar18,0x10);
      }
      else {
        FUN_00c48fe8(plVar25,puVar13,lVar18,0x10);
      }
    }
  }
  puVar26 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_88 + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_88 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_78[0] = (undefined8 *)*puVar26;
        FUN_00c44438(lVar18 + 0x8040,local_78);
      }
    }
    else if (sVar4 == 0) {
LAB_011f20ec:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (*(long *)(lVar11 + 8) != 0) {
    (*(code *)*param_4)(param_4 + 4,(long *)(lVar11 + 8));
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x38));
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019a4bf0; name: FUN_019a4bf0
 */


void FUN_019a4bf0(undefined8 *param_1,long *param_2,undefined8 param_3,long *param_4,ulong param_5)

{
  short *psVar1;
  int *piVar2;
  long lVar3;
  short sVar4;
  char cVar5;
  undefined *puVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  short sVar17;
  undefined8 uVar18;
  long *local_78 [2];
  long *local_68;
  
  lVar14 = *param_2;
  if ((lVar14 == 0) || (*(short *)(lVar14 + 0x1a) == 0)) {
LAB_019a4c18:
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  psVar1 = (short *)(lVar14 + 0x1a);
  sVar17 = *(short *)(lVar14 + 0x1a);
LAB_019a4c4c:
  sVar4 = *psVar1;
  if (sVar4 == sVar17) {
    cVar5 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar16) {
      *psVar1 = sVar17 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_019a4c80;
    bVar16 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_019a4c80:
    bVar16 = false;
  }
  if (!bVar16) {
    param_5 = param_5 & 0xffffffff;
    sVar17 = sVar4;
    if (sVar4 == 0) goto LAB_019a4c18;
    goto LAB_019a4c4c;
  }
  lVar14 = *(long *)(lVar14 + 0x10);
  if (lVar14 == 0) goto LAB_019a4c18;
  plVar9 = (long *)(lVar14 + -0x28);
  FUN_00d2bee4(&local_68);
  plVar7 = local_68;
  uVar18 = *(undefined8 *)(lVar14 + 0x438);
  lVar10 = nn::os::GetCurrentThread();
  puVar6 = PTR_DAT_047d94d0;
  do {
    lVar13 = *(long *)puVar6;
    lVar15 = *(long *)(puVar6 + 8);
    cVar5 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar16) {
      *(long *)puVar6 = lVar13;
      *(long *)(puVar6 + 8) = lVar15;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    while ((lVar13 != 0 && (lVar10 != lVar13))) {
      nn::os::WaitLightEvent((LightEventType *)(puVar6 + 0x10));
      do {
        lVar13 = *(long *)puVar6;
        lVar15 = *(long *)(puVar6 + 8);
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar16) {
          *(long *)puVar6 = lVar13;
          *(long *)(puVar6 + 8) = lVar15;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    do {
      lVar3 = *(long *)puVar6;
      if (lVar3 != lVar13 || *(long *)(puVar6 + 8) != lVar15) {
        bVar16 = false;
        ClearExclusiveLocal();
        goto LAB_019a4d40;
      }
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar16) {
        *(long *)puVar6 = lVar13;
        *(long *)(puVar6 + 4) = lVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar16 = true;
LAB_019a4d40:
    lVar13 = lVar3;
    lVar15 = *(long *)(puVar6 + 8);
  } while (!bVar16);
  plVar11 = (long *)(**(code **)(*plVar7 + 0x88))(plVar7);
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar11;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  plVar12 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x7f0,0x10);
  if (plVar12 == (long *)0x0) {
    (**(code **)(*plVar11 + 0xe8))(plVar11);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  FUN_00df6fe0(plVar12,param_3,0,0,uVar18);
  *(undefined4 *)(plVar12 + 3) = 0x1007f0;
  plVar12[1] = (long)plVar11;
  plVar12[2] = (long)plVar12;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  lVar10 = plVar12[6];
  if (*(long *)(lVar10 + 0x10) == 0) {
LAB_019a5274:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar10 + 0x1a);
  do {
    sVar17 = *psVar1;
    cVar5 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar16) {
      *psVar1 = sVar17 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar17 == 0) {
    uVar18 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
    *(undefined8 *)(lVar10 + 8) = uVar18;
    *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
  }
  else if (sVar17 == -1) goto LAB_019a5294;
  *(undefined4 *)(plVar12 + 0x9f) = 0xffffffff;
  FUN_00df5bb4(plVar12);
  lVar10 = plVar12[6];
  local_78[0] = plVar12;
  if (*(long *)(lVar10 + 0x10) == 0) goto LAB_019a5274;
  psVar1 = (short *)(lVar10 + 0x1a);
  do {
    sVar17 = *psVar1;
    cVar5 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar16) {
      *psVar1 = sVar17 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar17 == 0) {
    uVar18 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
    *(undefined8 *)(lVar10 + 8) = uVar18;
    *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
  }
  else if (sVar17 == -1) {
LAB_019a5294:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  (**(code **)(*plVar7 + 0x30))(plVar7,local_78);
  if (local_78[0] != (long *)0x0) {
    lVar10 = local_78[0][6];
    psVar1 = (short *)(lVar10 + 0x1a);
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
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*local_78[0] + 0x50))();
    }
    else if (sVar17 == 0) goto LAB_019a4ff4;
  }
  do {
    lVar10 = *(long *)puVar6;
    lVar13 = *(long *)(puVar6 + 8);
    cVar5 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar16) {
      *(long *)puVar6 = lVar10;
      *(long *)(puVar6 + 8) = lVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar15 = *(long *)puVar6;
    lVar3 = *(long *)(puVar6 + 8);
    if (lVar15 != lVar10 || lVar3 != lVar13) {
      bVar16 = false;
      ClearExclusiveLocal();
      goto joined_r0x019a4eb8;
    }
    cVar5 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar16) {
      *(long *)puVar6 = lVar10;
      *(long *)(puVar6 + 4) = lVar13 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar16 = true;
joined_r0x019a4eb8:
  do {
    if (bVar16) {
      nn::os::SignalLightEvent((LightEventType *)(puVar6 + 0x10));
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x18))();
      }
      FUN_00dfba48(plVar12,plVar9);
      puVar6 = PTR_DAT_047d3e28;
      if ((param_5 & 1) == 0) {
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        if (*param_4 == *(long *)PTR_DAT_047d3e30) {
          FUN_00df6ee8(plVar12,lVar14 + 0xd0);
        }
        else {
          if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          FUN_0133cea0(plVar12,plVar9,param_4,PTR_DAT_047d3e30);
        }
      }
      (**(code **)(*plVar12 + 0x18))(local_78,plVar12);
      *param_1 = 0;
      param_1[1] = 0;
      if ((long *)local_78[0][2] == plVar12 + 5) {
        FUN_00cbc6dc(param_1,local_78);
      }
      plVar7 = local_78[0];
      if (local_78[0] != (long *)0x0) {
        plVar11 = local_78[0] + 3;
        do {
          sVar17 = (short)*plVar11;
          cVar5 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar16) {
            *(short *)plVar11 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar2 = (int *)((long)local_78[0] + 0x1c);
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
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar10;
            local_68 = (long *)*plVar7;
            FUN_00c44438(lVar10 + 0x8040,&local_68);
          }
        }
        else if (sVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      lVar10 = plVar12[6];
      psVar1 = (short *)(lVar10 + 0x1a);
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
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar12 + 0x50))(plVar12);
      }
      else if (sVar17 == 0) goto LAB_019a4ff4;
      lVar14 = *(long *)(lVar14 + 8);
      psVar1 = (short *)(lVar14 + 0x1a);
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
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*plVar9 + 0x50))();
        return;
      }
      if (sVar17 != 0) {
        return;
      }
LAB_019a4ff4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    do {
      lVar10 = *(long *)puVar6;
      lVar13 = *(long *)(puVar6 + 8);
      if (lVar10 != lVar15 || lVar13 != lVar3) {
        bVar16 = false;
        ClearExclusiveLocal();
        lVar15 = lVar10;
        lVar3 = lVar13;
        goto joined_r0x019a4eb8;
      }
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar16) {
        *(long *)puVar6 = lVar15;
        *(long *)(puVar6 + 4) = lVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar16 = true;
    lVar15 = lVar10;
    lVar3 = lVar13;
  } while( true );
}



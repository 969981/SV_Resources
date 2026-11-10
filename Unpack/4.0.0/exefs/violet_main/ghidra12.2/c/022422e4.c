/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022422e4; name: FUN_022422e4
 */


void FUN_022422e4(undefined8 param_1,long param_2,long param_3)

{
  short *psVar1;
  ulong *puVar2;
  int *piVar3;
  long **pplVar4;
  short sVar5;
  char cVar6;
  ulong *puVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  short sVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  code *local_148;
  undefined1 auStack_130 [104];
  ulong *local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  long *local_b0;
  long *local_a8;
  long *plStack_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  ulong *local_60;
  undefined8 uStack_58;
  ulong **local_38;
  
  local_148 = (code *)0x0;
  if (*(code **)(param_3 + 0x10) != (code *)0x0) {
    (**(code **)(param_3 + 0x10))(param_3 + 0x20,auStack_130);
    local_148 = *(code **)(param_3 + 8);
  }
  local_80 = *(undefined8 *)(param_2 + 0x110);
  uStack_78 = *(undefined8 *)(param_2 + 0x118);
  local_70 = *(undefined8 *)(param_2 + 0x120);
  local_68 = *(long **)(param_2 + 0x128);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x18))();
  }
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    local_60 = (ulong *)0x0;
    uStack_58 = 0;
  }
  else {
    (**(code **)(param_2 + 0x10))(&local_60,param_2 + 0x30,&local_80);
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_60 != (ulong *)0x0) {
    if (*(short *)((long)local_60 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_60 + 0x1a);
      sVar12 = *(short *)((long)local_60 + 0x1a);
      do {
        sVar5 = *psVar1;
        if (sVar5 == sVar12) {
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar12 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_02242414;
          bVar8 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02242414:
          bVar8 = false;
        }
        if (bVar8) {
          uVar10 = local_60[2];
          if (uVar10 == 0) goto LAB_022425c0;
          local_c8 = (ulong *)0x13ba27b6b7e820e8;
          pcStack_c0 = "fileName";
          local_b8 = 8;
          local_b0 = (long *)0x0;
          FUN_01315eac(&local_a8,param_2,&local_c8);
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          bVar8 = (char)local_a8 != '\0';
          pplVar4 = (long **)PTR_DAT_047d3e30;
          if (bVar8) {
            pplVar4 = &plStack_a0;
          }
          plVar14 = *pplVar4;
          pplVar4 = (long **)(PTR_DAT_047d3e30 + 8);
          if (bVar8) {
            pplVar4 = &local_98;
          }
          plVar16 = *pplVar4;
          pplVar4 = (long **)(PTR_DAT_047d3e30 + 0x10);
          if (bVar8) {
            pplVar4 = &local_90;
          }
          plVar17 = *pplVar4;
          pplVar4 = (long **)(PTR_DAT_047d3e30 + 0x18);
          if (bVar8) {
            pplVar4 = &local_88;
          }
          plVar13 = *pplVar4;
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x18))(plVar13);
          }
          if ((char)local_a8 != '\0') {
            if (local_88 != (long *)0x0) {
              (**(code **)(*local_88 + 0x20))();
            }
            local_a8 = (long *)((ulong)local_a8 & 0xffffffffffffff00);
          }
          if (local_b0 != (long *)0x0) {
            (**(code **)(*local_b0 + 0x20))();
          }
          local_a8 = plVar14;
          plStack_a0 = plVar16;
          local_98 = plVar17;
          local_90 = plVar13;
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x18))(plVar13);
          }
          local_c8 = (ulong *)&local_a8;
          local_38 = &local_c8;
          plVar14 = (long *)(uVar10 + 0xe8);
          lVar15 = *plVar14;
          lVar11 = nn::os::GetCurrentThread();
          if (lVar11 != lVar15) {
            lVar11 = nn::os::GetCurrentThread();
            goto LAB_02242548;
          }
          bVar8 = true;
          goto LAB_0224255c;
        }
        sVar12 = sVar5;
      } while (sVar5 != 0);
LAB_022425bc:
      if (local_60 == (ulong *)0x0) goto LAB_02242390;
    }
LAB_022425c0:
    puVar7 = local_60;
    puVar2 = local_60 + 3;
    do {
      sVar12 = (short)*puVar2;
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar8) {
        *(short *)puVar2 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      piVar3 = (int *)((long)local_60 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_a8 = (long *)*puVar7;
        FUN_00c44438(lVar11 + 0x8040,&local_a8);
      }
    }
    else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
LAB_02242390:
  if (local_148 != (code *)0x0) {
    (*local_148)(auStack_130);
  }
  return;
LAB_02242548:
  if (*plVar14 == 0) goto code_r0x02242550;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(uVar10 + 0xf0));
  do {
    if (*plVar14 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(uVar10 + 0xf0));
        while (*plVar14 == 0) {
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar8) {
            *plVar14 = lVar11;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_02242558;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar8) {
      *plVar14 = lVar11;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_02242558:
  bVar8 = false;
LAB_0224255c:
  lVar11 = FUN_02242770(&local_38,uVar10 + 0x100);
  if (lVar11 == 0) {
    lVar11 = FUN_02242770(&local_38,uVar10 + 0x138);
  }
  if (!bVar8) {
    *(undefined8 *)(uVar10 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(uVar10 + 0xf0));
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (lVar11 != 0) {
    FUN_022428b8(lVar11);
  }
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  (**(code **)(*(long *)(uVar10 - 0x28) + 0x60))((long *)(uVar10 - 0x28));
  goto LAB_022425bc;
code_r0x02242550:
  cVar6 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
  if (bVar8) {
    *plVar14 = lVar11;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_02242558;
  goto LAB_02242548;
}



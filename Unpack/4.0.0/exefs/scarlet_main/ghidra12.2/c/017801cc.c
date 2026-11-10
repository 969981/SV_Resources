/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017801cc; name: FUN_017801cc
 */


void FUN_017801cc(long *param_1)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined *puVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  long lVar11;
  long *local_78;
  long *local_70;
  long *local_60;
  long *local_40;
  long *local_38;
  long *local_18;
  
  lVar11 = *param_1;
  lVar8 = *(long *)(lVar11 + 0x1d0);
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
LAB_017803d0:
    sVar3 = *psVar2;
    if (sVar3 == sVar9) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_017803f4;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_017803f4:
      bVar5 = false;
    }
    if (!bVar5) goto code_r0x017803fc;
    lVar8 = *(long *)(lVar8 + 0x10);
    if (lVar8 != 0) {
      plVar10 = (long *)(lVar8 + -0x28);
      lVar8 = FUN_010f2bb8(lVar8 + 0xe0,&local_78);
      if (lVar8 != 0) {
        if (*(long *)(lVar11 + 0x140) == 0) {
          if ((*PTR_DAT_047d3e28 & 1) == 0) {
            iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28);
            puVar7 = PTR_DAT_047d3e30;
            if (iVar6 != 0) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
              goto LAB_01780484;
            }
          }
          puVar7 = PTR_DAT_047d3e30;
        }
        else {
          puVar7 = (undefined *)FUN_017806f0();
        }
LAB_01780484:
        local_18 = (long *)0x0;
        FUN_01780818(&local_78,param_1 + 1,puVar7,&local_18);
        FUN_0178094c(plVar10,&local_78);
        if (local_38 != (long *)0x0) {
          lVar8 = local_38[6];
          psVar2 = (short *)(lVar8 + 0x1a);
          do {
            sVar9 = *psVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar9 == 1) {
            *(undefined8 *)(lVar8 + 0x10) = 0;
            (**(code **)(*local_38 + 0x50))();
          }
          else if (sVar9 == 0) goto LAB_01780370;
        }
        if (local_40 != (long *)0x0) {
          (**(code **)(*local_40 + 0x20))();
        }
        if (local_60 != (long *)0x0) {
          (**(code **)(*local_60 + 0x20))();
        }
        if (local_18 == (long *)0x0) goto LAB_017802a4;
        lVar8 = local_18[6];
        psVar2 = (short *)(lVar8 + 0x1a);
        do {
          sVar9 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        goto LAB_01780364;
      }
      goto LAB_017804e4;
    }
  }
LAB_017801f0:
  FUN_00c9e664(&local_78,lVar11 + 0xe8);
  lVar8 = *(long *)(local_70[9] + 0x388);
  if ((lVar8 == 0) || (*(short *)(lVar8 + 0x1a) == 0)) {
    plVar10 = (long *)0x0;
  }
  else {
    psVar2 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar2;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0178043c;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0178043c:
        bVar5 = false;
      }
      if (bVar5) {
        plVar10 = (long *)0x0;
        if (*(long *)(lVar8 + 0x10) != 0) {
          plVar10 = (long *)(*(long *)(lVar8 + 0x10) + -0x28);
        }
        break;
      }
      plVar10 = (long *)0x0;
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  if (local_70 != (long *)0x0) {
    plVar1 = local_70 + 5;
    do {
      lVar8 = *plVar1;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x60))();
  }
  if (plVar10 == (long *)0x0) {
LAB_017804f4:
    if (*(int *)(*(long *)(lVar11 + 0x140) + 0x138) == 5) {
      FUN_01780640();
    }
    return;
  }
  lVar8 = FUN_010f2bb8(plVar10 + 0x21,&local_78);
  if (lVar8 == 0) {
LAB_017804e4:
    (**(code **)(*plVar10 + 0x60))(plVar10);
    goto LAB_017804f4;
  }
  if (*(long *)(lVar11 + 0x140) == 0) {
    if ((*PTR_DAT_047d3e28 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28);
      puVar7 = PTR_DAT_047d3e30;
      if (iVar6 != 0) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
        goto LAB_01780260;
      }
    }
    puVar7 = PTR_DAT_047d3e30;
  }
  else {
    puVar7 = (undefined *)FUN_017806f0();
  }
LAB_01780260:
  local_18 = (long *)0x0;
  FUN_01780818(&local_78,param_1 + 1,puVar7,&local_18);
  FUN_0178094c(plVar10,&local_78);
  if (local_38 != (long *)0x0) {
    lVar8 = local_38[6];
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar9 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar9 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar9 == 0) goto LAB_01780370;
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_18 != (long *)0x0) {
    lVar8 = local_18[6];
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar9 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_01780364:
    if (sVar9 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_18 + 0x50))();
    }
    else if (sVar9 == 0) {
LAB_01780370:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
LAB_017802a4:
  (**(code **)(*plVar10 + 0x60))(plVar10);
  return;
code_r0x017803fc:
  sVar9 = sVar3;
  if (sVar3 == 0) goto LAB_017801f0;
  goto LAB_017803d0;
}



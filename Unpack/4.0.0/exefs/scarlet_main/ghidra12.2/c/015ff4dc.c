/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015ff4dc; name: FUN_015ff4dc
 */


long * FUN_015ff4dc(long param_1,long *param_2,undefined8 *param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  char *pcVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *local_90;
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  
  plVar10 = *(long **)(param_1 + 0x58);
  if (plVar10 != (long *)0x0) {
    lVar11 = plVar10[6];
    if (*(long *)(lVar11 + 0x10) == 0) goto LAB_015ff910;
    psVar1 = (short *)(lVar11 + 0x1a);
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
      uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar7;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_015ff930;
  }
  pcVar8 = (char *)param_3[1];
  if ((*pcVar8 != '\0') && (lVar11 = *(long *)(param_1 + 0x58), lVar11 != 0)) {
    local_88 = *param_3;
    local_78 = param_3[2];
    local_70 = (long *)param_3[3];
    pcStack_80 = pcVar8;
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x18))();
    }
    FUN_0116d150(&local_68,lVar11,&local_88);
    if (plVar10 != (long *)0x0) {
      lVar11 = plVar10[6];
      psVar1 = (short *)(lVar11 + 0x1a);
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
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))(plVar10);
      }
      else if (sVar2 == 0) goto LAB_015ff8e8;
    }
    plVar10 = local_68;
    local_68 = (long *)0x0;
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
  }
  if (plVar10 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    if ((long *)plVar10[0xe] != (long *)plVar10[0xf]) {
      plVar6 = (long *)plVar10[0xe];
      do {
        plVar9 = plVar6 + 1;
        plVar12 = (long *)PTR_DAT_047d8b70;
        if (*(long *)(*plVar6 + 0x40) != 0) {
          plVar12 = (long *)(*(long *)(*plVar6 + 0x40) + 0x30);
        }
        if (*plVar12 == *param_2) {
          plVar6 = (long *)0x0;
          goto LAB_015ff768;
        }
        plVar6 = plVar9;
      } while ((long *)plVar10[0xf] != plVar9);
    }
    plVar12 = *(long **)(param_1 + 0x30);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar12;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    plVar6 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x128,8);
    if (plVar6 == (long *)0x0) {
      (**(code **)(*plVar12 + 0xe8))(plVar12);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                 ,0x40);
    }
    FUN_015ff98c(plVar6,*(undefined8 *)(param_1 + 0x30),param_2,param_4,param_5,param_6,param_7);
    *(undefined4 *)(plVar6 + 3) = 0x80128;
    plVar6[1] = (long)plVar12;
    plVar6[2] = (long)plVar6;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    lVar11 = plVar6[6];
    if (*(long *)(lVar11 + 0x10) == 0) {
LAB_015ff910:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar11 + 0x1a);
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
      uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar7;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_015ff930;
    lVar11 = plVar6[6];
    local_90 = plVar6;
    if (*(long *)(lVar11 + 0x10) == 0) goto LAB_015ff910;
    psVar1 = (short *)(lVar11 + 0x1a);
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
      uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar7;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
LAB_015ff930:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    FUN_015ffb40(plVar10,&local_90);
    if (local_90 != (long *)0x0) {
      lVar11 = local_90[6];
      psVar1 = (short *)(lVar11 + 0x1a);
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
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*local_90 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_015ff8e8;
    }
    lVar11 = plVar6[6];
    psVar1 = (short *)(lVar11 + 0x1a);
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
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar6 + 0x50))(plVar6);
    }
    else if (sVar2 == 0) goto LAB_015ff8e8;
LAB_015ff768:
    lVar11 = plVar10[6];
    psVar1 = (short *)(lVar11 + 0x1a);
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
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar2 == 0) {
LAB_015ff8e8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return plVar6;
}



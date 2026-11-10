/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029b03fc; name: FUN_029b03fc
 */


void FUN_029b03fc(long *param_1,long param_2)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  bool bVar10;
  short sVar11;
  long lVar12;
  long lVar13;
  undefined8 *local_50 [2];
  undefined8 local_28;
  
  *param_1 = (long)(PTR_DAT_047e30a0 + 0x10);
  plVar7 = param_1 + 1;
  *plVar7 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  lVar12 = *(long *)(param_2 + 0x10);
  FUN_011244b0(local_50,lVar12);
  if ((local_50[0] != (undefined8 *)0x0) && (*(short *)((long)local_50[0] + 0x1a) != 0)) {
    psVar2 = (short *)((long)local_50[0] + 0x1a);
    sVar11 = *(short *)((long)local_50[0] + 0x1a);
LAB_029b064c:
    sVar3 = *psVar2;
    if (sVar3 == sVar11) {
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar10) {
        *psVar2 = sVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_029b0670;
      bVar10 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_029b0670:
      bVar10 = false;
    }
    if (!bVar10) goto code_r0x029b0678;
    lVar13 = local_50[0][2];
    if (lVar13 != 0) {
      plVar6 = (long *)*plVar7;
      *plVar7 = 0;
      if (plVar6 != (long *)0x0) {
        lVar9 = plVar6[6];
        psVar2 = (short *)(lVar9 + 0x1a);
        do {
          sVar11 = *psVar2;
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar10) {
            *psVar2 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*plVar6 + 0x50))();
        }
        else if (sVar11 == 0) goto LAB_029b06f4;
      }
      *plVar7 = lVar13 + -0x28;
      goto LAB_029b046c;
    }
  }
LAB_029b045c:
  plVar6 = (long *)*plVar7;
  lVar12 = 0;
  *plVar7 = 0;
  if (plVar6 != (long *)0x0) {
    lVar12 = plVar6[6];
    psVar2 = (short *)(lVar12 + 0x1a);
    do {
      sVar11 = *psVar2;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar10) {
        *psVar2 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar6 + 0x50))();
    }
    else if (sVar11 == 0) goto LAB_029b06f4;
    lVar12 = 0;
  }
LAB_029b046c:
  param_1[2] = lVar12;
  if (local_50[0] != (undefined8 *)0x0) {
    psVar2 = (short *)(local_50[0] + 3);
    do {
      sVar11 = *psVar2;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar10) {
        *psVar2 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      piVar1 = (int *)((long)local_50[0] + 0x1c);
      do {
        iVar5 = *piVar1;
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar5 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_28 = *local_50[0];
        FUN_00c44438(lVar12 + 0x8040,&local_28);
      }
    }
    else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  lVar12 = *(long *)(param_2 + 0x18);
  if (lVar12 != 0) {
    lVar13 = *(long *)(lVar12 + 0x30);
    if (*(long *)(lVar13 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar13 + 0x1a);
    do {
      sVar11 = *psVar2;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar10) {
        *psVar2 = sVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar8;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar11 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar7 = (long *)param_1[3];
  param_1[3] = lVar12;
  if (plVar7 != (long *)0x0) {
    lVar12 = plVar7[6];
    psVar2 = (short *)(lVar12 + 0x1a);
    do {
      sVar11 = *psVar2;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar10) {
        *psVar2 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar11 == 0) {
LAB_029b06f4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_00cef9d0(param_1 + 4,param_2 + 0x20);
  FUN_00ceffd4(param_1 + 6,param_2 + 0x30);
  *param_1 = (long)(PTR_DAT_047e2ff0 + 0x10);
  return;
code_r0x029b0678:
  sVar11 = sVar3;
  if (sVar3 == 0) goto LAB_029b045c;
  goto LAB_029b064c;
}



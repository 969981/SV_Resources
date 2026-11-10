/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018dafa0; name: FUN_018dafa0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_018dafa0(undefined1 *param_1,char *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  cVar4 = *param_2;
  if (cVar4 == '\0') {
LAB_018dafc4:
    if (*(long *)(param_2 + 8) == 0) goto LAB_018db128;
  }
  else {
    if ((cVar4 != '\x02') && (cVar4 != '\x03')) {
      if (cVar4 != '\x01') goto LAB_018db128;
      goto LAB_018dafc4;
    }
    if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0))
    goto LAB_018db128;
  }
  cVar4 = *param_2;
  if (cVar4 == '\x02') {
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
    plVar8 = (long *)(param_2 + 8);
    if ((*plVar8 != 0) && (puVar10 = *(undefined8 **)(*plVar8 + 8), puVar10 != (undefined8 *)0x0)) {
      if (((*PTR_DAT_047d6520 & 1) == 0) &&
         (uVar7 = __cxa_guard_acquire(PTR_DAT_047d6520), (int)uVar7 != 0)) {
        uVar7 = FUN_0151c130(uVar7,plVar8);
        *(undefined8 *)PTR_DAT_047d6528 = uVar7;
        __cxa_guard_release(PTR_DAT_047d6520);
      }
      do {
        if (puVar10 == (undefined8 *)PTR_DAT_047d6528) {
          FUN_00d7c390(&local_40,plVar8);
          break;
        }
        puVar10 = (undefined8 *)*puVar10;
      } while (puVar10 != (undefined8 *)0x0);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 2;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_00ca1ea4(param_1 + 8,&local_40);
    if (local_40 == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_40 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_40 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        puVar10 = local_40;
      } while (cVar4 != '\0');
LAB_018db274:
      if (iVar6 == -1) {
        return;
      }
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar9 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar9;
      local_18 = *puVar10;
      FUN_00c44438(lVar9 + 0x8040,&local_18);
      return;
    }
  }
  else {
    if (cVar4 != '\x03') {
      if (cVar4 == '\x01') {
        lVar9 = *(long *)(param_2 + 8);
        plVar8 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x28))((undefined8 *)(lVar9 + 0x28));
        if (((*PTR_DAT_047d6520 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar6 != 0)) {
          uVar7 = FUN_0151c130();
          *(undefined8 *)PTR_DAT_047d6528 = uVar7;
          __cxa_guard_release(PTR_DAT_047d6520);
        }
        do {
          if (plVar8 == (long *)0x0) {
            lVar9 = 0;
LAB_018db1f0:
            *param_1 = 1;
            *(long *)(param_1 + 8) = lVar9;
            return;
          }
          if (plVar8 == (long *)PTR_DAT_047d6528) {
            lVar11 = *(long *)(lVar9 + 0x30);
            if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("m_object != nullptr","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x3d);
            }
            psVar1 = (short *)(lVar11 + 0x1a);
            do {
              sVar3 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar3 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar3 == 0) {
              uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
              *(undefined8 *)(lVar11 + 8) = uVar7;
              *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
            }
            else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x58,"Reference counter overflows.");
            }
            goto LAB_018db1f0;
          }
          plVar8 = (long *)*plVar8;
        } while( true );
      }
      if (cVar4 == '\0') {
        lVar9 = *(long *)(param_2 + 8);
        plVar8 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x28))();
        if (((*PTR_DAT_047d6520 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar6 != 0)) {
          uVar7 = FUN_0151c130();
          *(undefined8 *)PTR_DAT_047d6528 = uVar7;
          __cxa_guard_release(PTR_DAT_047d6520);
        }
        for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          if (plVar8 == (long *)PTR_DAT_047d6528) goto LAB_018db0fc;
        }
        lVar9 = 0;
LAB_018db0fc:
        *param_1 = 0;
        *(long *)(param_1 + 8) = lVar9;
        return;
      }
LAB_018db128:
      *param_1 = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      return;
    }
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    plVar8 = (long *)(param_2 + 8);
    if ((*plVar8 != 0) && (puVar10 = *(undefined8 **)(*plVar8 + 8), puVar10 != (undefined8 *)0x0)) {
      if (((*PTR_DAT_047d6520 & 1) == 0) &&
         (uVar7 = __cxa_guard_acquire(PTR_DAT_047d6520), (int)uVar7 != 0)) {
        uVar7 = FUN_0151c130(uVar7,plVar8);
        *(undefined8 *)PTR_DAT_047d6528 = uVar7;
        __cxa_guard_release(PTR_DAT_047d6520);
      }
      do {
        if (puVar10 == (undefined8 *)PTR_DAT_047d6528) {
          FUN_00d7c390(&local_50,plVar8);
          break;
        }
        puVar10 = (undefined8 *)*puVar10;
      } while (puVar10 != (undefined8 *)0x0);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_00ca1ea4(param_1 + 8,&local_50);
    if (local_50 == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_50 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        puVar10 = local_50;
      } while (cVar4 != '\0');
      goto LAB_018db274;
    }
  }
  if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  return;
}



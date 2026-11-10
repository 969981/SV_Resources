/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017984d0; name: FUN_017984d0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_017984d0(undefined1 *param_1,char *param_2)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_58 [16];
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  cVar4 = *param_2;
  if (cVar4 == '\x02') {
LAB_017984f4:
    if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0))
    goto LAB_01798714;
  }
  else {
    if ((cVar4 != '\0') && (cVar4 != '\x01')) {
      if (cVar4 != '\x03') goto LAB_01798714;
      goto LAB_017984f4;
    }
    if (*(long *)(param_2 + 8) == 0) goto LAB_01798714;
  }
  cVar4 = *param_2;
  if (cVar4 == '\x02') {
    FUN_017988f0(local_48,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 2;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_017981ac(param_1 + 8,local_48);
    if (local_48[0] == (undefined8 *)0x0) {
      return;
    }
    psVar2 = (short *)(local_48[0] + 3);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 != 1) {
      if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      return;
    }
    piVar1 = (int *)((long)local_48[0] + 0x1c);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == -1) {
      return;
    }
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    lVar10 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar10;
    local_38 = *local_48[0];
    FUN_00c44438(lVar10 + 0x8040,&local_38);
    return;
  }
  if (cVar4 == '\x03') {
    FUN_017988f0(auStack_58,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_017981ac(param_1 + 8,auStack_58);
    FUN_019750c8(auStack_58);
    return;
  }
  if (cVar4 == '\x01') {
    lVar10 = *(long *)(param_2 + 8);
    plVar8 = (long *)(*(code *)**(undefined8 **)(lVar10 + 0x28))((undefined8 *)(lVar10 + 0x28));
    if (((*PTR_DAT_047d9c10 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d9c10), iVar7 != 0)) {
      if (((*PTR_DAT_047d9270 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d9270), iVar7 != 0)) {
        uVar9 = FUN_01e19d1c();
        *(undefined8 *)PTR_DAT_047d9278 = uVar9;
        __cxa_guard_release(PTR_DAT_047d9270);
      }
      *(undefined **)PTR_DAT_047d9c18 = PTR_DAT_047d9278;
      __cxa_guard_release(PTR_DAT_047d9c10);
    }
    do {
      if (plVar8 == (long *)0x0) {
        lVar10 = 0;
LAB_01798660:
        *param_1 = 1;
        *(long *)(param_1 + 8) = lVar10;
        return;
      }
      if (plVar8 == (long *)PTR_DAT_047d9c18) {
        lVar11 = *(long *)(lVar10 + 0x30);
        if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
          *(undefined8 *)(lVar11 + 8) = uVar9;
          *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
        }
        else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        goto LAB_01798660;
      }
      plVar8 = (long *)*plVar8;
    } while( true );
  }
  if (cVar4 == '\0') {
    lVar10 = *(long *)(param_2 + 8);
    plVar8 = (long *)(*(code *)**(undefined8 **)(lVar10 + 0x28))();
    if (((*PTR_DAT_047d9c10 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d9c10), puVar6 = PTR_DAT_047d9278, iVar7 != 0)) {
      if (((*PTR_DAT_047d9270 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d9270), iVar7 != 0)) {
        uVar9 = FUN_01e19d1c();
        *(undefined8 *)puVar6 = uVar9;
        __cxa_guard_release(PTR_DAT_047d9270);
      }
      *(undefined **)PTR_DAT_047d9c18 = puVar6;
      __cxa_guard_release(PTR_DAT_047d9c10);
    }
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (plVar8 == (long *)PTR_DAT_047d9c18) goto LAB_01798610;
    }
    lVar10 = 0;
LAB_01798610:
    *param_1 = 0;
    *(long *)(param_1 + 8) = lVar10;
    return;
  }
LAB_01798714:
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



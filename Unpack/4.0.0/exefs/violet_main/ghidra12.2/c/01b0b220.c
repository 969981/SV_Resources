/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b0b220; name: FUN_01b0b220
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01b0b220(undefined1 *param_1,char *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_50 [16];
  undefined8 *local_40 [2];
  undefined8 local_18;
  
  cVar4 = *param_2;
  if ((cVar4 == '\x02') || (cVar4 == '\x03')) {
    if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0))
    goto switchD_01b0b27c_default;
  }
  else if (((cVar4 != '\x01') && (cVar4 != '\0')) || (*(long *)(param_2 + 8) == 0))
  goto switchD_01b0b27c_default;
  switch(*param_2) {
  case '\0':
    lVar9 = *(long *)(param_2 + 8);
    plVar7 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x28))();
    if (((*PTR_DAT_047d3f00 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar6 != 0)) {
      uVar8 = FUN_01b07aa4();
      *(undefined8 *)PTR_DAT_047d3f08 = uVar8;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)PTR_DAT_047d3f08) goto LAB_01b0b2bc;
    }
    lVar9 = 0;
LAB_01b0b2bc:
    *param_1 = 0;
    *(long *)(param_1 + 8) = lVar9;
    return;
  case '\x01':
    lVar9 = *(long *)(param_2 + 8);
    plVar7 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x28))((undefined8 *)(lVar9 + 0x28));
    if (((*PTR_DAT_047d3f00 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar6 != 0)) {
      uVar8 = FUN_01b07aa4();
      *(undefined8 *)PTR_DAT_047d3f08 = uVar8;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    do {
      if (plVar7 == (long *)0x0) {
        lVar9 = 0;
LAB_01b0b3e0:
        *param_1 = 1;
        *(long *)(param_1 + 8) = lVar9;
        return;
      }
      if (plVar7 == (long *)PTR_DAT_047d3f08) {
        lVar10 = *(long *)(lVar9 + 0x30);
        if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar10 + 0x1a);
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
          uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
          *(undefined8 *)(lVar10 + 8) = uVar8;
          *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
        }
        else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        goto LAB_01b0b3e0;
      }
      plVar7 = (long *)*plVar7;
    } while( true );
  case '\x02':
    FUN_01b0bc04(local_40,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 2;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_010cb054(param_1 + 8,local_40);
    if (local_40[0] == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_40[0] + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 != 1) {
      if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      return;
    }
    piVar2 = (int *)((long)local_40[0] + 0x1c);
    do {
      iVar6 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
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
    local_18 = *local_40[0];
    FUN_00c44438(lVar9 + 0x8040,&local_18);
    return;
  case '\x03':
    FUN_01b0bc04(auStack_50,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_010cb054(param_1 + 8,auStack_50);
    FUN_011d7bc0(auStack_50);
    return;
  }
switchD_01b0b27c_default:
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



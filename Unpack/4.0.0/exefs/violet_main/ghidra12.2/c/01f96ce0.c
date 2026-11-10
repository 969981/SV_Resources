/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f96ce0; name: FUN_01f96ce0
 */


void FUN_01f96ce0(long *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auStack_68 [24];
  long *local_50;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  lVar8 = *(long *)(param_2 + 8);
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01f96d4c;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01f96d4c:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar8 + 0x10) != 0) {
          plVar11 = (long *)(*(long *)(lVar8 + 0x10) + -0x28);
          FUN_00d8fb98(auStack_68,param_2 + 0x38);
          FUN_00fe4300(local_48,plVar11,auStack_68);
          if (local_48[0] == (undefined8 *)0x0) {
            plVar10 = (long *)0x0;
            goto LAB_01f96d9c;
          }
          if (*(short *)((long)local_48[0] + 0x1a) == 0) goto LAB_01f96ea0;
          psVar1 = (short *)((long)local_48[0] + 0x1a);
          sVar9 = *(short *)((long)local_48[0] + 0x1a);
          goto LAB_01f96e6c;
        }
        break;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  *param_1 = 0;
  return;
  while (sVar9 = sVar3, sVar3 != 0) {
LAB_01f96e6c:
    sVar3 = *psVar1;
    if (sVar3 == sVar9) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01f96e90;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01f96e90:
      bVar5 = false;
    }
    if (bVar5) {
      plVar10 = (long *)0x0;
      if (local_48[0][2] != 0) {
        plVar10 = (long *)(local_48[0][2] + -0x28);
      }
      goto LAB_01f96eb8;
    }
  }
LAB_01f96ea0:
  plVar10 = (long *)0x0;
LAB_01f96eb8:
  psVar1 = (short *)(local_48[0] + 3);
  do {
    sVar9 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar9 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar9 == 1) {
    piVar2 = (int *)((long)local_48[0] + 0x1c);
    do {
      iVar6 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar8 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar8;
      local_38 = *local_48[0];
      FUN_00c44438(lVar8 + 0x8040,&local_38);
    }
  }
  else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
LAB_01f96d9c:
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (plVar10 != (long *)0x0) {
    lVar8 = FUN_010c5a68(plVar10 + 0x21,auStack_68);
    if (lVar8 != 0) {
      *param_1 = lVar8;
      lVar8 = *(long *)(lVar8 + 0x98);
      if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar9 == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        *(undefined8 *)(lVar8 + 8) = uVar7;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      }
      else if (sVar9 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      (**(code **)(*plVar10 + 0x60))(plVar10);
      goto LAB_01f96dfc;
    }
    (**(code **)(*plVar10 + 0x60))(plVar10);
  }
  *param_1 = 0;
LAB_01f96dfc:
  (**(code **)(*plVar11 + 0x60))(plVar11);
  return;
}



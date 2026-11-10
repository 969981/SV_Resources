/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e15810; name: FUN_01e15810
 */


bool FUN_01e15810(undefined8 param_1,undefined4 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  long *local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  long *local_38;
  undefined8 local_18;
  
  plVar7 = (long *)FUN_00d63ba4();
  if ((((*plVar7 != 0) && (*(short *)(*plVar7 + 0x1a) != 0)) && (lVar10 = *plVar7, lVar10 != 0)) &&
     (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar11 = *(short *)(lVar10 + 0x1a);
LAB_01e15928:
    sVar3 = *psVar1;
    if (sVar3 == sVar11) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01e1594c;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01e1594c:
      bVar5 = false;
    }
    if (!bVar5) goto code_r0x01e15954;
    lVar10 = *(long *)(lVar10 + 0x10);
    if (lVar10 != 0) {
      plVar7 = (long *)(lVar10 + -0x28);
      FUN_01e0f388(&local_50,plVar7);
      lVar10 = *(long *)(lVar10 + 8);
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar7 + 0x50))(plVar7);
      }
      else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      goto LAB_01e1583c;
    }
  }
LAB_01e15834:
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  local_50 = (long *)0x0;
LAB_01e1583c:
  if (((local_50 == (long *)0x0) || (local_48 == (undefined8 *)0x0)) ||
     (*(short *)((long)local_48 + 0x1a) == 0)) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), puVar9 = (undefined8 *)PTR_DAT_047d3e30,
       iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    else {
      puVar9 = (undefined8 *)PTR_DAT_047d3e30;
    }
  }
  else {
    puVar9 = (undefined8 *)(**(code **)(*local_50 + 0x18))();
  }
  plVar12 = (long *)*puVar9;
  plVar7 = (long *)puVar9[3];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  puVar9 = local_48;
  if (local_48 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_48 + 3);
    do {
      sVar11 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      piVar2 = (int *)((long)local_48 + 0x1c);
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
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_18 = *puVar9;
        FUN_00c44438(lVar10 + 0x8040,&local_18);
      }
    }
    else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  switch(*param_2) {
  case 1:
    puVar8 = &DAT_04544100;
    break;
  case 2:
    puVar8 = &DAT_045441c0;
    break;
  case 3:
    puVar8 = &DAT_045441d8;
    break;
  case 4:
  case 9:
    puVar8 = &DAT_04544148;
    break;
  case 5:
    puVar8 = &DAT_04544160;
    break;
  case 6:
    puVar8 = &DAT_04544190;
    break;
  case 7:
    puVar8 = &DAT_04544118;
    break;
  case 8:
    puVar8 = &DAT_04544178;
    break;
  case 10:
    puVar8 = &DAT_045441a8;
    break;
  case 0xb:
    puVar8 = &DAT_045441f0;
    break;
  default:
    bVar5 = false;
    goto LAB_01e158e4;
  }
  FUN_01e15bbc(&local_50,puVar8);
  bVar5 = plVar12 == local_50;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
LAB_01e158e4:
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  return bVar5;
code_r0x01e15954:
  sVar11 = sVar3;
  if (sVar3 == 0) goto LAB_01e15834;
  goto LAB_01e15928;
}



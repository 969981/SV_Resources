/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010f5fdc; name: FUN_010f5fdc
 */


void FUN_010f5fdc(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  FUN_00d1a240(param_1,0x80008080);
  *param_1 = &PTR_FUN_0455f450;
  param_1[4] = &PTR_LAB_0455f598;
  param_1[5] = &DAT_0455f6c0;
  param_1[6] = &PTR_LAB_0455f718;
  puVar14 = param_1 + 7;
  *puVar14 = &PTR_LAB_0455f740;
  param_1[0x24] = 0xcfb6c0f3820db5c2;
  param_1[0x25] = "ObjectAlpha";
  param_1[0x26] = 0xb;
  *(undefined1 *)(param_1 + 0x27) = 1;
  memset((void *)((long)param_1 + 0x139),0,0x67);
  param_1[0x34] = 0x3f8000003f800000;
  param_1[0x35] = 0x3f8000003f800000;
  plVar13 = (long *)param_1[1];
  *(undefined4 *)(param_1 + 0x3a) = 0x3e4ccccd;
  param_1[0x43] = 0x3ffffffffffffff;
  param_1[0x48] = 0x3ffffffffffffff;
  *(undefined4 *)(param_1 + 0x36) = 0x3f800000;
  param_1[0x39] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1e4) = 0x3f800000;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = plVar13;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = plVar13;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  if ((*(char *)(param_1 + 0xb) != '\x04') || (*(char *)((long)param_1 + 0x59) != '\x04')) {
    uVar4 = *(undefined2 *)(param_1 + 0xb);
    *(undefined2 *)(param_1 + 0xb) = 0x404;
    if (param_1[9] == 0) {
      ppuVar11 = &PTR_LAB_0455f740;
    }
    else {
      FUN_00c6a584(param_1[9],puVar14);
      ppuVar11 = (undefined **)*puVar14;
    }
    (*(code *)ppuVar11[4])(puVar14,uVar4);
    plVar13 = (long *)param_1[1];
  }
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_00c43ef0(&local_48,param_1 + 0x13);
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  if ((undefined8 *)local_48[2] == param_1 + 5) {
    FUN_010f6b28(&local_58,&local_48);
  }
  puVar14 = local_48;
  if (local_48 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_48 + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_48 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_38 = *puVar14;
        FUN_00c44438(lVar8 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) goto LAB_010f62e0;
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar13;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  lVar9 = (**(code **)(*plVar13 + 0x10))(plVar13,0x68,8);
  if (lVar9 == 0) {
    (**(code **)(*plVar13 + 0xe8))(plVar13);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_010f6758(&local_48,&local_58);
  FUN_010f6624(lVar9,&local_48);
  puVar14 = local_48;
  if (local_48 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_48 + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_48 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_38 = *puVar14;
        FUN_00c44438(lVar12 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) goto LAB_010f62e0;
  }
  *(undefined4 *)(lVar9 + 0x18) = 0x80068;
  *(long **)(lVar9 + 8) = plVar13;
  *(long *)(lVar9 + 0x10) = lVar9;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  lVar8 = *(long *)(lVar9 + 0x30);
  if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar8 + 0x1a);
  do {
    sVar3 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar3 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar3 == 0) {
    uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
    *(undefined8 *)(lVar8 + 8) = uVar10;
    *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
  }
  else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  plVar13 = (long *)param_1[0x3b];
  param_1[0x3b] = 0;
  if (plVar13 != (long *)0x0) {
    lVar8 = plVar13[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  puVar14 = local_58;
  param_1[0x3b] = lVar9;
  if (local_58 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_58 + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_58 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_48 = (undefined8 *)*puVar14;
        FUN_00c44438(lVar8 + 0x8040,&local_48);
      }
    }
    else if (sVar3 == 0) {
LAB_010f62e0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}



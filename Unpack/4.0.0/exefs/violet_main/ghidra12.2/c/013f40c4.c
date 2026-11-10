/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013f40c4; name: FUN_013f40c4
 */


void FUN_013f40c4(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 *local_68 [2];
  undefined8 local_58;
  
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_013dbad8(&local_78,param_2);
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_00ca1a48(&local_88,param_2);
  lVar14 = *param_3;
  lVar4 = param_3[1];
  if (local_78 == (undefined8 *)0x0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if (local_78[2] != 0) {
      lVar10 = local_78[2] + -0x28;
    }
  }
  local_68[0] = (undefined8 *)CONCAT44(local_68[0]._4_4_,0x80008080);
  lVar10 = FUN_0110b210(lVar10,*(undefined8 *)(lVar10 + 8),local_68);
  puVar7 = PTR_DAT_047d5280;
  *(long *)PTR_DAT_047d5280 = lVar10;
  plVar13 = *(long **)(lVar10 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar13;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  plVar11 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x80,8);
  if (plVar11 == (long *)0x0) {
    (**(code **)(*plVar13 + 0xe8))(plVar13);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  FUN_01177ab4();
  *plVar11 = (long)&PTR_FUN_045613a8;
  plVar11[4] = (long)&PTR_LAB_04561440;
  plVar11[5] = (long)&DAT_04561490;
  plVar11[0xb] = 0;
  plVar11[0xc] = 0;
  FUN_00ca1a48(plVar11 + 0xb,&local_88);
  *(undefined1 *)(plVar11 + 0xf) = 0;
  plVar11[0xd] = lVar14;
  plVar11[0xe] = lVar4;
  *(undefined4 *)(plVar11 + 3) = 0x80080;
  plVar11[1] = (long)plVar13;
  plVar11[2] = (long)plVar11;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  lVar14 = plVar11[6];
  if (*(long *)(lVar14 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar14 + 0x1a);
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
    uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
    *(undefined8 *)(lVar14 + 8) = uVar12;
    *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
  }
  else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  *(undefined8 *)puVar7 = 0;
  (**(code **)(*plVar11 + 0x18))(local_68,plVar11);
  *param_1 = 0;
  param_1[1] = 0;
  if ((long *)local_68[0][2] == plVar11 + 5) {
    FUN_013f4664(param_1,local_68);
  }
  puVar8 = local_68[0];
  if (local_68[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_68[0] + 3);
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
      piVar2 = (int *)((long)local_68[0] + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_58 = *puVar8;
        FUN_00c44438(lVar14 + 0x8040,&local_58);
      }
    }
    else if (sVar3 == 0) goto LAB_013f4330;
  }
  lVar14 = plVar11[6];
  psVar1 = (short *)(lVar14 + 0x1a);
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
    *(undefined8 *)(lVar14 + 0x10) = 0;
    (**(code **)(*plVar11 + 0x50))(plVar11);
  }
  else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  puVar8 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_88 + 3);
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
      piVar2 = (int *)((long)local_88 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_68[0] = (undefined8 *)*puVar8;
        FUN_00c44438(lVar14 + 0x8040,local_68);
      }
    }
    else if (sVar3 == 0) goto LAB_013f4330;
  }
  puVar8 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_78 + 3);
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
      piVar2 = (int *)((long)local_78 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_68[0] = (undefined8 *)*puVar8;
        FUN_00c44438(lVar14 + 0x8040,local_68);
      }
    }
    else if (sVar3 == 0) {
LAB_013f4330:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}



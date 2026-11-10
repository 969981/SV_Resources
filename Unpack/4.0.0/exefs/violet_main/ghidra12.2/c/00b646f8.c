/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b646f8; name: FUN_00b646f8
 */


void FUN_00b646f8(long param_1)

{
  short *psVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  short sVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  if (*(char *)(param_1 + 0x60) == '\0') {
    if (*(long *)(param_1 + 0x48) == 0) {
      return;
    }
    if (*(short *)(*(long *)(param_1 + 0x48) + 0x1a) == 0) {
      return;
    }
  }
  plVar11 = *(long **)(param_1 + 0x58);
  if (plVar11 == (long *)0x0) {
    return;
  }
  cVar6 = (**(code **)(*plVar11 + 0x28))(plVar11);
  if (cVar6 == -3) {
    return;
  }
  lVar8 = (**(code **)(*plVar11 + 0x20))(plVar11);
  if (lVar8 == 0) {
    return;
  }
  lVar8 = (**(code **)(*plVar11 + 0x30))(plVar11,(char *)(param_1 + 0x69));
  if (lVar8 == 0) {
    return;
  }
  if (*(long *)PTR_DAT_047d0a08 != 0) {
    cVar3 = *(char *)(param_1 + 0x68);
    iVar7 = FUN_00f21480();
    if ((((iVar7 == 1) && ((byte)(cVar3 + 4U) < 8)) && (*(long *)PTR_DAT_047d0860 != 0)) &&
       ((lVar8 = FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,(&DAT_0485ea48)[(byte)(cVar3 + 4)],
                              0x81), lVar8 != 0 && (cVar3 = *(char *)(lVar8 + 0x78), cVar3 != '\f'))
       )) {
      if (cVar3 != '\a') {
        if (cVar3 != '\x06') {
          return;
        }
        lVar8 = param_1 + (ulong)*(byte *)(param_1 + 0x69) * 0x30;
        *(undefined1 *)(lVar8 + 0xd8) = 1;
        if ((*(long *)(lVar8 + 0xd0) != 0) &&
           (((*(char *)(param_1 + 0x88) != '\0' ||
             ((*(long *)(param_1 + 0x70) != 0 && (*(short *)(*(long *)(param_1 + 0x70) + 0x1a) != 0)
              ))) && (*(undefined8 **)(param_1 + 0x80) != (undefined8 *)0x0)))) {
          (**(code **)**(undefined8 **)(param_1 + 0x80))();
        }
        uVar4 = *(undefined1 *)(param_1 + 0x69);
        local_58 = (undefined8 *)0x0;
        uStack_50 = 0;
        FUN_00c43ef0(&local_58,param_1 + 0x70);
        local_48 = *(undefined8 *)(param_1 + 0x80);
        local_40 = *(undefined1 *)(param_1 + 0x88);
        FUN_00b64b44(param_1,uVar4,&local_58);
        if (local_58 == (undefined8 *)0x0) {
          return;
        }
        psVar1 = (short *)(local_58 + 3);
        do {
          sVar9 = *psVar1;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar9 != 1) goto LAB_00b64984;
        piVar2 = (int *)((long)local_58 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          puVar10 = local_58;
        } while (cVar6 != '\0');
        goto LAB_00b649b0;
      }
      uVar4 = *(undefined1 *)(param_1 + 0x69);
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      FUN_00c43ef0(&local_78,param_1 + 0x70);
      local_68 = *(undefined8 *)(param_1 + 0x80);
      local_60 = *(undefined1 *)(param_1 + 0x88);
      FUN_00b64b44(param_1,uVar4,&local_78);
      if (local_78 == (undefined8 *)0x0) {
        return;
      }
      psVar1 = (short *)(local_78 + 3);
      do {
        sVar9 = *psVar1;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar9 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar9 == 1) {
        piVar2 = (int *)((long)local_78 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          puVar10 = local_78;
        } while (cVar6 != '\0');
        goto LAB_00b649b0;
      }
      goto LAB_00b64984;
    }
  }
  cVar3 = *(char *)(param_1 + 0x69);
  if (cVar3 == cVar6) {
    return;
  }
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  FUN_00c43ef0(&local_98,param_1 + 0x70);
  local_88 = *(undefined8 *)(param_1 + 0x80);
  local_80 = *(undefined1 *)(param_1 + 0x88);
  FUN_00b64b44(param_1,cVar3,&local_98);
  if (local_98 == (undefined8 *)0x0) {
    return;
  }
  psVar1 = (short *)(local_98 + 3);
  do {
    sVar9 = *psVar1;
    cVar6 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar9 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar9 == 1) {
    piVar2 = (int *)((long)local_98 + 0x1c);
    do {
      iVar7 = *piVar2;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      puVar10 = local_98;
    } while (cVar6 != '\0');
LAB_00b649b0:
    if (iVar7 == -1) {
      return;
    }
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    lVar8 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar8;
    local_38 = *puVar10;
    FUN_00c44438(lVar8 + 0x8040,&local_38);
    return;
  }
LAB_00b64984:
  if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  return;
}



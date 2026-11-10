/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016fc3a8; name: FUN_016fc3a8
 */


void FUN_016fc3a8(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  char cVar4;
  byte bVar5;
  undefined8 *puVar6;
  bool bVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined4 local_2c;
  undefined8 local_28;
  
  piVar9 = (int *)*param_1;
  if (((*(ushort *)((long)piVar9 - (long)*piVar9) < 0x17) ||
      (uVar12 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[0xb], uVar12 == 0)) ||
     (puVar10 = (uint *)((long)piVar9 + uVar12), piVar9 = (int *)((long)puVar10 + (ulong)*puVar10),
     *piVar9 == 0)) {
    bVar7 = false;
    bVar5 = 1;
  }
  else {
    puVar10 = (uint *)(piVar9 + 1);
    piVar9 = (int *)((long)puVar10 + (ulong)*puVar10);
    puVar10 = (uint *)((long)piVar9 + (ulong)*(ushort *)((long)piVar9 + (8 - (long)*piVar9)));
    piVar9 = (int *)((long)puVar10 + (ulong)*puVar10);
    if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
       (uVar12 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar12 == 0)) {
      bVar5 = 0;
      bVar7 = false;
    }
    else {
      bVar7 = *(char *)((long)piVar9 + uVar12) != '\0';
      bVar5 = 0;
    }
  }
  local_2c = 0;
  if (!(bool)(bVar5 | !bVar7)) {
    local_2c = 0x3f800000;
  }
  local_60 = param_1[0x22];
  uStack_58 = param_1[0x23];
  local_50 = param_1[0x24];
  plVar3 = (long *)param_1[0x25];
  local_48 = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if ((code *)param_1[2] == (code *)0x0) {
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
  }
  else {
    (*(code *)param_1[2])(&local_40,param_1 + 6,&local_60);
    plVar3 = local_48;
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  if ((local_40 == (undefined8 *)0x0) || (*(short *)((long)local_40 + 0x1a) == 0)) {
    local_80 = 0x1d9ff716c615e238;
    pcStack_78 = "outdoor_env.lightapplier";
    local_70 = 0x18;
    local_68 = (long *)0x0;
    if ((code *)param_1[2] == (code *)0x0) {
      local_90 = (undefined8 *)0x0;
      uStack_88 = 0;
    }
    else {
      (*(code *)param_1[2])(&local_90,param_1 + 6,&local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
    }
    if (local_90 != (undefined8 *)0x0) {
      if (*(short *)((long)local_90 + 0x1a) != 0) {
        local_b0 = 0x757527f9d900520e;
        pcStack_a8 = "Global";
        local_a0 = 6;
        uStack_98 = 0;
        FUN_02b22d34(local_90,&local_2c,&local_b0);
      }
      puVar6 = local_90;
      if (local_90 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_90 + 3);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 1) {
          piVar9 = (int *)((long)local_90 + 0x1c);
          do {
            iVar8 = *piVar9;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar7) {
              *piVar9 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_28 = *puVar6;
            FUN_00c44438(lVar11 + 0x8040,&local_28);
          }
        }
        else if (sVar2 == 0) goto LAB_016fc76c;
      }
    }
  }
  else {
    local_80 = 0x757527f9d900520e;
    pcStack_78 = "Global";
    local_70 = 6;
    local_68 = (long *)0x0;
    FUN_02b22d34(local_40,&local_2c,&local_80);
  }
  puVar6 = local_40;
  if (local_40 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_40 + 3);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      piVar9 = (int *)((long)local_40 + 0x1c);
      do {
        iVar8 = *piVar9;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar7) {
          *piVar9 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_90 = (undefined8 *)*puVar6;
        FUN_00c44438(lVar11 + 0x8040,&local_90);
      }
    }
    else if (sVar2 == 0) {
LAB_016fc76c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b3b9ec; name: FUN_01b3b9ec
 */


void FUN_01b3b9ec(undefined1 *param_1,undefined8 param_2,undefined8 param_3,double param_4,
                 char *param_5,byte *param_6)

{
  long *plVar1;
  int *piVar2;
  short *psVar3;
  char cVar4;
  byte bVar5;
  short sVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  code *pcVar10;
  byte *pbVar11;
  short sVar12;
  long *plVar13;
  undefined1 *local_80;
  byte *pbStack_78;
  size_t local_70;
  long *local_68;
  undefined8 *local_60 [2];
  long *local_50;
  undefined8 uStack_48;
  long local_38;
  
  cVar4 = *param_5;
  if (cVar4 == '\x02') {
    lVar9 = *(long *)(param_5 + 8);
    if (lVar9 == 0) {
LAB_01b3ba24:
      plVar13 = (long *)0x0;
    }
    else if (*(short *)(lVar9 + 0x1a) == 0) {
      plVar13 = (long *)0x0;
    }
    else {
      psVar3 = (short *)(lVar9 + 0x1a);
      sVar12 = *(short *)(lVar9 + 0x1a);
      do {
        sVar6 = *psVar3;
        if (sVar6 == sVar12) {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar7) {
            *psVar3 = sVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01b3bd04;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01b3bd04:
          bVar7 = false;
        }
        if (bVar7) {
          plVar13 = (long *)0x0;
          if (*(long *)(lVar9 + 0x10) != 0) {
            plVar13 = (long *)(*(long *)(lVar9 + 0x10) + -0x28);
          }
          break;
        }
        plVar13 = (long *)0x0;
        sVar12 = sVar6;
      } while (sVar6 != 0);
    }
  }
  else if (cVar4 == '\x01') {
    plVar13 = *(long **)(param_5 + 8);
    if (plVar13 != (long *)0x0) {
      pcVar10 = *(code **)(*plVar13 + 0x58);
LAB_01b3bc74:
      (*pcVar10)(plVar13);
    }
  }
  else {
    if (cVar4 != '\0') goto LAB_01b3ba24;
    plVar13 = *(long **)(param_5 + 8);
    if (plVar13 != (long *)0x0) {
      pcVar10 = *(code **)(*plVar13 + 0x58);
      goto LAB_01b3bc74;
    }
  }
  if (param_6 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_80 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_78 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_70 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_68 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  else {
    local_70 = strlen((char *)param_6);
    bVar5 = *param_6;
    local_80 = &DAT_cbf29ce484222645;
    pbVar11 = param_6;
    while (bVar5 != 0) {
      pbVar11 = pbVar11 + 1;
      local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar11;
    }
    local_68 = (long *)0x0;
    pbStack_78 = param_6;
  }
  local_50 = plVar13;
  FUN_01b3bfa4(local_60,param_2,param_3,(float)param_4,&local_50,&local_80);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x60))();
  }
  local_50 = (long *)0x0;
  uStack_48 = 0;
  FUN_00ca1a48(&local_50,local_60);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 2;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_00ca1ea4(param_1 + 8,&local_50);
  plVar13 = local_50;
  if (local_50 != (long *)0x0) {
    plVar1 = local_50 + 3;
    do {
      sVar12 = (short)*plVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(short *)plVar1 = sVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar12 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_38 = *plVar13;
        FUN_00c44438(lVar9 + 0x8040,&local_38);
      }
    }
    else if (sVar12 == 0) goto LAB_01b3bb2c;
  }
  if (local_60[0] != (undefined8 *)0x0) {
    psVar3 = (short *)(local_60[0] + 3);
    do {
      sVar12 = *psVar3;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar7) {
        *psVar3 = sVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar12 == 1) {
      piVar2 = (int *)((long)local_60[0] + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_50 = (long *)*local_60[0];
        FUN_00c44438(lVar9 + 0x8040,&local_50);
      }
    }
    else if (sVar12 == 0) {
LAB_01b3bb2c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01aa173c; name: FUN_01aa173c
 */


void FUN_01aa173c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 local_150 [16];
  undefined8 *local_140;
  undefined8 uStack_138;
  undefined8 *local_130;
  code *local_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  long local_110;
  undefined8 uStack_108;
  undefined8 **local_100;
  char *pcStack_f8;
  char local_ac [4];
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_6c;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58 [3];
  
  if (((DAT_04837608 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04837608), iVar8 != 0)) {
    FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000,param_4);
    __cxa_guard_release(&DAT_04837608);
  }
  lVar11 = DAT_048375f8;
  DAT_04837610 = DAT_048375f8;
  local_6c = 0x461c3f9a;
  lVar9 = FUN_01aa1cf8(DAT_048375f8,param_3,&local_6c,param_4);
  if (lVar9 == 0) {
LAB_01aa1988:
    *param_1 = 0;
    return;
  }
  local_130 = (undefined8 *)0x0;
  local_128 = (code *)0x0;
  FUN_00c43ef0(&local_130,lVar9 + 0x30);
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  if (local_130[2] == lVar9 + 0x28) {
    FUN_00f5d3e8(&local_a8,&local_130);
  }
  puVar6 = local_130;
  if (local_130 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_130 + 3);
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
      piVar2 = (int *)((long)local_130 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
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
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_150._0_8_ = *puVar6;
        FUN_00c44438(lVar12 + 0x8040,local_150);
      }
    }
    else if (sVar3 == 0) goto LAB_01aa1a3c;
  }
  uVar10 = FUN_01440498(lVar11,&local_a8,param_2);
  puVar6 = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_a8 + 3);
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
      piVar2 = (int *)((long)local_a8 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
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
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_130 = (undefined8 *)*puVar6;
        FUN_00c44438(lVar12 + 0x8040,&local_130);
      }
    }
    else if (sVar3 == 0) goto LAB_01aa1a3c;
  }
  if ((uVar10 & 1) == 0) goto LAB_01aa1988;
  uStack_90 = *(undefined8 *)(lVar11 + 8);
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  pcStack_f8 = local_ac;
  local_110 = lVar11;
  local_78 = 0;
  local_ac[0] = '\0';
  local_98 = 0;
  local_88 = 0x7ffffffffffffff;
  uStack_80 = 0;
  local_100 = &local_a8;
  local_130 = (undefined8 *)&LAB_01972dc0;
  local_128 = FUN_00a92acc;
  local_120 = &LAB_00a92ad0;
  puStack_118 = &LAB_00a92ae4;
  uStack_108 = param_2;
  FUN_00dec528(lVar9 + 0x40,&local_130);
  if (local_ac[0] == '\0') {
    local_150 = FUN_00cbc2e4(lVar9,lVar9 + 0x90);
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    FUN_00c43ef0(&local_68,lVar9 + 0x30);
    local_140 = (undefined8 *)0x0;
    uStack_138 = 0;
    if (local_68[2] == lVar9 + 0x28) {
      FUN_00f5d3e8(&local_140,&local_68);
    }
    puVar6 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_68 + 3);
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
        piVar2 = (int *)((long)local_68 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != -1) {
          if ((*PTR_DAT_047d3908 & 1) == 0) {
            iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908);
            if (iVar8 != 0) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_58[0] = *puVar6;
          FUN_00c44438(lVar11 + 0x8040,local_58);
        }
      }
      else if (sVar3 == 0) goto LAB_01aa1a3c;
    }
    FUN_01891ab4(&local_a8,local_150);
    FUN_019d5c00(local_a8,uStack_a0);
    *param_1 = 0;
    FUN_01950664(param_1 + 8,&local_a8);
    puVar6 = local_140;
    *param_1 = 1;
    if (local_140 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_140 + 3);
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
        piVar2 = (int *)((long)local_140 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != -1) {
          if ((*PTR_DAT_047d3908 & 1) == 0) {
            iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908);
            if (iVar8 != 0) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_68 = (undefined8 *)*puVar6;
          FUN_00c44438(lVar11 + 0x8040,&local_68);
        }
      }
      else if (sVar3 == 0) {
LAB_01aa1a3c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  else {
    *param_1 = 0;
  }
  pcVar7 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = (undefined1 *)0x0;
    puStack_118 = (undefined1 *)0x0;
    local_130 = (undefined8 *)0x0;
    local_128 = (code *)0x0;
    (*pcVar7)(&local_110);
  }
  FUN_0193777c(&local_a8);
  return;
}



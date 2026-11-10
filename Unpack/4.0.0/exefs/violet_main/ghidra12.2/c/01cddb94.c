/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cddb94; name: FUN_01cddb94
 */


void FUN_01cddb94(ulong param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  void *__src;
  long lVar16;
  long lVar17;
  uint *puVar18;
  int *piVar19;
  long lVar20;
  int *__s;
  long lVar21;
  undefined8 local_d0 [2];
  undefined8 *local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined1 local_88;
  int *local_80;
  undefined1 auStack_78 [24];
  
  lVar13 = FUN_017f6f98();
  puVar8 = PTR_DAT_047d6c98;
  if (lVar13 == 0) {
    return;
  }
  if (((*PTR_DAT_047d6c98 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  puVar10 = PTR_DAT_047d6ca8;
  puVar9 = PTR_DAT_047d6ca0;
  lVar21 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar21;
  if (lVar21 == 0) {
    return;
  }
  if (*(long *)PTR_DAT_047d0a08 == 0) {
    return;
  }
  iVar12 = FUN_00f21480();
  if (iVar12 != 1) {
    return;
  }
  if (*(long *)(lVar13 + 0x38) != 0) {
    return;
  }
  if (((*PTR_DAT_047d8cc8 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  lVar16 = *(long *)PTR_DAT_047d8cd0;
  *(long *)PTR_DAT_047d8cd8 = lVar16;
  if (lVar16 == 0) {
    return;
  }
  lVar16 = *(long *)(lVar16 + 0x50);
  if (lVar16 == 0) {
    return;
  }
  if (((*PTR_DAT_047d4c98 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar17 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar17;
  plVar4 = *(long **)(lVar17 + 0x1c8);
  plVar7 = *(long **)(lVar17 + 0x1c0);
  do {
    if (plVar7 == plVar4) {
      return;
    }
    lVar17 = *plVar7;
    uVar14 = FUN_01474488(lVar17 + 0x28);
    plVar7 = plVar7 + 1;
  } while ((uVar14 & 1) == 0);
  FUN_01f5fbb0(&local_80,lVar16);
  piVar2 = local_80;
  if (local_80 == (int *)0x0) {
    return;
  }
  __s = local_80 + 2;
  local_80[0] = 0x5a0;
  local_80[1] = 0x360;
  memset(__s,0,0x97e00);
  if (((*(int *)(lVar17 + 0x40) == 0) || (*(int *)(lVar17 + 0x44) == 0)) ||
     (puVar18 = (uint *)(lVar17 + 0x48), *puVar18 == 0)) {
    if (((*(int *)(lVar17 + 0x70) == 0) || (*(int *)(lVar17 + 0x74) == 0)) ||
       (puVar18 = (uint *)(lVar17 + 0x78), *puVar18 == 0)) goto LAB_01cddd74;
    *piVar2 = *(int *)(lVar17 + 0x70);
    piVar19 = (int *)(lVar17 + 0x74);
    lVar20 = 0xb;
  }
  else {
    *piVar2 = *(int *)(lVar17 + 0x40);
    piVar19 = (int *)(lVar17 + 0x44);
    lVar20 = 5;
  }
  piVar2[1] = *piVar19;
  __src = *(void **)(lVar17 + 0x28 + lVar20 * 8);
  if (__src != (void *)0x0) {
    memcpy(__s,__src,(ulong)*puVar18);
  }
LAB_01cddd74:
  if (*(long *)(lVar21 + 0x70) == 0) {
    local_c0 = (undefined8 *)0x0;
  }
  else {
    FUN_01f61ce4(&local_c0,*(long *)(lVar21 + 0x70),*(undefined8 *)(lVar13 + 8));
  }
  puVar11 = local_c0;
  local_a0 = *(undefined8 *)(lVar13 + 0x38);
  *(undefined8 *)(lVar13 + 0x38) = 0;
  FUN_01f5f8cc(&local_a0);
  local_c0 = (undefined8 *)0x0;
  *(undefined8 **)(lVar13 + 0x38) = puVar11;
  FUN_01f5f8cc(&local_c0);
  if (*(long *)(lVar13 + 0x38) != 0) {
    local_90 = lVar13 + 0x30;
    local_88 = 1;
    local_a0 = 0;
    uStack_98 = 0;
    uVar14 = FUN_01f5fccc(*(long *)(lVar13 + 0x38),piVar2,&local_a0);
    FUN_01f603fc(&local_a0);
    if ((uVar14 & 1) == 0) {
      FUN_01f5f7f8(*(undefined8 *)(lVar13 + 0x38));
      local_c0 = *(undefined8 **)(lVar13 + 0x38);
      *(undefined8 *)(lVar13 + 0x38) = 0;
      FUN_01f5f8cc(&local_c0);
    }
    FUN_01f60ea8(local_d0,*(undefined8 *)(lVar13 + 0x38));
    FUN_01f606d0(&local_c0,lVar16,local_d0);
    puVar11 = local_c0;
    local_c0 = (undefined8 *)0x0;
    lVar21 = *(long *)(lVar13 + 0x40);
    *(undefined8 **)(lVar13 + 0x40) = puVar11;
    if (lVar21 != 0) {
      FUN_01f5f434(lVar13 + 0x48);
    }
    *(long *)(lVar13 + 0x50) = local_b0;
    *(ulong *)(lVar13 + 0x58) = CONCAT71(uStack_a7,local_a8);
    *(undefined8 *)(lVar13 + 0x48) = local_b8;
    FUN_01f60d98(local_d0);
    if (*(long *)(lVar13 + 0x40) == 0) {
      FUN_01f5f7f8(*(undefined8 *)(lVar13 + 0x38));
      FUN_01f5f87c(*(undefined8 *)(lVar13 + 0x38));
      local_c0 = *(undefined8 **)(lVar13 + 0x38);
      *(undefined8 *)(lVar13 + 0x38) = 0;
      FUN_01f5f8cc(&local_c0);
    }
    else {
      if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar12 != 0)) {
        FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6c98);
      }
      lVar21 = *(long *)puVar9;
      *(long *)puVar10 = lVar21;
      if (lVar21 != 0) {
        local_b0 = lVar13 + 0x28;
        local_c0 = (undefined8 *)0x0;
        local_b8 = 0;
        local_a8 = 1;
        FUN_01667c7c(lVar21,&local_c0);
        puVar11 = local_c0;
        if (local_c0 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_c0 + 3);
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
            piVar2 = (int *)((long)local_c0 + 0x1c);
            do {
              iVar12 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar12 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar21 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar21;
              local_d0[0] = *puVar11;
              FUN_00c44438(lVar21 + 0x8040,local_d0);
            }
          }
          else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
      }
      if (((*PTR_DAT_047d8cc8 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar12 != 0)) {
        FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8cc8);
      }
      lVar21 = *(long *)PTR_DAT_047d8cd0;
      *(long *)PTR_DAT_047d8cd8 = lVar21;
      if (lVar21 != 0) {
        FUN_01793e80(lVar21,*(undefined8 *)(lVar13 + 0x40));
      }
      lVar13 = FUN_019d8b6c();
      if (lVar13 != 0) {
        FUN_00a39424();
      }
      if ((param_1 & 1) == 0) {
        uVar15 = 0xfffffff;
      }
      else {
        uVar15 = 1000;
      }
      FUN_01f5f944(uVar15);
    }
  }
  piVar2 = local_80;
  local_80 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    FUN_01f5fed0(auStack_78);
  }
  return;
}



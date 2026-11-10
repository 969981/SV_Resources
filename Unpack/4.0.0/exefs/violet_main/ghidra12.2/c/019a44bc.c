/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019a44bc; name: FUN_019a44bc
 */


void FUN_019a44bc(undefined8 *param_1)

{
  short *psVar1;
  uint uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  long *plVar15;
  short sVar16;
  ulong uVar17;
  long *plVar18;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 uStack_30;
  undefined2 uStack_2f;
  undefined1 local_28 [4];
  undefined4 local_24;
  int local_20;
  undefined4 uStack_1c;
  undefined8 *local_18;
  
  piVar9 = (int *)*param_1;
  if (*(ushort *)((long)piVar9 - (long)*piVar9) < 0x17) {
    return;
  }
  uVar12 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[0xb];
  if (uVar12 == 0) {
    return;
  }
  puVar10 = (uint *)((long)piVar9 + uVar12);
  if (*(int *)((long)puVar10 + (ulong)*puVar10) != 0) {
    puVar13 = (uint *)((int *)((long)puVar10 + (ulong)*puVar10) + 1);
    piVar9 = (int *)((long)puVar13 + (ulong)*puVar13);
    puVar13 = (uint *)((long)piVar9 + (ulong)*(ushort *)((long)piVar9 + (8 - (long)*piVar9)));
    piVar9 = (int *)((long)puVar13 + (ulong)*puVar13);
    if ((4 < *(ushort *)((long)piVar9 - (long)*piVar9)) &&
       (uVar12 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar12 != 0)) {
      local_24 = *(undefined4 *)((long)piVar9 + uVar12);
      goto LAB_019a4540;
    }
  }
  local_24 = 0;
LAB_019a4540:
  if (*(uint *)((long)puVar10 + (ulong)*puVar10) < 2) {
    return;
  }
  puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10) + 2;
  piVar9 = (int *)((long)puVar10 + (ulong)*puVar10);
  puVar10 = (uint *)((long)piVar9 + (ulong)*(ushort *)((long)piVar9 + (8 - (long)*piVar9)));
  piVar9 = (int *)((long)puVar10 + (ulong)*puVar10);
  if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
     (uVar12 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar12 == 0)) {
    local_20 = 0;
  }
  else {
    local_20 = (uint)(*(char *)((long)piVar9 + uVar12) != '\0') << 8;
  }
  if (((*PTR_DAT_047d3be0 & 1) == 0) &&
     (local_18 = param_1, uStack_1c = local_24, iVar7 = __cxa_guard_acquire(PTR_DAT_047d3be0),
     param_1 = local_18, local_24 = uStack_1c, iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3be0);
    param_1 = local_18;
    local_24 = uStack_1c;
  }
  local_28[0] = local_20 == 0x100;
  lVar8 = *(long *)PTR_DAT_047d3be8;
  *(long *)PTR_DAT_047dcd80 = lVar8;
  uVar12 = *(ulong *)(lVar8 + 0x50);
  if (uVar12 != 0) {
    uVar14 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar2 = *(uint *)(param_1 + 0x38);
    uVar11 = (ulong)uVar2;
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar17 = (ulong)((int)uVar12 - 1U & uVar2);
    }
    else {
      uVar17 = uVar11;
      if (uVar12 <= uVar11) {
        uVar17 = 0;
        if (uVar12 != 0) {
          uVar17 = uVar11 / uVar12;
        }
        uVar17 = uVar11 - uVar17 * uVar12;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar8 + 0x48) + uVar17 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar15[1] == uVar11) {
            if (*(uint *)(plVar15 + 2) == uVar2) goto LAB_019a46ec;
          }
          else if ((plVar15[1] & uVar12 - 1) != uVar17) {
            return;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar15[1];
          if (uVar14 == uVar11) {
            if (*(uint *)(plVar15 + 2) == uVar2) goto LAB_019a46ec;
          }
          else {
            if (uVar12 <= uVar14) {
              uVar6 = 0;
              if (uVar12 != 0) {
                uVar6 = uVar14 / uVar12;
              }
              uVar14 = uVar14 - uVar6 * uVar12;
            }
            if (uVar14 != uVar17) {
              return;
            }
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  return;
LAB_019a46ec:
  if (plVar15[5] == 0) {
    return;
  }
  if (*(short *)(plVar15[5] + 0x1a) == 0) {
    return;
  }
  lVar8 = plVar15[5];
  if (lVar8 == 0) {
    return;
  }
  if (*(short *)(lVar8 + 0x1a) == 0) {
    return;
  }
  psVar1 = (short *)(lVar8 + 0x1a);
  sVar16 = *(short *)(lVar8 + 0x1a);
  do {
    sVar3 = *psVar1;
    if (sVar3 == sVar16) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_019a4784;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_019a4784:
      bVar5 = false;
    }
    if (bVar5) {
      lVar8 = *(long *)(lVar8 + 0x10);
      if (lVar8 == 0) {
        return;
      }
      uStack_2f = 0;
      plVar18 = (long *)(lVar8 + -0x28);
      uStack_30 = 0x36;
      local_31 = 0x44;
      local_32 = 0x41;
      local_34 = 0x3646;
      local_38 = 0x36453136;
      local_40 = 0x3246303043324253;
      local_48 = *(undefined4 *)(param_1 + 0x38);
      uStack_44 = local_48;
      FUN_01973ff8(plVar18,&local_40,plVar15 + 3,&uStack_44,&local_24,local_28,&local_48);
      lVar8 = *(long *)(lVar8 + 8);
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar16 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar18 + 0x50))(plVar18);
        return;
      }
      if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      return;
    }
    sVar16 = sVar3;
    if (sVar3 == 0) {
      return;
    }
  } while( true );
}



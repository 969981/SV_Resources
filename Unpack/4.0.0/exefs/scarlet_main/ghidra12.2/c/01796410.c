/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01796410; name: FUN_01796410
 */


void FUN_01796410(undefined8 *param_1)

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
  ulong uVar13;
  long *plVar14;
  short sVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 uStack_28;
  undefined2 uStack_27;
  undefined1 local_24 [8];
  int iStack_1c;
  undefined8 *local_18;
  
  piVar9 = (int *)*param_1;
  if (((*(ushort *)((long)piVar9 - (long)*piVar9) < 0x17) ||
      (uVar12 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[0xb], uVar12 == 0)) ||
     (puVar10 = (uint *)((long)piVar9 + uVar12), piVar9 = (int *)((long)puVar10 + (ulong)*puVar10),
     *piVar9 == 0)) {
    return;
  }
  puVar10 = (uint *)(piVar9 + 1);
  piVar9 = (int *)((long)puVar10 + (ulong)*puVar10);
  puVar10 = (uint *)((long)piVar9 + (ulong)*(ushort *)((long)piVar9 + (8 - (long)*piVar9)));
  piVar9 = (int *)((long)puVar10 + (ulong)*puVar10);
  if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
     (uVar12 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar12 == 0)) {
    iStack_1c = 0;
  }
  else {
    iStack_1c = (uint)(*(char *)((long)piVar9 + uVar12) != '\0') << 8;
  }
  if (((*PTR_DAT_047d3be0 & 1) == 0) &&
     (local_18 = param_1, iVar7 = __cxa_guard_acquire(PTR_DAT_047d3be0), param_1 = local_18,
     iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3be0);
    param_1 = local_18;
  }
  lVar8 = *(long *)PTR_DAT_047d3be8;
  *(long *)PTR_DAT_047dcd80 = lVar8;
  local_24[0] = iStack_1c == 0x100;
  uVar12 = *(ulong *)(lVar8 + 0x50);
  if (uVar12 == 0) {
    return;
  }
  uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar2 = *(uint *)(param_1 + 0x38);
  uVar11 = (ulong)uVar2;
  uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar13 < 2) {
    uVar16 = (ulong)((int)uVar12 - 1U & uVar2);
  }
  else {
    uVar16 = uVar11;
    if (uVar12 <= uVar11) {
      uVar16 = 0;
      if (uVar12 != 0) {
        uVar16 = uVar11 / uVar12;
      }
      uVar16 = uVar11 - uVar16 * uVar12;
    }
  }
  plVar14 = *(long **)(*(long *)(lVar8 + 0x48) + uVar16 * 8);
  if (plVar14 == (long *)0x0) {
    return;
  }
  plVar14 = (long *)*plVar14;
  if (plVar14 == (long *)0x0) {
    return;
  }
  if (1 < uVar13) {
    do {
      uVar13 = plVar14[1];
      if (uVar13 == uVar11) {
        if (*(uint *)(plVar14 + 2) == uVar2) goto LAB_017965e0;
      }
      else {
        if (uVar12 <= uVar13) {
          uVar6 = 0;
          if (uVar12 != 0) {
            uVar6 = uVar13 / uVar12;
          }
          uVar13 = uVar13 - uVar6 * uVar12;
        }
        if (uVar13 != uVar16) {
          return;
        }
      }
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    if (plVar14[1] == uVar11) {
      if (*(uint *)(plVar14 + 2) == uVar2) break;
    }
    else if ((plVar14[1] & uVar12 - 1) != uVar16) {
      return;
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_017965e0:
  if ((((plVar14[5] != 0) && (*(short *)(plVar14[5] + 0x1a) != 0)) &&
      (lVar8 = plVar14[5], lVar8 != 0)) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar15 = *(short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar15) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01796678;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01796678:
        bVar5 = false;
      }
      if (bVar5) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 == 0) {
          return;
        }
        uStack_27 = 0;
        plVar17 = (long *)(lVar8 + -0x28);
        uStack_28 = 0x32;
        local_29 = 0x45;
        local_2a = 0x44;
        local_2c = 0x4537;
        local_30 = 0x35383643;
        local_38 = 0x4143364632423553;
        FUN_021057e0(plVar17,&local_38,plVar14 + 3,local_24);
        lVar8 = *(long *)(lVar8 + 8);
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar15 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar15 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar17 + 0x50))(plVar17);
          return;
        }
        if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar15 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}



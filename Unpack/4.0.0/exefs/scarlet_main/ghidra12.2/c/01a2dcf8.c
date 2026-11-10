/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a2dcf8; name: FUN_01a2dcf8
 */


void FUN_01a2dcf8(undefined8 *param_1)

{
  short *psVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  uint *puVar12;
  long *plVar13;
  ushort *puVar14;
  uint *puVar15;
  short sVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 uStack_30;
  undefined2 uStack_2f;
  undefined1 uStack_2d;
  uint uStack_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  uint uStack_1c;
  undefined8 *local_18;
  
  piVar11 = (int *)*param_1;
  puVar14 = (ushort *)((long)piVar11 - (long)*piVar11);
  uVar3 = *puVar14;
  if (uVar3 < 0xb) {
    local_20 = 0;
    iVar8 = 0;
    if (uVar3 < 9) {
      uVar17 = 0;
      local_24 = 0;
      uStack_1c = 0;
      goto LAB_01a2ddfc;
    }
  }
  else {
    iVar8 = 0;
    if ((ulong)puVar14[5] != 0) {
      iVar8 = *(int *)((long)piVar11 + (ulong)puVar14[5]);
    }
  }
  local_20 = iVar8;
  local_24 = 0;
  if ((ulong)puVar14[4] != 0) {
    local_24 = *(int *)((long)piVar11 + (ulong)puVar14[4]);
  }
  if ((uVar3 < 0x17) || ((ulong)puVar14[0xb] == 0)) {
    uVar17 = 0;
  }
  else {
    puVar15 = (uint *)((long)piVar11 + (ulong)puVar14[0xb]);
    if (*(int *)((long)puVar15 + (ulong)*puVar15) == 0) {
      uVar18 = 0;
      uVar17 = 0;
    }
    else {
      puVar12 = (uint *)((int *)((long)puVar15 + (ulong)*puVar15) + 1);
      piVar11 = (int *)((long)puVar12 + (ulong)*puVar12);
      puVar12 = (uint *)((long)piVar11 + (ulong)*(ushort *)((long)piVar11 + (8 - (long)*piVar11)));
      piVar11 = (int *)((long)puVar12 + (ulong)*puVar12);
      if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
         (uVar17 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar17 == 0)) {
        uVar17 = 0;
      }
      else {
        uVar17 = (ulong)*(uint *)((long)piVar11 + uVar17) << 0x20;
      }
      uVar18 = 1;
    }
    uVar17 = uVar17 | uVar18;
    if (1 < *(uint *)((long)puVar15 + (ulong)*puVar15)) {
      puVar15 = (uint *)((long)puVar15 + (ulong)*puVar15) + 2;
      piVar11 = (int *)((long)puVar15 + (ulong)*puVar15);
      puVar15 = (uint *)((long)piVar11 + (ulong)*(ushort *)((long)piVar11 + (8 - (long)*piVar11)));
      piVar11 = (int *)((long)puVar15 + (ulong)*puVar15);
      if ((4 < *(ushort *)((long)piVar11 - (long)*piVar11)) &&
         (uVar18 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar18 != 0)) {
        uStack_1c = *(uint *)((long)piVar11 + uVar18);
        goto LAB_01a2ddfc;
      }
    }
  }
  uStack_1c = 0;
LAB_01a2ddfc:
  if ((*PTR_DAT_047d3be0 & 1) == 0) {
    uStack_30 = (undefined1)uVar17;
    uStack_2f = 0;
    uStack_2d = 0;
    uStack_2c = (uint)(uVar17 >> 0x20);
    local_18 = param_1;
    iVar8 = __cxa_guard_acquire(PTR_DAT_047d3be0);
    uVar17 = (ulong)uStack_2c << 0x20;
    param_1 = local_18;
    uStack_1c = uStack_1c;
    if (iVar8 != 0) {
      FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3be0);
      uVar17 = (ulong)uStack_2c << 0x20;
      param_1 = local_18;
      uStack_1c = uStack_1c;
    }
  }
  uStack_2c = uStack_1c;
  local_24 = local_20 - local_24;
  local_28 = (undefined4)(uVar17 >> 0x20);
  lVar9 = *(long *)PTR_DAT_047d3be8;
  *(long *)PTR_DAT_047dcd80 = lVar9;
  uVar17 = *(ulong *)(lVar9 + 0x50);
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar2 = *(uint *)(param_1 + 0x38);
    uVar10 = (ulong)uVar2;
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = (ulong)((int)uVar17 - 1U & uVar2);
    }
    else {
      uVar19 = uVar10;
      if (uVar17 <= uVar10) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = uVar10 / uVar17;
        }
        uVar19 = uVar10 - uVar19 * uVar17;
      }
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x48) + uVar19 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar13[1] == uVar10) {
            if (*(uint *)(plVar13 + 2) == uVar2) goto LAB_01a2df90;
          }
          else if ((plVar13[1] & uVar17 - 1) != uVar19) {
            return;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar13[1];
          if (uVar18 == uVar10) {
            if (*(uint *)(plVar13 + 2) == uVar2) goto LAB_01a2df90;
          }
          else {
            if (uVar17 <= uVar18) {
              uVar7 = 0;
              if (uVar17 != 0) {
                uVar7 = uVar18 / uVar17;
              }
              uVar18 = uVar18 - uVar7 * uVar17;
            }
            if (uVar18 != uVar19) {
              return;
            }
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  return;
LAB_01a2df90:
  uStack_2f = 0;
  uStack_30 = 0x39;
  local_31 = 0x38;
  local_32 = 0x33;
  local_34 = 0x4137;
  local_38 = 0x45463345;
  local_40 = 0x4639413139434253;
  lVar9 = plVar13[5];
  if (lVar9 == 0) {
    return;
  }
  if (*(short *)(lVar9 + 0x1a) == 0) {
    return;
  }
  psVar1 = (short *)(lVar9 + 0x1a);
  sVar16 = *(short *)(lVar9 + 0x1a);
  do {
    sVar4 = *psVar1;
    if (sVar4 == sVar16) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_01a2e068;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01a2e068:
      bVar6 = false;
    }
    if (bVar6) {
      lVar9 = *(long *)(lVar9 + 0x10);
      if (lVar9 == 0) {
        return;
      }
      local_44 = *(undefined4 *)(param_1 + 0x38);
      plVar20 = (long *)(lVar9 + -0x28);
      FUN_018320dc(plVar20,&local_40,plVar13 + 3,&local_44,param_1 + 0x22,&local_24,&local_28,
                   &uStack_2c);
      lVar9 = *(long *)(lVar9 + 8);
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar16 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar16 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar20 + 0x50))(plVar20);
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
    sVar16 = sVar4;
    if (sVar4 == 0) {
      return;
    }
  } while( true );
}



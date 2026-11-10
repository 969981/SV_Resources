/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a44704; name: FUN_01a44704
 */


void FUN_01a44704(long param_1)

{
  short *psVar1;
  uint uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  short sVar13;
  ulong uVar14;
  long *plVar15;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 uStack_28;
  undefined2 uStack_27;
  long local_18;
  
  if (((*PTR_DAT_047d3be0 & 1) == 0) &&
     (local_18 = param_1, iVar7 = __cxa_guard_acquire(PTR_DAT_047d3be0), param_1 = local_18,
     iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3be0);
    param_1 = local_18;
  }
  lVar8 = *(long *)PTR_DAT_047d3be8;
  *(long *)PTR_DAT_047dcd80 = lVar8;
  uVar12 = *(ulong *)(lVar8 + 0x50);
  if (uVar12 == 0) {
    return;
  }
  uVar10 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar2 = *(uint *)(param_1 + 0x1c0);
  uVar9 = (ulong)uVar2;
  uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar10 < 2) {
    uVar14 = (ulong)((int)uVar12 - 1U & uVar2);
  }
  else {
    uVar14 = uVar9;
    if (uVar12 <= uVar9) {
      uVar14 = 0;
      if (uVar12 != 0) {
        uVar14 = uVar9 / uVar12;
      }
      uVar14 = uVar9 - uVar14 * uVar12;
    }
  }
  plVar11 = *(long **)(*(long *)(lVar8 + 0x48) + uVar14 * 8);
  if (plVar11 == (long *)0x0) {
    return;
  }
  plVar11 = (long *)*plVar11;
  if (plVar11 == (long *)0x0) {
    return;
  }
  if (1 < uVar10) {
    do {
      uVar10 = plVar11[1];
      if (uVar10 == uVar9) {
        if (*(uint *)(plVar11 + 2) == uVar2) goto LAB_01a4482c;
      }
      else {
        if (uVar12 <= uVar10) {
          uVar6 = 0;
          if (uVar12 != 0) {
            uVar6 = uVar10 / uVar12;
          }
          uVar10 = uVar10 - uVar6 * uVar12;
        }
        if (uVar10 != uVar14) {
          return;
        }
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    if (plVar11[1] == uVar9) {
      if (*(uint *)(plVar11 + 2) == uVar2) break;
    }
    else if ((plVar11[1] & uVar12 - 1) != uVar14) {
      return;
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_01a4482c:
  uStack_27 = 0;
  uStack_28 = 0x43;
  local_29 = 0x31;
  local_2a = 0x31;
  local_2c = 0x3733;
  local_30 = 0x41413037;
  local_38 = 0x3934324635444553;
  lVar8 = plVar11[5];
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar13 = *(short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar13) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01a44900;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a44900:
        bVar5 = false;
      }
      if (bVar5) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 == 0) {
          return;
        }
        local_3c = *(undefined4 *)(param_1 + 0x1c0);
        plVar15 = (long *)(lVar8 + -0x28);
        FUN_019e58dc(plVar15,&local_38,plVar11 + 3,&local_3c,param_1 + 0x110);
        lVar8 = *(long *)(lVar8 + 8);
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar13 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar13 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar15 + 0x50))(plVar15);
          return;
        }
        if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar13 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}



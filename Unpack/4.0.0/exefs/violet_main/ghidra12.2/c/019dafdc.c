/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019dafdc; name: FUN_019dafdc
 */


void FUN_019dafdc(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  short sVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 uStack_28;
  undefined2 uStack_27;
  uint local_24 [2];
  uint uStack_1c;
  long local_18;
  
  uStack_1c = *(uint *)(param_1 + 0x1c0);
  if (((*PTR_DAT_047d3be0 & 1) == 0) &&
     (local_18 = param_1, iVar6 = __cxa_guard_acquire(PTR_DAT_047d3be0), param_1 = local_18,
     iVar6 != 0)) {
    FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3be0);
    param_1 = local_18;
  }
  lVar7 = *(long *)PTR_DAT_047d3be8;
  *(long *)PTR_DAT_047dcd80 = lVar7;
  uVar10 = *(ulong *)(lVar7 + 0x50);
  if (uVar10 == 0) {
    return;
  }
  uVar8 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar13 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  uVar8 = (ulong)uStack_1c;
  if (uVar13 < 2) {
    uVar12 = (ulong)((int)uVar10 - 1U & uStack_1c);
  }
  else {
    uVar12 = uVar8;
    if (uVar10 <= uVar8) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar8 / uVar10;
      }
      uVar12 = uVar8 - uVar12 * uVar10;
    }
  }
  plVar9 = *(long **)(*(long *)(lVar7 + 0x48) + uVar12 * 8);
  if (plVar9 == (long *)0x0) {
    return;
  }
  plVar9 = (long *)*plVar9;
  if (plVar9 == (long *)0x0) {
    return;
  }
  if (1 < uVar13) {
    do {
      uVar13 = plVar9[1];
      if (uVar13 == uVar8) {
        if (*(uint *)(plVar9 + 2) == uStack_1c) goto LAB_019db118;
      }
      else {
        if (uVar10 <= uVar13) {
          uVar5 = 0;
          if (uVar10 != 0) {
            uVar5 = uVar13 / uVar10;
          }
          uVar13 = uVar13 - uVar5 * uVar10;
        }
        if (uVar13 != uVar12) {
          return;
        }
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    if (plVar9[1] == uVar8) {
      if (*(uint *)(plVar9 + 2) == uStack_1c) break;
    }
    else if ((plVar9[1] & uVar10 - 1) != uVar12) {
      return;
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_019db118:
  uStack_27 = 0;
  local_29 = 0x39;
  local_2a = 0x30;
  local_2c = 0x4235;
  uStack_28 = 0x44;
  local_30 = 0x31303934;
  local_38 = 0x4441323745394253;
  lVar7 = plVar9[5];
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar11 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar11) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_019db1ec;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_019db1ec:
        bVar4 = false;
      }
      if (bVar4) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 == 0) {
          return;
        }
        plVar14 = (long *)(lVar7 + -0x28);
        local_24[0] = uStack_1c;
        FUN_019d8454(plVar14,&local_38,plVar9 + 3,local_24,param_1 + 0x110);
        lVar7 = *(long *)(lVar7 + 8);
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar11 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar11 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar14 + 0x50))(plVar14);
          return;
        }
        if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar11 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}



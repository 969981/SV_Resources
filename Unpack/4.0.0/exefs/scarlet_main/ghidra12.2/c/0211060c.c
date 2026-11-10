/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0211060c; name: FUN_0211060c
 */


void FUN_0211060c(long param_1,long param_2,undefined4 param_3,long *param_4)

{
  short *psVar1;
  uint uVar2;
  short sVar3;
  char cVar4;
  ulong uVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  bool bVar16;
  short sVar17;
  long *plVar18;
  undefined4 local_64;
  long *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 uStack_48;
  undefined2 uStack_47;
  undefined4 local_44;
  
  uVar12 = *(ulong *)(param_1 + 0x50);
  if (uVar12 == 0) {
    return;
  }
  uVar14 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
  uVar2 = *(uint *)(param_2 + 0x1c0);
  uVar9 = (ulong)uVar2;
  uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar14 < 2) {
    uVar15 = (ulong)((int)uVar12 - 1U & uVar2);
  }
  else {
    uVar15 = uVar9;
    if (uVar12 <= uVar9) {
      uVar15 = 0;
      if (uVar12 != 0) {
        uVar15 = uVar9 / uVar12;
      }
      uVar15 = uVar9 - uVar15 * uVar12;
    }
  }
  plVar18 = *(long **)(*(long *)(param_1 + 0x48) + uVar15 * 8);
  if (plVar18 == (long *)0x0) {
    return;
  }
  plVar18 = (long *)*plVar18;
  if (plVar18 == (long *)0x0) {
    return;
  }
  if (1 < uVar14) {
    do {
      uVar14 = plVar18[1];
      if (uVar14 == uVar9) {
        if (*(uint *)(plVar18 + 2) == uVar2) goto LAB_021106ac;
      }
      else {
        if (uVar12 <= uVar14) {
          uVar5 = 0;
          if (uVar12 != 0) {
            uVar5 = uVar14 / uVar12;
          }
          uVar14 = uVar14 - uVar5 * uVar12;
        }
        if (uVar14 != uVar15) {
          return;
        }
      }
      plVar18 = (long *)*plVar18;
      if (plVar18 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    if (plVar18[1] == uVar9) {
      if (*(uint *)(plVar18 + 2) == uVar2) break;
    }
    else if ((plVar18[1] & uVar12 - 1) != uVar15) {
      return;
    }
    plVar18 = (long *)*plVar18;
    if (plVar18 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_021106ac:
  lVar10 = *param_4;
  if (lVar10 == 0) {
    return;
  }
  if (*(short *)(lVar10 + 0x1a) == 0) {
    return;
  }
  psVar1 = (short *)(lVar10 + 0x1a);
  sVar17 = *(short *)(lVar10 + 0x1a);
  do {
    sVar3 = *psVar1;
    if (sVar3 == sVar17) {
      cVar4 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar16) {
        *psVar1 = sVar17 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_02110738;
      bVar16 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_02110738:
      bVar16 = false;
    }
    if (bVar16) {
      puVar11 = *(undefined8 **)(lVar10 + 0x10);
      plVar13 = puVar11 + -5;
      if (puVar11 == (undefined8 *)0x0) {
        return;
      }
      uStack_47 = 0;
      uStack_48 = 0x46;
      local_49 = 0x31;
      local_4c = 0x3835;
      local_4a = 0x32;
      local_50 = 0x30363731;
      local_58 = 0x3236384141353753;
      local_44 = param_3;
      plVar7 = (long *)(**(code **)*puVar11)(puVar11);
      if (((*PTR_DAT_047d6520 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar6 != 0)) {
        uVar8 = FUN_0151c130();
        *(undefined8 *)PTR_DAT_047d6528 = uVar8;
        __cxa_guard_release(PTR_DAT_047d6520);
      }
      break;
    }
    sVar17 = sVar3;
    if (sVar3 == 0) {
      return;
    }
  } while( true );
joined_r0x021107e0:
  if (plVar7 == (long *)0x0) goto LAB_021107fc;
  if (plVar7 == (long *)PTR_DAT_047d6528) {
    local_60 = plVar13;
    goto LAB_02110808;
  }
  plVar7 = (long *)*plVar7;
  goto joined_r0x021107e0;
LAB_021107fc:
  local_60 = (long *)0x0;
LAB_02110808:
  lVar10 = plVar18[5];
  if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar17 = *(short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar17) {
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar17 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0211088c;
        bVar16 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0211088c:
        bVar16 = false;
      }
      if (bVar16) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 != 0) {
          local_64 = *(undefined4 *)(param_2 + 0x1c0);
          plVar7 = (long *)(lVar10 + -0x28);
          FUN_0182a8a0(plVar7,&local_58,plVar18 + 3,&local_64,&local_44,&local_60);
          lVar10 = *(long *)(lVar10 + 8);
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar17 = *psVar1;
            cVar4 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar16) {
              *psVar1 = sVar17 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar17 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar7 + 0x50))(plVar7);
          }
          else if (sVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        break;
      }
      sVar17 = sVar3;
    } while (sVar3 != 0);
  }
  (**(code **)(*plVar13 + 0x60))(plVar13);
  return;
}



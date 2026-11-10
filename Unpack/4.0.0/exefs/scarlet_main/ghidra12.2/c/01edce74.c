/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01edce74; name: FUN_01edce74
 */


void FUN_01edce74(long param_1,long *param_2,undefined4 param_3,uint param_4)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  long **pplVar15;
  long lVar16;
  ulong uVar17;
  uint local_a4;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  if (*param_2 == 0) {
    return;
  }
  uVar9 = FUN_00cf44f4(*(undefined8 *)(*param_2 + 0x70));
  uVar9 = uVar9 & 0xffff;
  uVar17 = (ulong)uVar9;
  uVar10 = FUN_00cf41a8(*(undefined8 *)(*param_2 + 0x70));
  if (uVar9 < 0x402) {
    uVar2 = uVar10 & 0xffff;
    if (((uVar10 & 0xff) < 0x20) &&
       ((*(uint *)(param_1 + uVar17 * 0x18 + 0x38) >> (ulong)(uVar10 & 0x1f) & 1) != 0)) {
      local_a4 = FUN_00a61b94(param_1 + 0x6358,0,uVar9,uVar2);
      local_a4 = local_a4 ^ 1;
    }
    else {
      local_a4 = 0;
    }
    local_80 = 0x20591e9a4877db86;
    pcStack_78 = "FSYS_DLC1_POKEDEX_ADD";
    local_70 = 0x15;
    local_68 = (long *)0x0;
    if (((*PTR_DAT_047d4928 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_047d4928), iVar13 != 0)) {
      FUN_00100190(&LAB_02af32dc,PTR_DAT_047d4930,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4928);
    }
    puVar7 = PTR_DAT_047d4938;
    puVar6 = PTR_DAT_047d4930;
    lVar16 = *(long *)PTR_DAT_047d4930;
    *(long *)PTR_DAT_047d4938 = lVar16;
    uVar11 = FUN_00fb1cf4(&local_80,lVar16 + 0x198);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    puVar5 = PTR_DAT_047d4928;
    uVar12 = 0;
    if (((uVar10 & 0xff) < 0x20) && (((uVar11 ^ 1) & 1) == 0)) {
      if ((*(uint *)(param_1 + uVar17 * 0x18 + 0x3c) >> (ulong)(uVar10 & 0x1f) & 1) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = FUN_00a61b94(param_1 + 0x6358,1,uVar9,uVar2);
        uVar12 = uVar12 ^ 1;
      }
    }
    local_80 = 0xd829ae6584284137;
    pcStack_78 = "FSYS_DLC2_POKEDEX_ADD";
    local_70 = 0x15;
    local_68 = (long *)0x0;
    if (((*puVar5 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_047d4928), iVar13 != 0)) {
      FUN_00100190(&LAB_02af32dc,PTR_DAT_047d4930,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4928);
    }
    lVar16 = *(long *)puVar6;
    *(long *)puVar7 = lVar16;
    uVar11 = FUN_00fb1cf4(&local_80,lVar16 + 0x198);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if ((((uVar10 & 0xff) < 0x20) && (((uVar11 ^ 1) & 1) == 0)) &&
       ((*(uint *)(param_1 + uVar17 * 0x18 + 0x40) >> (ulong)(uVar10 & 0x1f) & 1) != 0)) {
      uVar17 = FUN_00a61b94(param_1 + 0x6358,2,uVar9,uVar2);
      if ((local_a4 & 1) != 0) goto LAB_01edd144;
      if ((uVar12 & 1) != 0) goto LAB_01edd1a8;
      if ((uVar17 & 1) == 0) {
        param_2 = (long *)*param_2;
        if (param_2 == (long *)0x0) {
          pplVar15 = &local_98;
          uVar14 = 2;
          local_98 = (long *)0x0;
          goto LAB_01edd298;
        }
        plVar1 = param_2 + 5;
        do {
          lVar16 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)lVar16 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        local_98 = param_2;
        if ((int)lVar16 == -1) goto LAB_01edd330;
        FUN_00a4eed0(param_1,2,&local_98,param_3,param_4 & 1);
        if (param_2 == (long *)0x0) {
          return;
        }
        plVar1 = param_2 + 5;
        do {
          iVar13 = (int)*plVar1;
          bVar8 = iVar13 + -1 == 0;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_01edd204;
      }
    }
    else {
      if ((local_a4 & 1) != 0) {
LAB_01edd144:
        param_2 = (long *)*param_2;
        if (param_2 == (long *)0x0) {
          pplVar15 = &local_88;
          uVar14 = 0;
          local_88 = (long *)0x0;
          goto LAB_01edd298;
        }
        plVar1 = param_2 + 5;
        do {
          lVar16 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)lVar16 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        local_88 = param_2;
        if ((int)lVar16 == -1) goto LAB_01edd330;
        FUN_00a4eed0(param_1,0,&local_88,param_3,param_4 & 1);
        if (param_2 == (long *)0x0) {
          return;
        }
        plVar1 = param_2 + 5;
        do {
          iVar13 = (int)*plVar1;
          bVar8 = iVar13 + -1 == 0;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_01edd204;
      }
      if ((uVar12 & 1) != 0) {
LAB_01edd1a8:
        param_2 = (long *)*param_2;
        if (param_2 == (long *)0x0) {
          pplVar15 = &local_90;
          uVar14 = 1;
          local_90 = (long *)0x0;
          goto LAB_01edd298;
        }
        plVar1 = param_2 + 5;
        do {
          lVar16 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)lVar16 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        local_90 = param_2;
        if ((int)lVar16 == -1) goto LAB_01edd330;
        FUN_00a4eed0(param_1,1,&local_90,param_3,param_4 & 1);
        if (param_2 == (long *)0x0) {
          return;
        }
        plVar1 = param_2 + 5;
        do {
          iVar13 = (int)*plVar1;
          bVar8 = iVar13 + -1 == 0;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_01edd204;
      }
    }
  }
  param_2 = (long *)*param_2;
  if (param_2 == (long *)0x0) {
    pplVar15 = &local_a0;
    uVar14 = 3;
    local_a0 = (long *)0x0;
LAB_01edd298:
    FUN_00a4eed0(param_1,uVar14,pplVar15,param_3,param_4 & 1);
    return;
  }
  plVar1 = param_2 + 5;
  do {
    lVar16 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)lVar16 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  local_a0 = param_2;
  if ((int)lVar16 == -1) {
LAB_01edd330:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  FUN_00a4eed0(param_1,3,&local_a0,param_3,param_4 & 1);
  if (param_2 == (long *)0x0) {
    return;
  }
  plVar1 = param_2 + 5;
  do {
    iVar13 = (int)*plVar1;
    bVar8 = iVar13 + -1 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar13 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01edd204:
  if (bVar8) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  else if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return;
}



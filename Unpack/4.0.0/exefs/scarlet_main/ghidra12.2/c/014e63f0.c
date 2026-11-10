/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014e63f0; name: FUN_014e63f0
 */


void FUN_014e63f0(long param_1,long *param_2,int param_3,uint param_4)

{
  long *plVar1;
  short sVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long local_70;
  long lStack_68;
  long local_60;
  long *local_58;
  
  if (param_3 == 0) {
    if (0x1d < param_4) {
      return;
    }
    lVar4 = param_1 + (ulong)param_4;
    lVar5 = 0x68bc;
  }
  else {
    switch(param_3) {
    case 1:
      if (0x1d < param_4) {
        return;
      }
      lVar4 = param_1 + (ulong)param_4;
      lVar5 = 0x68da;
      break;
    default:
      goto switchD_014e6648_caseD_2;
    case 3:
      if (5 < param_4) {
        return;
      }
      lVar4 = param_1 + (ulong)param_4;
      lVar5 = 0x68b0;
      break;
    case 4:
      if (5 < param_4) {
        return;
      }
      lVar4 = param_1 + (ulong)param_4;
      lVar5 = 0x68b6;
      break;
    case 5:
      if (5 < param_4) {
        return;
      }
      lVar4 = param_1 + (ulong)param_4;
      lVar5 = 0x68f8;
      break;
    case 6:
      if (5 < param_4) {
        return;
      }
      lVar4 = param_1 + (ulong)param_4;
      lVar5 = 0x68fe;
    }
  }
  uVar7 = (ulong)*(byte *)(lVar4 + lVar5);
  lVar4 = *param_2;
  puVar3 = (undefined8 *)(param_1 + uVar7 * 0x98 + 0x30);
  if (lVar4 == 0) {
LAB_014e66ac:
    plVar9 = *(long **)(param_1 + 0x6cd0);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x58))(plVar9);
    }
    plVar8 = (long *)*puVar3;
    plVar6 = (long *)PTR_DAT_047d8b70;
    if (plVar8 != (long *)0x0) {
      plVar6 = plVar8 + 6;
    }
    local_70 = *plVar6;
    plVar6 = (long *)PTR_PTR_047d4508;
    if (plVar8 != (long *)0x0) {
      plVar6 = plVar8 + 7;
    }
    lStack_68 = *plVar6;
    if (plVar8 == (long *)0x0) {
      local_60 = 0;
    }
    else {
      local_60 = plVar8[8];
    }
    local_58 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    local_58 = plVar8;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x58))(plVar9);
      lVar4 = FUN_00c8c7b4(plVar9[0x2e],&local_70);
      (**(code **)(*plVar9 + 0x60))(plVar9);
      if (lVar4 != 0) {
        *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
      }
    }
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
    if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014e677c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x60))(plVar9);
      return;
    }
  }
  else {
    if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0x70) + 0x10) + 4) >> 2 & 1) == 0) {
      sVar2 = FUN_00cf44f4();
      if (sVar2 == 0) goto LAB_014e66ac;
      lVar4 = *param_2;
    }
    FUN_014e6800(uVar7,param_3,lVar4);
    plVar9 = *(long **)(param_1 + 0x6cd0);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x58))(plVar9);
    }
    plVar1 = (long *)PTR_DAT_047d8b70;
    plVar8 = (long *)PTR_PTR_047d4508;
    plVar10 = (long *)*puVar3;
    plVar6 = (long *)PTR_DAT_047d8b70;
    if (plVar10 != (long *)0x0) {
      plVar6 = plVar10 + 6;
    }
    local_70 = *plVar6;
    plVar6 = (long *)PTR_PTR_047d4508;
    if (plVar10 != (long *)0x0) {
      plVar6 = plVar10 + 7;
    }
    lStack_68 = *plVar6;
    if (plVar10 == (long *)0x0) {
      local_60 = 0;
    }
    else {
      local_60 = plVar10[8];
    }
    local_58 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
    local_58 = plVar10;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x58))(plVar9);
      lVar4 = FUN_00c8c7b4(plVar9[0x2e],&local_70);
      (**(code **)(*plVar9 + 0x60))(plVar9);
      if (lVar4 != 0) {
        *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
      }
    }
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x60))(plVar9);
    }
    plVar9 = *(long **)(param_1 + 0x6cd0);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x58))(plVar9);
    }
    plVar6 = *(long **)(param_1 + uVar7 * 0x98 + 0xa8);
    if (plVar6 != (long *)0x0) {
      plVar8 = plVar6 + 7;
      plVar1 = plVar6 + 6;
    }
    local_70 = *plVar1;
    lStack_68 = *plVar8;
    if (plVar6 == (long *)0x0) {
      local_60 = 0;
    }
    else {
      local_60 = plVar6[8];
    }
    local_58 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    local_58 = plVar6;
    if ((plVar9 != (long *)0x0) &&
       (puVar3 = (undefined8 *)FUN_00e895f4(plVar9[0x2e],&local_70), puVar3 != (undefined8 *)0x0)) {
      (**(code **)(*(long *)*puVar3 + 0x20))((long *)*puVar3,1);
      (**(code **)(*(long *)*puVar3 + 0xe0))();
      *(undefined1 *)((long)puVar3 + 0x31) = 0;
      if ((undefined1 *)puVar3[7] != (undefined1 *)0x0) {
        *(undefined1 *)puVar3[7] = 1;
      }
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x60))(plVar9);
    }
  }
switchD_014e6648_caseD_2:
  return;
}



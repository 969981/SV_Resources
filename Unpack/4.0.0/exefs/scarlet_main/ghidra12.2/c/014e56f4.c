/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014e56f4; name: FUN_014e56f4
 */


void FUN_014e56f4(long param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long *local_d0;
  undefined1 auStack_c8 [80];
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_58;
  
  if (param_2 == 0) {
    lVar2 = 0x68bc;
  }
  else {
    switch(param_2) {
    case 1:
      lVar2 = 0x68da;
      break;
    default:
      goto switchD_014e5824_caseD_2;
    case 3:
      lVar2 = 0x68b0;
      break;
    case 4:
      lVar2 = 0x68b6;
      break;
    case 5:
      lVar2 = 0x68f8;
      break;
    case 6:
      lVar2 = 0x68fe;
    }
  }
  FUN_014e5ac0(auStack_c8,param_1 + (ulong)*(byte *)(param_1 + lVar2 + (ulong)param_3) * 0x98 + 0x30
              );
  if (param_4 == 0) {
    plVar3 = *(long **)(param_1 + 0x6cd0);
    if ((param_5 & 1) == 0) {
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x58))(plVar3);
      }
      plVar4 = local_58;
    }
    else {
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x58))(plVar3);
      }
      plVar4 = local_68;
    }
LAB_014e575c:
    plVar1 = (long *)PTR_DAT_047d8b70;
    if (plVar4 != (long *)0x0) {
      plVar1 = plVar4 + 6;
    }
    local_e8 = *plVar1;
    plVar1 = (long *)PTR_PTR_047d4508;
    if (plVar4 != (long *)0x0) {
      plVar1 = plVar4 + 7;
    }
    lStack_e0 = *plVar1;
    if (plVar4 == (long *)0x0) {
      local_d8 = 0;
    }
    else {
      local_d8 = plVar4[8];
    }
    local_d0 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    local_d0 = plVar4;
    if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00e895f4(plVar3[0x2e],&local_e8), lVar2 != 0)) {
      FUN_00dfcea4();
    }
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x20))();
    }
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x60))(plVar3);
    }
  }
  else {
    if (param_4 == 1) {
      plVar3 = *(long **)(param_1 + 0x6cd0);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x58))(plVar3);
      }
      plVar4 = local_78;
      goto LAB_014e575c;
    }
    if (param_4 == 2) {
      plVar3 = *(long **)(param_1 + 0x6cd0);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x58))(plVar3);
      }
      plVar4 = local_70;
      goto LAB_014e575c;
    }
  }
  FUN_014e58d8(auStack_c8);
switchD_014e5824_caseD_2:
  return;
}



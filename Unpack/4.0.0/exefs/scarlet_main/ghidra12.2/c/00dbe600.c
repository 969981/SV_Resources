/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dbe600; name: FUN_00dbe600
 */


int FUN_00dbe600(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  iVar2 = FUN_00dbe4a0();
  plVar1 = (long *)0x0;
  if (*param_5 != 0) {
    plVar1 = (long *)(*param_5 + -0x18);
  }
  lVar5 = *param_4;
  uVar3 = (**(code **)(*plVar1 + 0x40))();
  plVar1 = (long *)0x0;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + -0x18);
  }
  uVar4 = (**(code **)(*plVar1 + 0x40))();
  if (uVar3 < uVar4) {
    lVar5 = *param_4;
    *param_4 = *param_5;
    *param_5 = lVar5;
    plVar1 = (long *)0x0;
    if (*param_4 != 0) {
      plVar1 = (long *)(*param_4 + -0x18);
    }
    lVar5 = *param_3;
    uVar3 = (**(code **)(*plVar1 + 0x40))();
    plVar1 = (long *)0x0;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + -0x18);
    }
    uVar4 = (**(code **)(*plVar1 + 0x40))();
    if (uVar3 < uVar4) {
      lVar5 = *param_3;
      *param_3 = *param_4;
      *param_4 = lVar5;
      plVar1 = (long *)0x0;
      if (*param_3 != 0) {
        plVar1 = (long *)(*param_3 + -0x18);
      }
      lVar5 = *param_2;
      uVar3 = (**(code **)(*plVar1 + 0x40))();
      plVar1 = (long *)0x0;
      if (lVar5 != 0) {
        plVar1 = (long *)(lVar5 + -0x18);
      }
      uVar4 = (**(code **)(*plVar1 + 0x40))();
      if (uVar3 < uVar4) {
        lVar5 = *param_2;
        *param_2 = *param_3;
        *param_3 = lVar5;
        plVar1 = (long *)0x0;
        if (*param_2 != 0) {
          plVar1 = (long *)(*param_2 + -0x18);
        }
        lVar5 = *param_1;
        uVar3 = (**(code **)(*plVar1 + 0x40))();
        plVar1 = (long *)0x0;
        if (lVar5 != 0) {
          plVar1 = (long *)(lVar5 + -0x18);
        }
        uVar4 = (**(code **)(*plVar1 + 0x40))();
        if (uVar3 < uVar4) {
          lVar5 = *param_1;
          iVar2 = iVar2 + 4;
          *param_1 = *param_2;
          *param_2 = lVar5;
        }
        else {
          iVar2 = iVar2 + 3;
        }
      }
      else {
        iVar2 = iVar2 + 2;
      }
    }
    else {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}



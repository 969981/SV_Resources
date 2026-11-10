/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a4c220; name: FUN_00a4c220
 */


undefined8 FUN_00a4c220(long param_1,undefined8 *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined2 *puVar3;
  long lVar4;
  long *plVar5;
  long *local_50;
  long *local_48;
  
  plVar5 = (long *)*param_2;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("false","Initialize",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/ui/pokedex/pokedex_data_manager.cpp"
               ,0x12d,"scene is null");
  }
  (**(code **)(*plVar5 + 0x58))(plVar5);
  if (*(char *)(param_1 + 0x6500) == '\0') {
    local_48 = plVar5;
    (**(code **)(*plVar5 + 0x58))(plVar5);
    uVar2 = FUN_00a5fe5c(param_1 + 0x6358,&local_48);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x60))();
    }
    if ((uVar2 & 1) == 0) {
      (**(code **)(*plVar5 + 0x60))(plVar5);
      return 0;
    }
    local_50 = plVar5;
    (**(code **)(*plVar5 + 0x58))(plVar5);
    FUN_00a60240(param_1 + 0x6358,&local_50);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x60))();
    }
    *(char *)(param_1 + 0x6500) = '\x01';
  }
  (**(code **)(*plVar5 + 0x60))(plVar5);
  plVar5 = (long *)*param_2;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x58))(plVar5);
  }
  if (*(char *)(param_1 + 0x6501) == '\0') {
    local_48 = plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x58))(plVar5);
    }
    uVar2 = FUN_00a5fe5c(param_1 + 0x63d0,&local_48);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x60))();
    }
    if ((uVar2 & 1) == 0) {
      bVar1 = false;
    }
    else {
      local_50 = plVar5;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x58))(plVar5);
      }
      FUN_00a60240(param_1 + 0x63d0,&local_50);
      if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 0x60))();
      }
      bVar1 = true;
      *(undefined1 *)(param_1 + 0x6501) = 1;
    }
  }
  else {
    bVar1 = true;
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x60))(plVar5);
  }
  if (bVar1) {
    plVar5 = (long *)*param_2;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x58))(plVar5);
    }
    if (*(char *)(param_1 + 0x6502) == '\0') {
      local_48 = plVar5;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x58))(plVar5);
      }
      uVar2 = FUN_00a5fe5c(param_1 + 0x62a8,&local_48);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x60))();
      }
      if ((uVar2 & 1) == 0) {
        bVar1 = false;
      }
      else {
        local_50 = plVar5;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x58))(plVar5);
        }
        FUN_00a60240(param_1 + 0x62a8,&local_50);
        if (local_50 != (long *)0x0) {
          (**(code **)(*local_50 + 0x60))();
        }
        bVar1 = true;
        *(undefined1 *)(param_1 + 0x6502) = 1;
      }
    }
    else {
      bVar1 = true;
    }
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x60))(plVar5);
    }
    if (bVar1) {
      plVar5 = (long *)*param_2;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x58))(plVar5);
      }
      if (*(char *)(param_1 + 0x6503) == '\0') {
        local_48 = plVar5;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x58))(plVar5);
        }
        uVar2 = FUN_00a5fe5c(param_1 + 0x6230,&local_48);
        if (local_48 != (long *)0x0) {
          (**(code **)(*local_48 + 0x60))();
        }
        if ((uVar2 & 1) == 0) {
          bVar1 = false;
        }
        else {
          local_50 = plVar5;
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x58))(plVar5);
          }
          FUN_00a60240(param_1 + 0x6230,&local_50);
          if (local_50 != (long *)0x0) {
            (**(code **)(*local_50 + 0x60))();
          }
          bVar1 = true;
          *(undefined1 *)(param_1 + 0x6503) = 1;
        }
      }
      else {
        bVar1 = true;
      }
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x60))(plVar5);
      }
      if (bVar1) {
        if (*(char *)(param_1 + 0x6504) != '\0') {
          return 1;
        }
        lVar4 = 0;
        puVar3 = (undefined2 *)(param_1 + 0x2c);
        do {
          *puVar3 = (short)lVar4;
          FUN_00a63328(puVar3);
          lVar4 = lVar4 + 1;
          puVar3 = puVar3 + 0xc;
        } while (lVar4 != 0x402);
        *(undefined1 *)(param_1 + 0x6504) = 1;
        return 1;
      }
    }
  }
  return 0;
}



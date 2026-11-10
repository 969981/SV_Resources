/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f7783c; name: FUN_01f7783c
 */


void FUN_01f7783c(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  long local_50;
  long local_48;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_01f779b4(auStack_58,param_1);
    if ((param_2 != param_3) && (local_48 != 0)) {
      plVar3 = param_2;
      lVar1 = local_50;
      lVar4 = local_48;
      do {
        lVar5 = lVar1;
        FUN_01d0e1a8(lVar4 + 0x20,plVar3 + 4);
        FUN_01d0e1a8(lVar4 + 0x40,plVar3 + 8);
        FUN_01f77a0c(param_1,lVar4);
        local_48 = lVar5;
        if (lVar5 == 0) {
          lVar1 = 0;
        }
        else {
          lVar1 = FUN_01f77a54(lVar5);
          local_50 = lVar1;
        }
        plVar2 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar2 = plVar3 + 2;
          param_2 = (long *)*plVar2;
          if ((long *)*param_2 != plVar3) {
            do {
              lVar4 = *plVar2;
              plVar2 = (long *)(lVar4 + 0x10);
              param_2 = (long *)*plVar2;
            } while (*param_2 != lVar4);
          }
        }
        else {
          do {
            param_2 = plVar2;
            plVar2 = (long *)*param_2;
          } while ((long *)*param_2 != (long *)0x0);
        }
        if (lVar5 == 0) break;
        plVar3 = param_2;
        lVar4 = lVar5;
      } while (param_2 != param_3);
    }
    FUN_01f77ab8(auStack_58);
  }
  while (param_2 != param_3) {
    FUN_01f77b10(param_1,param_2 + 4);
    plVar3 = (long *)param_2[1];
    if ((long *)param_2[1] == (long *)0x0) {
      plVar3 = param_2 + 2;
      if (*(long **)*plVar3 == param_2) {
        param_2 = (long *)*plVar3;
      }
      else {
        do {
          lVar1 = *plVar3;
          plVar3 = (long *)(lVar1 + 0x10);
          param_2 = (long *)*plVar3;
        } while (*param_2 != lVar1);
      }
    }
    else {
      do {
        param_2 = plVar3;
        plVar3 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
  return;
}



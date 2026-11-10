/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005212b0; name: FUN_005212b0
 */


void FUN_005212b0(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  
  if (*param_1 == 0) {
    if (*(ushort *)(param_1 + 1) < 0x101) {
      if ((ulong)*(ushort *)((long)param_1 + 10) != 0) {
        lVar4 = (ulong)*(ushort *)((long)param_1 + 10) << 5;
        lVar2 = param_1[2] + 8;
        do {
          FUN_0052a87c(lVar2);
          lVar4 = lVar4 + -0x20;
          lVar2 = lVar2 + 0x20;
        } while (lVar4 != 0);
      }
    }
    else {
      puVar3 = (undefined8 *)param_1[2];
      plVar5 = (long *)*puVar3;
      while (plVar5 != puVar3 + 1) {
        FUN_0052a87c(plVar5 + 5);
        plVar1 = (long *)plVar5[1];
        if ((long *)plVar5[1] == (long *)0x0) {
          plVar1 = plVar5 + 2;
          if (*(long **)*plVar1 == plVar5) {
            plVar5 = (long *)*plVar1;
          }
          else {
            do {
              lVar2 = *plVar1;
              plVar1 = (long *)(lVar2 + 0x10);
              plVar5 = (long *)*plVar1;
            } while (*plVar5 != lVar2);
          }
        }
        else {
          do {
            plVar5 = plVar1;
            plVar1 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
      }
    }
    if (*(ushort *)(param_1 + 1) < 0x101) {
      lVar2 = param_1[2];
      if (lVar2 != 0) {
        FUN_0049e800(lVar2);
        FUN_0049e7e0(PTR_LAB_047cba48,lVar2);
        return;
      }
    }
    else {
      lVar2 = param_1[2];
      if (lVar2 != 0) {
        FUN_0052ad38(lVar2,*(undefined8 *)(lVar2 + 8));
        FUN_0049e790(PTR_LAB_047cba48,lVar2);
        return;
      }
    }
  }
  return;
}



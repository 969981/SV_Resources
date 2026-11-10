/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c8c10; name: FUN_001c8c10
 */


void FUN_001c8c10(long *param_1,undefined8 param_2,code *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if (param_1 != (long *)0x0) {
    iVar2 = (int)param_1[4];
    if (0 < iVar2) {
      lVar4 = 0;
      do {
        puVar1 = (undefined8 *)(*param_1 + lVar4 * 0x20);
        plVar3 = (long *)*puVar1;
        if (plVar3 != (long *)0x0) {
          do {
            plVar5 = (long *)plVar3[2];
            if ((param_3 == (code *)0x0) ||
               (iVar2 = (*param_3)(param_2,*(undefined8 *)(*plVar3 + 0x18)), iVar2 != 0)) {
              FUN_001cb600(puVar1,plVar3,param_1);
              param_1[5] = param_1[5] + -1;
            }
            plVar3 = plVar5;
          } while (plVar5 != (long *)0x0);
          iVar2 = (int)param_1[4];
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar2);
    }
  }
  return;
}



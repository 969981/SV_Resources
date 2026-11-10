/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052166c; name: FUN_0052166c
 */


void FUN_0052166c(long param_1,int param_2)

{
  int *piVar1;
  ulong uVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  if (*(ushort *)(param_1 + 8) < 0x101) {
    piVar3 = *(int **)(param_1 + 0x10);
    uVar2 = (ulong)*(ushort *)(param_1 + 10);
    while (piVar1 = piVar3, uVar2 != 0) {
      uVar6 = uVar2 >> 1;
      piVar3 = piVar1 + uVar6 * 8 + 8;
      uVar2 = uVar2 + ~uVar6;
      if (param_2 <= piVar1[uVar6 * 8]) {
        piVar3 = piVar1;
        uVar2 = uVar6;
      }
    }
    if ((piVar1 != *(int **)(param_1 + 0x10) + (ulong)*(ushort *)(param_1 + 10) * 8) &&
       (*piVar1 == param_2)) {
      FUN_005217b4(piVar1 + 2);
      return;
    }
  }
  else {
    plVar5 = (long *)(*(long *)(param_1 + 0x10) + 8);
    plVar7 = (long *)*plVar5;
    if (plVar7 != (long *)0x0) {
      plVar4 = plVar5;
      do {
        if (param_2 <= (int)plVar7[4]) {
          plVar4 = plVar7;
        }
        plVar7 = (long *)plVar7[(int)plVar7[4] < param_2];
      } while (plVar7 != (long *)0x0);
      if ((plVar4 != plVar5) && ((int)plVar4[4] <= param_2)) {
        FUN_005217b4(plVar4 + 5);
        return;
      }
    }
  }
  return;
}



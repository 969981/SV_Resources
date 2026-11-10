/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00523558; name: FUN_00523558
 */


void FUN_00523558(long param_1,int param_2)

{
  int *piVar1;
  size_t __n;
  int *__dest;
  int *piVar2;
  long *plVar3;
  ushort uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  
  if (*(ushort *)(param_1 + 8) < 0x101) {
    __dest = *(int **)(param_1 + 0x10);
    uVar4 = *(ushort *)(param_1 + 10);
    uVar5 = (ulong)uVar4;
    piVar1 = __dest + uVar5 * 8;
    if (uVar5 != 0) {
      piVar2 = __dest;
      do {
        uVar8 = uVar5 >> 1;
        __dest = piVar2 + uVar8 * 8 + 8;
        uVar5 = uVar5 + ~uVar8;
        if (param_2 <= piVar2[uVar8 * 8]) {
          __dest = piVar2;
          uVar5 = uVar8;
        }
        piVar2 = __dest;
      } while (uVar5 != 0);
    }
    if ((__dest != piVar1) && (*__dest == param_2)) {
      __n = (long)piVar1 - (long)(__dest + 8);
      if (__n != 0) {
        memmove(__dest,__dest + 8,__n);
        uVar4 = *(ushort *)(param_1 + 10);
      }
      *(ushort *)(param_1 + 10) = uVar4 - 1;
    }
  }
  else {
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    plVar11 = puVar6 + 1;
    plVar3 = (long *)*plVar11;
    if (plVar3 != (long *)0x0) {
      plVar7 = plVar3;
      plVar9 = plVar11;
      do {
        if (param_2 <= (int)plVar7[4]) {
          plVar9 = plVar7;
        }
        plVar7 = (long *)plVar7[(int)plVar7[4] < param_2];
      } while (plVar7 != (long *)0x0);
      if ((plVar9 != plVar11) && ((int)plVar9[4] <= param_2)) {
        plVar11 = (long *)plVar9[1];
        if ((long *)plVar9[1] == (long *)0x0) {
          plVar11 = plVar9 + 2;
          plVar7 = (long *)*plVar11;
          if ((long *)*plVar7 != plVar9) {
            do {
              lVar10 = *plVar11;
              plVar11 = (long *)(lVar10 + 0x10);
              plVar7 = (long *)*plVar11;
            } while (*plVar7 != lVar10);
          }
        }
        else {
          do {
            plVar7 = plVar11;
            plVar11 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
        if ((long *)*puVar6 == plVar9) {
          *puVar6 = plVar7;
        }
        puVar6[2] = puVar6[2] + -1;
        FUN_01336080(plVar3,plVar9);
        FUN_0049e790(PTR_LAB_047cba48,plVar9);
        return;
      }
    }
  }
  return;
}



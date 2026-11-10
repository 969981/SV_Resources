/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03327360; name: FUN_03327360
 */


int * FUN_03327360(long *param_1,uint *param_2)

{
  int *piVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar2 = (ulong)*param_2 & 0x7fffffff;
  lVar3 = param_1[2];
  uVar4 = *(uint *)(param_1 + 3) & uVar2;
  uVar5 = *(uint *)(lVar3 + uVar4 * 8 + 4);
  if (-1 < (int)uVar5) {
    do {
      piVar1 = (int *)(lVar3 + uVar4 * 8);
      if ((*piVar1 == (int)uVar2) && (*(uint *)(*param_1 + (ulong)uVar5 * 8) == *param_2)) {
        return piVar1;
      }
      uVar4 = uVar4 + 1 & (long)(int)*(uint *)(param_1 + 3);
      uVar5 = *(uint *)(lVar3 + uVar4 * 8 + 4);
    } while (-1 < (int)uVar5);
  }
  return (int *)0x0;
}



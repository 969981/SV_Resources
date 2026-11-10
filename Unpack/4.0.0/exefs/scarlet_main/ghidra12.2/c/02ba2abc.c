/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ba2abc; name: FUN_02ba2abc
 */


undefined2 FUN_02ba2abc(long param_1)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (((piVar1 == (int *)0x0) || (*(ushort *)((long)piVar1 - (long)*piVar1) < 7)) ||
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar2 == 0)) {
    return 0;
  }
  return *(undefined2 *)((long)piVar1 + uVar2);
}



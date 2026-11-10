/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01021f34; name: FUN_01021f34
 */


long FUN_01021f34(long param_1)

{
  uint *puVar1;
  int *piVar2;
  ulong uVar3;
  
  if ((((*(long *)(param_1 + 0x210) == 0) ||
       (piVar2 = *(int **)(*(long *)(param_1 + 0x210) + 0x30), piVar2 == (int *)0x0)) ||
      (*(ushort *)((long)piVar2 - (long)*piVar2) < 5)) ||
     (uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar3 == 0)) {
    return 0;
  }
  puVar1 = (uint *)((long)piVar2 + uVar3);
  return (long)puVar1 + (ulong)*puVar1;
}



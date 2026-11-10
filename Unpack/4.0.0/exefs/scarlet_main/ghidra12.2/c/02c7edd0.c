/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02c7edd0; name: FUN_02c7edd0
 */


undefined4 FUN_02c7edd0(long param_1)

{
  uint *puVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  puVar1 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (6 - (long)*piVar2)));
  return *(undefined4 *)((long)puVar1 + (ulong)*puVar1);
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e3afbc; name: FUN_02e3afbc
 */


undefined4 FUN_02e3afbc(long param_1,byte param_2)

{
  int *piVar1;
  uint *puVar2;
  ulong uVar3;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((((piVar1 != (int *)0x0) && (4 < *(ushort *)((long)piVar1 - (long)*piVar1))) &&
      (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar3 != 0)) &&
     (puVar2 = (uint *)((long)piVar1 + uVar3), puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2),
     (uint)param_2 < *puVar2)) {
    puVar2 = puVar2 + (ulong)param_2 + 1;
    piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
    if ((0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar3 != 0)) {
      return *(undefined4 *)((long)piVar1 + uVar3);
    }
  }
  return 0;
}



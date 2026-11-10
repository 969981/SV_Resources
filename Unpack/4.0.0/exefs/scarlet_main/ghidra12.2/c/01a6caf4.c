/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a6caf4; name: FUN_01a6caf4
 */


undefined1  [16] FUN_01a6caf4(long param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  ulong uVar3;
  
  piVar1 = *(int **)(param_1 + 0x90);
  puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x14 - (long)*piVar1)));
  puVar2 = (uint *)((long)puVar2 + (ulong)param_2 * 4 + (ulong)*puVar2 + 4);
  piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar3 == 0)) {
    piVar1 = (int *)0x0;
  }
  else {
    puVar2 = (uint *)((long)piVar1 + uVar3);
    piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
  }
  return *(undefined1 (*) [16])
          ((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
}



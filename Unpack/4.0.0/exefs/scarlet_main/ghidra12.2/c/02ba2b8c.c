/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ba2b8c; name: FUN_02ba2b8c
 */


undefined2 FUN_02ba2b8c(long param_1,long param_2)

{
  uint *puVar1;
  int *piVar2;
  ulong uVar3;
  ushort *puVar4;
  int *piVar5;
  undefined8 local_18;
  
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
       (uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar3 == 0)) {
      puVar1 = (uint *)0x0;
    }
    else {
      puVar1 = (uint *)((long)piVar2 + uVar3);
      puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
    }
    local_18 = *(undefined8 *)(param_2 + 8);
    puVar1 = bsearch(&local_18,puVar1 + 1,(ulong)*puVar1,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar1 == (uint *)0x0) {
      return 0;
    }
    piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
    puVar4 = (ushort *)((long)piVar2 - (long)*piVar2);
    if (*puVar4 < 7) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)0x0;
      if ((ulong)puVar4[3] != 0) {
        puVar1 = (uint *)((long)piVar2 + (ulong)puVar4[3]);
        piVar5 = (int *)((long)puVar1 + (ulong)*puVar1);
      }
    }
    if (((4 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
        (uVar3 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2], uVar3 != 0)) &&
       (*(char *)((long)piVar5 + uVar3) == '\x11')) {
      piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar4[3]) +
                      (ulong)*(uint *)((long)piVar2 + (ulong)puVar4[3]));
      if ((10 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
         (uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5], uVar3 != 0)) {
        return *(undefined2 *)((long)piVar2 + uVar3);
      }
    }
  }
  return 0;
}



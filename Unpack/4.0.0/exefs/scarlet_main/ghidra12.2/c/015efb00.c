/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015efb00; name: FUN_015efb00
 */


undefined8 FUN_015efb00(long *param_1,long param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  int *piVar3;
  ushort *puVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 local_8;
  
  piVar3 = (int *)param_1[1];
  if (((piVar3 != (int *)0x0) && (6 < *(ushort *)((long)piVar3 - (long)*piVar3))) &&
     (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar5 != 0)) {
    puVar1 = (uint *)((long)piVar3 + uVar5);
    puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
    local_8 = *(undefined8 *)(param_2 + 8);
    puVar1 = bsearch(&local_8,puVar1 + 1,(ulong)*puVar1,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar1 == (uint *)0x0) {
      return 0;
    }
    if (*param_1 == 0) {
      return 0;
    }
    piVar3 = (int *)((long)puVar1 + (ulong)*puVar1);
    puVar4 = (ushort *)((long)piVar3 - (long)*piVar3);
    if (*puVar4 < 7) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)0x0;
      if ((ulong)puVar4[3] != 0) {
        puVar1 = (uint *)((long)piVar3 + (ulong)puVar4[3]);
        piVar6 = (int *)((long)puVar1 + (ulong)*puVar1);
      }
    }
    if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 5) ||
       (uVar5 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2], uVar5 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = (long)*(char *)((long)piVar6 + uVar5) & 0xffffffff;
    }
    if (*(long *)(PTR_DAT_047d5608 + uVar5 * 8) == 8) {
      uVar2 = FUN_015efc20();
      return uVar2;
    }
    if ((0xc < *puVar4) && ((ulong)puVar4[6] != 0)) {
      return *(undefined8 *)((long)piVar3 + (ulong)puVar4[6]);
    }
  }
  return 0;
}



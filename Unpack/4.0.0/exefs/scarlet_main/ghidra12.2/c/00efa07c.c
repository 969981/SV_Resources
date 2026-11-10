/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00efa07c; name: FUN_00efa07c
 */


long FUN_00efa07c(undefined8 *param_1,long param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  ulong uVar6;
  ushort *puVar7;
  ushort *puVar8;
  undefined8 local_8;
  
  piVar3 = (int *)param_1[1];
  if (((piVar3 != (int *)0x0) && (6 < *(ushort *)((long)piVar3 - (long)*piVar3))) &&
     (uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar6 != 0)) {
    puVar2 = (uint *)((long)piVar3 + uVar6);
    puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
    local_8 = *(undefined8 *)(param_2 + 8);
    puVar2 = bsearch(&local_8,puVar2 + 1,(ulong)*puVar2,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar2 == (uint *)0x0) {
      return 0;
    }
    piVar3 = (int *)((long)puVar2 + (ulong)*puVar2);
    puVar7 = (ushort *)((long)piVar3 - (long)*piVar3);
    if (((6 < *puVar7) && ((ulong)puVar7[3] != 0)) &&
       (piVar4 = (int *)*param_1, piVar4 != (int *)0x0)) {
      puVar2 = (uint *)((long)piVar3 + (ulong)puVar7[3]);
      piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
      puVar8 = (ushort *)((long)piVar1 - (long)*piVar1);
      if (((4 < *puVar8) && ((ulong)puVar8[2] != 0)) &&
         (*(char *)((long)piVar1 + (ulong)puVar8[2]) == '\x0e')) {
        if ((*puVar8 < 7) || ((ulong)puVar8[3] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (long)*(char *)((long)piVar1 + (ulong)puVar8[3]) & 0xffffffff;
        }
        if (*(long *)(PTR_DAT_047d5608 + uVar6 * 8) == 4) {
          if ((*puVar7 < 0xb) || ((ulong)puVar7[5] == 0)) {
            uVar5 = 0;
          }
          else {
            uVar5 = (uint)*(ushort *)((long)piVar3 + (ulong)puVar7[5]);
          }
          if ((uVar5 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
             (uVar6 = (ulong)*(ushort *)(((long)piVar4 - (long)*piVar4) + (ulong)uVar5), uVar6 != 0)
             ) {
            puVar2 = (uint *)((long)piVar4 + uVar6);
            return (long)puVar2 + (ulong)*puVar2;
          }
        }
      }
    }
  }
  return 0;
}



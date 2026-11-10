/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02613b8c; name: FUN_02613b8c
 */


undefined8 FUN_02613b8c(long *param_1,long param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  int *piVar3;
  ulong uVar4;
  ushort *puVar5;
  undefined8 local_8;
  
  piVar3 = (int *)param_1[1];
  if (((piVar3 != (int *)0x0) && (6 < *(ushort *)((long)piVar3 - (long)*piVar3))) &&
     (uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar4 != 0)) {
    puVar1 = (uint *)((long)piVar3 + uVar4);
    puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
    local_8 = *(undefined8 *)(param_2 + 8);
    puVar1 = bsearch(&local_8,puVar1 + 1,(ulong)*puVar1,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar1 != (uint *)0x0) {
      piVar3 = (int *)((long)puVar1 + (ulong)*puVar1);
      if (((6 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
          (uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar4 != 0)) &&
         (*param_1 != 0)) {
        puVar1 = (uint *)((long)piVar3 + uVar4);
        piVar3 = (int *)((long)puVar1 + (ulong)*puVar1);
        puVar5 = (ushort *)((long)piVar3 - (long)*piVar3);
        if (((4 < *puVar5) && ((ulong)puVar5[2] != 0)) &&
           (*(char *)((long)piVar3 + (ulong)puVar5[2]) == '\x0e')) {
          if ((*puVar5 < 7) || ((ulong)puVar5[3] == 0)) {
            uVar4 = 0;
          }
          else {
            uVar4 = (long)*(char *)((long)piVar3 + (ulong)puVar5[3]) & 0xffffffff;
          }
          if (*(long *)(PTR_DAT_047d5608 + uVar4 * 8) == 1) {
            uVar2 = FUN_02613cf0();
            return uVar2;
          }
        }
      }
    }
  }
  return 0;
}



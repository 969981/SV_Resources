/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d5d2d4; name: FUN_00d5d2d4
 */


long FUN_00d5d2d4(undefined8 *param_1,long param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  ushort *puVar7;
  undefined8 local_8;
  
  piVar4 = (int *)param_1[1];
  if (((piVar4 != (int *)0x0) && (6 < *(ushort *)((long)piVar4 - (long)*piVar4))) &&
     (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar6 != 0)) {
    puVar2 = (uint *)((long)piVar4 + uVar6);
    puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
    local_8 = *(undefined8 *)(param_2 + 8);
    puVar2 = bsearch(&local_8,puVar2 + 1,(ulong)*puVar2,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar2 != (uint *)0x0) {
      piVar4 = (int *)((long)puVar2 + (ulong)*puVar2);
      if (((6 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
          (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar6 != 0)) &&
         (piVar3 = (int *)*param_1, piVar3 != (int *)0x0)) {
        puVar2 = (uint *)((long)piVar4 + uVar6);
        piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
        puVar7 = (ushort *)((long)piVar1 - (long)*piVar1);
        if (((4 < *puVar7) && ((ulong)puVar7[2] != 0)) &&
           (*(char *)((long)piVar1 + (ulong)puVar7[2]) == '\x0e')) {
          if ((*puVar7 < 7) || ((ulong)puVar7[3] == 0)) {
            uVar6 = 0;
          }
          else {
            uVar6 = (long)*(char *)((long)piVar1 + (ulong)puVar7[3]) & 0xffffffff;
          }
          if (*(long *)(PTR_DAT_047d5608 + uVar6 * 8) == 4) {
            if (*(ushort *)((long)piVar4 - (long)*piVar4) < 0xb) {
              uVar6 = 0;
            }
            else {
              uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[5];
              uVar6 = 0;
              if (uVar5 != 0) {
                uVar6 = (ulong)*(ushort *)((long)piVar4 + uVar5);
              }
            }
            if (((uint)uVar6 < (uint)*(ushort *)((long)piVar3 - (long)*piVar3)) &&
               (uVar6 = (ulong)*(ushort *)(((long)piVar3 - (long)*piVar3) + uVar6), uVar6 != 0)) {
              puVar2 = (uint *)((long)piVar3 + uVar6);
              return (long)puVar2 + (ulong)*puVar2;
            }
            return 0;
          }
        }
      }
    }
  }
  return 0;
}



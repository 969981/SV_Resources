/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dbb83c; name: FUN_00dbb83c
 */


undefined4 FUN_00dbb83c(long *param_1,long param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  ushort *puVar5;
  int *piVar6;
  ushort *puVar7;
  ulong uVar8;
  undefined8 local_28;
  
  piVar3 = (int *)param_1[1];
  if (piVar3 != (int *)0x0) {
    if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 7) ||
       (uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar4 == 0)) {
      puVar1 = (uint *)0x0;
    }
    else {
      puVar1 = (uint *)((long)piVar3 + uVar4);
      puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
    }
    local_28 = *(undefined8 *)(param_2 + 8);
    puVar1 = bsearch(&local_28,puVar1 + 1,(ulong)*puVar1,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar1 == (uint *)0x0) {
      return 0;
    }
    piVar3 = (int *)((long)puVar1 + (ulong)*puVar1);
    puVar5 = (ushort *)((long)piVar3 - (long)*piVar3);
    if (*puVar5 < 7) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)0x0;
      if ((ulong)puVar5[3] != 0) {
        puVar1 = (uint *)((long)piVar3 + (ulong)puVar5[3]);
        piVar6 = (int *)((long)puVar1 + (ulong)*puVar1);
      }
    }
    if (((4 < *(ushort *)((long)piVar6 - (long)*piVar6)) &&
        (uVar4 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2], uVar4 != 0)) &&
       (*(char *)((long)piVar6 + uVar4) == '\x11')) {
      piVar6 = (int *)((long)((long)piVar3 + (ulong)puVar5[3]) +
                      (ulong)*(uint *)((long)piVar3 + (ulong)puVar5[3]));
      puVar7 = (ushort *)((long)piVar6 - (long)*piVar6);
      if (6 < *puVar7) {
        uVar4 = (ulong)puVar7[3];
        if (uVar4 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (long)*(char *)((long)piVar6 + uVar4) & 0xffffffff;
        }
        if (((10 < *puVar7 && *(long *)(PTR_DAT_047d5608 + uVar8 * 8) == 4) &&
            ((ulong)puVar7[5] != 0)) && (param_3 < *(ushort *)((long)piVar6 + (ulong)puVar7[5]))) {
          if (puVar7[3] == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = (long)*(char *)((long)piVar6 + uVar4) & 0xffffffff;
          }
          if ((*puVar5 < 0xb) || ((ulong)puVar5[5] == 0)) {
            uVar2 = 0;
          }
          else {
            uVar2 = (uint)*(ushort *)((long)piVar3 + (ulong)puVar5[5]);
          }
          return *(undefined4 *)
                  (*param_1 +
                  (ulong)(uVar2 + (int)*(undefined8 *)(PTR_DAT_047d5608 + uVar4 * 8) * param_3));
        }
      }
    }
  }
  return 0;
}



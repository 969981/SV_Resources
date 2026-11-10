/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d996a8; name: FUN_00d996a8
 */


void FUN_00d996a8(long *param_1,undefined8 *param_2,long param_3)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  ulong uVar5;
  ushort *puVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  undefined8 local_28;
  
  piVar4 = (int *)param_2[1];
  if (((piVar4 != (int *)0x0) && (6 < *(ushort *)((long)piVar4 - (long)*piVar4))) &&
     (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar5 != 0)) {
    puVar3 = (uint *)((long)piVar4 + uVar5);
    puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    local_28 = *(undefined8 *)(param_3 + 8);
    puVar3 = bsearch(&local_28,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar3 != (uint *)0x0) && (piVar4 = (int *)*param_2, piVar4 != (int *)0x0)) {
      piVar1 = (int *)((long)puVar3 + (ulong)*puVar3);
      puVar6 = (ushort *)((long)piVar1 - (long)*piVar1);
      if (*puVar6 < 7) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)0x0;
        if ((ulong)puVar6[3] != 0) {
          puVar3 = (uint *)((long)piVar1 + (ulong)puVar6[3]);
          piVar8 = (int *)((long)puVar3 + (ulong)*puVar3);
        }
      }
      if (((4 < *(ushort *)((long)piVar8 - (long)*piVar8)) &&
          (uVar5 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar5 != 0)) &&
         ((int)*(char *)((long)piVar8 + uVar5) - 0xfU < 2)) {
        if (*puVar6 < 0xb) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          if ((ulong)puVar6[5] != 0) {
            uVar5 = (ulong)*(ushort *)((long)piVar1 + (ulong)puVar6[5]);
          }
        }
        if (((uint)uVar5 < (uint)*(ushort *)((long)piVar4 - (long)*piVar4)) &&
           (uVar5 = (ulong)*(ushort *)(((long)piVar4 - (long)*piVar4) + uVar5), uVar5 != 0)) {
          puVar3 = (uint *)((long)piVar4 + uVar5);
          lVar7 = (long)puVar3 + (ulong)*puVar3;
        }
        else {
          lVar7 = 0;
        }
        piVar4 = (int *)param_2[2];
        if (piVar4 != (int *)0x0) {
          if (*(ushort *)((long)piVar4 - (long)*piVar4) < 5) {
            lVar9 = 0;
          }
          else {
            uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2];
            lVar9 = 0;
            if (uVar5 != 0) {
              puVar3 = (uint *)((long)piVar4 + uVar5);
              lVar9 = (long)puVar3 + (ulong)*puVar3;
            }
          }
          piVar1 = (int *)((long)((long)piVar1 + (ulong)puVar6[3]) +
                          (ulong)*(uint *)((long)piVar1 + (ulong)puVar6[3]));
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
             (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar5 == 0)) {
            uVar5 = 0xffffffff;
          }
          else {
            uVar5 = (ulong)*(uint *)((long)piVar1 + uVar5);
          }
          puVar3 = (uint *)(lVar9 + uVar5 * 4 + 4);
          uVar2 = *puVar3;
          param_1[2] = (long)piVar4;
          *param_1 = lVar7;
          param_1[1] = (long)puVar3 + (ulong)uVar2;
          return;
        }
      }
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}



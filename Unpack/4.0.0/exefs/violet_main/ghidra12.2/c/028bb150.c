/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028bb150; name: FUN_028bb150
 */


undefined8 FUN_028bb150(long *param_1,long param_2)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  uint *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  ushort *puVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 local_28;
  
  piVar7 = (int *)param_1[1];
  if (piVar7 != (int *)0x0) {
    if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 7) ||
       (uVar11 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar11 == 0)) {
      puVar4 = (uint *)0x0;
    }
    else {
      puVar4 = (uint *)((long)piVar7 + uVar11);
      puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    }
    local_28 = *(undefined8 *)(param_2 + 8);
    puVar4 = bsearch(&local_28,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar4 == (uint *)0x0) {
      return 0;
    }
    piVar7 = (int *)((long)puVar4 + (ulong)*puVar4);
    uVar11 = FUN_0260d3d4(param_1,piVar7);
    if ((uVar11 & 1) != 0) {
      piVar8 = (int *)param_1[2];
      uVar2 = ((ushort *)((long)piVar8 - (long)*piVar8))[3];
      uVar3 = *(ushort *)((long)piVar8 - (long)*piVar8);
      piVar8 = (int *)((long)((long)piVar8 + (ulong)uVar2) +
                      (ulong)*(uint *)((long)piVar8 + (ulong)uVar2));
      puVar9 = (ushort *)((long)piVar7 - (long)*piVar7);
      piVar1 = (int *)((long)((long)piVar7 + (ulong)puVar9[3]) +
                      (ulong)*(uint *)((long)piVar7 + (ulong)puVar9[3]));
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
         (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar11 == 0)) {
        if (-1 < *piVar8) {
          piVar12 = (int *)0x0;
          if (uVar2 != 0 && 6 < uVar3) {
            piVar12 = piVar8;
          }
          uVar11 = 0xffffffff;
          goto LAB_028bb244;
        }
      }
      else if (*(int *)((long)piVar1 + uVar11) < *piVar8) {
        piVar12 = (int *)0x0;
        if (uVar2 != 0 && 6 < uVar3) {
          piVar12 = piVar8;
        }
        uVar11 = (ulong)*(uint *)((long)piVar1 + uVar11);
LAB_028bb244:
        piVar8 = (int *)((long)(piVar12 + uVar11 + 1) + (ulong)(uint)piVar12[uVar11 + 1]);
        if (*puVar9 < 0xb) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          if ((ulong)puVar9[5] != 0) {
            uVar11 = (ulong)*(ushort *)((long)piVar7 + (ulong)puVar9[5]);
          }
        }
        if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 7) ||
           (uVar10 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[3], uVar10 == 0)) {
          lVar6 = 0;
        }
        else {
          puVar4 = (uint *)((long)piVar8 + uVar10);
          lVar6 = (long)puVar4 + (ulong)*puVar4;
        }
        uVar5 = FUN_028bb2e8(lVar6,*(undefined8 *)(*param_1 + uVar11));
        return uVar5;
      }
    }
  }
  return 0;
}



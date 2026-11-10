/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028baf64; name: FUN_028baf64
 */


long FUN_028baf64(long *param_1,long param_2)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  ushort *puVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 local_30;
  undefined2 local_24 [2];
  
  piVar5 = (int *)param_1[1];
  if (piVar5 != (int *)0x0) {
    if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
       (uVar8 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar8 == 0)) {
      puVar4 = (uint *)0x0;
    }
    else {
      puVar4 = (uint *)((long)piVar5 + uVar8);
      puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    }
    local_30 = *(undefined8 *)(param_2 + 8);
    puVar4 = bsearch(&local_30,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar4 == (uint *)0x0) {
      return 0;
    }
    piVar5 = (int *)((long)puVar4 + (ulong)*puVar4);
    uVar8 = FUN_01f9cfbc(param_1,piVar5);
    if ((uVar8 & 1) != 0) {
      piVar6 = (int *)param_1[2];
      uVar2 = ((ushort *)((long)piVar6 - (long)*piVar6))[3];
      uVar3 = *(ushort *)((long)piVar6 - (long)*piVar6);
      piVar6 = (int *)((long)((long)piVar6 + (ulong)uVar2) +
                      (ulong)*(uint *)((long)piVar6 + (ulong)uVar2));
      puVar7 = (ushort *)((long)piVar5 - (long)*piVar5);
      piVar1 = (int *)((long)((long)piVar5 + (ulong)puVar7[3]) +
                      (ulong)*(uint *)((long)piVar5 + (ulong)puVar7[3]));
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
         (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar8 == 0)) {
        if (-1 < *piVar6) {
          piVar9 = (int *)0x0;
          if (uVar2 != 0 && 6 < uVar3) {
            piVar9 = piVar6;
          }
          uVar8 = 0xffffffff;
          goto LAB_028bb058;
        }
      }
      else if (*(int *)((long)piVar1 + uVar8) < *piVar6) {
        piVar9 = (int *)0x0;
        if (uVar2 != 0 && 6 < uVar3) {
          piVar9 = piVar6;
        }
        uVar8 = (ulong)*(uint *)((long)piVar1 + uVar8);
LAB_028bb058:
        piVar6 = (int *)((long)(piVar9 + uVar8 + 1) + (ulong)(uint)piVar9[uVar8 + 1]);
        if (*puVar7 < 0xb) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          if ((ulong)puVar7[5] != 0) {
            uVar8 = (ulong)*(ushort *)((long)piVar5 + (ulong)puVar7[5]);
          }
        }
        local_24[0] = *(undefined2 *)(*param_1 + uVar8);
        if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 7) ||
           (uVar8 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3], uVar8 == 0)) {
          puVar4 = (uint *)0x0;
        }
        else {
          puVar4 = (uint *)((long)piVar6 + uVar8);
          puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
        }
        puVar4 = bsearch(local_24,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047e24a8);
        if (puVar4 == (uint *)0x0) {
          return 0;
        }
        return (long)puVar4 + (ulong)*puVar4;
      }
    }
  }
  return 0;
}



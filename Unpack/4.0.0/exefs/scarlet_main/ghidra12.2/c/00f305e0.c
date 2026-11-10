/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f305e0; name: FUN_00f305e0
 */


long FUN_00f305e0(long *param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint *puVar3;
  int *piVar4;
  ulong uVar5;
  ushort *puVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined8 local_28;
  undefined4 local_4;
  
  piVar4 = (int *)param_1[1];
  if (piVar4 != (int *)0x0) {
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar5 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)piVar4 + uVar5);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_28 = *(undefined8 *)(param_2 + 8);
    puVar3 = bsearch(&local_28,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar3 == (uint *)0x0) {
      return 0;
    }
    piVar4 = (int *)((long)puVar3 + (ulong)*puVar3);
    puVar6 = (ushort *)((long)piVar4 - (long)*piVar4);
    if (*puVar6 < 7) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = (int *)0x0;
      if ((ulong)puVar6[3] != 0) {
        puVar3 = (uint *)((long)piVar4 + (ulong)puVar6[3]);
        piVar8 = (int *)((long)puVar3 + (ulong)*puVar3);
      }
    }
    if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
       (uVar5 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar5 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = (long)*(char *)((long)piVar8 + uVar5) & 0xffffffff;
    }
    if (*(long *)(PTR_DAT_047d5608 + uVar5 * 8) == 4) {
      piVar9 = (int *)param_1[2];
      uVar1 = *(ushort *)((long)piVar9 - (long)*piVar9);
      uVar2 = ((ushort *)((long)piVar9 - (long)*piVar9))[3];
      piVar8 = (int *)((long)((long)piVar4 + (ulong)puVar6[3]) +
                      (ulong)*(uint *)((long)piVar4 + (ulong)puVar6[3]));
      piVar9 = (int *)((long)((long)piVar9 + (ulong)uVar2) +
                      (ulong)*(uint *)((long)piVar9 + (ulong)uVar2));
      if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 9) ||
         (uVar5 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[4], uVar5 == 0)) {
        if (-1 < *piVar9) {
          piVar7 = (int *)0x0;
          if (uVar2 != 0 && 6 < uVar1) {
            piVar7 = piVar9;
          }
          uVar5 = 0xffffffff;
          goto LAB_00f30718;
        }
      }
      else if (*(int *)((long)piVar8 + uVar5) < *piVar9) {
        piVar7 = (int *)0x0;
        if (uVar2 != 0 && 6 < uVar1) {
          piVar7 = piVar9;
        }
        uVar5 = (ulong)*(uint *)((long)piVar8 + uVar5);
LAB_00f30718:
        piVar8 = (int *)((long)(piVar7 + uVar5 + 1) + (ulong)(uint)piVar7[uVar5 + 1]);
        if ((*puVar6 < 0xb) || ((ulong)puVar6[5] == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = (ulong)*(ushort *)((long)piVar4 + (ulong)puVar6[5]);
        }
        local_4 = *(undefined4 *)(*param_1 + uVar5);
        if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 7) ||
           (uVar5 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[3], uVar5 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)piVar8 + uVar5);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        puVar3 = bsearch(&local_4,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047e24b0);
        if (puVar3 == (uint *)0x0) {
          return 0;
        }
        return (long)puVar3 + (ulong)*puVar3;
      }
    }
  }
  return 0;
}



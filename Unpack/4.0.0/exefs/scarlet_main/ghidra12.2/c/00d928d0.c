/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d928d0; name: FUN_00d928d0
 */


undefined2 FUN_00d928d0(undefined8 *param_1,long param_2)

{
  int *piVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint *puVar4;
  int *piVar5;
  ulong uVar6;
  ushort *puVar7;
  uint uVar8;
  int *piVar9;
  undefined8 local_8;
  
  piVar5 = (int *)param_1[1];
  if (((piVar5 == (int *)0x0) || (*(ushort *)((long)piVar5 - (long)*piVar5) < 7)) ||
     (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 == 0)) {
    return 0;
  }
  puVar4 = (uint *)((long)piVar5 + uVar6);
  puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
  local_8 = *(undefined8 *)(param_2 + 8);
  puVar4 = bsearch(&local_8,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (puVar4 == (uint *)0x0) {
    return 0;
  }
  piVar5 = (int *)*param_1;
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
  puVar7 = (ushort *)((long)piVar1 - (long)*piVar1);
  uVar2 = *puVar7;
  if (uVar2 < 7) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)0x0;
    if ((ulong)puVar7[3] != 0) {
      puVar4 = (uint *)((long)piVar1 + (ulong)puVar7[3]);
      piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
    }
  }
  if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
     (uVar6 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar6 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = (long)*(char *)((long)piVar9 + uVar6) & 0xffffffff;
  }
  if (*(long *)(PTR_DAT_047d5608 + uVar6 * 8) != 2) {
    if (uVar2 < 0xd) {
      return 0;
    }
    if ((ulong)puVar7[6] == 0) {
      return 0;
    }
    return *(undefined2 *)((long)piVar1 + (ulong)puVar7[6]);
  }
  if (uVar2 < 0xb) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if ((ulong)puVar7[5] != 0) {
      uVar8 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar7[5]);
    }
    if ((0xc < uVar2) && ((ulong)puVar7[6] != 0)) {
      uVar3 = *(undefined2 *)((long)piVar1 + (ulong)puVar7[6]);
      goto LAB_00d929d0;
    }
  }
  uVar3 = 0;
LAB_00d929d0:
  if (*(ushort *)((long)piVar5 - (long)*piVar5) <= uVar8) {
    return uVar3;
  }
  uVar6 = (ulong)*(ushort *)(((long)piVar5 - (long)*piVar5) + (ulong)uVar8);
  if (uVar6 == 0) {
    return uVar3;
  }
  return *(undefined2 *)((long)piVar5 + uVar6);
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1f6e8; name: FUN_01e1f6e8
 */


undefined4 FUN_01e1f6e8(long param_1,long param_2)

{
  int *piVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint *puVar4;
  int *piVar5;
  ulong uVar6;
  ushort *puVar7;
  uint uVar8;
  int *piVar9;
  undefined8 *puVar10;
  undefined8 local_8;
  
  puVar10 = *(undefined8 **)(param_1 + 8);
  if ((((puVar10 == (undefined8 *)0x0) || (piVar5 = (int *)puVar10[1], piVar5 == (int *)0x0)) ||
      (*(ushort *)((long)piVar5 - (long)*piVar5) < 7)) ||
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
  piVar5 = (int *)*puVar10;
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
  puVar7 = (ushort *)((long)piVar1 - (long)*piVar1);
  uVar3 = *puVar7;
  if (uVar3 < 7) {
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
  if (*(long *)(PTR_DAT_047d5608 + uVar6 * 8) != 4) {
    if (uVar3 < 0xd) {
      return 0;
    }
    if ((ulong)puVar7[6] == 0) {
      return 0;
    }
    return *(undefined4 *)((long)piVar1 + (ulong)puVar7[6]);
  }
  if (uVar3 < 0xb) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if ((ulong)puVar7[5] != 0) {
      uVar8 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar7[5]);
    }
    if ((0xc < uVar3) && ((ulong)puVar7[6] != 0)) {
      uVar2 = *(undefined4 *)((long)piVar1 + (ulong)puVar7[6]);
      goto LAB_01e1f7ec;
    }
  }
  uVar2 = 0;
LAB_01e1f7ec:
  if (*(ushort *)((long)piVar5 - (long)*piVar5) <= uVar8) {
    return uVar2;
  }
  uVar6 = (ulong)*(ushort *)(((long)piVar5 - (long)*piVar5) + (ulong)uVar8);
  if (uVar6 == 0) {
    return uVar2;
  }
  return *(undefined4 *)((long)piVar5 + uVar6);
}



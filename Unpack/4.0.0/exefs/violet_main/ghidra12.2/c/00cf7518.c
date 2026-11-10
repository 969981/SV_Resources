/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cf7518; name: FUN_00cf7518
 */


bool FUN_00cf7518(undefined8 *param_1,long param_2)

{
  int *piVar1;
  ushort uVar2;
  bool bVar3;
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
    return false;
  }
  puVar4 = (uint *)((long)piVar5 + uVar6);
  puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
  local_8 = *(undefined8 *)(param_2 + 8);
  puVar4 = bsearch(&local_8,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (puVar4 == (uint *)0x0) {
    return false;
  }
  piVar5 = (int *)*param_1;
  if (piVar5 == (int *)0x0) {
    return false;
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
  if (*(long *)(PTR_DAT_047d5608 + uVar6 * 8) != 1) {
    if (uVar2 < 0xd) {
      return false;
    }
    if ((ulong)puVar7[6] == 0) {
      return false;
    }
    bVar3 = *(long *)((long)piVar1 + (ulong)puVar7[6]) == 0;
    goto LAB_00cf7650;
  }
  if (uVar2 < 0xb) {
    uVar8 = 0;
LAB_00cf766c:
    bVar3 = false;
  }
  else {
    uVar8 = 0;
    if ((ulong)puVar7[5] != 0) {
      uVar8 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar7[5]);
    }
    if ((uVar2 < 0xd) || ((ulong)puVar7[6] == 0)) goto LAB_00cf766c;
    bVar3 = *(long *)((long)piVar1 + (ulong)puVar7[6]) != 0;
  }
  if (*(ushort *)((long)piVar5 - (long)*piVar5) <= uVar8) {
    return bVar3;
  }
  uVar6 = (ulong)*(ushort *)(((long)piVar5 - (long)*piVar5) + (ulong)uVar8);
  if (uVar6 == 0) {
    return bVar3;
  }
  bVar3 = *(char *)((long)piVar5 + uVar6) == '\0';
LAB_00cf7650:
  return !bVar3;
}



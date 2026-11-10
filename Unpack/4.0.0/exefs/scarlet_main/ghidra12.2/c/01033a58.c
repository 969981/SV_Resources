/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01033a58; name: FUN_01033a58
 */


long FUN_01033a58(undefined8 *param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  ushort uVar4;
  ushort uVar5;
  uint *puVar6;
  int *piVar7;
  ulong uVar8;
  ushort *puVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  ushort *puVar13;
  int iVar14;
  undefined8 local_28;
  undefined1 local_4 [4];
  
  piVar7 = (int *)param_1[1];
  if (((piVar7 == (int *)0x0) || (*(ushort *)((long)piVar7 - (long)*piVar7) < 7)) ||
     (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar8 == 0)) {
    return 0;
  }
  puVar6 = (uint *)((long)piVar7 + uVar8);
  puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  local_28 = *(undefined8 *)(param_2 + 8);
  puVar6 = bsearch(&local_28,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (puVar6 == (uint *)0x0) {
    return 0;
  }
  piVar7 = (int *)param_1[2];
  if (piVar7 == (int *)0x0) {
    return 0;
  }
  piVar1 = (int *)((long)puVar6 + (ulong)*puVar6);
  puVar9 = (ushort *)((long)piVar1 - (long)*piVar1);
  uVar4 = *puVar9;
  if (uVar4 < 7) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = (int *)0x0;
    if ((ulong)puVar9[3] != 0) {
      puVar6 = (uint *)((long)piVar1 + (ulong)puVar9[3]);
      piVar11 = (int *)((long)puVar6 + (ulong)*puVar6);
    }
  }
  if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
     (uVar8 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar8 == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = (long)*(char *)((long)piVar11 + uVar8) & 0xffffffff;
  }
  if (*(long *)(PTR_DAT_047d5608 + uVar8 * 8) != 1) {
    return 0;
  }
  uVar5 = ((ushort *)((long)piVar7 - (long)*piVar7))[3];
  puVar6 = (uint *)((long)piVar7 + (ulong)uVar5);
  piVar11 = (int *)((long)puVar6 + (ulong)*puVar6);
  piVar2 = (int *)((long)((long)piVar1 + (ulong)puVar9[3]) +
                  (ulong)*(uint *)((long)piVar1 + (ulong)puVar9[3]));
  puVar13 = (ushort *)((long)piVar2 - (long)*piVar2);
  if ((*puVar13 < 9) || ((ulong)puVar13[4] == 0)) {
    iVar14 = -1;
  }
  else {
    iVar14 = *(int *)((long)piVar2 + (ulong)puVar13[4]);
  }
  if (*piVar11 <= iVar14) {
    return 0;
  }
  piVar10 = (int *)*param_1;
  if (piVar10 == (int *)0x0) {
    return 0;
  }
  piVar3 = (int *)0x0;
  if (uVar5 != 0 && 6 < *(ushort *)((long)piVar7 - (long)*piVar7)) {
    piVar3 = piVar11;
  }
  if ((*puVar13 < 9) || ((ulong)puVar13[4] == 0)) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (ulong)*(uint *)((long)piVar2 + (ulong)puVar13[4]);
  }
  piVar7 = (int *)((long)(piVar3 + uVar8 + 1) + (ulong)(uint)piVar3[uVar8 + 1]);
  if (uVar4 < 0xb) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    if ((ulong)puVar9[5] != 0) {
      uVar12 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar9[5]);
    }
    if ((0xc < uVar4) && ((ulong)puVar9[6] != 0)) {
      local_4[0] = *(undefined1 *)((long)piVar1 + (ulong)puVar9[6]);
      goto LAB_01033be8;
    }
  }
  local_4[0] = 0;
LAB_01033be8:
  if ((uVar12 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
     (uVar8 = (ulong)*(ushort *)(((long)piVar10 - (long)*piVar10) + (ulong)uVar12), uVar8 != 0)) {
    local_4[0] = *(undefined1 *)((long)piVar10 + uVar8);
  }
  if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 7) ||
     (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar8 == 0)) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)((long)piVar7 + uVar8);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  }
  puVar6 = bsearch(local_4,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047e2498);
  if (puVar6 == (uint *)0x0) {
    return 0;
  }
  return (long)puVar6 + (ulong)*puVar6;
}



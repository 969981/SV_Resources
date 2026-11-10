/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d42490; name: FUN_00d42490
 */


/* WARNING: Removing unreachable block (ram,0x00d42640) */
/* WARNING: Removing unreachable block (ram,0x00d42680) */
/* WARNING: Removing unreachable block (ram,0x00d42690) */
/* WARNING: Removing unreachable block (ram,0x00d42660) */

void FUN_00d42490(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long *plVar21;
  undefined8 uVar22;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar10 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar10;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_1 + 10);
  uVar2 = *(undefined8 *)(param_1 + 0xc);
  uVar7 = *(undefined8 *)(param_1 + 0xe);
  uVar3 = *(undefined8 *)(param_1 + 2);
  uVar8 = *(undefined8 *)(param_1 + 4);
  uVar22 = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  local_88 = *(undefined8 *)(param_1 + 0x16);
  uStack_80 = *(undefined8 *)(param_1 + 0x18);
  local_78 = *(undefined8 *)(param_1 + 0x1a);
  uStack_70 = *(undefined8 *)(param_1 + 0x1c);
  puVar20 = (undefined8 *)(param_1 + 0x10);
  uVar18 = *puVar20;
  uVar14 = *(undefined8 *)(param_1 + 0x12);
  uVar15 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *puVar20 = 0;
  uVar16 = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 10);
  uVar17 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = uVar17;
  *(undefined8 *)(param_1 + 8) = uVar16;
  *(undefined8 *)(param_1 + 10) = uVar4;
  plVar21 = (long *)(param_2 + 2);
  *(long *)(param_1 + 2) = *plVar21;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *plVar21 = 0;
  local_a0 = uVar18;
  local_98 = uVar14;
  local_90 = uVar15;
  FUN_00d42734(puVar20);
  uVar16 = *(undefined8 *)(param_2 + 0x16);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uVar17 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1c) = uVar17;
  *(undefined8 *)(param_1 + 0x16) = uVar16;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  puVar19 = (undefined8 *)(param_2 + 0x10);
  *puVar20 = *puVar19;
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *puVar19 = 0;
  lVar13 = *plVar21;
  if (lVar13 != 0) {
    lVar5 = *(long *)(param_2 + 6);
    plVar9 = *(long **)(param_2 + 8);
    *(long *)(param_2 + 4) = lVar13;
    uVar11 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar13,lVar5 - lVar13,0x10);
    }
    else {
      FUN_00c48fe8(plVar9,lVar13,lVar5 - lVar13,0x10);
    }
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *plVar21 = 0;
  }
  *(undefined8 *)(param_2 + 0xc) = uVar2;
  *(undefined8 *)(param_2 + 0xe) = uVar7;
  *(undefined8 *)(param_2 + 8) = uVar1;
  *(undefined8 *)(param_2 + 10) = uVar6;
  *(undefined8 *)(param_2 + 6) = uVar22;
  *(undefined8 *)(param_2 + 2) = uVar3;
  *(undefined8 *)(param_2 + 4) = uVar8;
  FUN_00d42734(puVar19);
  *(undefined8 *)(param_2 + 0x1a) = local_78;
  *(undefined8 *)(param_2 + 0x1c) = uStack_70;
  *(undefined8 *)(param_2 + 0x16) = local_88;
  *(undefined8 *)(param_2 + 0x18) = uStack_80;
  *(undefined8 *)(param_2 + 0x10) = uVar18;
  *(undefined8 *)(param_2 + 0x12) = uVar14;
  *(undefined8 *)(param_2 + 0x14) = uVar15;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  FUN_00d42924(&local_a0);
  return;
}



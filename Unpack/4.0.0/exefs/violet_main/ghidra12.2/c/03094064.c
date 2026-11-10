/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03094064; name: FUN_03094064
 */


void FUN_03094064(long param_1,undefined4 param_2,undefined4 *param_3,undefined2 param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  void *__dest;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  short sVar9;
  short sVar10;
  undefined1 (*pauVar11) [16];
  int iVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  int *piVar17;
  long lVar18;
  int *piVar19;
  byte *pbVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined1 auVar26 [16];
  long local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  int local_a8 [2];
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  
  pauVar11 = (undefined1 (*) [16])(param_3 + 8);
  uStack_88 = *(ulong *)*pauVar11 >> 0x20;
  auVar26 = NEON_ext(*pauVar11,*pauVar11,8,1);
  uStack_98 = *(ulong *)*pauVar11 & 0xffffffff;
  uStack_78 = (ulong)auVar26._0_4_;
  uStack_68 = (ulong)auVar26._4_4_;
  local_a0 = CONCAT44(param_3[4],*param_3);
  local_90 = CONCAT44(param_3[5],param_3[1]);
  local_80 = CONCAT44(param_3[6],param_3[2]);
  local_70 = CONCAT44(param_3[7],param_3[3]);
  iVar13 = param_3[0xc];
  iVar21 = *(int *)(param_1 + 0x178);
  piVar19 = param_3 + 0xe;
  if (iVar13 != iVar21) {
    piVar19 = param_3 + 0xf;
  }
  iVar7 = *piVar19;
  local_d8 = 0;
  local_d0 = -0x8000000000000000;
  local_c8 = 0;
  local_c0 = -0x8000000000000000;
  puVar4 = &local_a0;
  if (iVar13 != iVar21) {
    puVar4 = &local_80;
  }
  local_b8 = 0;
  local_b0 = -0x8000000000000000;
  local_a8[0] = iVar7;
  iVar12 = FUN_03093858(param_1 + 0x188,local_a8,&local_d8);
  lVar15 = local_b0;
  uVar14 = (ulong)local_b0._4_4_;
  local_b0 = (ulong)local_b0._4_4_ << 0x20;
  if ((-1 < lVar15) && (local_b8 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_b8,uVar14 << 2);
  }
  lVar15 = local_c0;
  uVar14 = (ulong)local_c0._4_4_;
  local_b8 = 0;
  local_b0 = CONCAT44(0x80000000,(undefined4)local_b0);
  local_c0 = (ulong)local_c0._4_4_ << 0x20;
  if ((-1 < lVar15) && (local_c8 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_c8,uVar14 << 2);
  }
  lVar15 = local_d0;
  local_c0 = CONCAT44(0x80000000,(undefined4)local_c0);
  uVar14 = (ulong)local_d0._4_4_;
  local_c8 = 0;
  local_d0 = (ulong)local_d0._4_4_ << 0x20;
  if ((-1 < lVar15) && (local_d8 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_d8,uVar14 * 0x14);
  }
  lVar23 = *(long *)(param_1 + 0x188);
  lVar24 = (long)iVar12;
  iVar6 = *(int *)(param_1 + 0xf8);
  lVar15 = (long)iVar6 + 2;
  iVar2 = iVar6 + *(int *)(param_1 + 0x40);
  iVar22 = (int)lVar15;
  if ((int)(*(uint *)(param_1 + 0xfc) & 0x7fffffff) < iVar22) {
    FUN_02e8df28(param_1 + 0xf0,PTR_PTR_047d1a50,lVar15);
  }
  uVar16 = puVar4[1];
  puVar5 = &local_90;
  if (iVar13 != iVar21) {
    puVar5 = &local_70;
  }
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0xf0) + (long)iVar6 * 0x10);
  *puVar3 = *puVar4;
  puVar3[1] = uVar16;
  plVar1 = (long *)(lVar23 + (long)iVar12 * 0x38 + 8);
  uVar16 = puVar5[1];
  puVar3[2] = *puVar5;
  puVar3[3] = uVar16;
  lVar15 = *(long *)(param_1 + 0x18) + (long)iVar7 * 0x10;
  *(int *)(param_1 + 0xf8) = iVar22;
  sVar9 = *(short *)(lVar15 + 8);
  sVar10 = *(short *)(lVar15 + 10);
  lVar18 = lVar23 + lVar24 * 0x38;
  piVar19 = (int *)(lVar18 + 0x10);
  iVar13 = *piVar19;
  lVar15 = (long)iVar13 + 1;
  if ((int)(*(uint *)(lVar18 + 0x14) & 0x7fffffff) <= iVar13) {
    FUN_0309515c(plVar1,PTR_PTR_047d1a50,lVar15);
  }
  piVar17 = (int *)(*plVar1 + (long)iVar13 * 0x14);
  *piVar19 = (int)lVar15;
  *piVar17 = iVar2;
  piVar17[1] = iVar2 + 1;
  piVar17[2] = -1;
  piVar17[3] = -1;
  pbVar20 = (byte *)(piVar17 + 4);
  pbVar20[0] = 0x50;
  pbVar20[1] = 0;
  *(undefined2 *)((long)piVar17 + 0x12) = param_4;
  lVar18 = lVar23 + lVar24 * 0x38;
  lVar25 = (long)*(int *)(lVar18 + 0x20);
  lVar15 = lVar25 + *(int *)(param_1 + 0x60);
  iVar21 = (int)lVar15;
  if ((int)(*(uint *)(lVar18 + 0x24) & 0x7fffffff) < iVar21) {
    FUN_02e9b320((long *)(lVar18 + 0x18),PTR_PTR_047d1a50,lVar15);
  }
  *(int *)(lVar18 + 0x20) = iVar21;
  __dest = (void *)(*(long *)(lVar18 + 0x18) + lVar25 * 4);
  lVar15 = (long)*(int *)(param_1 + 0x60);
  if (param_3[0xc] == *(int *)(param_1 + 0x178)) {
    memcpy(__dest,*(void **)(param_3 + 0x10),lVar15 << 2);
    bVar8 = *(byte *)(param_3 + 0x21);
  }
  else {
    memcpy(__dest,*(void **)(param_3 + 0x18),lVar15 << 2);
    bVar8 = *(byte *)(param_3 + 0x21) >> 1;
  }
  if ((bVar8 & 1) == 0) {
    *pbVar20 = *pbVar20 | 0x20;
  }
  *param_5 = piVar17;
  param_5[1] = __dest;
  lVar23 = lVar23 + lVar24 * 0x38;
  *(short *)(param_5 + 3) = sVar10 + sVar9 + (short)iVar13;
  param_5[2] = (void *)((long)__dest + lVar15 * 4);
  piVar19 = (int *)(lVar23 + 0x30);
  iVar13 = *piVar19;
  lVar15 = (long)iVar13;
  if ((int)(*(uint *)(lVar23 + 0x34) & 0x7fffffff) <= iVar13) {
    FUN_03095b0c((long *)(lVar23 + 0x28),lVar15 + 1);
    iVar13 = *piVar19;
  }
  *(undefined4 *)(*(long *)(lVar23 + 0x28) + (long)iVar13 * 4) = param_2;
  *piVar19 = (int)(lVar15 + 1);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0308ae54; name: FUN_0308ae54
 */


void FUN_0308ae54(long param_1,uint param_2)

{
  float *pfVar1;
  float fVar2;
  short sVar3;
  undefined1 auVar4 [16];
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auVar22 [16];
  long local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined8 uStack_48;
  float local_28 [2];
  
  fVar2 = (float)(param_2 & 0x3fffff);
  lVar9 = *(long *)(*(long *)(param_1 + 0x40) + 0x20);
  fVar13 = (float)((int)fVar2 - *(int *)(lVar9 + 0x20));
  if ((int)fVar2 < *(int *)(lVar9 + 0x20)) {
    fVar13 = fVar2;
    if ((*(int *)(lVar9 + 0x98) == 0) ||
       (fVar13 = *(float *)(*(long *)(lVar9 + 0x90) + (ulong)(uint)fVar2 * 4), fVar13 != -NAN)) {
      lVar9 = *(long *)(lVar9 + 0xb0);
      goto LAB_0308aeb0;
    }
    lVar9 = *(long *)(lVar9 + 0x18) + (ulong)(uint)fVar2 * 0x10;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0xd0);
LAB_0308aeb0:
    lVar9 = lVar9 + (long)(int)fVar13 * 0x10;
  }
  sVar3 = *(short *)(lVar9 + 8);
  local_88 = 0;
  local_80 = 0x8000000000000000;
  lVar11 = tpidr_el0;
  lVar10 = *(long *)(lVar11 + 0x1000b8);
  if (lVar10 == 0) {
    lVar10 = FUN_00e5d3b4();
    *(long *)(lVar11 + 0x1000b8) = lVar10;
  }
  lVar11 = (long)sVar3 + 1;
  local_78 = *(long *)(*(long *)(lVar10 + 0x3d0) + 0x10);
  if (*(long *)(local_78 + 8) != 0) {
    local_78 = 0;
  }
  local_68 = lVar11 * 0x10;
  local_60 = local_68;
  if (local_78 == 0) {
    local_70 = (**(code **)PTR_DAT_047d1a08)(1,&local_60,0x40);
  }
  else {
    local_50 = local_68 + 0x3fU & 0xffffffffffffffc0;
    if (local_50 <= *(ulong *)(local_78 + 0x28)) {
      local_70 = *(long *)(local_78 + 0x38);
      if (local_50 + local_70 <= *(ulong *)(local_78 + 0x40)) {
        *(ulong *)(local_78 + 0x38) = local_50 + local_70;
        goto LAB_0308af58;
      }
    }
    local_70 = FUN_031cf3b4(local_78,&local_50);
  }
LAB_0308af58:
  iVar5 = (int)local_80;
  local_80 = CONCAT44((int)lVar11,(int)local_80) | 0x8000000000000000;
  sVar3 = *(short *)(lVar9 + 8);
  iVar8 = sVar3 + 1;
  if ((iVar5 == sVar3 || iVar5 < sVar3) || iVar8 < iVar5) {
    local_80 = CONCAT44(local_80._4_4_,iVar8);
  }
  local_88 = local_70;
  FUN_030960b8(*(undefined8 *)(param_1 + 0x40),lVar9,&local_88);
  local_28[0] = fVar2;
  uVar6 = FUN_0308e4ec(&local_88,local_28,param_1 + 0x20,param_1 + 0x30,param_1 + 0x10,&local_50,
                       &local_60);
  uVar7 = local_50;
  lVar9 = local_60;
  if ((uVar6 & 1) != 0) {
    fVar17 = (float)*(undefined8 *)(param_1 + 0x20);
    fVar13 = (float)*(undefined8 *)(param_1 + 0x30) - fVar17;
    fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
    fVar14 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) - fVar21;
    fVar18 = (float)*(undefined8 *)(param_1 + 0x28);
    fVar15 = (float)*(undefined8 *)(param_1 + 0x38) - fVar18;
    fVar16 = (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20) -
             (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
    plVar12 = *(long **)(param_1 + 0x48);
    fVar17 = fVar17 * fVar13 + fVar21 * fVar14 + fVar18 * fVar15;
    auVar19._0_4_ = fVar13 * (float)local_50;
    auVar19._4_4_ = fVar14 * (float)(local_50 >> 0x20);
    auVar19._8_4_ = fVar15 * (float)uStack_48;
    auVar19._12_4_ = fVar16 * (float)((ulong)uStack_48 >> 0x20);
    auVar22 = NEON_ext(auVar19,auVar19,8,1);
    fVar21 = fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14;
    fVar13 = fVar13 * (float)local_60;
    fVar14 = fVar14 * (float)((ulong)local_60 >> 0x20);
    fVar15 = fVar15 * (float)uStack_58;
    fVar16 = fVar16 * (float)((ulong)uStack_58 >> 0x20);
    auVar20._4_4_ = fVar14;
    auVar20._0_4_ = fVar13;
    auVar20._8_4_ = fVar15;
    auVar20._12_4_ = fVar16;
    auVar4._4_4_ = fVar14;
    auVar4._0_4_ = fVar13;
    auVar4._8_4_ = fVar15;
    auVar4._12_4_ = fVar16;
    auVar20 = NEON_ext(auVar20,auVar4,8,1);
    iVar8 = (int)plVar12[1];
    lVar11 = (long)iVar8;
    if ((int)(*(uint *)((long)plVar12 + 0xc) & 0x7fffffff) <= iVar8) {
      FUN_0308b1cc(plVar12,lVar11 + 1);
      iVar8 = (int)plVar12[1];
    }
    pfVar1 = (float *)(*plVar12 + (long)iVar8 * 0x40);
    *pfVar1 = ((auVar19._0_4_ + auVar19._4_4_ + auVar22._0_4_) - fVar17) / fVar21;
    pfVar1[1] = ((auVar20._0_4_ + fVar13 + fVar14) - fVar17) / fVar21;
    pfVar1[0xc] = fVar2;
    *(undefined8 *)(pfVar1 + 6) = uStack_48;
    *(ulong *)(pfVar1 + 4) = uVar7;
    *(undefined8 *)(pfVar1 + 10) = uStack_58;
    *(long *)(pfVar1 + 8) = lVar9;
    *(int *)(plVar12 + 1) = (int)(lVar11 + 1);
  }
  if (local_70 == local_88) {
    local_80 = local_80 & 0xffffffff00000000;
  }
  if (local_78 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    goto LAB_0308b154;
  }
  uVar7 = local_68 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_78 + 0x28) < uVar7) || (*(long *)(local_78 + 0x38) != uVar7 + local_70)) {
    if (local_70 == 0) goto LAB_0308b154;
    if (*(ulong *)(local_78 + 0x28) < uVar7 + 0x40) {
      *(int *)(*(long *)(local_78 + 0x30) + 0x20) = *(int *)(*(long *)(local_78 + 0x30) + 0x20) + -1
      ;
      (**(code **)(**(long **)(local_78 + 0x10) + 0x18))
                (*(long **)(local_78 + 0x10),local_70 - *(int *)(local_70 + -4),uVar7 + 0x44);
      goto LAB_0308b154;
    }
    if (*(long *)(local_78 + 0x38) != uVar7 + local_70) {
      FUN_031cf778();
      goto LAB_0308b154;
    }
    *(long *)(local_78 + 0x38) = local_70;
  }
  else {
    *(long *)(local_78 + 0x38) = local_70;
    if (*(long *)(local_78 + 0x48) != local_70) goto LAB_0308b154;
  }
  FUN_031cf578();
LAB_0308b154:
  uVar7 = local_80;
  uVar6 = (ulong)local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < (long)uVar7) && (local_88 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_88,uVar6 << 4);
  }
  return;
}



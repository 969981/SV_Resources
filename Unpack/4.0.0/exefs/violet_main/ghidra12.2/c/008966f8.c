/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008966f8; name: FUN_008966f8
 */


void FUN_008966f8(long param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  uint local_d0;
  uint local_cc;
  uint local_c8;
  int iStack_c4;
  int local_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulong local_60;
  undefined4 local_58;
  undefined8 local_38;
  
  iVar15 = *(int *)(param_2 + 0xe0);
  iVar16 = *(int *)(param_2 + 0xe4);
  local_38 = 0;
  FUN_008f0578(&local_38);
  local_58 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  FUN_008f0584(&local_78);
  FUN_008f0584(&local_a0);
  lVar9 = *(long *)(param_1 + 0x38);
  lVar11 = *(long *)(lVar9 + 0x18);
  auVar5 = *(undefined1 (*) [12])(lVar11 + 0x70);
  auVar4 = *(undefined1 (*) [12])(lVar11 + 0x80);
  iVar14 = iVar15;
  if (iVar15 < 0) {
    iVar14 = iVar15 + 1;
  }
  iVar13 = (int)*(float *)(lVar9 + 0x54);
  iVar12 = (int)*(float *)(lVar9 + 0x50);
  iVar1 = iVar12;
  if (iVar12 < 0) {
    iVar1 = iVar12 + 1;
  }
  uVar8 = ((iVar14 >> 1) - (iVar1 >> 1)) +
          (int)((float)((ulong)*(undefined8 *)(lVar11 + 0x78) >> 0x20) +
               auVar5._0_4_ * *(float *)(lVar9 + 0x30) + auVar5._4_4_ * *(float *)(lVar9 + 0x34) +
               SUB124(*(undefined1 (*) [12])(lVar11 + 0x70),8) * *(float *)(lVar9 + 0x38));
  iVar14 = iVar16;
  if (iVar16 < 0) {
    iVar14 = iVar16 + 1;
  }
  iVar1 = iVar13;
  if (iVar13 < 0) {
    iVar1 = iVar13 + 1;
  }
  uVar3 = ((iVar14 >> 1) -
          (int)((float)((ulong)*(undefined8 *)(lVar11 + 0x88) >> 0x20) +
               auVar4._0_4_ * *(float *)(lVar9 + 0x30) + auVar4._4_4_ * *(float *)(lVar9 + 0x34) +
               SUB124(*(undefined1 (*) [12])(lVar11 + 0x80),8) * *(float *)(lVar9 + 0x38))) -
          (iVar1 >> 1);
  uVar10 = 0;
  if (-1 < (int)uVar8) {
    uVar10 = uVar8;
  }
  iVar12 = ((int)uVar8 >> 0x1f & uVar8) + iVar12;
  uVar2 = 0;
  if (-1 < (int)uVar3) {
    uVar2 = uVar3;
  }
  iVar13 = ((int)uVar3 >> 0x1f & uVar3) + iVar13;
  iVar14 = iVar12 + uVar10;
  iStack_c4 = iVar15 - iVar14;
  if (iVar14 <= iVar15) {
    iStack_c4 = 0;
  }
  iStack_c4 = iStack_c4 + iVar12;
  iVar14 = iVar13 + uVar2;
  local_c0 = iVar16 - iVar14;
  if (iVar14 <= iVar16) {
    local_c0 = 0;
  }
  local_c0 = local_c0 + iVar13;
  if ((((int)uVar2 < iVar16 && (int)uVar10 < iVar15) && 0 < (int)(iStack_c4 + uVar10)) &&
      0 < (int)(local_c0 + uVar2)) {
    if ((*(byte *)(param_2 + 0x18e) & 8) != 0) {
      uVar2 = iVar16 - (local_c0 + uVar2);
    }
    if ((*(float *)(param_2 + 0x108) == 0.0) && (*(float *)(param_2 + 0x10c) == 0.0)) {
      iVar14 = (iVar16 - local_c0) - uVar2;
      iVar15 = iStack_c4;
      iVar16 = local_c0;
    }
    else {
      fVar18 = *(float *)(param_2 + 0x108) / (float)iVar15;
      fVar17 = *(float *)(param_2 + 0x10c) / (float)iVar16;
      uVar10 = (uint)(fVar18 * (float)(int)uVar10 + *(float *)(param_2 + 0x100));
      iVar14 = (int)(fVar17 * (float)(int)((iVar16 - local_c0) - uVar2) +
                    *(float *)(param_2 + 0x104));
      iVar15 = (int)(fVar18 * (float)iStack_c4);
      iVar16 = (int)(fVar17 * (float)local_c0);
    }
    local_78 = CONCAT44(iVar14,uVar10);
    local_d0 = (int)uVar8 >> 0x1f & -uVar8;
    local_cc = (int)uVar3 >> 0x1f & -uVar3;
    uStack_70 = CONCAT44(iVar15,(undefined4)uStack_70);
    local_68 = CONCAT44(local_68._4_4_,iVar16);
    lVar11 = *(long *)(param_2 + 0xd8);
    lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
    if ((*(byte *)(param_2 + 0x18e) >> 3 & 1) == 0) {
      uVar8 = (**(code **)PTR_DAT_047d2220)(*(undefined8 *)(lVar11 + 8));
      puVar6 = PTR_DAT_047d2228;
      local_b8 = local_78;
      uStack_b0 = uStack_70;
      local_a8 = (undefined4)local_68;
      uStack_a4 = 1;
      if (uVar8 == 3) {
        local_cc = local_38._4_4_;
        local_c8 = 0;
      }
      else if ((uVar8 & 0xfffffffd) == 4) {
        local_c8 = local_38._4_4_;
      }
      else {
        local_c8 = 0;
      }
      uStack_bc = 1;
      (**(code **)PTR_DAT_047d2228)(auStack_e0);
      puVar7 = PTR_DAT_047d2230;
      (**(code **)PTR_DAT_047d2230)(auStack_e0,local_60 & 0xffff,1);
      (**(code **)puVar6)(auStack_f0);
      (**(code **)puVar7)(auStack_f0,local_38 & 0xffff,1);
      (**(code **)PTR_DAT_047d2238)
                (*(undefined8 *)(param_3 + 0xb0),*(undefined8 *)(lVar11 + 8),auStack_e0,&local_b8,
                 *(undefined8 *)(lVar9 + 8),auStack_f0,&local_d0,8);
    }
    else {
      local_a0 = CONCAT44(local_cc,local_d0);
      uStack_98 = CONCAT44(iStack_c4,(undefined4)uStack_98);
      local_90 = CONCAT44(local_90._4_4_,local_c0);
      FUN_008f0bec(param_3,lVar9,&local_a0,lVar11,&local_78,0);
    }
  }
  return;
}



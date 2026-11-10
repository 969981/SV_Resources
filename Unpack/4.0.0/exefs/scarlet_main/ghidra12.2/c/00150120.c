/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00150120; name: FUN_00150120
 */


void FUN_00150120(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float fStack_88;
  float local_84;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined1 auStack_74 [12];
  float local_68;
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  uint local_48;
  uint uStack_44;
  
  FUN_00150450(&local_68,auStack_74,param_1);
  local_68 = local_68 + 0.001;
  local_5c = local_5c + 0.001;
  local_54 = local_54 + 0.001;
  fVar7 = fStack_64 + local_5c + local_58;
  fVar6 = local_68 + fStack_64 + local_60;
  fVar10 = local_60 + local_58 + local_54;
  fVar8 = fVar6 * local_68 + fVar7 * fStack_64 + fVar10 * local_60;
  fVar9 = fVar6 * fStack_64 + fVar7 * local_5c + fVar10 * local_58;
  fVar7 = fVar6 * local_60 + fVar7 * local_58 + fVar10 * local_54;
  fVar6 = sqrtf(fVar8 * fVar8 + 0.0 + fVar9 * fVar9 + fVar7 * fVar7);
  fVar6 = 1.0 / fVar6;
  fVar8 = fVar8 * fVar6;
  fVar9 = fVar9 * fVar6;
  fVar7 = fVar7 * fVar6;
  fVar10 = fVar8 * local_68 + fVar9 * fStack_64 + fVar7 * local_60;
  fVar11 = fVar8 * fStack_64 + fVar9 * local_5c + fVar7 * local_58;
  fVar6 = fVar8 * local_60 + fVar9 * local_58 + fVar7 * local_54;
  fVar7 = fVar10 * local_68 + fVar11 * fStack_64 + fVar6 * local_60;
  fVar8 = fVar10 * fStack_64 + fVar11 * local_5c + fVar6 * local_58;
  fVar6 = fVar10 * local_60 + fVar11 * local_58 + fVar6 * local_54;
  local_78 = sqrtf(fVar7 * fVar7 + 0.0 + fVar8 * fVar8 + fVar6 * fVar6);
  local_78 = 1.0 / local_78;
  local_80 = fVar7 * local_78;
  fStack_7c = fVar8 * local_78;
  local_78 = fVar6 * local_78;
  FUN_00150620(&local_8c,&local_98,param_1,&local_80,auStack_74);
  uVar5 = (int)local_8c * 0x1f + 0x80;
  uVar1 = (int)fStack_88 * 0x3f + 0x80;
  uVar2 = (int)local_84 * 0x1f + 0x80;
  uVar3 = (int)local_98 * 0x1f + 0x80;
  uVar4 = (int)fStack_94 * 0x3f + 0x80;
  uVar1 = (uVar1 + (uVar1 >> 8) >> 3 & 0xffe0) + ((uVar5 + (uVar5 >> 8)) * 8 & 0xf800) +
          (uVar2 + (uVar2 >> 8) >> 8) & 0xffff;
  uVar5 = (int)local_90 * 0x1f + 0x80;
  uStack_44 = (uVar4 + (uVar4 >> 8) >> 3 & 0xffe0) + ((uVar3 + (uVar3 >> 8)) * 8 & 0xf800) +
              (uVar5 + (uVar5 >> 8) >> 8) & 0xffff;
  local_48 = uVar1;
  if (uVar1 < uStack_44) {
    local_48 = uStack_44;
    uStack_44 = uVar1;
  }
  *param_2 = local_48 | uStack_44 << 0x10;
  uVar5 = FUN_00150b60(param_1);
  param_2[1] = uVar5;
  FUN_00150cd0(&local_48,param_1,uVar5,auStack_74);
  uVar5 = local_48;
  if ((int)local_48 < (int)uStack_44) {
    local_48 = uStack_44;
    uStack_44 = uVar5;
  }
  *param_2 = local_48 + uStack_44 * 0x10000;
  uVar5 = FUN_00150b60(param_1);
  param_2[1] = (uVar5 & 0x55555555) << 1 ^ uVar5 & 0xaaaaaaaa | (uVar5 & 0xaaaaaaaa) >> 1;
  return;
}



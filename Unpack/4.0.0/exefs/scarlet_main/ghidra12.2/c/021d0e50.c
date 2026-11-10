/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d0e50; name: FUN_021d0e50
 */


void FUN_021d0e50(uint *param_1,uint *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint local_68;
  uint uStack_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  
  local_68 = *param_1;
  local_5c = param_1[3];
  if (local_5c < local_68) {
    return;
  }
  puVar8 = param_1 + 1;
  uStack_64 = *puVar8;
  puVar9 = param_1 + 4;
  uVar3 = *puVar9;
  if (uVar3 < uStack_64) {
    return;
  }
  local_60 = param_1[2];
  local_54 = param_1[5];
  if (local_54 < local_60) {
    return;
  }
  if (param_2[3] < *param_2) {
LAB_021d0f04:
    FUN_021d10f0(param_1,param_3);
    return;
  }
  uVar11 = param_2[1];
  puVar10 = param_2 + 4;
  uVar4 = *puVar10;
  if ((uVar4 < uVar11) || (param_2[5] < param_2[2])) goto LAB_021d0f04;
  bVar7 = uVar11 < uStack_64;
  if (uVar11 < uVar3) {
    bVar5 = false;
    bVar6 = false;
    if (uVar3 < uVar4) goto LAB_021d0f80;
  }
  else {
    bVar6 = uVar3 < uVar11;
  }
  bVar5 = bVar6;
  puVar2 = puVar8;
  if (uStack_64 <= uVar11) {
    puVar2 = param_2 + 1;
  }
  puVar1 = puVar9;
  if (uStack_64 <= uVar4) {
    puVar1 = puVar2;
  }
  uVar11 = *puVar1;
LAB_021d0f80:
  puVar2 = puVar10;
  if (!bVar7 || uStack_64 >= uVar4) {
    puVar2 = puVar8;
  }
  if (uVar4 <= uVar3) {
    puVar9 = puVar10;
  }
  if (!(bool)((bVar7 && uStack_64 < uVar4) | bVar5)) {
    puVar2 = puVar9;
  }
  uVar4 = *puVar2;
  local_58 = uVar11;
  FUN_021d10f0(&local_68,param_3);
  local_68 = *param_1;
  local_60 = param_1[2];
  local_5c = param_1[3];
  local_54 = param_1[5];
  uStack_64 = uVar4;
  local_58 = uVar3;
  FUN_021d10f0(&local_68,param_3);
  local_68 = *param_1;
  local_60 = param_1[2];
  local_5c = param_2[3];
  if (param_1[3] <= local_5c) {
    local_5c = param_1[3];
  }
  local_54 = param_2[2];
  if (param_1[5] <= param_2[2]) {
    local_54 = param_1[5];
  }
  uStack_64 = uVar11;
  local_58 = uVar4;
  FUN_021d10f0(&local_68,param_3);
  local_68 = *param_1;
  local_60 = param_2[2];
  if (param_2[2] <= param_1[2]) {
    local_60 = param_1[2];
  }
  local_5c = *param_2;
  if (param_1[3] <= *param_2) {
    local_5c = param_1[3];
  }
  local_54 = param_1[5];
  uStack_64 = uVar11;
  local_58 = uVar4;
  FUN_021d10f0(&local_68,param_3);
  local_68 = param_2[3];
  if (local_68 <= *param_1) {
    local_68 = *param_1;
  }
  local_60 = param_1[2];
  local_5c = param_1[3];
  local_54 = param_2[5];
  if (param_1[5] <= param_2[5]) {
    local_54 = param_1[5];
  }
  uStack_64 = uVar11;
  local_58 = uVar4;
  FUN_021d10f0(&local_68,param_3);
  local_68 = *param_2;
  if (*param_2 <= *param_1) {
    local_68 = *param_1;
  }
  local_60 = param_2[5];
  if (param_2[5] <= param_1[2]) {
    local_60 = param_1[2];
  }
  local_5c = param_1[3];
  local_54 = param_1[5];
  uStack_64 = uVar11;
  local_58 = uVar4;
  FUN_021d10f0(&local_68,param_3);
  return;
}



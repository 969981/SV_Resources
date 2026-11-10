/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018c688c; name: FUN_018c688c
 */


int FUN_018c688c(uint param_1,byte param_2,byte param_3,byte param_4,byte param_5,byte param_6,
                byte param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  ulong uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  
  uVar9 = (ulong)(param_1 % 6);
  switch((&DAT_03d2fc44)[*(uint *)(&DAT_03d2fc4c + uVar9 * 0x18)]) {
  case 0:
    bVar8 = param_2;
    break;
  case 1:
    bVar8 = param_3;
    break;
  case 2:
    bVar8 = param_4;
    break;
  case 3:
    bVar8 = param_5;
    break;
  case 4:
    bVar8 = param_6;
    break;
  case 5:
    bVar8 = param_7;
    break;
  default:
    bVar8 = 0;
  }
  switch((&DAT_03d2fc44)[*(uint *)(&DAT_03d2fc50 + uVar9 * 0x18)]) {
  case 0:
    bVar10 = param_2;
    break;
  case 1:
    bVar10 = param_3;
    break;
  case 2:
    bVar10 = param_4;
    break;
  case 3:
    bVar10 = param_5;
    break;
  case 4:
    bVar10 = param_6;
    break;
  case 5:
    bVar10 = param_7;
    break;
  default:
    bVar10 = 0;
  }
  bVar1 = bVar10;
  if (bVar10 <= bVar8) {
    bVar1 = bVar8;
  }
  switch((&DAT_03d2fc44)[*(uint *)(&DAT_03d2fc54 + uVar9 * 0x18)]) {
  case 0:
    bVar11 = param_2;
    break;
  case 1:
    bVar11 = param_3;
    break;
  case 2:
    bVar11 = param_4;
    break;
  case 3:
    bVar11 = param_5;
    break;
  case 4:
    bVar11 = param_6;
    break;
  case 5:
    bVar11 = param_7;
    break;
  default:
    bVar11 = 0;
  }
  bVar2 = bVar11;
  if (bVar11 <= bVar1) {
    bVar2 = bVar1;
  }
  switch((&DAT_03d2fc44)[*(uint *)(&DAT_03d2fc58 + uVar9 * 0x18)]) {
  case 0:
    bVar7 = param_2;
    break;
  case 1:
    bVar7 = param_3;
    break;
  case 2:
    bVar7 = param_4;
    break;
  case 3:
    bVar7 = param_5;
    break;
  case 4:
    bVar7 = param_6;
    break;
  case 5:
    bVar7 = param_7;
    break;
  default:
    bVar7 = 0;
  }
  bVar3 = bVar7;
  if (bVar7 <= bVar2) {
    bVar3 = bVar2;
  }
  switch((&DAT_03d2fc44)[*(uint *)(&DAT_03d2fc5c + uVar9 * 0x18)]) {
  case 0:
    bVar12 = param_2;
    break;
  case 1:
    bVar12 = param_3;
    break;
  case 2:
    bVar12 = param_4;
    break;
  case 3:
    bVar12 = param_5;
    break;
  case 4:
    bVar12 = param_6;
    break;
  case 5:
    bVar12 = param_7;
    break;
  default:
    bVar12 = 0;
  }
  bVar4 = bVar12;
  if (bVar12 <= bVar3) {
    bVar4 = bVar3;
  }
  switch((&DAT_03d2fc44)[*(uint *)(&DAT_03d2fc60 + uVar9 * 0x18)]) {
  case 0:
    param_7 = param_2;
    break;
  case 1:
    param_7 = param_3;
    break;
  case 2:
    param_7 = param_4;
    break;
  case 3:
    param_7 = param_5;
    break;
  case 4:
    param_7 = param_6;
    break;
  case 5:
    break;
  default:
    param_7 = 0;
  }
  uVar5 = 0;
  if (bVar8 != 0) {
    uVar5 = *(uint *)(&DAT_03d2fc4c + uVar9 * 0x18);
  }
  uVar6 = *(uint *)(&DAT_03d2fc50 + uVar9 * 0x18);
  if (bVar10 <= bVar8) {
    uVar6 = uVar5;
  }
  uVar5 = *(uint *)(&DAT_03d2fc54 + uVar9 * 0x18);
  if (bVar11 <= bVar1) {
    uVar5 = uVar6;
  }
  uVar6 = *(uint *)(&DAT_03d2fc58 + uVar9 * 0x18);
  if (bVar7 <= bVar2) {
    uVar6 = uVar5;
  }
  uVar5 = *(uint *)(&DAT_03d2fc5c + uVar9 * 0x18);
  if (bVar12 <= bVar3) {
    uVar5 = uVar6;
  }
  bVar8 = param_7;
  if (param_7 <= bVar4) {
    bVar8 = bVar4;
  }
  uVar6 = *(uint *)(&DAT_03d2fc60 + uVar9 * 0x18);
  if (param_7 <= bVar4) {
    uVar6 = uVar5;
  }
  return (uVar6 & 0xff) * 4 + (uVar6 & 0xff) + (uint)bVar8 % 5;
}



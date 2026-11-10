/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cc8a58; name: FUN_00cc8a58
 */


long FUN_00cc8a58(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  if (param_3 == 0) {
    uVar6 = 0;
switchD_00cc8b10_default:
    lVar7 = -0x81;
    uVar8 = uVar6;
  }
  else {
    uVar6 = param_3 | param_3 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = uVar6 | uVar6 >> 0x20;
    uVar6 = (uVar6 >> 1 & 0x5555555555555555) + (uVar6 & 0x5555555555555555);
    uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
    uVar6 = (uVar6 >> 4 & 0x707070707070707) + (uVar6 & 0x707070707070707);
    uVar6 = (uVar6 >> 8 & 0xf000f000f000f) + (uVar6 & 0xf000f000f000f);
    uVar6 = (uVar6 >> 0x10 & 0x1f0000001f) + (uVar6 & 0x1f0000001f);
    uVar6 = uVar6 + (uVar6 >> 0x20);
    lVar7 = 0;
    uVar8 = 3;
    switch((int)uVar6) {
    case 3:
      break;
    case 4:
      lVar7 = -0x1f;
      uVar8 = 4;
      break;
    case 5:
      lVar7 = -0x3d;
      uVar8 = 5;
      break;
    case 6:
      lVar7 = -0x59;
      uVar8 = 6;
      break;
    case 7:
      lVar7 = -0x71;
      uVar8 = 7;
      break;
    default:
      goto switchD_00cc8b10_default;
    }
  }
  iVar5 = (int)uVar6;
  lVar1 = (long)((uVar8 << 0x20) + -0x300000000) >> 0x1b;
  lVar3 = lVar7 + lVar1;
  lVar2 = (-(uVar6 & 1) & 2 - ((long)iVar5 & 1U)) + (long)iVar5;
  lVar4 = 0x18;
  if (param_3 < 0x11) {
    lVar4 = 0x28;
  }
  lVar4 = lVar4 + lVar3 * 0x20 + lVar2 * 4;
  if (lVar3 != 0) {
    lVar7 = (lVar7 + lVar1) * 0x20;
    puVar9 = param_2;
    do {
      puVar9[2] = puVar9;
      puVar9[3] = puVar9;
      lVar7 = lVar7 + -0x20;
      *puVar9 = 0;
      puVar9[1] = 0x3000effffffff;
      puVar9 = puVar9 + 4;
    } while (lVar7 != 0);
  }
  puVar9 = param_2 + lVar3 * 4;
  *param_1 = param_2;
  param_1[2] = puVar9;
  memset(puVar9,0,(long)(uVar6 << 0x20) >> 0x1e);
  lVar7 = (long)puVar9 + lVar2 * 4;
  param_1[5] = (long)iVar5;
  param_1[3] = 0;
  param_1[4] = lVar3;
  FUN_00cc8c34(lVar7,param_3 - lVar4,1,1);
  param_1[1] = lVar7;
  FUN_00c6c4dc(param_1,lVar7);
  return lVar4;
}



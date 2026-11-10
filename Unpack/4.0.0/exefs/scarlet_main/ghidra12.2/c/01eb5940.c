/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eb5940; name: FUN_01eb5940
 */


void FUN_01eb5940(uint *param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint local_18 [2];
  
  lVar9 = *param_4;
  lVar7 = param_4[2];
  lVar8 = lVar7 + 1;
  bVar2 = *(byte *)(lVar9 + lVar7);
  uVar6 = (ulong)bVar2;
  param_4[2] = lVar8;
  if (0x83 < uVar6) {
    uVar5 = 1;
    goto LAB_01eb5980;
  }
  switch(bVar2) {
  case 0x80:
    uVar6 = (ulong)*(byte *)(lVar9 + lVar8);
    lVar7 = lVar7 + 2;
    break;
  case 0x81:
    uVar6 = (ulong)*(ushort *)(lVar9 + lVar8);
    lVar7 = lVar7 + 3;
    break;
  case 0x82:
    uVar6 = (ulong)*(uint *)(lVar9 + lVar8);
    lVar7 = lVar7 + 5;
    break;
  case 0x83:
    uVar6 = *(ulong *)(lVar9 + lVar8);
    lVar7 = lVar7 + 9;
    break;
  default:
    goto switchD_01eb599c_default;
  }
  param_4[2] = lVar7;
switchD_01eb599c_default:
  if (uVar6 == 3) {
    FUN_01eb5a60(local_18);
    if (local_18[0] == 0) {
      lVar8 = param_4[2];
      cVar3 = *(char *)(*param_4 + lVar8);
      param_4[2] = lVar8 + 1;
      bVar4 = cVar3 != -0x78;
      if (!bVar4) {
        uVar1 = *(undefined4 *)(*param_4 + lVar8 + 1);
        param_4[2] = lVar8 + 5;
        *(undefined4 *)(param_3 + 8) = uVar1;
      }
      *param_1 = (uint)bVar4;
    }
    else {
      *param_1 = local_18[0];
    }
    return;
  }
  uVar5 = 5;
LAB_01eb5980:
  *param_1 = uVar5;
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eb6748; name: FUN_01eb6748
 */


long FUN_01eb6748(uint *param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint local_18 [2];
  
  cVar2 = *(char *)(*param_3 + param_3[2]);
  param_3[2] = param_3[2] + 1;
  if (cVar2 != -0x47) {
    *param_1 = 1;
    return param_2;
  }
  lVar9 = *param_3;
  lVar8 = param_3[2];
  lVar5 = lVar8 + 1;
  bVar3 = *(byte *)(lVar9 + lVar8);
  uVar7 = (ulong)bVar3;
  param_3[2] = lVar5;
  if (0x83 < uVar7) {
    uVar6 = 1;
    goto LAB_01eb67c0;
  }
  switch(bVar3) {
  case 0x80:
    uVar7 = (ulong)*(byte *)(lVar9 + lVar5);
    lVar8 = lVar8 + 2;
    break;
  case 0x81:
    uVar7 = (ulong)*(ushort *)(lVar9 + lVar5);
    lVar8 = lVar8 + 3;
    break;
  case 0x82:
    uVar7 = (ulong)*(uint *)(lVar9 + lVar5);
    lVar8 = lVar8 + 5;
    break;
  case 0x83:
    uVar7 = *(ulong *)(lVar9 + lVar5);
    lVar8 = lVar8 + 9;
    break;
  default:
    goto switchD_01eb67dc_default;
  }
  param_3[2] = lVar8;
switchD_01eb67dc_default:
  if (uVar7 == 4) {
    lVar5 = FUN_01eb68a0(local_18);
    if (local_18[0] == 0) {
      lVar8 = param_3[2];
      cVar2 = *(char *)(*param_3 + lVar8);
      param_3[2] = lVar8 + 1;
      bVar4 = cVar2 != -0x78;
      if (!bVar4) {
        uVar1 = *(undefined4 *)(*param_3 + lVar8 + 1);
        param_3[2] = lVar8 + 5;
        *(undefined4 *)(param_2 + 0xc) = uVar1;
      }
      *param_1 = (uint)bVar4;
    }
    else {
      *param_1 = local_18[0];
    }
    return lVar5;
  }
  uVar6 = 5;
LAB_01eb67c0:
  *param_1 = uVar6;
  return 0xb9;
}



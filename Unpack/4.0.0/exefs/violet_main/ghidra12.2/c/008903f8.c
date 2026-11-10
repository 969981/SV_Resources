/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008903f8; name: FUN_008903f8
 */


void FUN_008903f8(long param_1,int param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (0x1b < param_2) {
    return;
  }
  iVar3 = param_2 + 3;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  uVar2 = iVar3 >> 2;
  if (uVar2 < 2) {
    uVar4 = (undefined1)param_3;
    switch(param_2 % 4) {
    case 0:
      *(undefined1 *)(param_1 + (ulong)uVar2 * 4 + 8) = uVar4;
      return;
    case 1:
      *(undefined1 *)(param_1 + (ulong)uVar2 * 4 + 9) = uVar4;
      return;
    case 2:
      *(undefined1 *)(param_1 + (ulong)uVar2 * 4 + 10) = uVar4;
      return;
    case 3:
      *(undefined1 *)(param_1 + (ulong)uVar2 * 4 + 0xb) = uVar4;
      return;
    default:
      return;
    }
  }
  if (6 < uVar2) {
    return;
  }
  uVar6 = *(uint *)(param_1 + 0x10);
  if ((uVar6 >> 0x10 & 1) != 0) {
    uVar2 = uVar2 - 2;
    lVar1 = *(long *)(param_1 + 0x18) +
            ((ulong)(uVar6 >> 4) & 0x1c) + ((ulong)(uVar6 >> 8) & 0xc) + ((ulong)(uVar6 >> 0xc) & 8)
            + ((ulong)(uVar6 >> 0xc) & 1) * 0xc +
            (((ulong)(uVar6 << 4) & 0x30) + ((ulong)uVar6 & 0x30) | (ulong)(uVar6 >> 6) & 8) +
            (((ulong)(uVar6 >> 0xd) & 3) + ((ulong)(uVar6 >> 2) & 3)) * 0x14;
    uVar6 = *(uint *)(lVar1 + (ulong)(uVar2 % 5) * 4 + 4);
    uVar9 = uVar6 >> 8;
    uVar8 = uVar6 >> 0x10;
    uVar7 = uVar6 >> 0x18;
    switch(param_2 % 4) {
    case 0:
      uVar6 = param_3;
      break;
    case 1:
      uVar9 = param_3;
      break;
    case 2:
      uVar8 = param_3;
      break;
    case 3:
      uVar7 = param_3;
    }
    if (uVar2 < 5) {
      *(uint *)(lVar1 + (ulong)uVar2 * 4 + 4) =
           uVar6 & 0xff | (uVar9 & 0xff) << 8 | (uVar8 & 0xff) << 0x10 | uVar7 << 0x18;
      return;
    }
    return;
  }
  if ((uVar6 >> 0x11 & 1) == 0) {
    return;
  }
  uVar5 = uVar2 - 2;
  lVar1 = *(long *)(param_1 + 0x18) +
          (long)(int)((uVar6 >> 4 & 0x1c) + (uVar6 >> 8 & 0xc) + (uVar6 >> 0xc & 8) +
                      (uVar6 >> 0xc & 1) * 0xc + (uVar6 >> 0x10 & 1) * 0x1c +
                      (uVar6 >> 0xc & 0x10) * (uVar6 >> 6 & 7) +
                      ((uVar6 & 3) * 0x10 + (uVar6 & 0x30) | uVar6 >> 6 & 8) +
                     ((uVar6 >> 0xd & 3) + (uVar6 >> 2 & 3)) * 0x14);
  uVar6 = *(uint *)(lVar1 + (ulong)(uVar5 % 5) * 4 + 0x60);
  uVar9 = uVar6 >> 8;
  uVar8 = uVar6 >> 0x10;
  uVar7 = uVar6 >> 0x18;
  switch(param_2 + uVar2 * -4) {
  case 0:
    goto switchD_00890534_caseD_0;
  case 1:
    uVar9 = param_3;
    break;
  case 2:
    uVar8 = param_3;
    break;
  case 3:
    uVar7 = param_3;
  }
  param_3 = uVar6;
switchD_00890534_caseD_0:
  if (uVar5 < 5) {
    *(uint *)(lVar1 + (ulong)uVar5 * 4 + 0x60) =
         uVar7 << 0x18 | (uVar8 & 0xff) << 0x10 | (uVar9 & 0xff) << 8 | param_3 & 0xff;
  }
  return;
}



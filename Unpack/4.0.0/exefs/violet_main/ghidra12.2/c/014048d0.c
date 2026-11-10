/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014048d0; name: FUN_014048d0
 */


void FUN_014048d0(long param_1,byte param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  
  if (0xc3 < param_2) {
    if (param_2 < 0xd4) {
      if (param_2 == 0xc4) {
        uVar7 = *(uint *)(param_1 + 0x6c);
        lVar8 = param_1 + 0x70;
        bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
        bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
        bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
        bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
        *(uint *)(param_1 + 0x6c) = uVar7 + 4;
        *param_3 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
        uVar7 = *(uint *)(param_1 + 0x6c);
        bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
        bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
        bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
        bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
        *(uint *)(param_1 + 0x6c) = uVar7 + 4;
        param_3[1] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
        goto LAB_01405c20;
      }
      if (param_2 != 0xd3) {
        return;
      }
      uVar7 = *(uint *)(param_1 + 0x6c);
      lVar8 = param_1 + 0x70;
      bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
      bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
      bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
      bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
      *(uint *)(param_1 + 0x6c) = uVar7 + 4;
      *param_3 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
      uVar7 = *(uint *)(param_1 + 0x6c);
      uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
      uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
      *(uint *)(param_1 + 0x6c) = uVar7 + 2;
      param_3[1] = (uint)CONCAT11(uVar5,uVar6);
      goto LAB_01405614;
    }
    if (param_2 == 0xd4) {
      uVar7 = *(uint *)(param_1 + 0x6c);
      lVar8 = param_1 + 0x70;
      bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
      bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
      bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
      bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
      *(uint *)(param_1 + 0x6c) = uVar7 + 4;
      *param_3 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
      uVar7 = *(uint *)(param_1 + 0x6c);
      bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
      bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
      bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
      bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
      *(uint *)(param_1 + 0x6c) = uVar7 + 4;
      param_3[1] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
      uVar7 = *(uint *)(param_1 + 0x6c);
      uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
      uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
      *(uint *)(param_1 + 0x6c) = uVar7 + 2;
      param_3[2] = (uint)CONCAT11(uVar5,uVar6);
      goto LAB_01404d5c;
    }
    if (param_2 != 0xe3) {
      return;
    }
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    *param_3 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[1] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    goto LAB_014050a4;
  }
  switch(param_2) {
  case 1:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    uVar7 = (uint)*(byte *)(param_1 + (ulong)uVar7 + 0x70);
    goto LAB_014049f8;
  case 2:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    *param_3 = (uint)*(byte *)(param_1 + 0x70 + (ulong)uVar7);
    goto LAB_014049a4;
  case 3:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    bVar1 = *(byte *)(param_1 + 0x70 + (ulong)uVar7);
    uVar7 = bVar1 & 7;
    *param_3 = (uint)(bVar1 >> 3);
    goto LAB_014050a0;
  case 4:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    bVar1 = *(byte *)(param_1 + 0x70 + (ulong)uVar7);
    *param_3 = (uint)(bVar1 >> 3);
    param_3[1] = bVar1 & 7;
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[2] = (uint)*(byte *)(param_1 + 0x70 + (ulong)uVar7);
    break;
  case 5:
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(param_1 + 0x70 + (ulong)uVar7);
    bVar2 = *(byte *)(param_1 + 0x70 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[2] = bVar2 & 0x1f;
    *param_3 = bVar1 >> 2 & 0x1f;
    param_3[1] = (ushort)(CONCAT11(bVar1,bVar2) >> 5) & 0x1f;
    goto LAB_014053d8;
  case 6:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[2] = bVar2 & 0x1f;
    param_3[3] = bVar4 >> 2 & 0x1f;
    *param_3 = bVar1 >> 2 & 0x1f;
    param_3[1] = (ushort)(CONCAT11(bVar1,bVar2) >> 5) & 0x1f;
    param_3[4] = (ushort)(CONCAT11(bVar4,bVar3) >> 5) & 0x1f;
    param_3[5] = bVar3 & 0x1f;
    return;
  case 7:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    *param_3 = (uint)*(byte *)(param_1 + 0x70 + (ulong)uVar7);
    goto LAB_014052e0;
  case 8:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    lVar8 = param_1 + 0x70;
    *param_3 = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[1] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[2] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[3] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[4] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[5] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[6] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    uVar7 = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    goto LAB_01405298;
  case 9:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    lVar8 = param_1 + 0x70;
    *param_3 = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[1] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[2] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[3] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[4] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[5] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[6] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[7] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    uVar7 = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    goto LAB_01406444;
  case 10:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    lVar8 = param_1 + 0x70;
    *param_3 = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[1] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[2] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[3] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[4] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[5] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[6] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[7] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[8] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    uVar7 = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    goto LAB_01404fb0;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x97:
  case 0x98:
  case 0x99:
  case 0x9a:
  case 0x9b:
  case 0x9c:
  case 0x9d:
  case 0x9e:
  case 0x9f:
  case 0xa0:
  case 0xa1:
  case 0xa2:
  case 0xa6:
  case 0xa7:
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xaf:
  case 0xb0:
  case 0xb1:
  case 0xb2:
    goto switchD_014048fc_caseD_b;
  case 0x10:
  case 0x20:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    *param_3 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[1] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[2] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[3] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[4] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[5] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[6] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[7] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[8] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    uVar7 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    goto LAB_01404fb0;
  case 0x11:
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(param_1 + 0x70 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(param_1 + 0x70 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    *param_3 = (uint)CONCAT11(uVar5,uVar6);
    return;
  case 0x12:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    *param_3 = (uint)*(byte *)(param_1 + 0x70 + (ulong)uVar7);
    goto LAB_01404940;
  case 0x13:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    bVar1 = *(byte *)(param_1 + 0x70 + (ulong)uVar7);
    uVar7 = bVar1 & 7;
    *param_3 = (uint)(bVar1 >> 3);
    goto LAB_01405610;
  case 0x14:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    bVar1 = *(byte *)(param_1 + 0x70 + (ulong)uVar7);
    *param_3 = (uint)(bVar1 >> 3);
    param_3[1] = bVar1 & 7;
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    bVar1 = *(byte *)(param_1 + 0x70 + (ulong)uVar7);
    param_3[2] = (uint)(bVar1 >> 3);
    param_3[3] = bVar1 & 7;
    return;
  case 0x15:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    *param_3 = (uint)(bVar1 >> 3);
    param_3[1] = bVar1 & 7;
    param_3[2] = (uint)(bVar2 >> 1);
    param_3[3] = bVar2 & 1;
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[4] = (uint)CONCAT11(uVar5,uVar6);
    return;
  case 0x16:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    bVar1 = *(byte *)(param_1 + 0x70 + (ulong)uVar7);
    *param_3 = (uint)(bVar1 >> 5);
    param_3[1] = bVar1 >> 3 & 3;
    param_3[2] = bVar1 >> 2 & 1;
    param_3[3] = bVar1 >> 1 & 1;
    param_3[4] = bVar1 & 1;
    goto LAB_0140669c;
  case 0x17:
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(param_1 + 0x70 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(param_1 + 0x70 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    *param_3 = (uint)CONCAT11(uVar5,uVar6);
    goto LAB_01404bec;
  case 0x18:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    *param_3 = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[1] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[2] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[3] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[4] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[5] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[6] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    uVar7 = (uint)CONCAT11(uVar5,uVar6);
    goto LAB_01405298;
  case 0x19:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    *param_3 = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[1] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[2] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[3] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[4] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[5] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[6] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[7] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    uVar7 = (uint)CONCAT11(uVar5,uVar6);
    goto LAB_01406444;
  case 0x1a:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    *param_3 = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[1] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[2] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[3] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[4] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[5] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[6] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[7] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[8] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    uVar7 = (uint)CONCAT11(uVar5,uVar6);
LAB_01404fb0:
    param_3[9] = uVar7;
switchD_014048fc_caseD_b:
    return;
  case 0x21:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    uVar7 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
LAB_014049f8:
    *param_3 = uVar7;
    return;
  case 0x22:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    *param_3 = (uint)*(byte *)(param_1 + 0x70 + (ulong)uVar7);
    goto LAB_01405014;
  case 0x23:
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(param_1 + 0x70 + (ulong)uVar7);
    bVar2 = *(byte *)(param_1 + 0x70 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[2] = bVar2 & 0x1f;
    *param_3 = bVar1 >> 2 & 0x1f;
    param_3[1] = (ushort)(CONCAT11(bVar1,bVar2) >> 5) & 0x1f;
    return;
  case 0x24:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    *(uint *)(param_1 + 0x6c) = uVar7 + 3;
    uVar7 = (uint)bVar2;
    *param_3 = (uint)(bVar1 >> 3);
    param_3[1] = ((uint)bVar1 << 0x10 | uVar7 << 8) >> 0xe & 0x1f;
    param_3[2] = (uint)bVar3 | (uVar7 & 0x3f) << 8;
    goto LAB_01404d5c;
  case 0x25:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    bVar1 = *(byte *)(param_1 + 0x70 + (ulong)uVar7);
    *param_3 = (uint)(bVar1 >> 5);
    param_3[1] = bVar1 >> 2 & 7;
    param_3[2] = bVar1 >> 1 & 1;
    param_3[3] = bVar1 & 1;
    goto LAB_014053f8;
  case 0x26:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    *(uint *)(param_1 + 0x6c) = uVar7 + 3;
    *param_3 = ((uint)bVar2 << 8 | (uint)bVar1 << 0x10) >> 0xf & 0x1f;
    param_3[1] = bVar2 >> 2 & 0x1f;
    param_3[2] = (ushort)(CONCAT11(bVar2,bVar3) >> 5) & 0x1f;
    param_3[3] = bVar3 & 0x1f;
    goto LAB_0140667c;
  case 0x27:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    *(uint *)(param_1 + 0x6c) = uVar7 + 3;
    *param_3 = ((uint)bVar2 << 8 | (uint)bVar1 << 0x10) >> 0xc & 0x1f;
    param_3[1] = (ushort)(CONCAT11(bVar2,bVar3) >> 7) & 0x1f;
    param_3[2] = bVar3 >> 2 & 0x1f;
    param_3[3] = bVar3 >> 1 & 1;
    param_3[4] = bVar3 & 1;
    goto LAB_01406728;
  case 0x28:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    *param_3 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[1] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[2] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[3] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[4] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[5] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[6] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    uVar7 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
LAB_01405298:
    param_3[7] = uVar7;
    return;
  case 0x29:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    *param_3 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[1] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[2] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[3] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[4] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[5] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[6] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[7] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    uVar7 = (uint)*(byte *)(lVar8 + (ulong)uVar7);
LAB_01406444:
    param_3[8] = uVar7;
    return;
  case 0x32:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    bVar1 = *(byte *)(param_1 + (ulong)uVar7 + 0x70);
    bVar2 = bVar1 >> 4;
    uVar7 = bVar1 & 0xf;
    goto LAB_01405b9c;
  case 0x33:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    *(uint *)(param_1 + 0x6c) = uVar7 + 3;
    uVar9 = (uint)bVar2;
    uVar7 = (uint)bVar3 | (uVar9 & 0x3f) << 8;
    *param_3 = (uint)(bVar1 >> 3);
    param_3[1] = ((uint)bVar1 << 0x10 | uVar9 << 8) >> 0xe & 0x1f;
    goto LAB_01405630;
  case 0x34:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    *(uint *)(param_1 + 0x6c) = uVar7 + 3;
    uVar7 = (uint)bVar2;
    *param_3 = (uint)(bVar1 >> 3);
    param_3[1] = ((uint)bVar1 << 0x10 | uVar7 << 8) >> 0xe & 0x1f;
    param_3[2] = (uint)bVar3 | (uVar7 & 0x3f) << 8;
    break;
  case 0x35:
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(param_1 + 0x70 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(param_1 + 0x70 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    *param_3 = (uint)CONCAT11(uVar5,uVar6);
    goto LAB_01405398;
  case 0x36:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[2] = bVar2 & 0x3f;
    *param_3 = (uint)(bVar1 >> 3);
    param_3[1] = (ushort)(CONCAT11(bVar1,bVar2) >> 6) & 0x1f;
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[3] = (uint)CONCAT11(uVar5,uVar6);
    goto LAB_0140667c;
  case 0x37:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    uVar9 = (uint)*(byte *)(lVar8 + (ulong)(uVar7 + 1)) << 0x10;
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[4] = bVar2 & 0x1f;
    *param_3 = (uVar9 | (uint)bVar1 << 0x18) >> 0x14 & 0x1f;
    param_3[1] = (uVar9 | (uint)bVar3 << 8) >> 0xf & 0x1f;
    param_3[2] = bVar3 >> 2 & 0x1f;
    param_3[3] = (ushort)(CONCAT11(bVar3,bVar2) >> 5) & 0x1f;
    goto LAB_01406728;
  case 0x42:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    bVar1 = *(byte *)(param_1 + (ulong)uVar7 + 0x70);
    bVar2 = bVar1 >> 3;
    uVar7 = bVar1 & 7;
LAB_01405b9c:
    *param_3 = (uint)bVar2;
    param_3[1] = uVar7;
    return;
  case 0x43:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    *param_3 = (uint)*(byte *)(param_1 + 0x70 + (ulong)uVar7);
    goto LAB_01405090;
  case 0x44:
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(param_1 + 0x70 + (ulong)uVar7);
    bVar2 = *(byte *)(param_1 + 0x70 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[2] = bVar2 & 0x3f;
    *param_3 = (uint)(bVar1 >> 3);
    param_3[1] = (ushort)(CONCAT11(bVar1,bVar2) >> 6) & 0x1f;
    break;
  case 0x45:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    *param_3 = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[1] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[2] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[3] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    goto LAB_014053f8;
  case 0x46:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    lVar8 = param_1 + 0x70;
    *param_3 = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[1] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[2] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[3] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
LAB_0140667c:
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(param_1 + 0x70 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(param_1 + 0x70 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[4] = (uint)CONCAT11(uVar5,uVar6);
LAB_0140669c:
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(param_1 + 0x70 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(param_1 + 0x70 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[5] = (uint)CONCAT11(uVar5,uVar6);
    return;
  case 0x47:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    lVar8 = param_1 + 0x70;
    *param_3 = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[1] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[2] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[3] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[4] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
LAB_01406728:
    lVar8 = param_1 + 0x70;
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[5] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[6] = (uint)CONCAT11(uVar5,uVar6);
    return;
  case 0x52:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    *param_3 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
LAB_014049a4:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    uVar7 = (uint)*(byte *)(param_1 + 0x70 + (ulong)uVar7);
LAB_014049b4:
    param_3[1] = uVar7;
    return;
  case 0x53:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    *param_3 = (uint)*(byte *)(param_1 + 0x70 + (ulong)uVar7);
    goto LAB_01405600;
  case 0x54:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    *param_3 = (uint)*(byte *)(param_1 + 0x70 + (ulong)uVar7);
    goto LAB_014057e8;
  case 0x55:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    *param_3 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    goto LAB_01406afc;
  case 0x56:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    *(uint *)(param_1 + 0x6c) = uVar7 + 3;
    uVar7 = (uint)bVar2;
    *param_3 = (uint)(bVar1 >> 3);
    param_3[1] = ((uint)bVar1 << 0x10 | uVar7 << 8) >> 0xe & 0x1f;
    param_3[2] = (uint)bVar3 | (uVar7 & 0x3f) << 8;
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = bVar1 & 1;
    param_3[3] = (uint)(bVar1 >> 1);
    goto LAB_01404a7c;
  case 0x57:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    *param_3 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
LAB_014052e0:
    lVar8 = param_1 + 0x70;
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[1] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[2] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[3] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[4] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[5] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    uVar7 = (uint)*(byte *)(lVar8 + (ulong)uVar7);
LAB_01404ca8:
    param_3[6] = uVar7;
    return;
  case 0x62:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    *param_3 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
LAB_01404940:
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(param_1 + 0x70 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(param_1 + 0x70 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[1] = (uint)CONCAT11(uVar5,uVar6);
    return;
  case 99:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    *param_3 = (uint)*(byte *)(param_1 + 0x70 + (ulong)uVar7);
    goto LAB_01404ad8;
  case 100:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    *param_3 = (uint)*(byte *)(param_1 + 0x70 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[1] = (uint)*(byte *)(param_1 + 0x70 + (ulong)uVar7);
LAB_01405c20:
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(param_1 + 0x70 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(param_1 + 0x70 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[2] = (uint)CONCAT11(uVar5,uVar6);
    break;
  case 0x65:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    *param_3 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
LAB_01405398:
    lVar8 = param_1 + 0x70;
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[1] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[2] = (uint)CONCAT11(uVar5,uVar6);
LAB_014053d8:
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(param_1 + 0x70 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(param_1 + 0x70 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[3] = (uint)CONCAT11(uVar5,uVar6);
LAB_014053f8:
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(param_1 + 0x70 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(param_1 + 0x70 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[4] = (uint)CONCAT11(uVar5,uVar6);
    return;
  case 0x66:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    *param_3 = (uint)*(byte *)(param_1 + 0x70 + (ulong)uVar7);
    goto LAB_01406b8c;
  case 0x67:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    *param_3 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
LAB_01404bec:
    lVar8 = param_1 + 0x70;
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[1] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[2] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[3] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[4] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    param_3[5] = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(lVar8 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(lVar8 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    uVar7 = (uint)CONCAT11(uVar5,uVar6);
    goto LAB_01404ca8;
  case 0x72:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    *param_3 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
LAB_01405014:
    lVar8 = param_1 + 0x70;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    uVar7 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    goto LAB_014049b4;
  case 0x73:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    *param_3 = (uint)*(byte *)(param_1 + 0x70 + (ulong)uVar7);
    goto LAB_01404b6c;
  case 0x74:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    *param_3 = (uint)*(byte *)(param_1 + 0x70 + (ulong)uVar7);
    goto LAB_01406d78;
  case 0x75:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    *param_3 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[1] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    goto LAB_01405930;
  case 0x76:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    *param_3 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    goto LAB_01404a30;
  case 0x83:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    *param_3 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
LAB_01404b6c:
    lVar8 = param_1 + 0x70;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[1] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    goto LAB_01404aec;
  case 0x84:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    lVar8 = param_1 + 0x70;
    *param_3 = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[1] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    goto LAB_01405ae0;
  case 0x85:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    lVar8 = param_1 + 0x70;
    *param_3 = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[1] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[2] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[3] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    uVar7 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    goto LAB_014059e0;
  case 0x86:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    *param_3 = (uint)*(byte *)(param_1 + 0x70 + (ulong)uVar7);
LAB_01404a30:
    lVar8 = param_1 + 0x70;
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[1] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[2] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[3] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    uVar7 = (uint)*(byte *)(lVar8 + (ulong)uVar7);
LAB_01404a7c:
    param_3[4] = uVar7;
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    uVar7 = (uint)*(byte *)(param_1 + 0x70 + (ulong)uVar7);
    goto LAB_01404a90;
  case 0x93:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    *param_3 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
LAB_01405090:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    uVar7 = (uint)*(byte *)(param_1 + 0x70 + (ulong)uVar7);
LAB_014050a0:
    param_3[1] = uVar7;
LAB_014050a4:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    uVar7 = (uint)*(byte *)(param_1 + 0x70 + (ulong)uVar7);
LAB_01404b24:
    param_3[2] = uVar7;
    return;
  case 0x94:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    *param_3 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[1] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[2] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    uVar7 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    goto LAB_01404d6c;
  case 0x95:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    *param_3 = (uint)*(byte *)(param_1 + 0x70 + (ulong)uVar7);
LAB_01406afc:
    lVar8 = param_1 + 0x70;
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[1] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[2] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[3] = (uint)*(byte *)(lVar8 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    uVar7 = (uint)*(byte *)(lVar8 + (ulong)uVar7);
LAB_014059e0:
    param_3[4] = uVar7;
    return;
  case 0x96:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    *param_3 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
LAB_01406b8c:
    lVar8 = param_1 + 0x70;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[1] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[2] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[3] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[4] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    uVar7 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
LAB_01404a90:
    param_3[5] = uVar7;
    return;
  case 0xa3:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    *param_3 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
LAB_01405600:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    uVar7 = (uint)*(byte *)(param_1 + 0x70 + (ulong)uVar7);
LAB_01405610:
    param_3[1] = uVar7;
LAB_01405614:
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar5 = *(undefined1 *)(param_1 + 0x70 + (ulong)uVar7);
    uVar6 = *(undefined1 *)(param_1 + 0x70 + (ulong)(uVar7 + 1));
    *(uint *)(param_1 + 0x6c) = uVar7 + 2;
    uVar7 = (uint)CONCAT11(uVar5,uVar6);
LAB_01405630:
    param_3[2] = uVar7;
    return;
  case 0xa4:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    *param_3 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
LAB_014057e8:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[1] = (uint)*(byte *)(param_1 + 0x70 + (ulong)uVar7);
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[2] = (uint)*(byte *)(param_1 + 0x70 + (ulong)uVar7);
LAB_01404d5c:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    uVar7 = (uint)*(byte *)(param_1 + 0x70 + (ulong)uVar7);
LAB_01404d6c:
    param_3[3] = uVar7;
    return;
  case 0xa5:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    *param_3 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[1] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
LAB_01405930:
    lVar8 = param_1 + 0x70;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[2] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[3] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    uVar7 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    goto LAB_014059e0;
  case 0xb3:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    *param_3 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
LAB_01404ad8:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[1] = (uint)*(byte *)(param_1 + 0x70 + (ulong)uVar7);
LAB_01404aec:
    lVar8 = param_1 + 0x70;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    uVar7 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    goto LAB_01404b24;
  case 0xb4:
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    *param_3 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
LAB_01406d78:
    uVar7 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar7 + 1;
    param_3[1] = (uint)*(byte *)(param_1 + 0x70 + (ulong)uVar7);
LAB_01405ae0:
    lVar8 = param_1 + 0x70;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[2] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    uVar7 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    goto LAB_01404d6c;
  default:
    if (param_2 != 0xc3) {
      return;
    }
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar8 = param_1 + 0x70;
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    *param_3 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    uVar7 = *(uint *)(param_1 + 0x6c);
    bVar1 = *(byte *)(lVar8 + (ulong)uVar7);
    bVar2 = *(byte *)(lVar8 + (ulong)(uVar7 + 1));
    bVar3 = *(byte *)(lVar8 + (ulong)(uVar7 + 2));
    bVar4 = *(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)(param_1 + 0x6c) = uVar7 + 4;
    param_3[1] = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    goto LAB_01405614;
  }
  uVar7 = *(uint *)(param_1 + 0x6c);
  uVar5 = *(undefined1 *)(param_1 + 0x70 + (ulong)uVar7);
  uVar6 = *(undefined1 *)(param_1 + 0x70 + (ulong)(uVar7 + 1));
  *(uint *)(param_1 + 0x6c) = uVar7 + 2;
  param_3[3] = (uint)CONCAT11(uVar5,uVar6);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1db00; name: FUN_01e1db00
 */


ulong FUN_01e1db00(long param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (((*(char *)(param_1 + 0x570) != '\0') && (*(char *)(param_1 + 0x2c0) != '\0')) &&
     (*(char *)(param_1 + 0x418) != '\0')) {
    lVar4 = *(long *)(param_1 + 0x578);
    lVar8 = *(long *)(param_1 + 0x580) - lVar4;
    if (lVar8 != 0) {
      uVar6 = 0;
      do {
        if (*(int *)(lVar4 + uVar6 * 0x2dc + 4) == param_3) {
          if (-1 < (int)uVar6) {
            lVar7 = *(long *)(param_1 + 0x2c8);
            lVar8 = *(long *)(param_1 + 0x2d0) - lVar7;
            if (lVar8 != 0) {
              uVar2 = 0;
              goto LAB_01e1dba0;
            }
          }
          break;
        }
        uVar6 = (ulong)((int)uVar6 + 1);
      } while (uVar6 < (ulong)((lVar8 >> 2) * 0x6fe99e1395aedd07));
    }
  }
  goto LAB_01e1dde4;
  while (uVar2 = (ulong)((int)uVar2 + 1), uVar2 < (ulong)((lVar8 >> 4) * -0xf0f0f0f0f0f0f0f)) {
LAB_01e1dba0:
    if (*(int *)(lVar4 + uVar6 * 0x2dc + 8) == *(int *)(lVar7 + uVar2 * 0x110)) {
      if (((int)uVar2 < 0) || (0xb < param_4 - 1U)) break;
      lVar8 = lVar7 + uVar2 * 0x110;
      uVar10 = *(uint *)(lVar8 + 200);
      uVar11 = *(uint *)(lVar8 + 0xd0);
      uVar9 = *(uint *)(lVar8 + 0xd8);
      iVar5 = *(int *)(lVar8 + 0xc4);
      iVar3 = *(int *)(lVar8 + 0xcc);
      iVar1 = *(int *)(lVar8 + 0xd4);
      switch(param_4) {
      case 1:
        lVar7 = lVar7 + uVar2 * 0x110;
        uVar9 = *(uint *)(lVar7 + 0x18);
        uVar11 = *(uint *)(lVar7 + 0x10);
        uVar10 = *(uint *)(lVar7 + 8);
        iVar1 = *(int *)(lVar7 + 0x14);
        iVar3 = *(int *)(lVar7 + 0xc);
        iVar5 = *(int *)(lVar7 + 4);
        break;
      case 2:
        lVar7 = lVar7 + uVar2 * 0x110;
        uVar9 = *(uint *)(lVar7 + 0x30);
        uVar11 = *(uint *)(lVar7 + 0x28);
        uVar10 = *(uint *)(lVar7 + 0x20);
        iVar1 = *(int *)(lVar7 + 0x2c);
        iVar3 = *(int *)(lVar7 + 0x24);
        iVar5 = *(int *)(lVar7 + 0x1c);
        break;
      case 3:
        lVar7 = lVar7 + uVar2 * 0x110;
        uVar9 = *(uint *)(lVar7 + 0x48);
        uVar11 = *(uint *)(lVar7 + 0x40);
        uVar10 = *(uint *)(lVar7 + 0x38);
        iVar1 = *(int *)(lVar7 + 0x44);
        iVar3 = *(int *)(lVar7 + 0x3c);
        iVar5 = *(int *)(lVar7 + 0x34);
        break;
      case 4:
        lVar7 = lVar7 + uVar2 * 0x110;
        uVar9 = *(uint *)(lVar7 + 0x60);
        uVar11 = *(uint *)(lVar7 + 0x58);
        uVar10 = *(uint *)(lVar7 + 0x50);
        iVar1 = *(int *)(lVar7 + 0x5c);
        iVar3 = *(int *)(lVar7 + 0x54);
        iVar5 = *(int *)(lVar7 + 0x4c);
        break;
      case 5:
        lVar7 = lVar7 + uVar2 * 0x110;
        uVar9 = *(uint *)(lVar7 + 0x78);
        uVar11 = *(uint *)(lVar7 + 0x70);
        uVar10 = *(uint *)(lVar7 + 0x68);
        iVar1 = *(int *)(lVar7 + 0x74);
        iVar3 = *(int *)(lVar7 + 0x6c);
        iVar5 = *(int *)(lVar7 + 100);
        break;
      case 6:
        lVar7 = lVar7 + uVar2 * 0x110;
        uVar9 = *(uint *)(lVar7 + 0x90);
        uVar11 = *(uint *)(lVar7 + 0x88);
        uVar10 = *(uint *)(lVar7 + 0x80);
        iVar1 = *(int *)(lVar7 + 0x8c);
        iVar3 = *(int *)(lVar7 + 0x84);
        iVar5 = *(int *)(lVar7 + 0x7c);
        break;
      case 7:
        lVar7 = lVar7 + uVar2 * 0x110;
        uVar9 = *(uint *)(lVar7 + 0xa8);
        uVar11 = *(uint *)(lVar7 + 0xa0);
        uVar10 = *(uint *)(lVar7 + 0x98);
        iVar1 = *(int *)(lVar7 + 0xa4);
        iVar3 = *(int *)(lVar7 + 0x9c);
        iVar5 = *(int *)(lVar7 + 0x94);
        break;
      case 8:
        lVar7 = lVar7 + uVar2 * 0x110;
        uVar9 = *(uint *)(lVar7 + 0xc0);
        uVar11 = *(uint *)(lVar7 + 0xb8);
        uVar10 = *(uint *)(lVar7 + 0xb0);
        iVar1 = *(int *)(lVar7 + 0xbc);
        iVar3 = *(int *)(lVar7 + 0xb4);
        iVar5 = *(int *)(lVar7 + 0xac);
        break;
      case 10:
        lVar7 = lVar7 + uVar2 * 0x110;
        uVar9 = *(uint *)(lVar7 + 0xf0);
        uVar11 = *(uint *)(lVar7 + 0xe8);
        uVar10 = *(uint *)(lVar7 + 0xe0);
        iVar1 = *(int *)(lVar7 + 0xec);
        iVar3 = *(int *)(lVar7 + 0xe4);
        iVar5 = *(int *)(lVar7 + 0xdc);
        break;
      case 0xc:
        lVar7 = lVar7 + uVar2 * 0x110;
        uVar9 = *(uint *)(lVar7 + 0x108);
        uVar11 = *(uint *)(lVar7 + 0x100);
        uVar10 = *(uint *)(lVar7 + 0xf8);
        iVar1 = *(int *)(lVar7 + 0x104);
        iVar3 = *(int *)(lVar7 + 0xfc);
        iVar5 = *(int *)(lVar7 + 0xf4);
      }
      if (param_2 != 1) {
        if (param_2 == 3) {
          iVar5 = iVar1;
          uVar10 = uVar9;
        }
        else {
          iVar5 = iVar3;
          uVar10 = uVar11;
          if (param_2 != 2) break;
        }
      }
      lVar4 = *(long *)(param_1 + 0x420);
      lVar8 = *(long *)(param_1 + 0x428) - lVar4;
      if (lVar8 != 0) {
        uVar6 = 0;
        goto LAB_01e1ddb0;
      }
      break;
    }
  }
  goto LAB_01e1dde4;
  while (uVar6 = (ulong)((int)uVar6 + 1), uVar6 < (ulong)(lVar8 >> 3)) {
LAB_01e1ddb0:
    if (iVar5 == *(int *)(lVar4 + uVar6 * 8)) {
      if (-1 < (int)uVar6) {
        uVar6 = (ulong)*(uint *)(lVar4 + uVar6 * 8 + 4);
        goto LAB_01e1dde8;
      }
      break;
    }
  }
LAB_01e1dde4:
  uVar6 = 0;
  uVar10 = 0;
LAB_01e1dde8:
  return uVar6 | (ulong)uVar10 << 0x20;
}



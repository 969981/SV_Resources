/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00141030; name: FUN_00141030
 */


void FUN_00141030(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  
  plVar5 = *(long **)(param_1 + 0x20);
  lVar7 = *plVar5;
  puVar8 = (uint *)(plVar5[4] + -4);
  uVar2 = *puVar8;
  if (0x3b < (uVar2 & 0x7f) - 0xb) {
    return;
  }
  switch(uVar2 & 0x7f) {
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x14:
  case 0x31:
  case 0x32:
  case 0x34:
    break;
  default:
    return;
  case 0x2e:
  case 0x2f:
  case 0x30:
    uVar2 = *(uint *)(plVar5[4] + -8);
    break;
  case 0x35:
    lVar6 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(lVar6 + -0x30) = *(undefined8 *)(lVar6 + -0x10);
    *(undefined1 *)(lVar6 + -0x28) = *(undefined1 *)(lVar6 + -8);
    *(long *)(param_1 + 0x10) = lVar6 + -0x20;
    FUN_00140b30(param_1,(lVar6 + -0x20) - (lVar7 + 0x10 + (ulong)(uVar2 >> 7 & 0xff) * 0x10) >> 4);
    return;
  case 0x36:
  case 0x46:
    plVar5[4] = (long)puVar8;
    return;
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
    bVar3 = *(byte *)(*(long *)(param_1 + 0x10) + -8);
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
    bVar4 = (bVar3 & 0xf) == 0;
    if ((*(ushort *)((long)plVar5 + 0x3e) >> 0xd & 1) == 0) {
      if (((uVar2 & 0x8000) == 0) != (bVar3 != 1 && !bVar4)) {
        return;
      }
    }
    else {
      *(ushort *)((long)plVar5 + 0x3e) = *(ushort *)((long)plVar5 + 0x3e) ^ 0x2000;
      if (((uVar2 & 0x8000) == 0) != (bVar3 == 1 || bVar4)) {
        return;
      }
    }
    plVar5[4] = plVar5[4] + 4;
    return;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  puVar1 = (undefined8 *)(lVar7 + 0x10 + (ulong)(byte)(uVar2 >> 7) * 0x10);
  *(long *)(param_1 + 0x10) = lVar6 + -0x10;
  *puVar1 = *(undefined8 *)(lVar6 + -0x10);
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(lVar6 + -8);
  return;
}



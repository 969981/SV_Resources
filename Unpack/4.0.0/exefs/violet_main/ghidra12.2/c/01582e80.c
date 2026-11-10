/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01582e80; name: FUN_01582e80
 */


void FUN_01582e80(long param_1,long *param_2,undefined4 param_3,undefined1 param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  
  uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  switch(param_4) {
  case 1:
    uVar6 = 0xca;
    iVar7 = 0x242;
    break;
  case 2:
    FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xcb,uVar2,0x68,uVar2,0xffff0000);
    cVar1 = FUN_01466360(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
    if (cVar1 != -1) {
      return;
    }
    uVar6 = 0x2eb;
    goto LAB_015830cc;
  case 3:
    uVar6 = 0xcb;
    iVar7 = 0x5d;
    break;
  case 4:
    uVar6 = 0xcb;
    iVar7 = 0x62;
    break;
  default:
    uVar6 = 0xca;
    iVar7 = 0x237;
    break;
  case 6:
    uVar6 = 0xcb;
    iVar7 = 0x7a;
    break;
  case 7:
    uVar6 = 0xcb;
    iVar7 = 0x7b;
    break;
  case 8:
    uVar6 = 0xcb;
    iVar7 = 0x71;
    break;
  case 9:
    uVar6 = 0xc6;
    goto LAB_01583054;
  case 10:
    uVar6 = 0xbe;
    goto LAB_01583054;
  case 0xb:
    uVar6 = 0xc1;
    goto LAB_01583054;
  case 0xc:
    uVar6 = 0xc4;
    goto LAB_01583054;
  case 0xd:
    uVar6 = 0x11e;
    goto LAB_01583054;
  case 0xe:
    uVar6 = 0xcb;
    iVar7 = 0x11f;
    break;
  case 0xf:
    FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),199,uVar2,0);
    FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xcb,uVar2,0x96,uVar2,0xffff0000);
    FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),200,uVar2);
    return;
  case 0x12:
    uVar6 = 0xcb;
    iVar7 = 0x94;
    break;
  case 0x13:
  case 0x19:
    return;
  case 0x14:
    uVar6 = 0x15b;
LAB_01583054:
    FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xcb,uVar2,uVar6,uVar2,param_3,0xffff0000);
    return;
  case 0x16:
    uVar5 = (**(code **)(*param_2 + 0x228))(param_2,0);
    if ((uVar5 & 1) == 0) {
      uVar6 = FUN_012440e8(*(undefined8 *)(param_1 + 0x10));
      uVar3 = FUN_012440f0(uVar6,4);
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      iVar7 = (uVar3 & 0xff) + 0x2b5;
      uVar6 = 0xca;
      goto LAB_01582ef8;
    }
    uVar6 = 0xca;
    iVar7 = 699;
    break;
  case 0x17:
    uVar6 = 0xca;
    iVar7 = 0x2ba;
    break;
  case 0x1a:
    uVar6 = 0x2f2;
    goto LAB_015830cc;
  case 0x1b:
    uVar6 = 0x305;
    goto LAB_015830cc;
  case 0x1c:
    uVar6 = 0x306;
LAB_015830cc:
    FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xca,uVar2,uVar6,0xffff0000);
    return;
  case 0x1d:
    uVar6 = 0xca;
    iVar7 = 0x30b;
    break;
  case 0x1e:
  case 0x1f:
  case 0x20:
    uVar6 = 0xca;
    iVar7 = 0x30c;
    break;
  case 0x21:
    uVar6 = 0xcb;
    iVar7 = 0x1b4;
    break;
  case 0x22:
    uVar6 = 0xcb;
    iVar7 = 0x1bb;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
LAB_01582ef8:
  FUN_0167ebc0(uVar4,uVar6,uVar2,iVar7,uVar2,0xffff0000);
  return;
}



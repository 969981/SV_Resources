/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00131050; name: FUN_00131050
 */


ulong FUN_00131050(long param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_68 [24];
  
  FUN_0013b000(*(undefined8 *)(param_1 + 0x38));
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < 0x7e) {
    if (iVar1 == 0x23) {
      uVar5 = 3;
    }
    else {
      if (iVar1 != 0x2d) {
        if (iVar1 != 0x7b) goto switchD_001310b0_caseD_107;
        FUN_001313d0(param_1,param_2);
        goto LAB_00131220;
      }
      uVar5 = 0;
    }
switchD_001310b0_caseD_10e:
    uVar2 = *(undefined4 *)(param_1 + 4);
    FUN_00138a10(param_1);
    FUN_00131050(param_1,param_2,0xc);
    FUN_001352c0(*(undefined8 *)(param_1 + 0x30),uVar5,param_2,uVar2);
    goto LAB_00131220;
  }
  uVar5 = 2;
  switch(iVar1) {
  case 0x106:
    *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
    uVar2 = 3;
    break;
  case 0x107:
  case 0x109:
  case 0x10a:
  case 0x10b:
  case 0x10c:
  case 0x10f:
  case 0x110:
  case 0x111:
  case 0x112:
  case 0x114:
  case 0x115:
  case 0x116:
  case 0x117:
  case 0x119:
  case 0x11a:
  case 0x11b:
  case 0x11c:
  case 0x11d:
  case 0x11e:
  case 0x11f:
  case 0x120:
  case 0x123:
    goto switchD_001310b0_caseD_107;
  case 0x108:
    FUN_00138a10(param_1);
    FUN_001316a0(param_1,param_2,0,*(undefined4 *)(param_1 + 4));
    goto LAB_00131220;
  case 0x10d:
    *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
    uVar2 = 1;
    break;
  case 0x10e:
    goto switchD_001310b0_caseD_10e;
  case 0x113:
    *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
    uVar2 = 2;
    break;
  case 0x118:
    if (*(char *)(**(long **)(param_1 + 0x30) + 0xb) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00138770(param_1,"cannot use \'...\' outside a vararg function");
    }
    uVar2 = FUN_00133250(*(long **)(param_1 + 0x30),0x50,0,0,1,0);
    *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
    *param_2 = 0x13;
    param_2[2] = uVar2;
    goto LAB_00131218;
  case 0x121:
    *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
    uVar2 = 5;
    goto LAB_001311f0;
  case 0x122:
    *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
    uVar2 = 6;
LAB_001311f0:
    *param_2 = uVar2;
    param_2[2] = 0;
    uVar5 = *(undefined8 *)(param_1 + 0x18);
LAB_00131214:
    *(undefined8 *)(param_2 + 2) = uVar5;
    goto LAB_00131218;
  case 0x124:
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    *param_2 = 7;
    *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
    goto LAB_00131214;
  default:
    if (iVar1 == 0x7e) {
      uVar5 = 1;
      goto switchD_001310b0_caseD_10e;
    }
    goto switchD_001310b0_caseD_107;
  }
  *param_2 = uVar2;
  param_2[2] = 0;
LAB_00131218:
  FUN_00138a10(param_1);
LAB_00131220:
  uVar6 = 0x15;
  uVar4 = 0;
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0x25:
    uVar4 = 3;
    break;
  case 0x26:
    uVar4 = 7;
    break;
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2c:
  case 0x2e:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3d:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
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
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
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
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7d:
    goto switchD_0013124c_caseD_27;
  case 0x2a:
    uVar4 = 2;
    break;
  case 0x2b:
    break;
  case 0x2d:
    uVar4 = 1;
    break;
  case 0x2f:
    uVar4 = 5;
    break;
  case 0x3c:
    uVar4 = 0xe;
    break;
  case 0x3e:
    uVar4 = 0x11;
    break;
  case 0x5e:
    uVar4 = 4;
    break;
  case 0x7c:
    uVar4 = 8;
    break;
  case 0x7e:
    uVar4 = 9;
    break;
  default:
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 0x100:
      uVar4 = 0x13;
      break;
    default:
      goto switchD_0013124c_caseD_27;
    case 0x10f:
      uVar4 = 0x14;
      break;
    case 0x116:
      uVar4 = 6;
      break;
    case 0x117:
      uVar4 = 0xc;
      break;
    case 0x119:
      uVar4 = 0xd;
      break;
    case 0x11a:
      uVar4 = 0x12;
      break;
    case 0x11b:
      uVar4 = 0xf;
      break;
    case 0x11c:
      uVar4 = 0x10;
      break;
    case 0x11d:
      uVar4 = 10;
      break;
    case 0x11e:
      uVar4 = 0xb;
    }
  }
  uVar6 = uVar4;
  do {
    if ((int)(uint)(byte)(&DAT_03cb6154)[uVar6 * 2] <= param_3) goto switchD_0013124c_caseD_27;
    uVar2 = *(undefined4 *)(param_1 + 4);
    FUN_00138a10(param_1);
    FUN_001358f0(*(undefined8 *)(param_1 + 0x30),uVar6,param_2);
    uVar3 = FUN_00131050(param_1,auStack_68,(&UNK_03cb6155)[uVar6 * 2]);
    FUN_00135ae0(*(undefined8 *)(param_1 + 0x30),uVar6,param_2,auStack_68,uVar2);
    uVar6 = (ulong)uVar3;
  } while (uVar3 != 0x15);
  uVar6 = 0x15;
switchD_0013124c_caseD_27:
  *(int *)(*(long *)(param_1 + 0x38) + 0xb0) = *(int *)(*(long *)(param_1 + 0x38) + 0xb0) + -1;
  return uVar6;
switchD_001310b0_caseD_107:
  FUN_00131b80(param_1,param_2);
  goto LAB_00131220;
}



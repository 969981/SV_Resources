/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00893584; name: FUN_00893584
 */


void FUN_00893584(undefined1 *param_1,byte *param_2,byte *param_3,byte *param_4)

{
  undefined1 uVar1;
  byte bVar2;
  
  FUN_00fab594();
  FUN_00fab56c(param_2);
  *param_1 = 1;
  *(byte **)(param_1 + 0x18) = param_2;
  if (param_3[3] == 0) {
    if (*param_3 == 0) {
      *param_2 = *param_2 & 0xfe;
    }
    else {
      *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) & 0xfff7;
      *param_2 = *param_2 | 1;
      switch(param_3[1]) {
      case 1:
        bVar2 = 1;
        break;
      case 2:
        bVar2 = 4;
        break;
      case 3:
        bVar2 = 5;
        break;
      case 4:
        bVar2 = 6;
        break;
      case 5:
        bVar2 = 7;
        break;
      case 6:
        bVar2 = 8;
        break;
      case 7:
        bVar2 = 9;
        break;
      case 8:
        bVar2 = 2;
        break;
      case 9:
        bVar2 = 3;
        break;
      default:
        bVar2 = 0;
      }
      param_2[1] = bVar2;
      switch(param_3[2]) {
      case 1:
        bVar2 = 1;
        break;
      case 2:
        bVar2 = 4;
        break;
      case 3:
        bVar2 = 5;
        break;
      case 4:
        bVar2 = 6;
        break;
      case 5:
        bVar2 = 7;
        break;
      case 6:
        bVar2 = 8;
        break;
      case 7:
        bVar2 = 9;
        break;
      case 8:
        bVar2 = 2;
        break;
      case 9:
        bVar2 = 3;
        break;
      default:
        bVar2 = 0;
      }
      param_2[2] = bVar2;
      switch(param_4[1]) {
      case 1:
        bVar2 = 1;
        break;
      case 2:
        bVar2 = 4;
        break;
      case 3:
        bVar2 = 5;
        break;
      case 4:
        bVar2 = 6;
        break;
      case 5:
        bVar2 = 7;
        break;
      case 6:
        bVar2 = 8;
        break;
      case 7:
        bVar2 = 9;
        break;
      case 8:
        bVar2 = 2;
        break;
      case 9:
        bVar2 = 3;
        break;
      default:
        bVar2 = 0;
      }
      param_2[4] = bVar2;
      switch(param_4[2]) {
      case 1:
        bVar2 = 1;
        break;
      case 2:
        bVar2 = 4;
        break;
      case 3:
        bVar2 = 5;
        break;
      case 4:
        bVar2 = 6;
        break;
      case 5:
        bVar2 = 7;
        break;
      case 6:
        bVar2 = 8;
        break;
      case 7:
        bVar2 = 9;
        break;
      case 8:
        bVar2 = 2;
        break;
      case 9:
        bVar2 = 3;
        break;
      default:
        bVar2 = 0;
      }
      param_2[5] = bVar2;
      bVar2 = *param_3 - 1;
      if (3 < *param_3 - 2) {
        bVar2 = 0;
      }
      param_2[3] = bVar2;
      bVar2 = *param_4 - 1;
      if (3 < *param_4 - 2) {
        bVar2 = 0;
      }
      param_2[6] = bVar2;
    }
  }
  else {
    *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) | 8;
    *param_2 = *param_2 & 0xfe;
    uVar1 = 5;
    switch(param_3[3]) {
    case 1:
      break;
    default:
      uVar1 = 0;
      break;
    case 3:
      uVar1 = 0xf;
      break;
    case 4:
      uVar1 = 3;
      break;
    case 5:
      uVar1 = 0xc;
      break;
    case 6:
      uVar1 = 10;
      break;
    case 7:
      uVar1 = 1;
      break;
    case 8:
      uVar1 = 0xe;
      break;
    case 9:
      uVar1 = 7;
      break;
    case 10:
      uVar1 = 8;
      break;
    case 0xb:
      uVar1 = 6;
      break;
    case 0xc:
      uVar1 = 9;
      break;
    case 0xd:
      uVar1 = 2;
      break;
    case 0xe:
      uVar1 = 4;
      break;
    case 0xf:
      uVar1 = 0xb;
      break;
    case 0x10:
      uVar1 = 0xd;
    }
    param_1[1] = uVar1;
  }
  FUN_00fac5d0(param_1);
  return;
}



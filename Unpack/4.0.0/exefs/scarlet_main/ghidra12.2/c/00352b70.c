/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00352b70; name: FUN_00352b70
 */


void FUN_00352b70(byte *param_1,long param_2,long *param_3,ulong *param_4,ulong *param_5)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  byte bVar6;
  
  uVar4 = *param_4;
  if (uVar4 == *param_5) {
    uVar1 = 8;
    if (0xf < uVar4 * 3) {
      uVar1 = uVar4 * 3 >> 1;
    }
    *param_5 = uVar1;
    lVar3 = FUN_0038c7f0(*param_3);
    *param_3 = lVar3;
    uVar4 = *param_4;
  }
  else {
    lVar3 = *param_3;
  }
  *param_4 = uVar4 + 1;
  *(undefined1 *)(lVar3 + uVar4) = 0x22;
  do {
    if (param_2 == 0) {
      uVar4 = *param_4;
      if (uVar4 == *param_5) {
        uVar1 = 8;
        if (0xf < uVar4 * 3) {
          uVar1 = uVar4 * 3 >> 1;
        }
        *param_5 = uVar1;
        lVar3 = FUN_0038c7f0(*param_3);
        *param_3 = lVar3;
        uVar4 = *param_4;
      }
      else {
        lVar3 = *param_3;
      }
      *param_4 = uVar4 + 1;
      *(undefined1 *)(lVar3 + uVar4) = 0x22;
      return;
    }
    bVar6 = *param_1;
    uVar4 = *param_4;
    if (bVar6 - 0x20 < 0x5f) {
      if (uVar4 != *param_5) goto LAB_00352ca0;
LAB_00352c10:
      uVar1 = 8;
      if (0xf < uVar4 * 3) {
        uVar1 = uVar4 * 3 >> 1;
      }
      *param_5 = uVar1;
      lVar3 = FUN_0038c7f0(*param_3);
      *param_3 = lVar3;
      uVar4 = *param_4;
LAB_00352c34:
      pbVar5 = (byte *)(lVar3 + uVar4);
      *param_4 = uVar4 + 1;
    }
    else {
      if (uVar4 == *param_5) {
        uVar1 = 8;
        if (0xf < uVar4 * 3) {
          uVar1 = uVar4 * 3 >> 1;
        }
        *param_5 = uVar1;
        lVar3 = FUN_0038c7f0(*param_3);
        *param_3 = lVar3;
        uVar4 = *param_4;
      }
      else {
        lVar3 = *param_3;
      }
      *param_4 = uVar4 + 1;
      *(undefined1 *)(lVar3 + uVar4) = 0x5c;
      switch(*param_1) {
      case 8:
        uVar4 = *param_4;
        if (uVar4 == *param_5) {
          uVar1 = 8;
          if (0xf < uVar4 * 3) {
            uVar1 = uVar4 * 3 >> 1;
          }
          *param_5 = uVar1;
          lVar3 = FUN_0038c7f0(*param_3);
          *param_3 = lVar3;
          uVar4 = *param_4;
        }
        else {
          lVar3 = *param_3;
        }
        pbVar5 = (byte *)(lVar3 + uVar4);
        *param_4 = uVar4 + 1;
        bVar6 = 0x62;
        break;
      case 9:
        uVar4 = *param_4;
        if (uVar4 == *param_5) {
          uVar1 = 8;
          if (0xf < uVar4 * 3) {
            uVar1 = uVar4 * 3 >> 1;
          }
          *param_5 = uVar1;
          lVar3 = FUN_0038c7f0(*param_3);
          *param_3 = lVar3;
          uVar4 = *param_4;
        }
        else {
          lVar3 = *param_3;
        }
        pbVar5 = (byte *)(lVar3 + uVar4);
        *param_4 = uVar4 + 1;
        bVar6 = 0x74;
        break;
      case 10:
        uVar4 = *param_4;
        if (uVar4 == *param_5) {
          uVar1 = 8;
          if (0xf < uVar4 * 3) {
            uVar1 = uVar4 * 3 >> 1;
          }
          *param_5 = uVar1;
          lVar3 = FUN_0038c7f0(*param_3);
          *param_3 = lVar3;
          uVar4 = *param_4;
        }
        else {
          lVar3 = *param_3;
        }
        pbVar5 = (byte *)(lVar3 + uVar4);
        *param_4 = uVar4 + 1;
        bVar6 = 0x6e;
        break;
      default:
        uVar4 = *param_4;
        if (uVar4 == *param_5) {
          uVar1 = 8;
          if (0xf < uVar4 * 3) {
            uVar1 = uVar4 * 3 >> 1;
          }
          *param_5 = uVar1;
          lVar3 = FUN_0038c7f0(*param_3);
          *param_3 = lVar3;
          uVar4 = *param_4;
        }
        else {
          lVar3 = *param_3;
        }
        *param_4 = uVar4 + 1;
        *(undefined1 *)(lVar3 + uVar4) = 0x75;
        uVar4 = *param_4;
        if (uVar4 == *param_5) {
          uVar1 = 8;
          if (0xf < uVar4 * 3) {
            uVar1 = uVar4 * 3 >> 1;
          }
          *param_5 = uVar1;
          lVar3 = FUN_0038c7f0(*param_3);
          *param_3 = lVar3;
          uVar4 = *param_4;
        }
        else {
          lVar3 = *param_3;
        }
        *param_4 = uVar4 + 1;
        *(undefined1 *)(lVar3 + uVar4) = 0x30;
        uVar4 = *param_4;
        if (uVar4 == *param_5) {
          uVar1 = 8;
          if (0xf < uVar4 * 3) {
            uVar1 = uVar4 * 3 >> 1;
          }
          *param_5 = uVar1;
          lVar3 = FUN_0038c7f0(*param_3);
          *param_3 = lVar3;
          uVar4 = *param_4;
        }
        else {
          lVar3 = *param_3;
        }
        *param_4 = uVar4 + 1;
        *(undefined1 *)(lVar3 + uVar4) = 0x30;
        cVar2 = "0123456789abcdef"[*param_1 >> 4];
        uVar4 = *param_4;
        if (uVar4 == *param_5) {
          uVar1 = 8;
          if (0xf < uVar4 * 3) {
            uVar1 = uVar4 * 3 >> 1;
          }
          *param_5 = uVar1;
          lVar3 = FUN_0038c7f0(*param_3);
          *param_3 = lVar3;
          uVar4 = *param_4;
        }
        else {
          lVar3 = *param_3;
        }
        *param_4 = uVar4 + 1;
        *(char *)(lVar3 + uVar4) = cVar2;
        bVar6 = "0123456789abcdef"[(ulong)*param_1 & 0xf];
        uVar4 = *param_4;
        if (uVar4 == *param_5) goto LAB_00352c10;
LAB_00352ca0:
        lVar3 = *param_3;
        goto LAB_00352c34;
      case 0xc:
        uVar4 = *param_4;
        if (uVar4 == *param_5) {
          uVar1 = 8;
          if (0xf < uVar4 * 3) {
            uVar1 = uVar4 * 3 >> 1;
          }
          *param_5 = uVar1;
          lVar3 = FUN_0038c7f0(*param_3);
          *param_3 = lVar3;
          uVar4 = *param_4;
        }
        else {
          lVar3 = *param_3;
        }
        pbVar5 = (byte *)(lVar3 + uVar4);
        *param_4 = uVar4 + 1;
        bVar6 = 0x66;
        break;
      case 0xd:
        uVar4 = *param_4;
        if (uVar4 == *param_5) {
          uVar1 = 8;
          if (0xf < uVar4 * 3) {
            uVar1 = uVar4 * 3 >> 1;
          }
          *param_5 = uVar1;
          lVar3 = FUN_0038c7f0(*param_3);
          *param_3 = lVar3;
          uVar4 = *param_4;
        }
        else {
          lVar3 = *param_3;
        }
        pbVar5 = (byte *)(lVar3 + uVar4);
        *param_4 = uVar4 + 1;
        bVar6 = 0x72;
      }
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
    *pbVar5 = bVar6;
  } while( true );
}



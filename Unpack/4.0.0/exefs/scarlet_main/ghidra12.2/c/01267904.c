/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01267904; name: FUN_01267904
 */


void FUN_01267904(undefined4 *param_1,ulong *param_2,long *param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar3 = *param_3;
  lVar7 = param_3[2];
  cVar1 = *(char *)(lVar3 + lVar7);
  param_3[2] = lVar7 + 1;
  if (cVar1 == -0x47) {
    bVar2 = *(byte *)(lVar3 + lVar7 + 1);
    uVar6 = (ulong)bVar2;
    lVar4 = lVar7 + 2;
    param_3[2] = lVar4;
    if (0x83 < uVar6) goto LAB_012679d0;
    switch(bVar2) {
    case 0x80:
      uVar6 = (ulong)*(byte *)(lVar3 + lVar4);
      lVar4 = lVar7 + 3;
      break;
    case 0x81:
      uVar6 = (ulong)*(ushort *)(lVar3 + lVar4);
      lVar4 = lVar7 + 4;
      break;
    case 0x82:
      uVar6 = (ulong)*(uint *)(lVar3 + lVar4);
      lVar4 = lVar7 + 6;
      break;
    case 0x83:
      uVar6 = *(ulong *)(lVar3 + lVar4);
      lVar4 = lVar7 + 10;
      break;
    default:
      goto switchD_0126798c_default;
    }
    param_3[2] = lVar4;
switchD_0126798c_default:
    if (uVar6 != 1) {
      uVar5 = 5;
      goto LAB_01267970;
    }
    bVar2 = *(byte *)(lVar3 + lVar4);
    lVar7 = lVar4 + 1;
    param_3[2] = lVar7;
    if ((ulong)bVar2 < 0x84) {
      switch(bVar2) {
      case 0x80:
        uVar6 = (ulong)*(byte *)(lVar3 + lVar7);
        lVar4 = lVar4 + 2;
        break;
      case 0x81:
        uVar6 = (ulong)*(ushort *)(lVar3 + lVar7);
        lVar4 = lVar4 + 3;
        break;
      case 0x82:
        uVar6 = (ulong)*(uint *)(lVar3 + lVar7);
        lVar4 = lVar4 + 5;
        break;
      case 0x83:
        uVar6 = *(ulong *)(lVar3 + lVar7);
        lVar4 = lVar4 + 9;
        break;
      default:
        uVar5 = 0;
        *param_2 = (ulong)bVar2;
        goto LAB_01267970;
      }
      uVar5 = 0;
      param_3[2] = lVar4;
      *param_2 = uVar6;
      goto LAB_01267970;
    }
  }
LAB_012679d0:
  uVar5 = 1;
LAB_01267970:
  *param_1 = uVar5;
  return;
}



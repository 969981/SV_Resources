/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021eee50; name: FUN_021eee50
 */


int FUN_021eee50(long *param_1,char param_2)

{
  short sVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  
  if ((char)param_1[0x12] == '\0') {
    iVar5 = 0;
  }
  else if (param_2 == '\0') {
    uVar6 = 0;
    iVar5 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x68))(param_1,uVar6);
      if (lVar3 != 0) {
        if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0x70) + 0x10) + 4) >> 2 & 1) == 0) {
          sVar1 = FUN_00cf44f4();
          uVar2 = (uint)(sVar1 == 0);
        }
        else {
          uVar2 = 0;
        }
        iVar5 = iVar5 + (uVar2 ^ 1);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(byte *)(param_1 + 0x12));
  }
  else {
    uVar6 = 0;
    iVar5 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x68))(param_1,uVar6);
      if ((lVar3 == 0) ||
         (((*(byte *)(*(long *)(*(long *)(lVar3 + 0x70) + 0x10) + 4) >> 2 & 1) == 0 &&
          (sVar1 = FUN_00cf44f4(), sVar1 == 0)))) goto switchD_021eeee0_default;
      switch(param_2) {
      case '\x01':
        uVar4 = FUN_00cf4cfc(*(undefined8 *)(lVar3 + 0x70));
        if (((uVar4 & 1) == 0) &&
           ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0x70) + 0x10) + 4) >> 2 & 1) == 0)) {
          uVar2 = FUN_0174fe20(lVar3);
          uVar2 = ~uVar2;
          goto LAB_021eef8c;
        }
        goto switchD_021eeee0_default;
      case '\x02':
        uVar2 = FUN_00cf4cfc(*(undefined8 *)(lVar3 + 0x70));
        uVar2 = (uint)((*(byte *)(*(long *)(*(long *)(lVar3 + 0x70) + 0x10) + 4) & 4) == 0) &
                (uVar2 ^ 0xffffffff);
        break;
      case '\x03':
        uVar2 = FUN_00cf4cfc(*(undefined8 *)(lVar3 + 0x70));
        uVar2 = uVar2 & (*(byte *)(*(long *)(*(long *)(lVar3 + 0x70) + 0x10) + 4) & 4) == 0;
        break;
      case '\x04':
        FUN_00cf4cfc(*(undefined8 *)(lVar3 + 0x70));
        uVar2 = *(ushort *)(*(long *)(*(long *)(lVar3 + 0x70) + 0x10) + 4) >> 2 & 1;
        break;
      case '\x05':
        uVar2 = FUN_00cf4cfc(*(undefined8 *)(lVar3 + 0x70));
        uVar2 = uVar2 | *(byte *)(*(long *)(*(long *)(lVar3 + 0x70) + 0x10) + 4) >> 2;
LAB_021eef8c:
        uVar2 = uVar2 & 1;
        break;
      default:
        goto switchD_021eeee0_default;
      }
      iVar5 = iVar5 + uVar2;
switchD_021eeee0_default:
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(byte *)(param_1 + 0x12));
  }
  return iVar5;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00412f30; name: FUN_00412f30
 */


undefined8 FUN_00412f30(long param_1,undefined8 param_2,byte *param_3,ulong param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  if (param_4 == 0) {
    uVar9 = 100;
    uVar10 = 0x118;
LAB_00413068:
    FUN_004806c0(0x10,0x67,uVar9,"external/openssl/crypto/ec/ecp_oct.c",uVar10);
    return 0;
  }
  bVar3 = *param_3;
  if ((bVar3 & 0xfc | 4) != 4) {
    uVar9 = 0x66;
    uVar10 = 0x121;
    goto LAB_00413068;
  }
  if ((bVar3 & 0xfb) == 1) {
    uVar9 = 0x66;
    uVar10 = 0x125;
    goto LAB_00413068;
  }
  uVar6 = bVar3 & 0xfe;
  if ((bVar3 & 0xfe) == 0) {
    if (param_4 == 1) {
      uVar9 = FUN_0040daf0(param_1,param_2);
      return uVar9;
    }
    uVar9 = 0x66;
    uVar10 = 299;
    goto LAB_00413068;
  }
  iVar5 = FUN_003eb2b0(*(undefined8 *)(param_1 + 0x40));
  uVar1 = iVar5 + 0xe;
  if (-1 < (int)(iVar5 + 7U)) {
    uVar1 = iVar5 + 7U;
  }
  uVar4 = (long)((ulong)uVar1 << 0x20) >> 0x23;
  uVar2 = uVar4 << 1 | 1;
  if (uVar6 == 2) {
    uVar2 = uVar4 + 1;
  }
  if (uVar2 != param_4) {
    uVar9 = 0x66;
    uVar10 = 0x138;
    goto LAB_00413068;
  }
  if (param_5 == 0) {
    param_5 = FUN_003ed1c0();
    lVar11 = param_5;
    if (param_5 == 0) {
      return 0;
    }
  }
  else {
    lVar11 = 0;
  }
  FUN_003ed410(param_5);
  uVar9 = FUN_003ed5c0(param_5);
  lVar7 = FUN_003ed5c0(param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_003eba50(param_3 + 1,uVar4 & 0xffffffff,uVar9);
    if (lVar8 != 0) {
      iVar5 = FUN_003ebf10(uVar9,*(undefined8 *)(param_1 + 0x40));
      if (iVar5 < 0) {
        uVar1 = bVar3 & 1;
        if (uVar6 == 2) {
          iVar5 = FUN_0040f860(param_1,param_2,uVar9,uVar1,param_5);
joined_r0x004131c0:
          if (iVar5 != 0) {
            uVar9 = 1;
            goto LAB_00413110;
          }
        }
        else {
          lVar8 = FUN_003eba50(param_3 + 1 + uVar4,uVar4 & 0xffffffff,lVar7);
          if (lVar8 != 0) {
            iVar5 = FUN_003ebf10(lVar7,*(undefined8 *)(param_1 + 0x40));
            if (iVar5 < 0) {
              if ((uVar6 != 6) || (uVar6 = FUN_003ec640(lVar7), uVar1 == uVar6)) {
                iVar5 = FUN_0040dbd0(param_1,param_2,uVar9,lVar7,param_5);
                goto joined_r0x004131c0;
              }
              uVar9 = 0x15b;
            }
            else {
              uVar9 = 0x156;
            }
            goto LAB_00413104;
          }
        }
      }
      else {
        uVar9 = 0x14b;
LAB_00413104:
        FUN_004806c0(0x10,0x67,0x66,"external/openssl/crypto/ec/ecp_oct.c",uVar9);
      }
    }
  }
  uVar9 = 0;
LAB_00413110:
  FUN_003ed530(param_5);
  FUN_003ed280(lVar11);
  return uVar9;
}



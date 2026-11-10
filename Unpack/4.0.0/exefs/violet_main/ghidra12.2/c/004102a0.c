/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004102a0; name: FUN_004102a0
 */


undefined8 FUN_004102a0(long *param_1,undefined8 param_2,byte *param_3,ulong param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  if (param_4 == 0) {
    uVar10 = 100;
    uVar11 = 0xf7;
LAB_004103e4:
    FUN_004806c0(0x10,0xa0,uVar10,"external/openssl/crypto/ec/ec2_oct.c",uVar11);
    return 0;
  }
  bVar3 = *param_3;
  if ((bVar3 & 0xfc | 4) != 4) {
    uVar10 = 0x66;
    uVar11 = 0x10c;
    goto LAB_004103e4;
  }
  if ((bVar3 & 0xfb) == 1) {
    uVar10 = 0x66;
    uVar11 = 0x110;
    goto LAB_004103e4;
  }
  uVar7 = bVar3 & 0xfe;
  if ((bVar3 & 0xfe) == 0) {
    if (param_4 == 1) {
      uVar10 = FUN_0040daf0(param_1,param_2);
      return uVar10;
    }
    uVar10 = 0x66;
    uVar11 = 0x117;
    goto LAB_004103e4;
  }
  iVar5 = FUN_0040d720(param_1);
  uVar1 = iVar5 + 0xe;
  if (-1 < (int)(iVar5 + 7U)) {
    uVar1 = iVar5 + 7U;
  }
  uVar4 = (long)((ulong)uVar1 << 0x20) >> 0x23;
  uVar2 = uVar4 << 1 | 1;
  if (uVar7 == 2) {
    uVar2 = uVar4 + 1;
  }
  if (uVar2 != param_4) {
    uVar10 = 0x66;
    uVar11 = 0x125;
    goto LAB_004103e4;
  }
  if (param_5 == 0) {
    param_5 = FUN_003ed1c0();
    lVar12 = param_5;
    if (param_5 == 0) {
      return 0;
    }
  }
  else {
    lVar12 = 0;
  }
  FUN_003ed410(param_5);
  uVar10 = FUN_003ed5c0(param_5);
  uVar11 = FUN_003ed5c0(param_5);
  lVar8 = FUN_003ed5c0(param_5);
  if (lVar8 != 0) {
    lVar9 = FUN_003eba50(param_3 + 1,uVar4 & 0xffffffff,uVar10);
    if (lVar9 != 0) {
      iVar6 = FUN_003eb2b0(uVar10);
      if (iVar5 < iVar6) {
        FUN_004806c0(0x10,0xa0,0x66,"external/openssl/crypto/ec/ec2_oct.c",0x139);
      }
      else {
        uVar1 = bVar3 & 1;
        if (uVar7 == 2) {
          iVar5 = FUN_0040f860(param_1,param_2,uVar10,uVar1,param_5);
joined_r0x004105b4:
          if (iVar5 != 0) {
            uVar10 = 1;
            goto LAB_004104a4;
          }
        }
        else {
          lVar9 = FUN_003eba50(param_3 + 1 + uVar4,uVar4 & 0xffffffff,uVar11);
          if (lVar9 != 0) {
            iVar6 = FUN_003eb2b0(uVar11);
            if (iVar5 < iVar6) {
              uVar11 = 0xa0;
              uVar10 = 0x144;
            }
            else {
              if (uVar7 != 6) {
LAB_0041059c:
                iVar5 = FUN_0040dbd0(param_1,param_2,uVar10,uVar11,param_5);
                goto joined_r0x004105b4;
              }
              iVar5 = FUN_003eb480(uVar10);
              if (iVar5 == 0) {
                iVar5 = (**(code **)(*param_1 + 0x118))(param_1,lVar8,uVar11,uVar10,param_5);
                if (iVar5 == 0) goto LAB_004104a0;
                uVar7 = FUN_003ec640(lVar8);
                if (uVar1 == uVar7) goto LAB_0041059c;
                uVar10 = 0x156;
              }
              else {
                if ((bVar3 & 1) == 0) goto LAB_0041059c;
                uVar10 = 0x14f;
              }
              uVar11 = 0x10;
            }
            FUN_004806c0(0x10,uVar11,0x66,"external/openssl/crypto/ec/ec2_oct.c",uVar10);
          }
        }
      }
    }
  }
LAB_004104a0:
  uVar10 = 0;
LAB_004104a4:
  FUN_003ed530(param_5);
  FUN_003ed280(lVar12);
  return uVar10;
}



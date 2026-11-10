/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ff2f0; name: FUN_003ff2f0
 */


bool FUN_003ff2f0(int param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  byte local_54 [4];
  
  if (param_3 == 0) {
    if ((param_4 == -1) && (param_5 == 0)) {
      FUN_003eb9f0(param_2,0);
      return true;
    }
LAB_003ff3bc:
    FUN_004806c0(3,0x7f,0x76,"external/openssl/crypto/bn/bn_rand.c",0x5d);
    return false;
  }
  if ((param_3 < 0) || ((uVar9 = param_3 - 1, uVar9 == 0 && (0 < param_4)))) goto LAB_003ff3bc;
  uVar10 = param_3 + 0xe;
  if (-1 < (int)(param_3 + 7U)) {
    uVar10 = param_3 + 7U;
  }
  uVar2 = (long)((ulong)uVar10 << 0x20) >> 0x23;
  uVar1 = param_3 + 6;
  if (-1 < (int)uVar9) {
    uVar1 = uVar9;
  }
  pbVar6 = (byte *)FUN_00452c30(uVar2,"external/openssl/crypto/bn/bn_rand.c",0x27);
  if (pbVar6 == (byte *)0x0) {
    FUN_004806c0(3,0x7f,0x41,"external/openssl/crypto/bn/bn_rand.c",0x29);
    bVar4 = false;
    goto LAB_003ff4fc;
  }
  uVar10 = (int)uVar10 >> 3;
  if (param_1 == 0) {
    iVar5 = FUN_00464f80(pbVar6,uVar2 & 0xffffffff);
    if (iVar5 < 1) goto LAB_003ff498;
  }
  else {
    iVar5 = FUN_00464e30();
    if (iVar5 < 1) {
LAB_003ff498:
      bVar4 = false;
      goto LAB_003ff4fc;
    }
    if (param_1 == 1) {
      uVar11 = 0;
      if ((int)uVar10 < 2) {
        uVar10 = 1;
      }
      do {
        iVar5 = FUN_00464f80(local_54,1);
        if (iVar5 < 1) goto LAB_003ff498;
        if ((uVar11 == 0) || (-1 < (char)local_54[0])) {
          if (local_54[0] < 0x2a) {
            bVar8 = 0;
            goto LAB_003ff3e8;
          }
          if (local_54[0] < 0x54) {
            bVar8 = 0xff;
            goto LAB_003ff3e8;
          }
        }
        else {
          bVar8 = pbVar6[(int)uVar11 - 1];
LAB_003ff3e8:
          pbVar6[uVar11] = bVar8;
        }
        uVar11 = uVar11 + 1;
      } while (uVar10 != uVar11);
    }
  }
  uVar9 = uVar9 - (uVar1 & 0xfffffff8);
  bVar8 = (byte)(0xff << (ulong)(uVar9 + 1 & 0x1f));
  if (param_4 < 0) {
    *pbVar6 = *pbVar6 & (bVar8 ^ 0xff);
  }
  else {
    if (param_4 == 0) {
      iVar5 = 1;
    }
    else {
      if (uVar9 == 0) {
        *pbVar6 = 1;
        pbVar6[1] = pbVar6[1] | 0x80;
        *pbVar6 = 1;
        goto joined_r0x003ff550;
      }
      uVar9 = uVar9 - 1;
      iVar5 = 3;
    }
    bVar3 = *pbVar6 | (byte)(iVar5 << (ulong)(uVar9 & 0x1f));
    *pbVar6 = bVar3;
    *pbVar6 = bVar3 & (bVar8 ^ 0xff);
  }
joined_r0x003ff550:
  if (param_5 != 0) {
    pbVar6[uVar2 - 1] = pbVar6[uVar2 - 1] | 1;
  }
  lVar7 = FUN_003eba50(pbVar6,uVar2 & 0xffffffff,param_2);
  bVar4 = lVar7 != 0;
LAB_003ff4fc:
  FUN_00453260(pbVar6,uVar2,"external/openssl/crypto/bn/bn_rand.c",0x58);
  return bVar4;
}



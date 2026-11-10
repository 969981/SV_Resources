/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049b0f0; name: FUN_0049b0f0
 */


undefined8 FUN_0049b0f0(undefined8 param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  size_t sVar6;
  size_t sVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *__s;
  byte *pbVar11;
  undefined8 local_48;
  
  local_48 = 0;
  pbVar5 = (byte *)FUN_0045abd0(param_1,"external/openssl/crypto/x509v3/v3_utl.c",0x141);
  if (pbVar5 != (byte *)0x0) {
    iVar3 = 1;
    __s = (byte *)0x0;
    pbVar10 = pbVar5;
    pbVar11 = pbVar5;
LAB_0049b18c:
    do {
      bVar2 = *pbVar11;
      if (!(0xd < bVar2 || (1 << (ulong)(bVar2 & 0x1f) & 0x2401U) == 0)) goto LAB_0049b3e0;
      if (iVar3 != 2) {
        if (iVar3 == 1) {
          if (bVar2 == 0x2c) {
            *pbVar11 = 0;
            bVar2 = *pbVar10;
            if (bVar2 != 0) {
              __s = pbVar10;
              while (iVar3 = FUN_003f6e20(bVar2,8), iVar3 != 0) {
                __s = __s + 1;
                bVar2 = *__s;
                if (bVar2 == 0) goto LAB_0049b384;
              }
              if (*__s != 0) {
                sVar6 = strlen((char *)__s);
                do {
                  sVar7 = sVar6;
                  if (sVar7 - 1 == 0) goto LAB_0049b328;
                  iVar3 = FUN_003f6e20(__s[sVar7 - 1],8);
                  sVar6 = sVar7 - 1;
                } while (iVar3 != 0);
                __s[sVar7] = 0;
LAB_0049b328:
                if (*__s != 0) {
                  pbVar10 = pbVar11 + 1;
                  FUN_0049a850(__s,0,0,&local_48);
                  goto LAB_0049b184;
                }
              }
            }
LAB_0049b384:
            uVar8 = 0x6c;
            uVar9 = 0x15e;
            goto LAB_0049b39c;
          }
          if (bVar2 == 0x3a) {
            *pbVar11 = 0;
            bVar2 = *pbVar10;
            if (bVar2 != 0) {
              while (iVar3 = FUN_003f6e20(bVar2,8), iVar3 != 0) {
                pbVar10 = pbVar10 + 1;
                bVar2 = *pbVar10;
                if (bVar2 == 0) goto LAB_0049b368;
              }
              if (*pbVar10 != 0) {
                sVar6 = strlen((char *)pbVar10);
                do {
                  sVar7 = sVar6;
                  if (sVar7 - 1 == 0) goto LAB_0049b2d4;
                  iVar3 = FUN_003f6e20(pbVar10[sVar7 - 1],8);
                  sVar6 = sVar7 - 1;
                } while (iVar3 != 0);
                pbVar10[sVar7] = 0;
LAB_0049b2d4:
                if (*pbVar10 != 0) {
                  pbVar1 = pbVar11 + 1;
                  iVar3 = 2;
                  pbVar11 = pbVar11 + 1;
                  __s = pbVar10;
                  pbVar10 = pbVar1;
                  goto LAB_0049b18c;
                }
              }
            }
LAB_0049b368:
            uVar8 = 0x6c;
            uVar9 = 0x154;
            goto LAB_0049b39c;
          }
LAB_0049b184:
          iVar3 = 1;
        }
        pbVar11 = pbVar11 + 1;
        goto LAB_0049b18c;
      }
      if (bVar2 == 0x2c) {
        *pbVar11 = 0;
        bVar2 = *pbVar10;
        if (bVar2 != 0) {
          while (iVar3 = FUN_003f6e20(bVar2,8), iVar3 != 0) {
            pbVar10 = pbVar10 + 1;
            bVar2 = *pbVar10;
            if (bVar2 == 0) goto LAB_0049b34c;
          }
          if (*pbVar10 != 0) {
            sVar6 = strlen((char *)pbVar10);
            do {
              sVar7 = sVar6;
              if (sVar7 - 1 == 0) goto LAB_0049b158;
              iVar3 = FUN_003f6e20(pbVar10[sVar7 - 1],8);
              sVar6 = sVar7 - 1;
            } while (iVar3 != 0);
            pbVar10[sVar7] = 0;
LAB_0049b158:
            if (*pbVar10 != 0) {
              sVar6 = strlen((char *)pbVar10);
              FUN_0049a850(__s,pbVar10,sVar6,&local_48);
              __s = (byte *)0x0;
              pbVar10 = pbVar11 + 1;
              goto LAB_0049b184;
            }
          }
        }
LAB_0049b34c:
        uVar9 = 0x16c;
        uVar8 = 0x6d;
        goto LAB_0049b39c;
      }
      iVar3 = 2;
      pbVar11 = pbVar11 + 1;
    } while( true );
  }
  uVar8 = 0x41;
  uVar9 = 0x143;
  goto LAB_0049b39c;
LAB_0049b3e0:
  bVar2 = *pbVar10;
  while (bVar2 != 0) {
    iVar4 = FUN_003f6e20(bVar2,8);
    if (iVar4 == 0) {
      if (*pbVar10 != 0) {
        sVar6 = strlen((char *)pbVar10);
        goto LAB_0049b414;
      }
      break;
    }
    pbVar10 = pbVar10 + 1;
    bVar2 = *pbVar10;
  }
  pbVar11 = (byte *)0x0;
  goto LAB_0049b454;
  while( true ) {
    iVar4 = FUN_003f6e20(pbVar10[sVar7 - 1],8);
    sVar6 = sVar7 - 1;
    if (iVar4 == 0) break;
LAB_0049b414:
    sVar7 = sVar6;
    if (sVar7 - 1 == 0) goto LAB_0049b440;
  }
  pbVar10[sVar7] = 0;
LAB_0049b440:
  pbVar11 = (byte *)0x0;
  if (*pbVar10 != 0) {
    pbVar11 = pbVar10;
  }
LAB_0049b454:
  if (iVar3 == 2) {
    if (pbVar11 != (byte *)0x0) {
      sVar6 = strlen((char *)pbVar11);
      pbVar10 = pbVar11;
      goto LAB_0049b490;
    }
    uVar9 = 0x17b;
    uVar8 = 0x6d;
  }
  else {
    if (pbVar11 != (byte *)0x0) {
      pbVar10 = (byte *)0x0;
      sVar6 = 0;
      __s = pbVar11;
LAB_0049b490:
      FUN_0049a850(__s,pbVar10,sVar6,&local_48);
      FUN_00452f80(pbVar5,"external/openssl/crypto/x509v3/v3_utl.c",0x187);
      return local_48;
    }
    uVar8 = 0x6c;
    uVar9 = 0x182;
  }
LAB_0049b39c:
  FUN_004806c0(0x22,0x6d,uVar8,"external/openssl/crypto/x509v3/v3_utl.c",uVar9);
  FUN_00452f80(pbVar5,"external/openssl/crypto/x509v3/v3_utl.c",0x18b);
  FUN_0047e3b0(local_48,PTR_LAB_047cd418);
  return 0;
}



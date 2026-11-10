/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b8510; name: FUN_003b8510
 */


undefined4 FUN_003b8510(long param_1,long param_2)

{
  char *__s1;
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  size_t sVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_80;
  char *local_78;
  size_t local_70;
  void *local_68;
  
  local_70 = 0;
  local_68 = (void *)0x0;
  local_80 = 0;
  local_78 = (char *)0x0;
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_004806c0(0x14,0x151,0x43,"external/openssl/ssl/ssl_rsa.c",0x389);
    lVar5 = 0;
    uVar2 = 0;
    lVar3 = 0;
    goto LAB_003b8848;
  }
  FUN_003ea5c0();
  lVar3 = FUN_003e8a30();
  if (lVar3 == 0) {
    uVar7 = 0x38f;
    uVar6 = 7;
LAB_003b8750:
    FUN_004806c0(0x14,0x151,uVar6,"external/openssl/ssl/ssl_rsa.c",uVar7);
    lVar5 = 0;
  }
  else {
    iVar1 = FUN_003e9560(lVar3,0x6c,3,param_2);
    if (iVar1 < 1) {
      uVar7 = 0x393;
      uVar6 = 2;
      goto LAB_003b8750;
    }
    iVar1 = FUN_0045e620(lVar3,&local_78,&local_80,&local_68,&local_70);
    if (iVar1 == 0) {
      lVar5 = 0;
    }
    else {
      lVar10 = 0;
      lVar11 = 0;
      lVar9 = 0;
      lVar8 = 0;
      do {
        __s1 = local_78;
        sVar4 = strlen(local_78);
        if (sVar4 < 0xf) {
          uVar6 = 0x188;
          uVar7 = 0x3a8;
          goto LAB_003b8840;
        }
        iVar1 = strncmp(__s1,"SERVERINFO FOR ",0xf);
        if (iVar1 == 0) {
          if (((long)local_70 < 4) ||
             ((((ulong)*(ushort *)((long)local_68 + 2) & 0xff00) << 0x28 |
              (ulong)*(ushort *)((long)local_68 + 2) << 0x38) >> 0x30 != local_70 - 4)) {
            uVar6 = 0x186;
            uVar7 = 0x3c2;
            goto LAB_003b8840;
          }
          lVar11 = 4;
        }
        else {
          if (sVar4 < 0x11) {
            uVar6 = 0x188;
            uVar7 = 0x3b0;
            goto LAB_003b8840;
          }
          iVar1 = strncmp(__s1,"SERVERINFOV2 FOR ",0x11);
          if (iVar1 != 0) {
            uVar6 = 0x187;
            uVar7 = 0x3b5;
            goto LAB_003b8840;
          }
          if (((long)local_70 < 8) ||
             ((((ulong)*(ushort *)((long)local_68 + 6) & 0xff00) << 0x28 |
              (ulong)*(ushort *)((long)local_68 + 6) << 0x38) >> 0x30 != local_70 - 8)) {
            uVar6 = 0x186;
            uVar7 = 0x3cf;
            goto LAB_003b8840;
          }
        }
        lVar5 = FUN_00452db0(lVar8,lVar11 + lVar9 + local_70,"external/openssl/ssl/ssl_rsa.c",0x3d5)
        ;
        if (lVar5 == 0) {
          uVar6 = 0x41;
          uVar7 = 0x3d7;
          goto LAB_003b8840;
        }
        if (lVar11 != 0) {
          *(undefined4 *)(lVar5 + lVar9) = 0xd0010000;
        }
        memcpy((void *)(lVar5 + lVar9 + lVar11),local_68,local_70);
        lVar9 = lVar11 + lVar9 + local_70;
        FUN_00452f80(local_78,"external/openssl/ssl/ssl_rsa.c",1000);
        local_78 = (char *)0x0;
        FUN_00452f80(local_80,"external/openssl/ssl/ssl_rsa.c",0x3ea);
        local_80 = 0;
        FUN_00452f80(local_68,"external/openssl/ssl/ssl_rsa.c",0x3ec);
        local_68 = (void *)0x0;
        iVar1 = FUN_0045e620(lVar3,&local_78,&local_80,&local_68,&local_70);
        lVar10 = lVar10 + -1;
        lVar8 = lVar5;
      } while (iVar1 != 0);
      if (lVar10 != 0) {
        uVar2 = FUN_003b81d0(param_1,2,lVar5,lVar9);
        goto LAB_003b8848;
      }
    }
    uVar6 = 0x185;
    uVar7 = 0x3a1;
    lVar8 = lVar5;
LAB_003b8840:
    FUN_004806c0(0x14,0x151,uVar6,"external/openssl/ssl/ssl_rsa.c",uVar7);
    lVar5 = lVar8;
  }
  uVar2 = 0;
LAB_003b8848:
  FUN_00452f80(local_78,"external/openssl/ssl/ssl_rsa.c",0x3f4);
  FUN_00452f80(local_80,"external/openssl/ssl/ssl_rsa.c",0x3f5);
  FUN_00452f80(local_68,"external/openssl/ssl/ssl_rsa.c",0x3f6);
  FUN_00452f80(lVar5,"external/openssl/ssl/ssl_rsa.c",0x3f7);
  FUN_003e8b90(lVar3);
  return uVar2;
}



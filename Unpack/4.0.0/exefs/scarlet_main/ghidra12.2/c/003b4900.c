/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b4900; name: FUN_003b4900
 */


long * FUN_003b4900(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == 0) {
    FUN_004806c0(0x14,0xa9,0xc4,"external/openssl/ssl/ssl_lib.c",0xc2d);
    return (long *)0x0;
  }
  iVar1 = FUN_003b20f0(0x200000,0);
  if (iVar1 == 0) {
    return (long *)0x0;
  }
  iVar1 = FUN_003adb00();
  if (iVar1 < 0) {
    FUN_004806c0(0x14,0xa9,0x10d,"external/openssl/ssl/ssl_lib.c",0xc35);
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = (long *)FUN_00452ce0(1000,"external/openssl/ssl/ssl_lib.c",0xc38);
    uVar4 = DAT_03cb5380;
    if (plVar2 != (long *)0x0) {
      *plVar2 = param_1;
      *(undefined4 *)((long)plVar2 + 0x134) = 0;
      *(undefined8 *)((long)plVar2 + 300) = uVar4;
      *(undefined4 *)(plVar2 + 9) = 2;
      plVar2[6] = 0x5000;
      lVar3 = (**(code **)(param_1 + 0xb8))();
      plVar2[10] = lVar3;
      *(undefined4 *)((long)plVar2 + 0x9c) = 1;
      lVar3 = FUN_0047e540();
      plVar2[0x6f] = lVar3;
      if (lVar3 == 0) {
        FUN_004806c0(0x14,0xa9,0x41,"external/openssl/ssl/ssl_lib.c",0xc47);
        FUN_00452f80(plVar2,"external/openssl/ssl/ssl_lib.c",0xc48);
        return (long *)0x0;
      }
      plVar2[0x27] = 0x19000;
      *(undefined4 *)(plVar2 + 0x2c) = 0;
      lVar3 = FUN_003adb90();
      plVar2[0x28] = lVar3;
      if (lVar3 != 0) {
        lVar3 = FUN_004513d0(FUN_003b4c70,&LAB_003b4ca0);
        plVar2[5] = lVar3;
        if (lVar3 != 0) {
          lVar3 = FUN_00484450();
          plVar2[4] = lVar3;
          if ((lVar3 != 0) &&
             (iVar1 = FUN_003b01a0(plVar2,
                                   "TLS_AES_256_GCM_SHA384:TLS_CHACHA20_POLY1305_SHA256:TLS_AES_128_GCM_SHA256"
                                  ), iVar1 != 0)) {
            lVar3 = FUN_003b0430(*plVar2,plVar2[3],plVar2 + 1,plVar2 + 2,
                                 "ALL:!COMPLEMENTOFDEFAULT:!eNULL",plVar2[0x28]);
            if ((lVar3 == 0) || (iVar1 = FUN_0047e430(plVar2[1]), iVar1 < 1)) {
              uVar4 = 0xa1;
              uVar5 = 0xc64;
              goto LAB_003b4bc8;
            }
            lVar3 = FUN_00489cf0();
            plVar2[0x34] = lVar3;
            if (lVar3 != 0) {
              lVar3 = FUN_0043d130("ssl3-md5");
              plVar2[0x1e] = lVar3;
              if (lVar3 == 0) {
                uVar4 = 0xf2;
                uVar5 = 0xc6d;
                goto LAB_003b4bc8;
              }
              lVar3 = FUN_0043d130("ssl3-sha1");
              plVar2[0x1f] = lVar3;
              if (lVar3 == 0) {
                uVar4 = 0xf3;
                uVar5 = 0xc71;
                goto LAB_003b4bc8;
              }
              lVar3 = FUN_0047dcc0();
              plVar2[0x23] = lVar3;
              if (lVar3 != 0) {
                lVar3 = FUN_0047dcc0();
                plVar2[0x24] = lVar3;
                if ((lVar3 != 0) && (iVar1 = FUN_00444640(1,plVar2,plVar2 + 0x1d), iVar1 != 0)) {
                  lVar3 = thunk_FUN_00452ce0(0x40,"external/openssl/ssl/ssl_lib.c",0xc7e);
                  plVar2[0x40] = lVar3;
                  if (lVar3 != 0) {
                    if ((*(byte *)(*(long *)(param_1 + 0xc0) + 0x60) >> 3 & 1) == 0) {
                      lVar3 = FUN_003b1cb0();
                      plVar2[0x21] = lVar3;
                    }
                    plVar2[0x37] = 0x4000;
                    plVar2[0x36] = 0x4000;
                    iVar1 = FUN_00464f80(plVar2 + 0x3e,0x10);
                    if (((iVar1 < 1) || (iVar1 = FUN_00464e30(plVar2[0x40],0x20), iVar1 < 1)) ||
                       (iVar1 = FUN_00464e30(plVar2[0x40] + 0x20,0x20), iVar1 < 1)) {
                      *(uint *)(plVar2 + 0x25) = *(uint *)(plVar2 + 0x25) | 0x4000;
                    }
                    iVar1 = FUN_00464e30(plVar2 + 0x51,0x20);
                    if ((0 < iVar1) && (iVar1 = FUN_003daa30(plVar2), iVar1 != 0)) {
                      *(uint *)(plVar2 + 0x25) = *(uint *)(plVar2 + 0x25) | 0x120004;
                      lVar3 = DAT_03cb55d8;
                      *(undefined4 *)(plVar2 + 0x44) = 0xffffffff;
                      plVar2[0x78] = 2;
                      plVar2[0x71] = lVar3;
                      FUN_003b61c0(plVar2);
                      return plVar2;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar4 = 0x41;
  uVar5 = 0xcdf;
LAB_003b4bc8:
  FUN_004806c0(0x14,0xa9,uVar4,"external/openssl/ssl/ssl_lib.c",uVar5);
  FUN_003b3320(plVar2);
  return (long *)0x0;
}



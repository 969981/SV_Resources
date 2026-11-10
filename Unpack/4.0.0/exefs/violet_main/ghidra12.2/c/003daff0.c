/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003daff0; name: FUN_003daff0
 */


undefined8
FUN_003daff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            ulong param_5,long param_6,undefined8 param_7,undefined8 param_8,ulong param_9,
            int param_10)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_1e0 [52];
  undefined1 auStack_1ac [324];
  undefined4 local_68 [2];
  
  uVar1 = param_9;
  lVar5 = FUN_00440220(0x40c,0);
  iVar2 = param_10;
  if (lVar5 == 0) {
    return 0;
  }
  if (0xf9 < param_5) {
    if (param_10 == 0) {
      FUN_004806c0(0x14,0x231,0x16f,"external/openssl/ssl/tls13_enc.c",0x40);
    }
    else {
      FUN_003c3950(param_1,0x50,0x231,0x44,"external/openssl/ssl/tls13_enc.c",0x3a);
    }
    FUN_00440340(lVar5);
    return 0;
  }
  uVar3 = FUN_0043b720(param_2);
  iVar4 = FUN_003a2210(auStack_1e0,auStack_1ac,0x143,0);
  if ((((iVar4 != 0) && (iVar4 = FUN_003a26e0(auStack_1e0,uVar1 & 0xffffffff,2), iVar4 != 0)) &&
      (iVar4 = FUN_003a1e80(auStack_1e0,1), iVar4 != 0)) &&
     (((iVar4 = FUN_003a2900(auStack_1e0,"tls13 ",6), iVar4 != 0 &&
       (iVar4 = FUN_003a2900(auStack_1e0,param_4,param_5), iVar4 != 0)) &&
      (iVar4 = FUN_003a1fe0(auStack_1e0), iVar4 != 0)))) {
    uVar6 = 0;
    if (param_6 != 0) {
      uVar6 = param_7;
    }
    iVar4 = FUN_003a29e0(auStack_1e0,param_6,uVar6,1);
    if (((iVar4 != 0) && (iVar4 = FUN_003a2bc0(auStack_1e0,local_68), iVar4 != 0)) &&
       (iVar4 = FUN_003a2510(auStack_1e0), iVar4 != 0)) {
      iVar4 = FUN_0043f8a0(lVar5);
      if ((((iVar4 < 1) || (iVar4 = FUN_00440390(lVar5,0xffffffff,0x400,0x1007,2,0), iVar4 < 1)) ||
          (iVar4 = FUN_00440390(lVar5,0xffffffff,0x400,0x1003,0,param_2), iVar4 < 1)) ||
         ((iVar4 = FUN_00440390(lVar5,0xffffffff,0x400,0x1005,uVar3,param_3), iVar4 < 1 ||
          (iVar4 = FUN_00440390(lVar5,0xffffffff,0x400,0x1006,local_68[0],auStack_1ac), iVar4 < 1)))
         ) {
        FUN_00440340(lVar5);
      }
      else {
        iVar4 = FUN_0043fae0(lVar5,param_8,&param_9);
        FUN_00440340(lVar5);
        if (0 < iVar4) {
          return 1;
        }
      }
      if (iVar2 == 0) {
        uVar6 = 0x6a;
        goto LAB_003db274;
      }
      uVar6 = 0x68;
      goto LAB_003db228;
    }
  }
  FUN_00440340(lVar5);
  FUN_003a2c10(auStack_1e0);
  if (iVar2 == 0) {
    uVar6 = 0x57;
LAB_003db274:
    FUN_004806c0(0x14,0x231,0x44,"external/openssl/ssl/tls13_enc.c",uVar6);
    return 0;
  }
  uVar6 = 0x55;
LAB_003db228:
  FUN_003c3950(param_1,0x50,0x231,0x44,"external/openssl/ssl/tls13_enc.c",uVar6);
  return 0;
}



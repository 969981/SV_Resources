/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003d4ee0; name: FUN_003d4ee0
 */


undefined8
FUN_003d4ee0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
            undefined1 param_13,int param_14)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar1 = param_14;
  lVar3 = FUN_003b0160();
  if (lVar3 == 0) {
    if (iVar1 == 0) {
      FUN_004806c0(0x14,0x11c,0x44,"external/openssl/ssl/t1_enc.c",0x26);
      uVar5 = 0;
    }
    else {
      FUN_003c3950(param_1,0x50,0x11c,0x44,"external/openssl/ssl/t1_enc.c",0x24);
      uVar5 = 0;
    }
  }
  else {
    lVar4 = FUN_00440220(0x3fd,0);
    if ((((((lVar4 == 0) || (iVar2 = FUN_0043f8a0(lVar4), iVar2 < 1)) ||
          (iVar2 = FUN_00440390(lVar4,0xffffffff,0x400,0x1000,0,lVar3), iVar2 < 1)) ||
         ((iVar2 = FUN_00440390(lVar4,0xffffffff,0x400,0x1001,param_11,param_10), iVar2 < 1 ||
          (iVar2 = FUN_00440390(lVar4,0xffffffff,0x400,0x1002,param_3,param_2), iVar2 < 1)))) ||
        ((iVar2 = FUN_00440390(lVar4,0xffffffff,0x400,0x1002,param_5,param_4), iVar2 < 1 ||
         ((iVar2 = FUN_00440390(lVar4,0xffffffff,0x400,0x1002,param_7,param_6), iVar2 < 1 ||
          (iVar2 = FUN_00440390(lVar4,0xffffffff,0x400,0x1002,param_9,param_8), iVar2 < 1)))))) ||
       ((iVar2 = FUN_00440390(lVar4,0xffffffff,0x400,0x1002,0,0), iVar2 < 1 ||
        (iVar2 = FUN_0043fae0(lVar4,param_12,&param_13), iVar2 < 1)))) {
      if (iVar1 == 0) {
        FUN_004806c0(0x14,0x11c,0x44,"external/openssl/ssl/t1_enc.c",0x37);
      }
      else {
        FUN_003c3950(param_1,0x50,0x11c,0x44,"external/openssl/ssl/t1_enc.c",0x35);
      }
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    FUN_00440340(lVar4);
  }
  return uVar5;
}



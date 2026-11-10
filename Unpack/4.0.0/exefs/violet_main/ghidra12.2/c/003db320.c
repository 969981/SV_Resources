/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003db320; name: FUN_003db320
 */


undefined8
FUN_003db320(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4,ulong param_5,
            undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [64];
  ulong local_48;
  
  lVar5 = FUN_00440220(0x40c,0);
  if (lVar5 == 0) {
    uVar7 = 0xb8;
  }
  else {
    uVar3 = FUN_0043b720(param_2);
    if (-1 < (int)uVar3) {
      local_48 = (ulong)uVar3;
      uVar1 = local_48;
      if (param_4 != (undefined *)0x0) {
        uVar1 = param_5;
      }
      puVar8 = &UNK_03cdd21f;
      puVar2 = &UNK_03cdd21f;
      if (param_4 != (undefined *)0x0) {
        puVar2 = param_4;
      }
      uVar9 = 0;
      if (param_3 != 0) {
        lVar6 = FUN_0042bbc0();
        if (((lVar6 == 0) || (iVar4 = FUN_0042bc40(lVar6,param_2,0), iVar4 < 1)) ||
           (iVar4 = FUN_0042be20(lVar6,auStack_d0,0), iVar4 < 1)) {
          FUN_003c3950(param_1,0x50,0x24f,0x44,"external/openssl/ssl/tls13_enc.c",0xd5);
          FUN_0042bbe0(lVar6);
        }
        else {
          FUN_0042bbe0(lVar6);
          iVar4 = FUN_003daff0(param_1,param_2,param_3,"derived",7,auStack_d0,local_48,auStack_90,
                               local_48,1);
          if (iVar4 != 0) {
            uVar9 = local_48 & 0xffffffff;
            puVar8 = auStack_90;
            goto LAB_003db414;
          }
        }
        FUN_00440340(lVar5);
        return 0;
      }
LAB_003db414:
      iVar4 = FUN_0043f8a0(lVar5);
      if ((((iVar4 < 1) || (iVar4 = FUN_00440390(lVar5,0xffffffff,0x400,0x1007,1,0), iVar4 < 1)) ||
          ((iVar4 = FUN_00440390(lVar5,0xffffffff,0x400,0x1003,0,param_2), iVar4 < 1 ||
           ((iVar4 = FUN_00440390(lVar5,0xffffffff,0x400,0x1005,uVar1 & 0xffffffff,puVar2),
            iVar4 < 1 ||
            (iVar4 = FUN_00440390(lVar5,0xffffffff,0x400,0x1004,uVar9,puVar8), iVar4 < 1)))))) ||
         (iVar4 = FUN_0043fae0(lVar5,param_6,&local_48), iVar4 < 1)) {
        FUN_003c3950(param_1,0x50,0x24f,0x44,"external/openssl/ssl/tls13_enc.c",0xf6);
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      FUN_00440340(lVar5);
      if (puVar8 == auStack_90) {
        FUN_00453300(auStack_90,local_48);
        return uVar7;
      }
      return uVar7;
    }
    uVar7 = 0xc0;
  }
  FUN_003c3950(param_1,0x50,0x24f,0x44,"external/openssl/ssl/tls13_enc.c",uVar7);
  return 0;
}



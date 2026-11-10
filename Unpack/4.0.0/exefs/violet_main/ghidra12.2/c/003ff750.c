/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ff750; name: FUN_003ff750
 */


bool FUN_003ff750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined1 auStack_218 [96];
  undefined1 auStack_1b8 [64];
  undefined1 auStack_178 [64];
  undefined1 auStack_138 [216];
  uint local_54;
  
  iVar3 = FUN_003eb2b0(param_2);
  iVar4 = iVar3 + 0xe;
  if (-1 < iVar3 + 7) {
    iVar4 = iVar3 + 7;
  }
  uVar1 = (iVar4 >> 3) + 8;
  lVar5 = FUN_00452c30(uVar1,"external/openssl/crypto/bn/bn_rand.c",0xdf);
  if (lVar5 != 0) {
    iVar4 = FUN_003ebc80(param_3,auStack_218,0x60);
    if (iVar4 < 0) {
      FUN_004806c0(3,0x8c,0x75,"external/openssl/crypto/bn/bn_rand.c",0xea);
    }
    else {
      local_54 = 0;
      if (uVar1 != 0) {
        do {
          iVar4 = FUN_00464e30(auStack_178,0x40);
          if (iVar4 != 1) goto LAB_003ff8d0;
          FUN_00475350(auStack_138);
          FUN_004766e0(auStack_138,&local_54,4);
          FUN_004766e0(auStack_138,auStack_218,0x60);
          FUN_004766e0(auStack_138,param_4,param_5);
          FUN_004766e0(auStack_138,auStack_178,0x40);
          FUN_00475390(auStack_1b8,auStack_138);
          uVar7 = uVar1 - local_54;
          if (0x3f < uVar7) {
            uVar7 = 0x40;
          }
          memcpy((void *)(lVar5 + (ulong)local_54),auStack_1b8,(ulong)uVar7);
          local_54 = uVar7 + local_54;
        } while (local_54 < uVar1);
      }
      lVar6 = FUN_003eba50(lVar5,uVar1,param_1);
      if (lVar6 != 0) {
        iVar4 = FUN_003ed910(0,param_1,param_1,param_2,param_6);
        bVar2 = iVar4 == 1;
        goto LAB_003ff8d4;
      }
    }
  }
LAB_003ff8d0:
  bVar2 = false;
LAB_003ff8d4:
  FUN_00452f80(lVar5,"external/openssl/crypto/bn/bn_rand.c",0x106);
  FUN_00453300(auStack_218,0x60);
  return bVar2;
}



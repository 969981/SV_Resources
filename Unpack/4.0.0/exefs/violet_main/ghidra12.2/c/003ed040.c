/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ed040; name: FUN_003ed040
 */


undefined4 * FUN_003ed040(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  FUN_0047e5c0(param_2);
  puVar5 = (undefined4 *)*param_1;
  FUN_0047e600(param_2);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)FUN_00452c30(0x60,"external/openssl/crypto/bn/bn_mont.c",0xe8);
    if (puVar5 == (undefined4 *)0x0) {
      FUN_004806c0(3,0x95,0x41,"external/openssl/crypto/bn/bn_mont.c",0xe9);
    }
    else {
      puVar1 = puVar5 + 2;
      *puVar5 = 0;
      FUN_003eb5a0(puVar1);
      puVar2 = puVar5 + 8;
      FUN_003eb5a0(puVar2);
      puVar3 = puVar5 + 0xe;
      FUN_003eb5a0(puVar3);
      *(undefined8 *)(puVar5 + 0x14) = 0;
      puVar5[0x16] = 1;
      iVar4 = FUN_003ecd40(puVar5,param_3,param_4);
      if (iVar4 == 0) {
        FUN_003eb490(puVar1);
        FUN_003eb490(puVar2);
        FUN_003eb490(puVar3);
        if ((*(byte *)(puVar5 + 0x16) & 1) == 0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          FUN_00452f80(puVar5,"external/openssl/crypto/bn/bn_mont.c",0x104);
          puVar5 = (undefined4 *)0x0;
        }
      }
      else {
        FUN_0047e5e0(param_2);
        if (*param_1 == 0) {
          *param_1 = (long)puVar5;
        }
        else {
          FUN_003eb490(puVar1);
          FUN_003eb490(puVar2);
          FUN_003eb490(puVar3);
          if ((*(byte *)(puVar5 + 0x16) & 1) != 0) {
            FUN_00452f80(puVar5,"external/openssl/crypto/bn/bn_mont.c",0x104);
          }
          puVar5 = (undefined4 *)*param_1;
        }
        FUN_0047e600(param_2);
      }
    }
  }
  return puVar5;
}



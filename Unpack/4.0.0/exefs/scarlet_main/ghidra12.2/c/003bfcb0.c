/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003bfcb0; name: FUN_003bfcb0
 */


undefined8
FUN_003bfcb0(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_00452c30(0x18,"external/openssl/ssl/statem/extensions_cust.c",0x1a0);
  puVar2 = (undefined8 *)FUN_00452c30(0x10,"external/openssl/ssl/statem/extensions_cust.c",0x1a2);
  if ((puVar1 == (undefined8 *)0x0) || (puVar2 == (undefined8 *)0x0)) {
    FUN_00452f80(puVar1,"external/openssl/ssl/statem/extensions_cust.c",0x1a6);
    uVar3 = 0x1a7;
  }
  else {
    *puVar1 = param_6;
    puVar1[1] = param_4;
    puVar1[2] = param_5;
    *puVar2 = param_8;
    puVar2[1] = param_7;
    uVar3 = FUN_003bfe40(*(undefined8 *)(param_1 + 0x140),param_2,param_3,0x1d0,&LAB_003bfbd0,
                         &LAB_003c0010,puVar1,&LAB_003c0030,puVar2);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    FUN_00452f80(puVar1,"external/openssl/ssl/statem/extensions_cust.c",0x1ba);
    uVar3 = 0x1bb;
  }
  FUN_00452f80(puVar2,"external/openssl/ssl/statem/extensions_cust.c",uVar3);
  return 0;
}



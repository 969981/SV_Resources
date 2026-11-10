/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00445d10; name: FUN_00445d10
 */


long FUN_00445d10(undefined8 param_1,undefined *param_2,int param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined1 auStack_90 [64];
  undefined4 local_44;
  
  lVar1 = 0x47f18e8;
  if (param_6 != 0) {
    lVar1 = param_6;
  }
  plVar4 = (long *)FUN_00445b60();
  if (plVar4 != (long *)0x0) {
    puVar2 = &DAT_03cf702c;
    if (param_3 != 0 || param_2 != (undefined *)0x0) {
      puVar2 = param_2;
    }
    iVar3 = FUN_00445600(plVar4,puVar2,param_3,param_1,0);
    if (((((iVar3 != 0) && (*plVar4 != 0)) &&
         (iVar3 = FUN_0042bd60(plVar4[1],param_4,param_5), iVar3 != 0)) &&
        ((*plVar4 != 0 && (iVar3 = FUN_0042be20(plVar4[1],auStack_90,&local_44), iVar3 != 0)))) &&
       ((iVar3 = FUN_0042bfb0(plVar4[1],plVar4[3]), iVar3 != 0 &&
        ((iVar3 = FUN_0042bd60(plVar4[1],auStack_90,local_44), iVar3 != 0 &&
         (iVar3 = FUN_0042be20(plVar4[1],lVar1,param_7), iVar3 != 0)))))) {
      FUN_0042bb10(plVar4[2]);
      FUN_0042bb10(plVar4[3]);
      FUN_0042bb10(plVar4[1]);
      *plVar4 = 0;
      FUN_0042bbe0(plVar4[2]);
      FUN_0042bbe0(plVar4[3]);
      FUN_0042bbe0(plVar4[1]);
      FUN_00452f80(plVar4,"external/openssl/crypto/hmac/hmac.c",0xa3);
      return lVar1;
    }
  }
  FUN_00445bf0(plVar4);
  return 0;
}



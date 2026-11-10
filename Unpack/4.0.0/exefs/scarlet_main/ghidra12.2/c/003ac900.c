/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ac900; name: FUN_003ac900
 */


undefined8 FUN_003ac900(undefined8 param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_28;
  
  local_28 = 0;
  puVar3 = (undefined4 *)FUN_003d55e0(param_2);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_003c3950(param_1,0x50,0x22f,0x44,"external/openssl/ssl/s3_lib.c",0x1268);
    lVar4 = 0;
    goto LAB_003aca5c;
  }
  uVar1 = *(ushort *)(puVar3 + 2);
  if ((uVar1 & 3) == 2) {
    lVar4 = FUN_00440220(*puVar3,0);
    if (lVar4 != 0) goto LAB_003ac948;
LAB_003aca04:
    uVar5 = 0x41;
    uVar6 = 0x1272;
  }
  else {
    lVar4 = FUN_00440220(0x198,0);
    if (lVar4 == 0) goto LAB_003aca04;
LAB_003ac948:
    iVar2 = FUN_0043fda0(lVar4);
    if (iVar2 < 1) {
      uVar6 = 0x1277;
    }
    else {
      if (((uVar1 & 3) == 2) || (iVar2 = FUN_00440390(lVar4,0x198,6,0x1001,*puVar3,0), 0 < iVar2)) {
        iVar2 = FUN_0043fe30(lVar4,&local_28);
        if (iVar2 < 1) {
          FUN_003c3950(param_1,0x50,0x22f,6,"external/openssl/ssl/s3_lib.c",0x1282);
          FUN_0043e1f0(local_28);
          local_28 = 0;
        }
        goto LAB_003aca5c;
      }
      uVar6 = 0x127d;
    }
    uVar5 = 6;
  }
  FUN_003c3950(param_1,0x50,0x22f,uVar5,"external/openssl/ssl/s3_lib.c",uVar6);
LAB_003aca5c:
  FUN_00440340(lVar4);
  return local_28;
}



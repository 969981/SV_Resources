/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003aedf0; name: FUN_003aedf0
 */


undefined8 FUN_003aedf0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_28;
  
  local_28 = 0;
  uVar2 = FUN_0047d9e0(param_1,&LAB_003aef10);
  FUN_003ea5c0();
  lVar3 = FUN_003e8a30();
  if (lVar3 == 0) {
    FUN_004806c0(0x14,0xd8,0x41,"external/openssl/ssl/ssl_cert.c",0x2a3);
  }
  else {
    iVar1 = FUN_003e9560(lVar3,0x6c,3,param_2);
    if (iVar1 != 0) {
      do {
        while( true ) {
          lVar4 = FUN_0045f850(lVar3,&local_28,0,0);
          if (lVar4 == 0) {
            FUN_004808e0();
            uVar5 = 1;
            goto LAB_003aeed4;
          }
          lVar4 = FUN_00483b40(local_28);
          if (lVar4 == 0) goto LAB_003aeec4;
          lVar4 = FUN_0048b9f0();
          uVar5 = 0;
          if (lVar4 == 0) goto LAB_003aeed4;
          iVar1 = FUN_0047e200(param_1,lVar4);
          if (iVar1 < 0) break;
          FUN_0048b9e0(lVar4);
        }
        iVar1 = FUN_0047e2f0(param_1,lVar4);
      } while (iVar1 != 0);
      FUN_0048b9e0(lVar4);
    }
  }
LAB_003aeec4:
  uVar5 = 0;
LAB_003aeed4:
  FUN_003e8b90(lVar3);
  FUN_0048c830(local_28);
  FUN_0047d9e0(param_1,uVar2);
  return uVar5;
}



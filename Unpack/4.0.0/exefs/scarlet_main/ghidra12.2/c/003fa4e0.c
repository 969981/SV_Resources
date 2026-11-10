/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003fa4e0; name: FUN_003fa4e0
 */


undefined8 FUN_003fa4e0(undefined8 param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [56];
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  lVar2 = FUN_0045b0f0(&uStack_28,auStack_68);
  if (lVar2 == 0) {
    FUN_004806c0(0xd,0xd9,0xad,"external/openssl/crypto/asn1/a_time.c",0x14e);
  }
  else if (((param_3 == 0) && (param_4 == 0)) ||
          (iVar1 = FUN_0045b110(lVar2,param_3,param_4), iVar1 != 0)) {
    uVar3 = FUN_003fa380(param_1,lVar2,0xffffffff);
    return uVar3;
  }
  return 0;
}



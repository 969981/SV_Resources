/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00483000; name: FUN_00483000
 */


bool FUN_00483000(undefined8 param_1,int param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 1) {
    return false;
  }
  if (param_4 == 1) {
    iVar1 = FUN_00482e90(param_1,param_3,1);
    return iVar1 != 0;
  }
  if (param_4 != 3) {
    iVar1 = FUN_00482b30(param_1,param_3,param_4 & 0xffffffff);
    return iVar1 != 0;
  }
  FUN_00484320();
  lVar2 = FUN_00444ed0();
  if (lVar2 == 0) {
    lVar2 = FUN_00484300();
  }
  iVar1 = FUN_00482e90(param_1,lVar2,1);
  if (iVar1 == 0) {
    FUN_004806c0(0xb,0x65,0x68,"external/openssl/crypto/x509/by_file.c",0x3c);
    return false;
  }
  return true;
}



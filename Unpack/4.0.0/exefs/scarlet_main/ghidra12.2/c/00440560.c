/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00440560; name: FUN_00440560
 */


undefined4 FUN_00440560(long *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long local_28;
  
  lVar2 = FUN_0045aec0(param_3,&local_28);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    if (local_28 < 0x80000000) {
      uVar1 = (**(code **)(*param_1 + 0xc0))(param_1,param_2,local_28,lVar2);
    }
    else {
      uVar1 = 0xffffffff;
    }
    FUN_00452f80(lVar2,"external/openssl/crypto/evp/pmeth_lib.c",0x1bb);
  }
  return uVar1;
}



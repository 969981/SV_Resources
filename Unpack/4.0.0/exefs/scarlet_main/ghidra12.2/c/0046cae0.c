/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0046cae0; name: FUN_0046cae0
 */


undefined8 FUN_0046cae0(void *param_1,int param_2,void *param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 < (int)param_4) {
    uVar1 = 0x6e;
    uVar2 = 0x12;
  }
  else {
    if (param_2 <= (int)param_4) {
      memcpy(param_1,param_3,(ulong)param_4);
      return 1;
    }
    uVar1 = 0x7a;
    uVar2 = 0x17;
  }
  FUN_004806c0(4,0x6b,uVar1,"external/openssl/crypto/rsa/rsa_none.c",uVar2);
  return 0;
}



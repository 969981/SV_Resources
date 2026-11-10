/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043a230; name: FUN_0043a230
 */


undefined8 FUN_0043a230(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (*param_1 == 0) {
    uVar1 = 0x83;
    uVar2 = 0x290;
  }
  else {
    pcVar3 = *(code **)(*param_1 + 0x48);
    if (pcVar3 == (code *)0x0) {
      uVar1 = 0x84;
      uVar2 = 0x295;
    }
    else {
      uVar1 = (*pcVar3)();
      if ((int)uVar1 != -1) {
        return uVar1;
      }
      uVar1 = 0x85;
      uVar2 = 0x29c;
    }
  }
  FUN_004806c0(6,0x7c,uVar1,"external/openssl/crypto/evp/evp_enc.c",uVar2);
  return 0;
}



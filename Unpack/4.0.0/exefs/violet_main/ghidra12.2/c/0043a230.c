/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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



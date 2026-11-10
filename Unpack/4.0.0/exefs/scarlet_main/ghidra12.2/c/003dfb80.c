/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003dfb80; name: FUN_003dfb80
 */


long FUN_003dfb80(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [4];
  int local_2c;
  undefined8 local_28;
  undefined8 local_18;
  
  local_18 = *param_2;
  uVar1 = FUN_003debf0(&local_18,&local_28,&local_2c,auStack_30,param_3);
  if ((uVar1 >> 7 & 1) == 0) {
    if (local_2c == 6) {
      lVar2 = FUN_003dfc30(param_1,&local_18,local_28);
      if (lVar2 != 0) {
        *param_2 = local_18;
      }
      return lVar2;
    }
    uVar3 = 0x74;
  }
  else {
    uVar3 = 0x66;
  }
  FUN_004806c0(0xd,0x93,uVar3,"external/openssl/crypto/asn1/a_object.c",0xeb);
  return 0;
}



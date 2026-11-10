/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003dffa0; name: FUN_003dffa0
 */


void FUN_003dffa0(undefined8 *param_1)

{
  uint uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *(uint *)(param_1 + 4);
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_00452f80(*param_1,"external/openssl/crypto/asn1/a_object.c",0x167);
      FUN_00452f80(param_1[1],"external/openssl/crypto/asn1/a_object.c",0x168);
      uVar1 = *(uint *)(param_1 + 4);
      *param_1 = 0;
      param_1[1] = 0;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_00452f80(param_1[3],"external/openssl/crypto/asn1/a_object.c",0x16d);
      uVar1 = *(uint *)(param_1 + 4);
      param_1[3] = 0;
      *(undefined4 *)((long)param_1 + 0x14) = 0;
    }
    if ((uVar1 & 1) != 0) {
      FUN_00452f80(param_1,"external/openssl/crypto/asn1/a_object.c",0x172);
      return;
    }
  }
  return;
}



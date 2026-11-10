/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0048c6d0; name: FUN_0048c6d0
 */


undefined8 FUN_0048c6d0(undefined8 *param_1)

{
  undefined8 uVar1;
  long in_x4;
  undefined4 in_w5;
  undefined4 *puVar2;
  
  uVar1 = FUN_003e55c0(*param_1);
  if ((int)uVar1 != 0) {
    if (in_x4 != 0) {
      FUN_00452f80(*(undefined8 *)(param_1[1] + 8),"external/openssl/crypto/x509/x_pubkey.c",0x15c);
      puVar2 = (undefined4 *)param_1[1];
      *puVar2 = in_w5;
      *(long *)(puVar2 + 2) = in_x4;
      *(ulong *)(puVar2 + 4) = *(ulong *)(puVar2 + 4) & 0xfffffffffffffff0 | 8;
    }
    uVar1 = 1;
  }
  return uVar1;
}



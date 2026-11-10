/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004599c0; name: FUN_004599c0
 */


void FUN_004599c0(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_00453260(*(undefined8 *)(param_1 + 0x58),*(long *)(param_1 + 0x30) << 4,
               "external/openssl/crypto/modes/ocb128.c",0x22d);
  FUN_00453300(param_1,0xb0);
  return;
}



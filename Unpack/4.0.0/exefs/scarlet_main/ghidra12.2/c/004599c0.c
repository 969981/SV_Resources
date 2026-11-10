/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00440340; name: FUN_00440340
 */


void FUN_00440340(long *param_1)

{
  code *pcVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0x18), pcVar1 != (code *)0x0)) {
    (*pcVar1)(param_1);
  }
  FUN_0043e1f0(param_1[2]);
  FUN_0043e1f0(param_1[3]);
  FUN_00452f80(param_1,"external/openssl/crypto/evp/pmeth_lib.c",0x16b);
  return;
}



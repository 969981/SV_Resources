/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001eba3c; name: FUN_001eba3c
 */


undefined8 FUN_001eba3c(long param_1)

{
  char *pcVar1;
  
  if (*(ulong *)(param_1 + 0xa48) < 8) {
    if (((*(ulong *)(param_1 + 0xa50) | 0x10000) == 0x10000) ||
       ((long)*(ulong *)(param_1 + 0xa48) <= (long)*(ulong *)(param_1 + 0xa50) >> 0x10)) {
      return 1;
    }
    pcVar1 = "CURL_SSLVERSION_MAX incompatible with CURL_SSLVERSION";
  }
  else {
    pcVar1 = "Unrecognized parameter value passed via CURLOPT_SSLVERSION";
  }
  FUN_001db9c8(param_1,pcVar1);
  return 0;
}



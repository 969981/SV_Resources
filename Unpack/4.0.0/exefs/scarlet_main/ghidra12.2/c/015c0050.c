/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015c0050; name: FUN_015c0050
 */


void FUN_015c0050(void)

{
  DAT_0485dab8 = nvnBootstrapLoader("nvnDeviceInitialize");
  DAT_0485dab0 = nvnBootstrapLoader("nvnDeviceGetProcAddress");
  return;
}



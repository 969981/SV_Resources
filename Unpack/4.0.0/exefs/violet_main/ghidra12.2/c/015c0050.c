/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015c0050; name: FUN_015c0050
 */


void FUN_015c0050(void)

{
  DAT_0485dab8 = nvnBootstrapLoader("nvnDeviceInitialize");
  DAT_0485dab0 = nvnBootstrapLoader("nvnDeviceGetProcAddress");
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049e670; name: FUN_0049e670
 */


undefined8 FUN_0049e670(undefined8 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  nn::os::FreeTlsSlot(*puVar1);
  FUN_00452f80(puVar1,"external/openssl/crypto/threads_nintendo.cpp",0x8a);
  *param_1 = 0;
  return 1;
}



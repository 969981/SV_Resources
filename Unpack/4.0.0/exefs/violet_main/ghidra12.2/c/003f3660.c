/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f3660; name: FUN_003f3660
 */


void FUN_003f3660(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  FUN_00439d50(*param_1);
  FUN_00453300(param_1 + 9,0x20);
  FUN_00453300(param_1 + 1,0x20);
  FUN_00453300(param_1 + 5,0x20);
  FUN_00453300(param_1 + 0xd,0x20);
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  FUN_00439e00(*param_1);
  FUN_00452f80(param_1,"external/openssl/crypto/cmac/cmac.c",0x54);
  return;
}



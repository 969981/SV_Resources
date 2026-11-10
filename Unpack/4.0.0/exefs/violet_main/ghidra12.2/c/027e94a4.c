/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027e94a4; name: FUN_027e94a4
 */


void FUN_027e94a4(long *param_1)

{
  FUN_02899764();
  *param_1 = (long)(PTR_DAT_047d0da8 + 0x10);
  FUN_018ddbe4(param_1 + 4);
  *(undefined1 *)(param_1 + 0xb3) = 0;
  memset(param_1 + 0xab,0,0x40);
  param_1[1] = (long)(param_1 + 4);
  return;
}



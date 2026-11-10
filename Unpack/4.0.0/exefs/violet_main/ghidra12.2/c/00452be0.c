/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00452be0; name: FUN_00452be0
 */


undefined8 FUN_00452be0(undefined *param_1,undefined *param_2,undefined *param_3)

{
  if ((DAT_047f19b8 & 1) != 0) {
    return 0;
  }
  if (param_1 != (undefined *)0x0) {
    PTR_FUN_044aa1a0 = param_1;
  }
  if (param_2 != (undefined *)0x0) {
    PTR_FUN_044aa1a8 = param_2;
  }
  if (param_3 != (undefined *)0x0) {
    PTR_FUN_044aa1b0 = param_3;
  }
  return 1;
}



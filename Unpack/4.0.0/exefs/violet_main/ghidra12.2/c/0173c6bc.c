/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0173c6bc; name: FUN_0173c6bc
 */


void FUN_0173c6bc(undefined8 *param_1)

{
  FUN_0173c734();
  param_1[0xe] = "partner_pokemon";
  param_1[0xf] = 0xf;
  *param_1 = &PTR_LAB_04594ee0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0x8a38b322d40135cf;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[6] = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  param_1[4] = &PTR_LAB_04594f10;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x4c) = 0xffffffff;
  return;
}



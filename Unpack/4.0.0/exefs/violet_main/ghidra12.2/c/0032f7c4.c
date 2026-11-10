/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0032f7c4; name: FUN_0032f7c4
 */


void FUN_0032f7c4(void)

{
  if (DAT_047ef4b8 != (undefined8 *)0x0) {
    return;
  }
  DAT_047ef4b8 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  if (DAT_047ef4b8 != (undefined8 *)0x0) {
    *DAT_047ef4b8 = 0;
    DAT_047ef4b8[1] = 0;
    DAT_047ef4b8[2] = 0;
  }
  return;
}



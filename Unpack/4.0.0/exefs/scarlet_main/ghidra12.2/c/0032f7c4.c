/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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



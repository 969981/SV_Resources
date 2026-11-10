/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003df530; name: FUN_003df530
 */


char * FUN_003df530(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xfffffeff;
  if ((param_1 & 0xfffffff7) != 0x102) {
    uVar1 = param_1;
  }
  if (uVar1 < 0x1f) {
    return (&PTR_DAT_044a1ce8)[uVar1];
  }
  return "(unknown)";
}



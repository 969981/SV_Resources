/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00538e58; name: FUN_00538e58
 */


void FUN_00538e58(long param_1)

{
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    param_1 = param_1 + 0x51;
  }
  else {
    param_1 = *(long *)(param_1 + 0x60);
  }
                    /* try { // try from 00538e74 to 00538e77 has its CatchHandler @ 00538e80 */
  FUN_0056dd80(param_1);
  return;
}



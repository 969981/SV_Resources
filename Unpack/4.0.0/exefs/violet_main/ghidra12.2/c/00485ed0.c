/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00485ed0; name: FUN_00485ed0
 */


char * FUN_00485ed0(ulong param_1)

{
  if ((uint)param_1 < 0x50) {
    return *(char **)((long)&PTR_DAT_044bf8a0 +
                     (-(param_1 >> 0x1f & 1) & 0xfffffff800000000 | (param_1 & 0xffffffff) << 3));
  }
  return "unknown certificate verification error";
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0032b9e0; name: FUN_0032b9e0
 */


void FUN_0032b9e0(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047ccc08 + 0x10);
                    /* try { // try from 0032b9f8 to 0032ba07 has its CatchHandler @ 0032ba10 */
  FUN_0038db20(param_1 + 4);
  thunk_FUN_00342a80(param_1[2],param_1[3],0);
  return;
}



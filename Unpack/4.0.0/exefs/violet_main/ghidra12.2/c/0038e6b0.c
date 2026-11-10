/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038e6b0; name: FUN_0038e6b0
 */


void FUN_0038e6b0(double param_1,double param_2)

{
  FUN_0038dfd0((long)(param_1 / 1000000.0),
               (ulong)(uint)(int)((param_1 - (double)((long)(param_1 / 1000000.0) * 1000000)) *
                                 1000.0) | 0x200000000,(long)(param_2 / 1000000.0),
               (ulong)(uint)(int)((param_2 - (double)((long)(param_2 / 1000000.0) * 1000000)) *
                                 1000.0) | 0x200000000);
  return;
}



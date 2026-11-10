/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0043a9b0; name: FUN_0043a9b0
 */


bool FUN_0043a9b0(long param_1,long param_2,int param_3)

{
  return (0 < param_3 && param_1 != param_2) &&
         ((ulong)(param_1 - param_2) < (ulong)(long)param_3 ||
         (ulong)-(long)param_3 < (ulong)(param_1 - param_2));
}



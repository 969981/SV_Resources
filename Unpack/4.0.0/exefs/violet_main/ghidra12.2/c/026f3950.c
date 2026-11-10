/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f3950; name: FUN_026f3950
 */


undefined4 FUN_026f3950(long param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x1f0) + (ulong)param_2 * 4);
  }
  return uVar1;
}



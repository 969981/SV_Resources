/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298f240; name: FUN_0298f240
 */


void FUN_0298f240(long *param_1,long param_2)

{
  memcpy(param_1 + 1,(void *)(param_2 + 8),0x4a);
                    /* WARNING: Could not recover jumptable at 0x0298f274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



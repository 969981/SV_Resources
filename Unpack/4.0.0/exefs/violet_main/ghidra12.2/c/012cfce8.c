/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012cfce8; name: FUN_012cfce8
 */


void FUN_012cfce8(long param_1,undefined8 *param_2)

{
  undefined8 local_8;
  
  if (1 < *(ulong *)(param_1 + 0x150)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_8 = *param_2;
  FUN_012cfd3c(param_1 + *(ulong *)(param_1 + 0x150) * 0xa8 + 8,&local_8);
  *(long *)(param_1 + 0x150) = *(long *)(param_1 + 0x150) + 1;
  return;
}



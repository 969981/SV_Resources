/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0271af0c; name: FUN_0271af0c
 */


void FUN_0271af0c(long param_1)

{
  int iVar1;
  
  if (0 < (int)(((uint)(*(int *)(param_1 + 0x250) - *(int *)(param_1 + 0x248)) >> 4) * -0x55550000))
  {
    iVar1 = 0;
    do {
      FUN_0271af88(param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (short)((short)((uint)(*(int *)(param_1 + 0x250) - *(int *)(param_1 + 0x248))
                                    >> 4) * -0x5555));
  }
  return;
}



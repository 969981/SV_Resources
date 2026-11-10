/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6570c; name: FUN_01f6570c
 */


long FUN_01f6570c(long param_1)

{
  long lVar1;
  char local_30 [8];
  long local_28;
  
  if ((*(char *)(param_1 + 0x10) == '\0') || (FUN_01ecce00(local_30), local_30[0] == '\0')) {
    lVar1 = 0;
  }
  else {
    lVar1 = (*(long *)(param_1 + 0x18) - local_28) + 0x708;
  }
  return lVar1;
}



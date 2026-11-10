/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e6e904; name: FUN_01e6e904
 */


void FUN_01e6e904(long param_1)

{
  ulong uVar1;
  
  if (((*(char *)(param_1 + 0xa9) != '\0') && (*(char *)(param_1 + 0xa8) != '\0')) &&
     (uVar1 = FUN_01e6e944(param_1,param_1 + 0xaa), (uVar1 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  return;
}



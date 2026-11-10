/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a885c; name: FUN_024a885c
 */


void FUN_024a885c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if (((*(long *)(param_1 + 0x20) == 0) || (uVar1 = FUN_024a68e0(), (uVar1 & 1) == 0)) ||
     (*(char *)(param_1 + 0x18) == '\0')) {
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_024a6970(param_1,param_2);
  return;
}



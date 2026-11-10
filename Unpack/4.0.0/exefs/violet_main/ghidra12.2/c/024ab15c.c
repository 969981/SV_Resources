/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024ab15c; name: FUN_024ab15c
 */


void FUN_024ab15c(long param_1)

{
  ulong uVar1;
  undefined1 auStack_20 [8];
  long local_18;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (uVar1 < 0x11) {
    local_18 = *(long *)(param_1 + 8) + uVar1 * 0x28;
    FUN_024ac6d4(auStack_20,param_1,&local_18,0x10 - uVar1);
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = 0x10;
  }
  return;
}



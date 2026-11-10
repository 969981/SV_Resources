/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f3993c; name: FUN_00f3993c
 */


void FUN_00f3993c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_18;
  
  if (*(long *)(param_1 + 0x150) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      local_18 = *(long *)(param_1 + 0x118) + lVar1;
      FUN_028c58f4(param_1,*(undefined8 *)(*(long *)(param_1 + 0x118) + lVar1),&local_18);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (uVar2 < *(ulong *)(param_1 + 0x150));
  }
  return;
}



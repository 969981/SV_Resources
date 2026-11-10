/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019bf588; name: FUN_019bf588
 */


void FUN_019bf588(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long local_48;
  
  if (*(long *)(param_1 + 0x130) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      local_48 = *(long *)(param_1 + 0xf8) + lVar1;
      FUN_019bf614(param_1,*(undefined8 *)(*(long *)(param_1 + 0xf8) + lVar1),&local_48,param_2,
                   param_3,param_4);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (uVar2 < *(ulong *)(param_1 + 0x130));
  }
  return;
}



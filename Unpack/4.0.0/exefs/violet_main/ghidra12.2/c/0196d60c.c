/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0196d60c; name: FUN_0196d60c
 */


void FUN_0196d60c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long local_38;
  
  if (*(long *)(param_1 + 0x130) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      local_38 = *(long *)(param_1 + 0xf8) + lVar1;
      FUN_028c580c(param_1,*(undefined8 *)(*(long *)(param_1 + 0xf8) + lVar1),&local_38,param_2);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (uVar2 < *(ulong *)(param_1 + 0x130));
  }
  return;
}



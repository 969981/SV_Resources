/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ebc30; name: FUN_003ebc30
 */


void FUN_003ebc30(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    do {
      if (*(int *)(*param_1 + -4 + uVar2 * 4) != 0) goto LAB_003ebc60;
      uVar2 = uVar2 - 1;
    } while (1 < (int)uVar2 + 1);
    uVar2 = 0;
LAB_003ebc60:
    uVar1 = (uint)uVar2;
    *(uint *)(param_1 + 1) = uVar1;
  }
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    return;
  }
  return;
}



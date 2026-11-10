/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016fa034; name: FUN_016fa034
 */


void FUN_016fa034(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  
  *param_2 = 0;
  if ((*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) + 0xb0) == 0) &&
     (uVar1 = FUN_016fa084(*(undefined8 *)(param_1 + 0x38),*param_3,*(undefined1 *)(param_3 + 1)),
     (uVar1 & 1) != 0)) {
    *param_2 = 1;
  }
  return;
}



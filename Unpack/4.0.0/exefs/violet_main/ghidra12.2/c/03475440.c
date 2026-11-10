/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03475440; name: FUN_03475440
 */


void FUN_03475440(long param_1,int param_2)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1b8) != param_2) {
    *(int *)(param_1 + 0x1b8) = param_2;
    if (*(int *)(param_1 + 0x110) != 0) {
      uVar1 = 0;
      do {
        FUN_03475440(*(undefined8 *)(*(long *)(param_1 + 0x108) + uVar1 * 8),param_2);
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x110));
    }
  }
  if ((*(long *)(param_1 + 0xa0) == 0) && (*(int *)PTR_DAT_047e7008 != 2)) {
    *(undefined4 *)PTR_DAT_047e7008 = 2;
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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



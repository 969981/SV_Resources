/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00120180; name: FUN_00120180
 */


void FUN_00120180(long param_1,undefined4 *param_2)

{
  uint uVar1;
  
  if ((param_2 != (undefined4 *)0x0) && (*(int *)(param_1 + 4) != 1)) {
    uVar1 = 0;
    do {
      *param_2 = 0;
      uVar1 = uVar1 + 1;
      param_2 = (undefined4 *)((long)param_2 + (ulong)*(uint *)(param_1 + 8));
    } while (uVar1 < *(int *)(param_1 + 4) - 1U);
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b47a0; name: FUN_003b47a0
 */


void FUN_003b47a0(long param_1,long *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x7c0);
  *param_2 = lVar2;
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x7c8);
  }
  *param_3 = uVar1;
  return;
}



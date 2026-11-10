/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029a5cd0; name: FUN_029a5cd0
 */


void FUN_029a5cd0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x38) != 0)) {
    FUN_00d9dd8c(0,lVar1,4);
  }
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_015eb600(param_1);
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



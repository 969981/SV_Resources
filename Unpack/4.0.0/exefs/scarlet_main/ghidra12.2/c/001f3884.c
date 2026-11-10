/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f3884; name: FUN_001f3884
 */


undefined4 FUN_001f3884(long param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  switch(param_2) {
  case 1:
    puVar1 = (undefined4 *)(param_1 + 0x964);
    break;
  case 2:
    puVar1 = (undefined4 *)(param_1 + 0x968);
    break;
  case 3:
    puVar1 = (undefined4 *)(param_1 + 0x96c);
    break;
  case 4:
    puVar1 = (undefined4 *)(param_1 + 0x970);
    break;
  case 5:
    puVar1 = (undefined4 *)(param_1 + 0x974);
    break;
  case 6:
    puVar1 = (undefined4 *)(param_1 + 0x978);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  case 8:
    puVar1 = (undefined4 *)(param_1 + 0x97c);
  }
  return *puVar1;
}



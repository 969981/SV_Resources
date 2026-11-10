/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008ee5b8; name: FUN_008ee5b8
 */


void FUN_008ee5b8(long param_1,undefined8 param_2,long *param_3)

{
  if (*(char *)(param_1 + 0x50) != '\0') {
    FUN_008f08f0();
    FUN_00e5c07c(param_1 + 0x58,param_2);
    if (*(long *)(param_1 + 0x178) != 0) {
      (**(code **)(*param_3 + 0x18))(param_3);
      *(undefined8 *)(param_1 + 0x178) = 0;
    }
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}



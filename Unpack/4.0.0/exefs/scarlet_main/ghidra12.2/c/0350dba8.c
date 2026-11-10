/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0350dba8; name: FUN_0350dba8
 */


void FUN_0350dba8(long param_1,int param_2)

{
  if (param_2 != 2) {
    if (*(long *)(param_1 + 0x80) != 0) {
      (**(code **)(**(long **)(param_1 + 8) + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x8c) = 0x2b;
    *(undefined8 *)(param_1 + 0x9c) = 0x3f800000ffffffff;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x94) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0xa4) = 0x1ffffffff;
    if (param_2 == 0) {
      *(undefined1 *)(param_1 + 0xf0) = 0;
    }
  }
  if (*(char *)(param_1 + 0xf0) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0350dc38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x28))(*(long **)(param_1 + 8),param_2);
    return;
  }
  return;
}



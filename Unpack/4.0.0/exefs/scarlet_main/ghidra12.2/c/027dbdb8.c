/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027dbdb8; name: FUN_027dbdb8
 */


void FUN_027dbdb8(long param_1)

{
  FUN_01e75064(param_1 + 0xe8);
  if ((*(byte *)(param_1 + 0xc0) & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0xd8) + 0x18))
              (*(long **)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xd0),
               *(ulong *)(param_1 + 0xc0) & 0xfffffffffffffffe,1);
  }
  FUN_01cfa410(param_1 + 0xb0);
  if ((*(byte *)(param_1 + 0x90) & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x18))
              (*(long **)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xa0),
               *(ulong *)(param_1 + 0x90) & 0xfffffffffffffffe,1);
  }
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0x88) + 0x18))
              (*(long **)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x80),
               *(ulong *)(param_1 + 0x70) & 0xfffffffffffffffe,1);
  }
  FUN_027db654(param_1 + 0x50);
  if (*(char *)(param_1 + 0x28) != '\0') {
    FUN_01cfa44c(param_1 + 0x30,*(undefined8 *)(param_1 + 0x38));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x027dbe94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
            (*(long **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),
             *(ulong *)(param_1 + 8) & 0xfffffffffffffffe,1);
  return;
}



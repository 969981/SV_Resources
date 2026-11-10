/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b852a4; name: FUN_02b852a4
 */


void FUN_02b852a4(undefined1 param_1 [16],long *param_2)

{
  param_2[0x1b] = param_1._8_8_;
  param_2[0x1a] = param_1._0_8_;
  if (*(char *)((long)param_2 + 0xf4) == '\0') {
    *(undefined1 *)((long)param_2 + 0xf4) = 1;
                    /* WARNING: Could not recover jumptable at 0x02b852c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x78))();
    return;
  }
  return;
}



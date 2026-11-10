/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038c050; name: FUN_0038c050
 */


void FUN_0038c050(long *param_1)

{
  code *pcVar1;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    pcVar1 = *(code **)(*param_1 + 0x38);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1);
    }
    *(undefined1 *)((long)param_1 + 10) = 1;
  }
  return;
}



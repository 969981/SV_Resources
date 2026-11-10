/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f3340; name: FUN_026f3340
 */


void FUN_026f3340(uint param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (0x1f < param_1) {
    param_1 = 0x20;
  }
  DAT_0448301c = param_1;
  if (param_1 != 0) {
    uVar2 = 0;
    do {
      uVar1 = uVar2 + 1;
      (&DAT_047ec218)[uVar2] = *(undefined4 *)(param_2 + uVar2 * 4);
      uVar2 = uVar1;
    } while (uVar1 < param_1);
  }
  return;
}



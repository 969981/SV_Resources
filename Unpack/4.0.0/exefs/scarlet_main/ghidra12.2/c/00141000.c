/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00141000; name: FUN_00141000
 */


ulong FUN_00141000(ulong param_1,ulong param_2)

{
  ulong uVar1;
  
  if ((long)param_2 < 0) {
    uVar1 = 0;
    if (-0x40 < (long)param_2) {
      uVar1 = param_1 >> (-param_2 & 0x3f);
    }
    return uVar1;
  }
  uVar1 = 0;
  if ((long)param_2 < 0x40) {
    uVar1 = param_1 << (param_2 & 0x3f);
  }
  return uVar1;
}



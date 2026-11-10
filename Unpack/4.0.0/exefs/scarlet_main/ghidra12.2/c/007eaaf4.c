/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007eaaf4; name: FUN_007eaaf4
 */


void FUN_007eaaf4(undefined8 param_1)

{
  undefined1 local_d0 [128];
  
  nn::util::VSNPrintf(&DAT_047fb240,0x200,param_1,local_d0 + 0x80);
  if (*(code **)PTR_DAT_047d14d0 != (code *)0x0) {
    (**(code **)PTR_DAT_047d14d0)(&DAT_047fb240);
  }
  return;
}



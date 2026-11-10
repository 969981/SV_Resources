/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a430f4; name: FUN_02a430f4
 */


undefined8 FUN_02a430f4(void)

{
  code *pcVar1;
  
  if (DAT_0483b220 != (code *)0x0) {
    (*DAT_0483b220)(&DAT_0483b240);
  }
  if (DAT_0483b320 != (code *)0x0) {
    (*DAT_0483b320)(&DAT_0483b340);
    pcVar1 = DAT_0483b328;
    if (DAT_0483b328 != (code *)0x0) {
      DAT_0483b330 = 0;
      DAT_0483b338 = 0;
      DAT_0483b320 = (code *)0x0;
      DAT_0483b328 = (code *)0x0;
      (*pcVar1)(&DAT_0483b340);
    }
  }
  if (DAT_0483b2a0 != (code *)0x0) {
    (*DAT_0483b2a0)(&DAT_0483b2c0);
  }
  return 1;
}



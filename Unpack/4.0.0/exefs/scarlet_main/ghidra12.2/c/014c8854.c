/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c8854; name: FUN_014c8854
 */


void FUN_014c8854(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_04839a58;
  if (DAT_04839a58 != (code *)0x0) {
    DAT_04839a60 = 0;
    DAT_04839a68 = 0;
    DAT_04839a50 = 0;
    DAT_04839a58 = (code *)0x0;
    (*pcVar1)(&DAT_04839a70);
  }
  if ((code *)param_1[2] != (code *)0x0) {
    (*(code *)param_1[2])(param_1 + 4,&DAT_04839a70);
    DAT_04839a68 = param_1[3];
    DAT_04839a58 = (code *)param_1[1];
    DAT_04839a50 = *param_1;
    DAT_04839a60 = param_1[2];
  }
  return;
}



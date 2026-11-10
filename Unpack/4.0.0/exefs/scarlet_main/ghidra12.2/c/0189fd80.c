/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0189fd80; name: FUN_0189fd80
 */


void FUN_0189fd80(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  
  pcVar1 = DAT_04840898;
  if (DAT_04840898 != (code *)0x0) {
    DAT_048408a0 = 0;
    DAT_048408a8 = 0;
    DAT_04840890 = 0;
    DAT_04840898 = (code *)0x0;
    (*pcVar1)(&DAT_048408b0);
  }
  if ((code *)param_1[2] != (code *)0x0) {
    (*(code *)param_1[2])(param_1 + 4,&DAT_048408b0);
    DAT_048408a8 = param_1[3];
    DAT_04840898 = (code *)param_1[1];
    DAT_04840890 = *param_1;
    DAT_048408a0 = param_1[2];
  }
  pcVar1 = DAT_04840918;
  if (DAT_04840918 != (code *)0x0) {
    DAT_04840920 = 0;
    DAT_04840928 = 0;
    DAT_04840910 = 0;
    DAT_04840918 = (code *)0x0;
    (*pcVar1)(&DAT_04840930);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,&DAT_04840930);
    DAT_04840928 = param_2[3];
    DAT_04840918 = (code *)param_2[1];
    DAT_04840910 = *param_2;
    DAT_04840920 = param_2[2];
  }
  return;
}



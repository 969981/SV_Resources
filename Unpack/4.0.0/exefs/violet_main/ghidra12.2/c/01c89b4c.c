/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c89b4c; name: FUN_01c89b4c
 */


void FUN_01c89b4c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_04839d88;
  if (DAT_04839d88 != (code *)0x0) {
    DAT_04839d90 = 0;
    DAT_04839d98 = 0;
    DAT_04839d80 = 0;
    DAT_04839d88 = (code *)0x0;
    (*pcVar1)(&DAT_04839da0);
  }
  if ((code *)param_1[2] != (code *)0x0) {
    (*(code *)param_1[2])(param_1 + 4,&DAT_04839da0);
    DAT_04839d98 = param_1[3];
    DAT_04839d88 = (code *)param_1[1];
    DAT_04839d80 = *param_1;
    DAT_04839d90 = param_1[2];
  }
  return;
}



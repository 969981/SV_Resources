/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014c876c; name: FUN_014c876c
 */


void FUN_014c876c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_04839958;
  if (DAT_04839958 != (code *)0x0) {
    DAT_04839960 = 0;
    DAT_04839968 = 0;
    DAT_04839950 = 0;
    DAT_04839958 = (code *)0x0;
    (*pcVar1)(&DAT_04839970);
  }
  if ((code *)param_1[2] != (code *)0x0) {
    (*(code *)param_1[2])(param_1 + 4,&DAT_04839970);
    DAT_04839968 = param_1[3];
    DAT_04839958 = (code *)param_1[1];
    DAT_04839950 = *param_1;
    DAT_04839960 = param_1[2];
  }
  return;
}



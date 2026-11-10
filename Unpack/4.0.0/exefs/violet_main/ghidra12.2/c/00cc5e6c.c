/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cc5e6c; name: FUN_00cc5e6c
 */


void FUN_00cc5e6c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_04859f68;
  if (DAT_04859f68 != (code *)0x0) {
    DAT_04859f70 = 0;
    DAT_04859f78 = 0;
    DAT_04859f60 = 0;
    DAT_04859f68 = (code *)0x0;
    (*pcVar1)(&DAT_04859f80);
  }
  if ((code *)param_1[2] != (code *)0x0) {
    (*(code *)param_1[2])(param_1 + 4,&DAT_04859f80);
    DAT_04859f78 = param_1[3];
    DAT_04859f68 = (code *)param_1[1];
    DAT_04859f60 = *param_1;
    DAT_04859f70 = param_1[2];
  }
  return;
}



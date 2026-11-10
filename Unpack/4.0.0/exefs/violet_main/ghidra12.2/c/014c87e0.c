/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014c87e0; name: FUN_014c87e0
 */


void FUN_014c87e0(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_048399d8;
  if (DAT_048399d8 != (code *)0x0) {
    DAT_048399e0 = 0;
    DAT_048399e8 = 0;
    DAT_048399d0 = 0;
    DAT_048399d8 = (code *)0x0;
    (*pcVar1)(&DAT_048399f0);
  }
  if ((code *)param_1[2] != (code *)0x0) {
    (*(code *)param_1[2])(param_1 + 4,&DAT_048399f0);
    DAT_048399e8 = param_1[3];
    DAT_048399d8 = (code *)param_1[1];
    DAT_048399d0 = *param_1;
    DAT_048399e0 = param_1[2];
  }
  return;
}



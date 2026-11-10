/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fb19a8; name: FUN_01fb19a8
 */


void FUN_01fb19a8(undefined8 *param_1,undefined8 *param_2)

{
  char local_60 [16];
  undefined1 auStack_50 [48];
  
  if ((*(char *)*param_1 == '\0') &&
     (FUN_01fb1038(local_60,*param_2,param_1[1]), local_60[0] != '\0')) {
    *(undefined1 *)*param_1 = 1;
    memcpy((void *)param_1[2],auStack_50,0x30);
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0032950c; name: FUN_0032950c
 */


void FUN_0032950c(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = param_1 + 3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (*(long *)(param_2 + 0x10) != 0) {
                    /* try { // try from 00329538 to 0032953b has its CatchHandler @ 0032954c */
    uVar1 = FUN_0033832c(*(long *)(param_2 + 0x10),*param_3);
    param_1[1] = uVar1;
  }
  return;
}



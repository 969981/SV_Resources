/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00391bbc; name: FUN_00391bbc
 */


void FUN_00391bbc(undefined8 *param_1,byte *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = &DAT_03c886bc;
  if ((*param_2 & 2) != 0) {
    puVar1 = &DAT_03c00d64;
  }
                    /* try { // try from 00391bf4 to 00391c7b has its CatchHandler @ 00391c88 */
  FUN_0021d540(param_1,puVar1,(*param_2 & 2) >> 1);
  puVar2 = &DAT_03c886bc;
  if ((*param_2 & 4) != 0) {
    puVar2 = &DAT_03c4db4d;
  }
  FUN_0021d540(param_1,puVar2,(*param_2 & 4) >> 2);
  puVar2 = &DAT_03c886bc;
  if ((*param_2 & 8) != 0) {
    puVar2 = &DAT_03bf391f;
  }
  FUN_0021d540(param_1,puVar2,(*param_2 & 8) >> 3);
  puVar2 = &DAT_03c886bc;
  if ((*param_2 & 0x10) != 0) {
    puVar2 = &DAT_03be6449;
  }
  FUN_0021d540(param_1,puVar2,(*param_2 & 0x10) >> 4);
  puVar1 = &DAT_03c886bc;
  if ((*param_2 & 0x20) != 0) {
    puVar1 = &DAT_03c2bfae;
  }
  FUN_0021d540(param_1,puVar1,(*param_2 & 0x20) >> 5);
  return;
}



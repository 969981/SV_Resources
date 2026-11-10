/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006eb460; name: FUN_006eb460
 */


void FUN_006eb460(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
  }
  if ((*param_2 & 1) == 0) {
    if (1 < *param_2) {
      param_2 = param_2 + 1;
      goto LAB_006eb4bc;
    }
  }
  else if (*(long *)(param_2 + 8) != 0) {
    param_2 = *(byte **)(param_2 + 0x10);
    goto LAB_006eb4bc;
  }
  param_2 = *(byte **)PTR_PTR_047cbd00;
LAB_006eb4bc:
                    /* try { // try from 006eb4bc to 006eb4bf has its CatchHandler @ 006eb4c8 */
  FUN_006fe630(*(undefined8 *)PTR_PTR_047cbcf8,pbVar1,param_2);
  return;
}



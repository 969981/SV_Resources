/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006ec920; name: FUN_006ec920
 */


void FUN_006ec920(byte *param_1)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
  }
                    /* try { // try from 006ec940 to 006ec947 has its CatchHandler @ 006ec950 */
  FUN_006fde30(*(undefined8 *)PTR_PTR_047cbcf8,pbVar1);
  return;
}



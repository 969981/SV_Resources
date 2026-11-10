/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e187c; name: FUN_004e187c
 */


void FUN_004e187c(long *param_1)

{
  byte *pbVar1;
  
  *param_1 = (long)(PTR_DAT_047cd9b8 + 0x10);
  pbVar1 = (byte *)param_1[3];
  if (pbVar1 != PTR_DAT_047cba80 && pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar1 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar1);
  }
                    /* try { // try from 004e18dc to 004e18df has its CatchHandler @ 004e18ec */
  FUN_004ca714(param_1 + 1);
  return;
}



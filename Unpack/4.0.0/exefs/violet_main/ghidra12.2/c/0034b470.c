/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034b470; name: FUN_0034b470
 */


void FUN_0034b470(long *param_1)

{
  undefined *puVar1;
  
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  puVar1 = PTR_DAT_047ccd98 + 0x10;
  param_1[10] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *param_1 = (long)puVar1;
  param_1[1] = 1;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
                    /* try { // try from 0034b4b8 to 0034b4bb has its CatchHandler @ 0034b4d0 */
  FUN_0038db00(param_1 + 2);
  return;
}



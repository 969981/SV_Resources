/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00346000; name: FUN_00346000
 */


void FUN_00346000(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1[3];
  *param_1 = (long)(PTR_DAT_047ccd78 + 0x10);
                    /* try { // try from 00346020 to 0034602b has its CatchHandler @ 00346058 */
  uVar1 = FUN_0034ad58();
  FUN_0034ae6c(uVar1,lVar2);
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,param_1[6]);
  return;
}



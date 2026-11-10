/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034a82c; name: FUN_0034a82c
 */


void FUN_0034a82c(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_047ccd80 + 0x10);
  FUN_0034aa40(param_1 + 0x28,param_1[0x29]);
  FUN_0034aa40(param_1 + 0x25,param_1[0x26]);
                    /* try { // try from 0034a864 to 0034a867 has its CatchHandler @ 0034a8ec */
  FUN_0038db20(param_1 + 0x21);
  FUN_00344e5c(param_1 + 0x14);
  if ((*(byte *)(param_1 + 10) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_1[0xb]);
  }
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_1[9]);
  }
  lVar2 = param_1[3];
  *param_1 = (long)(PTR_DAT_047ccd78 + 0x10);
                    /* try { // try from 0034a8b4 to 0034a8bf has its CatchHandler @ 0034a8f0 */
  uVar1 = FUN_0034ad58();
  FUN_0034ae6c(uVar1,lVar2);
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,param_1[6]);
  return;
}



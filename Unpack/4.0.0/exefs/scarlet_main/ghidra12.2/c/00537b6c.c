/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00537b6c; name: FUN_00537b6c
 */


void FUN_00537b6c(long *param_1)

{
  byte *pbVar1;
  
  *param_1 = (long)(PTR_DAT_047cdcf0 + 0x10);
  pbVar1 = (byte *)param_1[2];
  if (pbVar1 != PTR_DAT_047cba80 && pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar1 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar1);
  }
                    /* try { // try from 00537bcc to 00537bcf has its CatchHandler @ 00537bdc */
  FUN_004ca714(param_1 + 1);
  return;
}



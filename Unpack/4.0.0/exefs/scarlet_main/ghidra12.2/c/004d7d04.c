/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004d7d04; name: FUN_004d7d04
 */


void FUN_004d7d04(undefined *param_1)

{
  long *plVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_1 + 0x18);
  if (pbVar2 != PTR_DAT_047cba80 && pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
  }
  if ((param_1 == PTR_DAT_047cd810) || (plVar1 = *(long **)(param_1 + 0x20), plVar1 == (long *)0x0))
  {
    return;
  }
  *plVar1 = (long)(PTR_DAT_047cd830 + 0x10);
                    /* try { // try from 004d7d7c to 004d7d7f has its CatchHandler @ 004d7db4 */
  FUN_004ca714(plVar1 + 1);
  FUN_004d2ad4(plVar1 + 6);
  FUN_005212b0(plVar1 + 2);
  FUN_0049e790(PTR_LAB_047cba48,plVar1);
  return;
}



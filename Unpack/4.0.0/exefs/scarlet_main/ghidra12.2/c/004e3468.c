/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004e3468; name: FUN_004e3468
 */


void FUN_004e3468(long *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  
  *param_1 = (long)(PTR_DAT_047cd988 + 0x10);
  puVar1 = PTR_DAT_047cba80;
  pbVar2 = (byte *)param_1[0xc];
  if (pbVar2 != PTR_DAT_047cba80 && pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
  }
  pbVar2 = (byte *)param_1[0xd];
  if (pbVar2 != puVar1 && pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
  }
                    /* try { // try from 004e3500 to 004e3503 has its CatchHandler @ 004e3524 */
  FUN_004ca714(param_1 + 1);
  FUN_005322a4(param_1 + 9);
  FUN_00531260(param_1 + 6);
  FUN_00531260(param_1 + 3);
  return;
}



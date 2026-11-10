/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004d63fc; name: FUN_004d63fc
 */


void FUN_004d63fc(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  long *plVar4;
  ulong uVar5;
  
  *param_1 = (long)(PTR_DAT_047cda00 + 0x10);
                    /* try { // try from 004d6420 to 004d642b has its CatchHandler @ 004d64c8 */
  FUN_004d64f0();
  FUN_004ca714(param_1 + 1);
  FUN_005322a4(param_1 + 9);
  puVar2 = PTR_LAB_047cba48;
  puVar3 = (uint *)param_1[8];
  if ((puVar3 != (uint *)0x0) && (param_1[6] == 0)) {
    uVar5 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      puVar1 = PTR_DAT_047cd7f8 + 0x10;
      do {
        puVar3 = puVar3 + 2;
        plVar4 = *(long **)puVar3;
        if (plVar4 != (long *)0x0) {
          *plVar4 = (long)puVar1;
                    /* try { // try from 004d6494 to 004d6497 has its CatchHandler @ 004d64ec */
          FUN_004ca714(plVar4 + 1);
          FUN_0049e790(puVar2,plVar4);
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      puVar3 = (uint *)param_1[8];
    }
    FUN_0049e700(puVar3);
  }
  param_1[8] = 0;
                    /* try { // try from 004d64ac to 004d64af has its CatchHandler @ 004d64c4 */
  FUN_004e83e8(param_1 + 3);
  return;
}



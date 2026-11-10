/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004cb2ec; name: FUN_004cb2ec
 */


void FUN_004cb2ec(long *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  ulong uVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_047cd9c8 + 0x10);
                    /* try { // try from 004cb30c to 004cb317 has its CatchHandler @ 004cb44c */
  FUN_004cb490();
  FUN_004ca714(param_1 + 1);
  FUN_00531260(param_1 + 0x14);
  FUN_00531260(param_1 + 0x12);
                    /* try { // try from 004cb32c to 004cb32f has its CatchHandler @ 004cb448 */
  FUN_004e8000(param_1 + 0xf);
  puVar2 = (uint *)param_1[0xe];
  if ((puVar2 != (uint *)0x0) && (param_1[0xc] == 0)) {
    uVar3 = (ulong)*puVar2;
    if (0 < (int)*puVar2) {
      do {
        puVar2 = puVar2 + 2;
        FUN_004e7f90(*(undefined8 *)puVar2);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar2 = (uint *)param_1[0xe];
    }
    FUN_0049e700(puVar2);
  }
  puVar2 = (uint *)param_1[0xb];
  param_1[0xe] = 0;
  puVar1 = PTR_LAB_047cba48;
  if ((puVar2 != (uint *)0x0) && (param_1[9] == 0)) {
    uVar3 = (ulong)*puVar2;
    if (0 < (int)*puVar2) {
      do {
        puVar2 = puVar2 + 2;
        lVar4 = *(long *)puVar2;
        if (lVar4 != 0) {
          FUN_004d63fc(lVar4);
          FUN_0049e790(puVar1,lVar4);
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar2 = (uint *)param_1[0xb];
    }
    FUN_0049e700(puVar2);
  }
  puVar2 = (uint *)param_1[8];
  param_1[0xb] = 0;
  puVar1 = PTR_LAB_047cba48;
  if ((puVar2 != (uint *)0x0) && (param_1[6] == 0)) {
    uVar3 = (ulong)*puVar2;
    if (0 < (int)*puVar2) {
      do {
        puVar2 = puVar2 + 2;
        lVar4 = *(long *)puVar2;
        if (lVar4 != 0) {
          FUN_004cfd18(lVar4);
          FUN_0049e790(puVar1,lVar4);
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar2 = (uint *)param_1[8];
    }
    FUN_0049e700(puVar2);
  }
  param_1[8] = 0;
  FUN_005322a4(param_1 + 3);
  return;
}



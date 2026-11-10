/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004ca5e4; name: FUN_004ca5e4
 */


void FUN_004ca5e4(long *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  
  puVar1 = PTR_LAB_047cba48;
  puVar2 = (uint *)param_1[2];
  if ((puVar2 != (uint *)0x0) && (*param_1 == 0)) {
    uVar4 = (ulong)*puVar2;
    if (0 < (int)*puVar2) {
      do {
        puVar2 = puVar2 + 2;
        lVar3 = *(long *)puVar2;
        if (lVar3 != 0) {
          FUN_004cb2ec(lVar3);
          FUN_0049e790(puVar1,lVar3);
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      puVar2 = (uint *)param_1[2];
    }
    FUN_0049e700(puVar2);
  }
  param_1[2] = 0;
  return;
}



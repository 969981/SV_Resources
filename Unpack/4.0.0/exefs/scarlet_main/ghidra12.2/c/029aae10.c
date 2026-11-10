/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029aae10; name: FUN_029aae10
 */


void FUN_029aae10(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  uVar2 = (ulong)DAT_048af960;
  if (DAT_048af960 != 0) {
    puVar6 = DAT_048af958 + uVar2 * 2;
    puVar4 = DAT_048af958;
    puVar3 = DAT_048af958;
    do {
      if (puVar3[1] == param_1) {
        puVar5 = puVar3;
        uVar1 = (uint)uVar2;
        if (puVar3 < puVar6 + -2) {
          do {
            puVar4 = puVar5 + 2;
            *puVar5 = *puVar4;
            puVar5[1] = puVar5[3];
            puVar5 = puVar4;
          } while (puVar4 < puVar6 + -2);
          puVar4 = DAT_048af958;
          uVar1 = DAT_048af960;
        }
        DAT_048af960 = uVar1 - 1;
        uVar2 = (ulong)DAT_048af960;
      }
      else {
        puVar3 = puVar3 + 2;
      }
      puVar6 = puVar4 + uVar2 * 2;
    } while (puVar6 != puVar3);
  }
  return;
}



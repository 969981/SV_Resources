/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033925c; name: FUN_0033925c
 */


void FUN_0033925c(void)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  puVar2 = DAT_047ef500;
  puVar1 = PTR_LAB_047cba48;
  if (DAT_047ef500 == (ulong *)0x0) {
    DAT_047ef500 = (ulong *)0x0;
    return;
  }
  uVar5 = *DAT_047ef500;
  uVar3 = uVar5 & 1;
  if ((uVar5 & 1) == 0) {
    puVar4 = DAT_047ef500 + 1;
    if (uVar5 >> 1 == 0 || puVar4 == (ulong *)0x0) goto LAB_00339300;
  }
  else {
    puVar4 = (ulong *)DAT_047ef500[1];
    if (uVar5 >> 1 == 0 || puVar4 == (ulong *)0x0) goto LAB_00339300;
  }
  uVar3 = uVar5 >> 1;
  do {
    uVar5 = uVar3 - 1;
    puVar6 = (undefined8 *)puVar4[uVar3 - 1];
    puVar4[uVar3 - 1] = 0;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6);
      FUN_0049e790(puVar1,puVar6);
    }
    uVar3 = uVar5;
  } while (uVar5 != 0);
  uVar3 = *puVar2 & 1;
LAB_00339300:
  if (uVar3 != 0) {
    FUN_0049e790(PTR_LAB_047cba48,puVar2[1]);
  }
  FUN_0049e790(PTR_LAB_047cba48,puVar2);
  DAT_047ef500 = (ulong *)0x0;
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f0db60; name: FUN_00f0db60
 */


undefined8 FUN_00f0db60(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if ((*(long *)(param_1 + 0x180) == 0) ||
     (plVar5 = *(long **)(param_1 + 0x300), plVar5 == (long *)0x0)) {
LAB_00f0db9c:
    uVar4 = 1;
  }
  else {
    puVar1 = (undefined8 *)plVar5[1];
    puVar2 = (undefined8 *)*plVar5;
    do {
      if (puVar2 == puVar1) goto LAB_00f0db9c;
      uVar3 = FUN_00f0dbb4(*puVar2);
      puVar2 = puVar2 + 1;
    } while ((uVar3 & 1) != 0);
    uVar4 = 0;
  }
  return uVar4;
}



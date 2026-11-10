/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ed96ac; name: FUN_01ed96ac
 */


long FUN_01ed96ac(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  plVar1 = *(long **)(param_1 + 0x1c8);
  plVar2 = *(long **)(param_1 + 0x1c0);
  do {
    if (plVar2 == plVar1) {
      return 0;
    }
    lVar4 = *plVar2;
    puVar5 = (undefined8 *)(lVar4 + 0x28);
    (**(code **)*puVar5)(puVar5);
    uVar3 = FUN_01ed9770();
    plVar2 = plVar2 + 1;
  } while ((uVar3 & 1) == 0);
  return lVar4;
}



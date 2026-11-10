/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020eee8c; name: FUN_020eee8c
 */


long FUN_020eee8c(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar3 = PTR_DAT_047d4a38;
  plVar1 = *(long **)(param_1 + 0x1c0);
  plVar2 = *(long **)(param_1 + 0x1c8);
  do {
    if (plVar1 == plVar2) {
      return 0;
    }
    lVar5 = *plVar1;
    puVar6 = (undefined8 *)(lVar5 + 0x28);
    plVar4 = (long *)(**(code **)*puVar6)(puVar6);
    FUN_00d1189c();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)puVar3) {
        return lVar5;
      }
    }
    plVar1 = plVar1 + 1;
  } while( true );
}



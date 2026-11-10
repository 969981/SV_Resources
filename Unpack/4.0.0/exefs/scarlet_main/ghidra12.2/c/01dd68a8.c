/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd68a8; name: FUN_01dd68a8
 */


long FUN_01dd68a8(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x1c0);
  plVar1 = *(long **)(param_1 + 0x1c8);
  do {
    if (plVar6 == plVar1) {
      return 0;
    }
    lVar4 = *plVar6;
    puVar5 = (undefined8 *)(lVar4 + 0x28);
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    lVar3 = FUN_01561c0c();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        return lVar4;
      }
    }
    plVar6 = plVar6 + 1;
  } while( true );
}



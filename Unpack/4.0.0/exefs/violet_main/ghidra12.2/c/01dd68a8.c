/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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



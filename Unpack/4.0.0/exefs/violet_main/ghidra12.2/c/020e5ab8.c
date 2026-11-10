/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020e5ab8; name: FUN_020e5ab8
 */


long FUN_020e5ab8(long param_1)

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
    uVar3 = FUN_020e8064();
    plVar2 = plVar2 + 1;
  } while ((uVar3 & 1) == 0);
  return lVar4;
}



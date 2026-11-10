/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008b4de0; name: FUN_008b4de0
 */


long FUN_008b4de0(long param_1,uint param_2)

{
  size_t sVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if ((int)param_2 < 1) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    uVar3 = (ulong)param_2;
    puVar4 = (undefined8 *)(param_1 + 0x50);
    do {
      sVar1 = strlen((char *)*puVar4);
      lVar2 = lVar2 + sVar1 + 1;
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != 0);
  }
  return lVar2;
}



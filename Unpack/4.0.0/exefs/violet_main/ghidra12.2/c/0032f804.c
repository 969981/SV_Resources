/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0032f804; name: FUN_0032f804
 */


void FUN_0032f804(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar2 = DAT_047ef4b8;
  puVar1 = PTR_LAB_047cba48;
  if (DAT_047ef4b8 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*DAT_047ef4b8;
    if (puVar4 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)DAT_047ef4b8[1];
      if (puVar5 == puVar4) {
        puVar5 = puVar4;
      }
      else {
        do {
          puVar5 = puVar5 + -1;
          puVar3 = (undefined8 *)*puVar5;
          *puVar5 = 0;
          if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3);
            FUN_0049e790(puVar1,puVar3);
          }
        } while (puVar4 != puVar5);
        puVar5 = (undefined8 *)*puVar2;
      }
      puVar2[1] = puVar4;
      FUN_0049e790(PTR_LAB_047cba48,puVar5);
    }
    FUN_0049e790(PTR_LAB_047cba48,puVar2);
  }
  DAT_047ef4b8 = (undefined8 *)0x0;
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c75f4; name: FUN_001c75f4
 */


undefined8 FUN_001c75f4(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 auStack_28 [24];
  
  FUN_001c8d30(param_1,auStack_28);
  do {
    lVar1 = FUN_001c8d40(auStack_28);
    if (lVar1 == 0) {
      return 0;
    }
    puVar2 = *(undefined8 **)(*(long *)(lVar1 + 0x18) + 0x10);
  } while (puVar2 == (undefined8 *)0x0);
  return *puVar2;
}



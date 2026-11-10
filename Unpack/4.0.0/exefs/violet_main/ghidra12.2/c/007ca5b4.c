/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ca5b4; name: FUN_007ca5b4
 */


void FUN_007ca5b4(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)PTR_DAT_047d1140;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)PTR_DAT_047d1140 = 0;
    (**(code **)*puVar2)();
    puVar1 = PTR_DAT_047d08a0;
    puVar2 = *(undefined8 **)PTR_DAT_047d08a0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      FUN_007bfaa0(puVar2);
    }
    *(undefined8 *)puVar1 = 0;
  }
  return;
}



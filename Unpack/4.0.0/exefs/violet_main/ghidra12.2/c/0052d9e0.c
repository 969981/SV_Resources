/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052d9e0; name: FUN_0052d9e0
 */


void FUN_0052d9e0(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  puVar2 = PTR_DAT_047cdc70;
  puVar1 = (undefined8 *)PTR_DAT_047cdc78;
  for (puVar3 = *(undefined8 **)PTR_DAT_047cdc70; PTR_DAT_047cdc78 = (undefined *)puVar1,
      puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)puVar3[1]) {
    (*(code *)*puVar3)();
    puVar1 = (undefined8 *)PTR_DAT_047cdc78;
  }
  *(undefined8 *)puVar2 = 0;
  *puVar1 = 0;
  return;
}



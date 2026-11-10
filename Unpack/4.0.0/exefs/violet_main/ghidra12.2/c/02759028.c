/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02759028; name: FUN_02759028
 */


undefined8 FUN_02759028(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x128);
  puVar2 = *(undefined8 **)(param_1 + 0x120);
  do {
    if (puVar2 == puVar1) {
      return 0;
    }
    uVar3 = FUN_0275a508(*puVar2);
    puVar2 = puVar2 + 1;
  } while ((uVar3 & 1) == 0);
  return 1;
}



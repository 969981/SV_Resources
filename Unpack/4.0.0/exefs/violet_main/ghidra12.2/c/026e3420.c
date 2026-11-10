/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026e3420; name: FUN_026e3420
 */


void FUN_026e3420(long param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar3 = *(undefined1 **)(param_1 + 8);
  puVar2 = param_2 + 0x10;
  if (puVar2 != puVar3) {
    puVar2 = param_2;
    do {
      param_2 = puVar2 + 0x10;
      *puVar2 = *param_2;
      FUN_00f431e4(puVar2 + 8,0);
      uVar1 = *(undefined8 *)(puVar2 + 0x18);
      *(undefined8 *)(puVar2 + 0x18) = 0;
      *(undefined8 *)(puVar2 + 8) = uVar1;
      puVar2 = param_2;
    } while (puVar3 + -0x10 != param_2);
    puVar2 = *(undefined1 **)(param_1 + 8);
    if (puVar2 == param_2) goto LAB_026e349c;
  }
  do {
    puVar3 = puVar2 + -8;
    puVar2 = puVar2 + -0x10;
    FUN_01751d6c(puVar3);
  } while (param_2 != puVar2);
LAB_026e349c:
  *(undefined1 **)(param_1 + 8) = param_2;
  return;
}



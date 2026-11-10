/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d6f768; name: FUN_00d6f768
 */


undefined1  [16] FUN_00d6f768(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 0x80) + -1;
  if (*(int *)(param_1 + 0x80) < 1) {
    return ZEXT816(0);
  }
  auVar2 = *(undefined1 (*) [16])(param_1 + 0x60);
  *(int *)(param_1 + 0x80) = iVar1;
  if (iVar1 != 0) {
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x78);
    if (1 < *(int *)(param_1 + 0x80)) {
      puVar3 = (undefined8 *)(param_1 + 0x80);
      lVar4 = 1;
      do {
        lVar4 = lVar4 + 1;
        puVar3[-2] = *puVar3;
        puVar3[-1] = puVar3[1];
        puVar3 = puVar3 + 2;
      } while (lVar4 < *(int *)(param_1 + 0x80));
    }
  }
  return auVar2;
}



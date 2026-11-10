/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a3190; name: FUN_003a3190
 */


void FUN_003a3190(long param_1,ushort param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0xfb0);
  if (*(ushort *)(lVar1 + 2) - 1 == (uint)param_2) {
    *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(param_1 + 4000);
    lVar1 = *(long *)(param_1 + 0xfb0);
    puVar2 = (undefined8 *)(lVar1 + 0x58);
  }
  else {
    if (*(ushort *)(lVar1 + 2) + 1 != (uint)param_2) goto LAB_003a31e8;
    *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)(param_1 + 4000);
    lVar1 = *(long *)(param_1 + 0xfb0);
    puVar2 = (undefined8 *)(lVar1 + 0x60);
  }
  *(undefined8 *)(param_1 + 4000) = *puVar2;
LAB_003a31e8:
  *(ushort *)(lVar1 + 2) = param_2;
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00690efc; name: FUN_00690efc
 */


void FUN_00690efc(long param_1)

{
  ulong *puVar1;
  byte *pbVar2;
  
  if (*(int *)(param_1 + 0x24) == 2) {
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if (((puVar1 == (ulong *)0x0) &&
        (pbVar2 = *(byte **)(param_1 + 0x18), pbVar2 != PTR_DAT_047cba80)) &&
       (pbVar2 != (byte *)0x0)) {
      if ((*pbVar2 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
      }
LAB_00690f98:
      FUN_0049e790(PTR_LAB_047cba48,pbVar2);
      *(undefined4 *)(param_1 + 0x24) = 0;
      return;
    }
  }
  else if (*(int *)(param_1 + 0x24) == 1) {
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((puVar1 == (ulong *)0x0) && (pbVar2 = *(byte **)(param_1 + 0x18), pbVar2 != (byte *)0x0)) {
      FUN_0068d394(pbVar2);
      goto LAB_00690f98;
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00691d0c; name: FUN_00691d0c
 */


void FUN_00691d0c(long param_1)

{
  ulong *puVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x24) == 2) {
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((puVar1 == (ulong *)0x0) && (lVar2 = *(long *)(param_1 + 0x18), lVar2 != 0)) {
      FUN_0068a49c(lVar2);
      FUN_0049e790(PTR_LAB_047cba48,lVar2);
      *(undefined4 *)(param_1 + 0x24) = 0;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



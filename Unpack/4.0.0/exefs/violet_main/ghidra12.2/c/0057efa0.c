/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0057efa0; name: FUN_0057efa0
 */


void FUN_0057efa0(long param_1)

{
  ulong *puVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((puVar1 == (ulong *)0x0) && (lVar2 = *(long *)(param_1 + 0x10), lVar2 != 0)) {
      FUN_00513c68(lVar2);
      FUN_0049e790(PTR_LAB_047cba48,lVar2);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



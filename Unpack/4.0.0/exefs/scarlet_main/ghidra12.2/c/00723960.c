/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00723960; name: FUN_00723960
 */


void FUN_00723960(long param_1)

{
  ulong *puVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x1c) == 3) {
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((puVar1 == (ulong *)0x0) && (lVar2 = *(long *)(param_1 + 0x10), lVar2 != 0)) {
      FUN_006ff3f8(lVar2);
LAB_007239dc:
      FUN_0049e790(PTR_LAB_047cba48,lVar2);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return;
    }
  }
  else if (*(int *)(param_1 + 0x1c) == 1) {
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((puVar1 == (ulong *)0x0) && (lVar2 = *(long *)(param_1 + 0x10), lVar2 != 0)) {
      FUN_0071b8ec(lVar2);
      goto LAB_007239dc;
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



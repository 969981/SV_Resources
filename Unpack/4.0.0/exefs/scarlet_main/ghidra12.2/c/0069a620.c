/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0069a620; name: FUN_0069a620
 */


void FUN_0069a620(long param_1)

{
  int iVar1;
  ulong *puVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (((iVar1 == 5) || (iVar1 == 4)) || (iVar1 == 3)) {
    puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if ((puVar2 == (ulong *)0x0) && (lVar3 = *(long *)(param_1 + 0x18), lVar3 != 0)) {
      FUN_00267ec4(lVar3);
      FUN_0049e790(PTR_LAB_047cba48,lVar3);
      *(undefined4 *)(param_1 + 0x24) = 0;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



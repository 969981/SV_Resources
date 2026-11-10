/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004eb6d4; name: FUN_004eb6d4
 */


void FUN_004eb6d4(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  
  if (param_2 != param_1) {
    *(long *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    puVar3 = (ulong *)(param_1 + 8);
    if ((*puVar3 & 1) != 0) {
      uVar1 = *puVar3 & 0xfffffffffffffffe;
      if (*(long *)(uVar1 + 8) != *(long *)(uVar1 + 0x10)) {
        FUN_00514600();
      }
    }
    uVar1 = *(ulong *)(param_2 + 8);
    if ((uVar1 & 1) != 0) {
      if ((*puVar3 & 1) == 0) {
        lVar2 = FUN_00264e54(puVar3);
      }
      else {
        lVar2 = (*puVar3 & 0xfffffffffffffffe) + 8;
      }
      FUN_0051496c(lVar2,(uVar1 & 0xfffffffffffffffe) + 8);
    }
    if (*(long *)(param_2 + 0x10) != 0) {
      *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
    }
    if (*(int *)(param_2 + 0x18) != 0) {
      *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
    }
  }
  return;
}



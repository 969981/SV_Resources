/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004eddbc; name: FUN_004eddbc
 */


void FUN_004eddbc(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  
  if (param_2 != param_1) {
    puVar4 = (ulong *)(param_1 + 8);
    if ((*puVar4 & 1) != 0) {
      uVar2 = *puVar4 & 0xfffffffffffffffe;
      if (*(long *)(uVar2 + 8) != *(long *)(uVar2 + 0x10)) {
        FUN_00514600();
      }
    }
    if ((*(ulong *)(param_2 + 8) & 1) != 0) {
      lVar1 = (*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8;
      if ((*puVar4 & 1) == 0) {
        uVar3 = FUN_00264e54(puVar4);
        FUN_0051496c(uVar3,lVar1);
        return;
      }
      FUN_0051496c((*puVar4 & 0xfffffffffffffffe) + 8,lVar1);
      return;
    }
  }
  return;
}



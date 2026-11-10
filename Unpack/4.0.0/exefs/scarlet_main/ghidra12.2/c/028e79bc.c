/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028e79bc; name: FUN_028e79bc
 */


void FUN_028e79bc(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long local_18;
  
  if (*(long *)(param_1 + 0x138) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      local_18 = *(long *)(param_1 + 0x100) + lVar2;
      uVar1 = FUN_028e8540(param_1,*(undefined8 *)(*(long *)(param_1 + 0x100) + lVar2),&local_18);
      if ((uVar1 & 1) == 0) {
        return;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while (uVar3 < *(ulong *)(param_1 + 0x138));
  }
  return;
}



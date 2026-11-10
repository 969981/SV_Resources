/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028cd35c; name: FUN_028cd35c
 */


void FUN_028cd35c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long local_38;
  
  if (*(long *)(param_1 + 0x138) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      local_38 = *(long *)(param_1 + 0x100) + lVar2;
      uVar1 = FUN_028cd5f4(param_1,*(undefined8 *)(*(long *)(param_1 + 0x100) + lVar2),&local_38,
                           param_2);
      if ((uVar1 & 1) == 0) {
        return;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while (uVar3 < *(ulong *)(param_1 + 0x138));
  }
  return;
}



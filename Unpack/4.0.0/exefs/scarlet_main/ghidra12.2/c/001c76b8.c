/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c76b8; name: FUN_001c76b8
 */


void FUN_001c76b8(long param_1)

{
  int iVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  int local_28;
  
  if ((*(long *)(param_1 + 0x530) != 0) &&
     (iVar1 = *(int *)(*(long *)(param_1 + 0x530) + 0x68), iVar1 != 0)) {
    local_38 = 0x6500004e21;
    uStack_30 = 4;
    local_28 = iVar1;
    iVar1 = nnsocketResolverSetOption(&local_38);
    while ((iVar1 == -1 && (iVar1 = nnsocketGetLastErrno(), iVar1 == 0xb))) {
      nnosSleepThread(&LAB_00989680);
      iVar1 = nnsocketResolverSetOption(&local_38);
    }
  }
  FUN_001c7744(param_1 + 0x510);
  return;
}



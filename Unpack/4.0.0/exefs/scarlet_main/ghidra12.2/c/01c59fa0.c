/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c59fa0; name: FUN_01c59fa0
 */


undefined8 FUN_01c59fa0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  char local_48 [8];
  long local_40;
  undefined1 auStack_38 [24];
  
  uVar3 = FUN_019a41b0(param_1,1);
  if ((DAT_048137c0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_048137c0);
    if (iVar2 != 0) {
      DAT_04815c48 = 1;
      DAT_04815c50 = 1;
      __cxa_guard_release(&DAT_048137c0);
    }
  }
  FUN_01c5a064(local_48,uVar3);
  FUN_019e8bb0(param_1,local_48);
  lVar1 = local_40;
  if (local_48[0] == '\x01') {
    local_40 = 0;
    if (lVar1 != 0) {
      FUN_01c57454(auStack_38);
    }
  }
  return 1;
}



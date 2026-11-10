/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d1d760; name: FUN_01d1d760
 */


undefined8 FUN_01d1d760(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  char local_48 [8];
  long local_40;
  undefined1 auStack_38 [24];
  
  uVar3 = FUN_01d1d820(param_1,1);
  if ((DAT_0482ce88 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0482ce88);
    if (iVar2 != 0) {
      DAT_0482cfc0 = 1;
      __cxa_guard_release(&DAT_0482ce88);
    }
  }
  FUN_01d1d8ac(local_48,uVar3);
  FUN_01d1d920(param_1,local_48);
  lVar1 = local_40;
  if (local_48[0] == '\x01') {
    local_40 = 0;
    if (lVar1 != 0) {
      FUN_01d1da04(auStack_38);
    }
  }
  return 1;
}



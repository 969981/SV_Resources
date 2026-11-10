/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0247d120; name: FUN_0247d120
 */


undefined8 FUN_0247d120(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  char local_48 [8];
  undefined1 auStack_40 [32];
  
  uVar2 = FUN_0247c470(param_1,1);
  if (((DAT_0484a4c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0484a4c8), iVar1 != 0)) {
    DAT_0484c1d0 = 1;
    __cxa_guard_release(&DAT_0484a4c8);
  }
  FUN_0247d1d0(local_48,uVar2);
  FUN_00d1fe80(param_1,local_48);
  if (local_48[0] == '\x01') {
    FUN_00ea3018(auStack_40,0);
  }
  return 1;
}



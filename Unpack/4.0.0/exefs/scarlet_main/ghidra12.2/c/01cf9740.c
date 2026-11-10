/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cf9740; name: FUN_01cf9740
 */


undefined8 FUN_01cf9740(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  char local_48 [8];
  long local_40;
  undefined1 auStack_38 [24];
  
  uVar3 = FUN_01cf8240(param_1,1);
  if ((DAT_0481c378 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0481c378);
    if (iVar2 != 0) {
      DAT_0481c368 = PTR_FUN_047d6fc8;
      DAT_0481c370 = 0;
      __cxa_guard_release(&DAT_0481c378,uVar3);
    }
  }
  FUN_01cf82cc(local_48,&DAT_0481c368,uVar3);
  FUN_01cf8340(param_1,local_48);
  lVar1 = local_40;
  if (local_48[0] == '\x01') {
    local_40 = 0;
    if (lVar1 != 0) {
      FUN_01cf7a3c(auStack_38);
    }
  }
  return 1;
}



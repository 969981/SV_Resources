/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024eb120; name: FUN_024eb120
 */


undefined8 FUN_024eb120(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char local_48 [8];
  long local_40;
  undefined1 auStack_38 [24];
  
  uVar3 = FUN_024cb7e0(param_1,1);
  uVar4 = FUN_024cb150(param_1,2);
  if ((DAT_0484d8f0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0484d8f0);
    if (iVar2 != 0) {
      DAT_0484f1a8 = 1;
      __cxa_guard_release(&DAT_0484d8f0,uVar4);
    }
  }
  FUN_024eb1e8(local_48,uVar3,uVar4);
  FUN_024e2a10(param_1,local_48);
  lVar1 = local_40;
  if (local_48[0] == '\x01') {
    local_40 = 0;
    if (lVar1 != 0) {
      FUN_024e2af4(auStack_38);
    }
  }
  return 1;
}



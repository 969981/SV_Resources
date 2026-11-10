/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024d6f20; name: FUN_024d6f20
 */


undefined8 FUN_024d6f20(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  char local_48 [8];
  long local_40;
  undefined1 auStack_38 [24];
  
  uVar3 = FUN_024d2bf0(param_1,1);
  if ((DAT_0484d260 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0484d260);
    if (iVar2 != 0) {
      DAT_0484d250 = &LAB_02b9b8c8;
      DAT_0484d258 = 0;
      __cxa_guard_release(&DAT_0484d260,uVar3);
    }
  }
  FUN_024d6ec4(local_48,&DAT_0484d250,uVar3);
  FUN_024cf120(param_1,local_48);
  lVar1 = local_40;
  if (local_48[0] == '\x01') {
    local_40 = 0;
    if (lVar1 != 0) {
      FUN_024c9660(auStack_38);
    }
  }
  return 1;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024c58d0; name: FUN_024c58d0
 */


undefined8 FUN_024c58d0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  char local_48 [8];
  long local_40;
  undefined1 auStack_38 [24];
  
  uVar3 = FUN_01af2210(param_1,1);
  uVar4 = FUN_01af2210(param_1,2);
  if ((DAT_0484cbd0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0484cbd0);
    if (iVar2 != 0) {
      DAT_0484cbc0 = PTR_LAB_047dee08;
      DAT_0484cbc8 = 0;
      __cxa_guard_release(&DAT_0484cbd0,extraout_x1,uVar4);
    }
  }
  FUN_024c5868(local_48,&DAT_0484cbc0,uVar3,uVar4);
  FUN_01af1c80(param_1,local_48);
  lVar1 = local_40;
  if (local_48[0] == '\x01') {
    local_40 = 0;
    if (lVar1 != 0) {
      FUN_01af1d64(auStack_38);
    }
  }
  return 1;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c6f970; name: FUN_01c6f970
 */


undefined8 FUN_01c6f970(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  char local_c8 [8];
  long local_c0;
  undefined1 auStack_b8 [24];
  char local_a0 [16];
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [48];
  
  uVar2 = FUN_00c92df0(param_1,1,0);
  uVar3 = FUN_00c92df0(param_1,2,0);
  uVar5 = FUN_00c92df0(param_1,3,0);
  if (((DAT_04814c98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04814c98), iVar4 != 0)) {
    __cxa_guard_release(&DAT_04814c98,extraout_x1,uVar5);
  }
  FUN_01c6faa8(local_a0,uVar2,uVar3,uVar5);
  if (local_a0[0] == '\0') {
    local_c8[0] = '\0';
    local_c0 = 0;
  }
  else {
    local_c8[0] = '\x01';
    memcpy(auStack_60,auStack_90,0x30);
    FUN_019348ec(&local_c0,auStack_60);
    if (local_a0[0] != '\0') {
      local_a0[0] = '\0';
    }
  }
  FUN_018567d0(param_1,local_c8);
  lVar1 = local_c0;
  if (local_c8[0] == '\x01') {
    local_c0 = 0;
    if (lVar1 != 0) {
      FUN_0199f3a0(auStack_b8);
    }
  }
  return 1;
}



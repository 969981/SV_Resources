/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024cae90; name: FUN_024cae90
 */


undefined8 FUN_024cae90(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  char local_48 [8];
  long local_40;
  undefined1 auStack_38 [24];
  
  uVar3 = FUN_024ca2a0(param_1,1);
  uVar4 = FUN_024ca2a0(param_1,2);
  if ((DAT_0484ce28 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0484ce28);
    if (iVar2 != 0) {
      DAT_0484ce18 = PTR_LAB_047deeb0;
      DAT_0484ce20 = 0;
      __cxa_guard_release(&DAT_0484ce28,extraout_x1,uVar4);
    }
  }
  FUN_024cae28(local_48,&DAT_0484ce18,uVar3,uVar4);
  FUN_024ca8b0(param_1,local_48);
  lVar1 = local_40;
  if (local_48[0] == '\x01') {
    local_40 = 0;
    if (lVar1 != 0) {
      FUN_024ca994(auStack_38);
    }
  }
  return 1;
}



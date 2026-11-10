/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01af3ea0; name: FUN_01af3ea0
 */


undefined8 FUN_01af3ea0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_24 [4];
  
  uVar5 = FUN_01846ee0(param_1,1);
  uVar2 = FUN_00c92df0(param_1,2,0);
  if ((DAT_04801648 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(&DAT_04801648);
    if (iVar4 != 0) {
      DAT_04801fe8 = '\x01';
      DAT_04801ff0 = 1;
      __cxa_guard_release(&DAT_04801648);
    }
  }
  uVar1 = 0x70;
  if (DAT_04801fe8 == '\0') {
    uVar1 = 0;
  }
  local_24[0] = uVar2;
  uVar3 = FUN_01af3f7c(uVar5,uVar1,DAT_04801ff0,local_24);
  FUN_00c5d960(param_1,uVar3);
  return 1;
}



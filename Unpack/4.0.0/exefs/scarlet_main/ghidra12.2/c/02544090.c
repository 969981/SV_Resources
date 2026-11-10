/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02544090; name: FUN_02544090
 */


undefined8 FUN_02544090(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [12];
  int iVar3;
  undefined8 uVar4;
  
  if (((DAT_0484f7f0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0484f7f0), iVar3 != 0)) {
    DAT_04850500 = '\x01';
    __cxa_guard_release(&DAT_0484f7f0);
  }
  uVar4 = FUN_02544150(param_1,1);
  uVar1 = 0x40;
  if (DAT_04850500 == '\0') {
    uVar1 = 0xffffffffffffffff;
  }
  auVar2 = FUN_025441dc(uVar4,uVar1);
  FUN_00c46da0((double)auVar2._0_4_,param_1);
  FUN_00c46da0((double)auVar2._4_4_,param_1);
  FUN_00c46da0((double)auVar2._8_4_,param_1);
  return 3;
}



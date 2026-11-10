/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0032bf08; name: FUN_0032bf08
 */


undefined8 FUN_0032bf08(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  FUN_0038db40(param_1 + 0x20);
  auVar3 = FUN_00342da0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),0);
  FUN_0038db60(param_1 + 0x20);
  lVar1 = FUN_003427d0(auVar3._0_8_,auVar3._8_8_,param_2,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0033bc88();
  }
  thunk_FUN_00342a80(auVar3._0_8_,auVar3._8_8_,0);
  return uVar2;
}



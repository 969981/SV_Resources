/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d063d0; name: FUN_00d063d0
 */


undefined1  [16]
FUN_00d063d0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
            long param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  auVar2._8_8_ = param_6;
  auVar2._0_8_ = param_5;
  if ((param_2 != param_4) && (auVar2 = auVar1, param_4 != param_6)) {
    auVar2 = FUN_028a5160();
  }
  return auVar2;
}



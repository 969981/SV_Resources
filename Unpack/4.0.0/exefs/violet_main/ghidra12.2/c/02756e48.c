/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02756e48; name: FUN_02756e48
 */


undefined1  [16] FUN_02756e48(undefined8 param_1,undefined1 param_2 [16],long param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  
  uVar3 = param_2._8_8_;
  if ((*(long **)(param_3 + 0x48) == (long *)0x0) ||
     (uVar1 = (**(code **)(**(long **)(param_3 + 0x48) + 0x40))(), (uVar1 & 1) == 0)) {
    auVar2._8_8_ = uVar3;
    auVar2._0_8_ = param_2._0_8_;
    return auVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x02756e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar2 = (**(code **)(**(long **)(param_3 + 0x48) + 0x28))(param_1,param_2._0_8_);
  return auVar2;
}



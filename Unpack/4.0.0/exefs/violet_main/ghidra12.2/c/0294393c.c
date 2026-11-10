/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0294393c; name: FUN_0294393c
 */


undefined8 FUN_0294393c(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x310))();
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x02943984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x220))(param_1,0x22);
    return uVar2;
  }
  return 1;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0113ca0c; name: FUN_0113ca0c
 */


undefined8 FUN_0113ca0c(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x50))();
  if (cVar1 == '\0') {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0113ca48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x58))(param_1,0);
  return uVar2;
}



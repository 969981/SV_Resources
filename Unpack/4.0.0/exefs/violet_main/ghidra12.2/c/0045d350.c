/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0045d350; name: FUN_0045d350
 */


long FUN_0045d350(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0045f4e0(param_1,0);
  if (lVar1 == 0) {
    return 0;
  }
  lVar2 = FUN_0043e570();
  FUN_0043e1f0(lVar1);
  if ((lVar2 != 0) && (param_2 != (long *)0x0)) {
    FUN_0046a210(*param_2);
    *param_2 = lVar2;
  }
  return lVar2;
}



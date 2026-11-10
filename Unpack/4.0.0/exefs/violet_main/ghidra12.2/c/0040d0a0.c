/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040d0a0; name: FUN_0040d0a0
 */


long FUN_0040d0a0(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    lVar2 = FUN_0040c900(*param_1);
    if ((lVar2 == 0) || (iVar1 = FUN_0040cc50(lVar2,param_1), iVar1 != 0)) {
      return lVar2;
    }
    FUN_0040ca30(lVar2);
  }
  return 0;
}



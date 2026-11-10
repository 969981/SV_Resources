/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0043b810; name: FUN_0043b810
 */


undefined8 FUN_0043b810(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_003e4ff0();
  uVar3 = 0;
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_003df070(lVar2,param_2,param_3);
    if (iVar1 == 0) {
      thunk_FUN_003df2e0(lVar2);
      return 0;
    }
    FUN_003de3c0(param_1,4,lVar2);
    uVar3 = 1;
  }
  return uVar3;
}



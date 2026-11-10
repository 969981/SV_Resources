/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036a5a0; name: FUN_0036a5a0
 */


bool FUN_0036a5a0(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (*param_1 == 0) {
    lVar2 = (long)param_1 + 9;
    uVar3 = (ulong)*(byte *)(param_1 + 1);
  }
  else {
    uVar3 = param_1[1];
    lVar2 = param_1[2];
  }
  iVar1 = FUN_0038d140(lVar2,uVar3,param_2);
  return iVar1 != 0;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036a0b0; name: FUN_0036a0b0
 */


void FUN_0036a0b0(long *param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = (long)param_1 + 9;
  if (*param_1 != 0) {
    lVar1 = param_1[2];
  }
  uVar2 = param_1[1] & 0xff;
  if (*param_1 != 0) {
    uVar2 = param_1[1];
  }
  FUN_0038d120(lVar1,uVar2,param_2);
  return;
}



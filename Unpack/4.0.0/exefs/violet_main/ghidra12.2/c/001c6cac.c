/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c6cac; name: FUN_001c6cac
 */


uint FUN_001c6cac(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = thunk_FUN_001ec4e8();
  if (((uVar2 & 1) == 0) && (uVar2 = FUN_001db810(param_1,param_2), (uVar2 & 1) == 0)) {
    uVar1 = FUN_001db41c(*(undefined4 *)(param_1 + (long)param_2 * 4 + 600),0xffffffff,0xffffffff,0)
    ;
    uVar1 = uVar1 & 0 < (int)uVar1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



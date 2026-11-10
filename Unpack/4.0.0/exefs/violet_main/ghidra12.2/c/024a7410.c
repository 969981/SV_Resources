/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a7410; name: FUN_024a7410
 */


void FUN_024a7410(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x100);
  if ((lVar2 == *(long *)(param_1 + 0xf0)) && (lVar2 != -1)) {
    uVar1 = lVar2 + 1U;
    if (lVar2 + 1U <= (ulong)(lVar2 << 2)) {
      uVar1 = lVar2 << 2;
    }
    FUN_024a7650(param_1,uVar1);
  }
  FUN_024a76a4(param_1,param_2);
  return;
}



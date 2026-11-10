/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018ce3c0; name: FUN_018ce3c0
 */


ulong FUN_018ce3c0(long *param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  
  iVar2 = 0;
  do {
    uVar1 = FUN_02923be0(iVar2);
    uVar3 = uVar1 & 0xffffffff;
    if ((uVar1 & 0xffff) == 0) {
      return uVar3;
    }
    iVar2 = iVar2 + 1;
    uVar1 = (**(code **)(*param_1 + 0x220))(param_1,uVar3);
  } while ((uVar1 & 1) == 0);
  return uVar3;
}



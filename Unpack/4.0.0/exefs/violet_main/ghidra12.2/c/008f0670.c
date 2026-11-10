/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008f0670; name: FUN_008f0670
 */


undefined4 FUN_008f0670(int param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 == 3) {
    return 2;
  }
  if (param_1 != 2) {
    if (param_1 != 1) {
                    /* WARNING: Subroutine does not return */
      nn::detail::UnexpectedDefaultImpl("","",0);
    }
    uVar2 = 4;
    if ((param_2 & 1) == 0) {
      uVar2 = 0;
    }
    return uVar2;
  }
  bVar1 = (param_3 & 1) == 0;
  uVar2 = 6;
  if (bVar1) {
    uVar2 = 1;
  }
  uVar3 = 7;
  if (bVar1) {
    uVar3 = 5;
  }
  if ((param_2 & 1) != 0) {
    uVar2 = uVar3;
  }
  return uVar2;
}



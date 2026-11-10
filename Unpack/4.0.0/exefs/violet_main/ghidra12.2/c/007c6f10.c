/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c6f10; name: FUN_007c6f10
 */


int FUN_007c6f10(long param_1,ulong param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return -1;
  }
  iVar1 = nn::util::VSNPrintf();
  if ((iVar1 < 0) || (param_2 <= (ulong)(long)iVar1)) {
    *(undefined *)(param_2 + param_1 + -1) = *PTR_DAT_047d1018;
  }
  if (param_2 <= (ulong)(long)iVar1) {
    iVar1 = (int)param_2 + -1;
  }
  return iVar1;
}



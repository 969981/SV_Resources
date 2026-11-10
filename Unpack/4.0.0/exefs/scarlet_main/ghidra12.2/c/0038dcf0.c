/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038dcf0; name: FUN_0038dcf0
 */


int FUN_0038dcf0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  
  if ((int)((ulong)param_2 >> 0x20) != (int)((ulong)param_4 >> 0x20)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar2 = (uint)(param_3 < param_1) - (uint)(param_1 < param_3);
  iVar1 = 0;
  if (1 < param_1 + 0x8000000000000001U) {
    iVar1 = (uint)((int)param_4 < (int)param_2) - (uint)((int)param_2 < (int)param_4);
  }
  if (iVar2 == 0) {
    iVar2 = iVar1;
  }
  return iVar2;
}



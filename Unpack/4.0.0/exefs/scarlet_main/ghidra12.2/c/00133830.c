/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00133830; name: FUN_00133830
 */


void FUN_00133830(long *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = *(byte *)((long)param_1 + 0x44);
  iVar1 = (uint)bVar2 + param_2;
  if ((int)(uint)*(byte *)(*param_1 + 0xc) < iVar1) {
    if (0xfe < iVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00138770(param_1[2],"function or expression needs too many registers");
    }
    *(char *)(*param_1 + 0xc) = (char)iVar1;
    bVar2 = *(byte *)((long)param_1 + 0x44);
  }
  *(byte *)((long)param_1 + 0x44) = bVar2 + (char)param_2;
  return;
}



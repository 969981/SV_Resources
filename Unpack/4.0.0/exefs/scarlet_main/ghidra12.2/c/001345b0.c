/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001345b0; name: FUN_001345b0
 */


int FUN_001345b0(long *param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  
  FUN_00133b50();
  if (*param_2 == 8) {
    iVar1 = param_2[2];
    if (param_2[4] == param_2[5]) {
      return iVar1;
    }
    iVar3 = FUN_0012ea70(param_1);
    if (iVar3 <= iVar1) {
      FUN_00133ee0(param_1,param_2,param_2[2]);
      goto LAB_0013467c;
    }
  }
  FUN_00133b50(param_1,param_2);
  if ((*param_2 == 8) && (iVar1 = param_2[2], iVar3 = FUN_0012ea70(param_1), iVar3 <= iVar1)) {
    *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
  }
  bVar2 = *(byte *)((long)param_1 + 0x44);
  bVar4 = bVar2 + 1;
  if (*(byte *)(*param_1 + 0xc) <= bVar2) {
    if (0xfd < bVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00138770(param_1[2],"function or expression needs too many registers");
    }
    *(byte *)(*param_1 + 0xc) = bVar4;
    bVar4 = *(char *)((long)param_1 + 0x44) + 1;
  }
  *(byte *)((long)param_1 + 0x44) = bVar4;
  FUN_00133ee0(param_1,param_2,bVar4 - 1);
LAB_0013467c:
  return param_2[2];
}



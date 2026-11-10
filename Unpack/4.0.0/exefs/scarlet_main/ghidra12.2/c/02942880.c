/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02942880; name: FUN_02942880
 */


bool FUN_02942880(long param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  cVar1 = FUN_01249348(*(undefined8 *)(param_1 + 0x10));
  if (cVar1 == '\0') {
    iVar6 = 0;
    iVar5 = 0;
  }
  else {
    uVar4 = 0;
    iVar5 = 0;
    iVar6 = 0;
    do {
      piVar3 = (int *)FUN_01249354(*(undefined8 *)(param_1 + 0x10),uVar4);
      if (((piVar3 != (int *)0x0) && (*piVar3 != param_2)) &&
         (iVar6 = iVar6 + 1, *(char *)((long)piVar3 + 0x89) != '\0')) {
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      uVar2 = FUN_01249348(*(undefined8 *)(param_1 + 0x10));
    } while (uVar4 < (uVar2 & 0xff));
  }
  return iVar6 == iVar5;
}



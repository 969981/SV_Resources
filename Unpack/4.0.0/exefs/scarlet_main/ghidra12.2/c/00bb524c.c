/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bb524c; name: FUN_00bb524c
 */


bool FUN_00bb524c(byte *param_1,byte *param_2)

{
  char *pcVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  byte *pbVar9;
  byte *__s2;
  char *pcVar10;
  
  bVar3 = *param_1;
  pcVar7 = (char *)(ulong)(bVar3 >> 1);
  pcVar10 = *(char **)(param_1 + 8);
  bVar4 = *param_2;
  pcVar8 = pcVar7;
  if ((bVar3 & 1) != 0) {
    pcVar8 = pcVar10;
  }
  pcVar1 = (char *)(ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    pcVar1 = *(char **)(param_2 + 8);
  }
  if (pcVar8 == pcVar1) {
    pbVar9 = *(byte **)(param_1 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar9 = param_1 + 1;
    }
    __s2 = *(byte **)(param_2 + 0x10);
    if ((bVar4 & 1) == 0) {
      __s2 = param_2 + 1;
    }
    if ((bVar3 & 1) == 0) {
      if (pcVar8 != (char *)0x0) {
        pcVar8 = pcVar7;
        pbVar9 = param_1;
        do {
          pbVar9 = pbVar9 + 1;
          if (*pbVar9 != *__s2) goto LAB_00bb52e4;
          pcVar8 = pcVar8 + -1;
          __s2 = __s2 + 1;
        } while (pcVar8 != (char *)0x0);
      }
    }
    else if ((pcVar8 != (char *)0x0) && (iVar6 = memcmp(pbVar9,__s2,(size_t)pcVar8), iVar6 != 0))
    goto joined_r0x00bb530c;
    bVar5 = true;
  }
  else {
LAB_00bb52e4:
    if ((bVar3 & 1) == 0) {
      pcVar10 = pcVar7;
    }
joined_r0x00bb530c:
    if (pcVar10 <= pcVar1) {
      pbVar9 = *(byte **)(param_1 + 0x10);
      if ((bVar3 & 1) == 0) {
        pbVar9 = param_1 + 1;
      }
      iVar6 = std::string::compare((ulong)param_2,0,pcVar10,(ulong)pbVar9);
      if (iVar6 == 0) {
        uVar2 = (ulong)(*param_1 >> 1);
        if ((*param_1 & 1) != 0) {
          uVar2 = *(ulong *)(param_1 + 8);
        }
        pbVar9 = *(byte **)(param_2 + 0x10);
        if ((*param_2 & 1) == 0) {
          pbVar9 = param_2 + 1;
        }
        return pbVar9[uVar2] == 0x2e;
      }
    }
    bVar5 = false;
  }
  return bVar5;
}



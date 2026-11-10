/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00567ef0; name: FUN_00567ef0
 */


uint FUN_00567ef0(char *param_1)

{
  size_t sVar1;
  char *pcVar3;
  char *pcVar2;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  
  sVar1 = strlen(param_1);
  if (sVar1 == 0) {
    return 0;
  }
  if (sVar1 < 4) {
    uVar6 = 0;
    pcVar3 = param_1;
  }
  else {
    uVar4 = sVar1 & 0xfffffffffffffffc;
    iVar8 = 0;
    iVar9 = 0;
    iVar7 = 0;
    iVar5 = 0;
    pcVar3 = param_1 + uVar4;
    pcVar2 = param_1 + 3;
    uVar10 = uVar4;
    do {
      if (pcVar2[-3] == '/') {
        iVar8 = iVar8 + 1;
      }
      if (pcVar2[-2] == '/') {
        iVar9 = iVar9 + 1;
      }
      if (pcVar2[-1] == '/') {
        iVar7 = iVar7 + 1;
      }
      if (*pcVar2 == '/') {
        iVar5 = iVar5 + 1;
      }
      uVar10 = uVar10 - 4;
      pcVar2 = pcVar2 + 4;
    } while (uVar10 != 0);
    uVar6 = iVar5 + iVar7 + iVar9 + iVar8;
    if (sVar1 == uVar4) goto LAB_00567f98;
  }
  do {
    pcVar2 = pcVar3 + 1;
    if (*pcVar3 == '/') {
      uVar6 = uVar6 + 1;
    }
    pcVar3 = pcVar2;
  } while (param_1 + sVar1 != pcVar2);
LAB_00567f98:
  return uVar6 & 1;
}



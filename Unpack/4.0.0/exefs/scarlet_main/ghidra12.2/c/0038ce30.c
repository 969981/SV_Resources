/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038ce30; name: FUN_0038ce30
 */


/* WARNING: Removing unreachable block (ram,0x0038cea4) */

char * FUN_0038ce30(byte *param_1,long param_2,uint param_3,long *param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  if (((param_3 & 1) == 0) || (param_2 == 0)) {
    uVar6 = 0;
    uVar8 = 0;
    pcVar5 = (char *)0x0;
  }
  else {
    cVar3 = "0123456789abcdef"[*param_1 >> 4];
    pcVar5 = (char *)FUN_0038c7f0(0,8);
    *pcVar5 = cVar3;
    uVar6 = 8;
    uVar8 = 2;
    pcVar5[1] = "0123456789abcdef"[(ulong)*param_1 & 0xf];
    if (param_2 != 1) {
      lVar10 = 1;
      do {
        if (lVar10 != 0) {
          if (uVar8 == uVar6) {
            uVar6 = uVar6 * 2;
            if (uVar6 < 9) {
              uVar6 = 8;
            }
            pcVar5 = (char *)FUN_0038c7f0(pcVar5,uVar6);
          }
          pcVar5[uVar8] = ' ';
          uVar8 = uVar8 + 1;
        }
        cVar3 = "0123456789abcdef"[param_1[lVar10] >> 4];
        if (uVar8 == uVar6) {
          uVar6 = uVar6 * 2;
          if (uVar6 < 9) {
            uVar6 = 8;
          }
          pcVar5 = (char *)FUN_0038c7f0(pcVar5,uVar6);
        }
        pcVar5[uVar8] = cVar3;
        uVar9 = uVar8 + 1;
        cVar3 = "0123456789abcdef"[(ulong)param_1[lVar10] & 0xf];
        if (uVar9 == uVar6) {
          uVar6 = uVar6 * 2;
          if (uVar6 < 9) {
            uVar6 = 8;
          }
          pcVar5 = (char *)FUN_0038c7f0(pcVar5,uVar6);
        }
        lVar10 = lVar10 + 1;
        uVar8 = uVar8 + 2;
        pcVar5[uVar9] = cVar3;
      } while (param_2 != lVar10);
    }
  }
  if ((param_3 >> 1 & 1) == 0) {
LAB_0038d0ac:
    uVar7 = uVar8;
    if (uVar8 != uVar6) goto LAB_0038d0d0;
  }
  else {
    if (uVar8 == 0) {
      uVar9 = 0;
      uVar7 = uVar9;
      if (param_2 != 0) goto LAB_0038d02c;
    }
    else {
      if (uVar8 == uVar6) {
        uVar6 = uVar6 * 2;
        if (uVar6 < 9) {
          uVar6 = 8;
        }
        pcVar5 = (char *)FUN_0038c7f0(pcVar5,uVar6);
      }
      pcVar5[uVar8] = ' ';
      if (uVar8 + 1 == uVar6) {
        uVar6 = uVar6 * 2;
        if (uVar6 < 9) {
          uVar6 = 8;
        }
        pcVar5 = (char *)FUN_0038c7f0(pcVar5,uVar6);
      }
      uVar9 = uVar8 + 2;
      pcVar5[uVar8 + 1] = '\'';
      uVar7 = uVar9;
      if (param_2 != 0) {
LAB_0038d02c:
        do {
          bVar2 = *param_1;
          iVar4 = isprint((uint)bVar2);
          bVar1 = 0x2e;
          if (iVar4 != 0) {
            bVar1 = bVar2;
          }
          if (uVar9 == uVar6) {
            uVar6 = uVar6 * 2;
            if (uVar6 < 9) {
              uVar6 = 8;
            }
            pcVar5 = (char *)FUN_0038c7f0(pcVar5,uVar6);
          }
          uVar7 = uVar9 + 1;
          pcVar5[uVar9] = bVar1;
          param_1 = param_1 + 1;
          param_2 = param_2 + -1;
          uVar9 = uVar7;
        } while (param_2 != 0);
      }
    }
    if (uVar8 != 0) {
      if (uVar7 == uVar6) {
        uVar6 = uVar6 * 2;
        if (uVar6 < 9) {
          uVar6 = 8;
        }
        pcVar5 = (char *)FUN_0038c7f0(pcVar5,uVar6);
      }
      uVar8 = uVar7 + 1;
      pcVar5[uVar7] = '\'';
      goto LAB_0038d0ac;
    }
    if (uVar7 != uVar6) goto LAB_0038d0d0;
  }
  uVar6 = uVar6 * 2;
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  pcVar5 = (char *)FUN_0038c7f0(pcVar5,uVar6);
LAB_0038d0d0:
  pcVar5[uVar7] = '\0';
  *param_4 = uVar7 + 1;
  return pcVar5;
}



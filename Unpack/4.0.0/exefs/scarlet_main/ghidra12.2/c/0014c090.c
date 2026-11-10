/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0014c090; name: FUN_0014c090
 */


ulong FUN_0014c090(undefined8 param_1,long param_2,int param_3,uint param_4,int param_5)

{
  bool bVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  
  uVar4 = param_4;
  if (7 < (int)param_4) {
    uVar4 = 8;
  }
  if ((int)param_4 < 1) {
    uVar6 = 0;
  }
  else if (param_3 == 0) {
    uVar6 = 0;
    iVar5 = param_4 - uVar4;
    lVar8 = (long)(int)(uVar4 - 1) + 1;
    do {
      lVar2 = (long)iVar5;
      iVar5 = iVar5 + 1;
      uVar6 = (ulong)*(byte *)(param_2 + lVar2) | uVar6 << 8;
      lVar8 = lVar8 + -1;
    } while (0 < lVar8);
  }
  else {
    uVar6 = 0;
    lVar8 = (long)(int)(uVar4 - 1);
    do {
      uVar6 = (ulong)*(byte *)(param_2 + lVar8) | uVar6 << 8;
      bVar1 = 0 < lVar8;
      lVar8 = lVar8 + -1;
    } while (bVar1);
  }
  if ((int)param_4 < 8) {
    if (param_5 != 0) {
      uVar7 = 1L << ((ulong)(param_4 * 8 - 1) & 0x3f);
      uVar6 = (uVar6 ^ uVar7) - uVar7;
    }
  }
  else if (param_4 != 8) {
    uVar7 = (ulong)param_4;
    cVar3 = '\0';
    if (0x7fffffffffffffff < uVar6 && param_5 != 0) {
      cVar3 = -1;
    }
    if (param_3 == 0) {
      lVar8 = -9;
      do {
        while (cVar3 == *(char *)(param_2 + (int)(param_4 + (int)lVar8))) {
          lVar8 = lVar8 + -1;
          if (uVar7 + lVar8 == -1) {
            return uVar6;
          }
        }
        FUN_00123a70(param_1,"%d-byte integer does not fit into Lua Integer",param_4);
        lVar8 = lVar8 + -1;
      } while (uVar7 + lVar8 != -1);
    }
    else {
      pcVar9 = (char *)(param_2 + 8);
      lVar8 = uVar7 - 8;
      do {
        while (cVar3 == *pcVar9) {
          pcVar9 = pcVar9 + 1;
          lVar8 = lVar8 + -1;
          if (lVar8 == 0) {
            return uVar6;
          }
        }
        FUN_00123a70(param_1,"%d-byte integer does not fit into Lua Integer",param_4);
        pcVar9 = pcVar9 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  return uVar6;
}



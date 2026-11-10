/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033b2d68; name: FUN_033b2d68
 */


undefined8 FUN_033b2d68(long param_1,byte *param_2,undefined4 *param_3)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  char acStack_71 [33];
  
  uVar14 = (uint)*param_2;
  uVar8 = 0x811c9dc5;
  if (*param_2 != 0) {
    pbVar11 = param_2;
    do {
      pbVar11 = pbVar11 + 1;
      uVar8 = (uVar8 ^ uVar14) * 0x1000193;
      uVar14 = (uint)*pbVar11;
    } while (uVar14 != 0);
  }
  uVar14 = *(uint *)(param_1 + 0x24);
  uVar16 = (ulong)(uVar14 & uVar8);
  lVar15 = *(long *)(param_1 + 0x18);
  uVar12 = *(ulong *)(lVar15 + uVar16 * 0x18);
  if (uVar12 != 0xffffffffffffffff) {
    do {
      if ((uVar12 == uVar8) &&
         (iVar5 = strcmp((char *)param_2,*(char **)(lVar15 + uVar16 * 0x18 + 8)), iVar5 == 0))
      goto LAB_033b2e20;
      uVar16 = uVar16 + 1 & (long)(int)uVar14;
      uVar12 = *(ulong *)(lVar15 + uVar16 * 0x18);
    } while (uVar12 != 0xffffffffffffffff);
  }
  uVar16 = (ulong)(uVar14 + 1);
LAB_033b2e20:
  uVar6 = 0x80040200;
  if (((int)uVar16 <= (int)uVar14) &&
     (uVar12 = *(ulong *)(lVar15 + (long)(int)uVar16 * 0x18 + 0x10), -1 < (int)uVar12)) {
    piVar1 = (int *)(*(long *)(param_1 + 0xb8) + (uVar12 & 0xffffffff) * 8);
    iVar5 = *piVar1;
    iVar3 = piVar1[1];
    if (iVar5 != iVar3) {
      lVar15 = *(long *)(param_1 + 0x90) + (long)*(int *)(param_1 + 0x80);
      pcVar2 = (char *)(lVar15 + iVar5);
      pbVar10 = (byte *)(lVar15 + iVar3);
      pbVar11 = (byte *)(pcVar2 + 1);
      if ((*pcVar2 == '\"' && pbVar11 != pbVar10) && (pbVar10 = pbVar10 + -1, *pbVar10 == 0x22)) {
        uVar12 = (long)pbVar10 - (long)pbVar11;
        if (0 < (int)uVar12) {
          pbVar13 = (byte *)(pcVar2 + 2);
          if (*pbVar11 != 0x2d) {
            pbVar13 = pbVar11;
          }
          if (pbVar13 < pbVar10) {
            bVar4 = pbVar11[*pbVar11 == 0x2d];
            while (bVar4 - 0x30 < 10) {
              pbVar13 = pbVar13 + 1;
              if (pbVar10 <= pbVar13) {
                if (0 < (int)uVar12) {
                  strncpy(acStack_71 + 1,(char *)pbVar11,uVar12 & 0xffffffff);
                }
                acStack_71[uVar12 + 1] = '\0';
                lVar7 = strtoll(acStack_71 + 1,(char **)0x0,0);
                uVar9 = (undefined4)lVar7;
                uVar6 = 0;
                goto LAB_033b2f00;
              }
              bVar4 = *pbVar13;
            }
          }
        }
        uVar9 = 0;
LAB_033b2f00:
        *param_3 = uVar9;
      }
    }
  }
  return uVar6;
}



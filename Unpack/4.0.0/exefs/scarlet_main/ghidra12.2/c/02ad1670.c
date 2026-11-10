/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ad1670; name: FUN_02ad1670
 */


ulong FUN_02ad1670(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  uVar11 = FUN_02ad12c0();
  if (*param_4 < *param_3) {
    uVar1 = *(undefined8 *)param_3;
    uVar4 = *(undefined8 *)(param_3 + 2);
    uVar2 = *(undefined8 *)(param_3 + 4);
    uVar5 = *(undefined8 *)(param_3 + 6);
    cVar8 = (char)param_3[8];
    uVar6 = *(undefined8 *)(param_4 + 6);
    uVar12 = *(undefined8 *)(param_3 + 9);
    uVar3 = *(undefined8 *)param_4;
    uVar7 = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_4 + 4);
    *(undefined8 *)(param_3 + 6) = uVar6;
    uVar9 = param_3[0xb];
    *(undefined8 *)param_3 = uVar3;
    *(undefined8 *)(param_3 + 2) = uVar7;
    if (cVar8 == '\0') {
      if ((char)param_4[8] != '\0') {
        *(undefined8 *)(param_3 + 9) = *(undefined8 *)(param_4 + 9);
        *(undefined1 *)(param_3 + 8) = 1;
      }
    }
    else if ((char)param_4[8] == '\0') {
      *(undefined1 *)(param_3 + 8) = 0;
    }
    else {
      *(undefined8 *)(param_3 + 9) = *(undefined8 *)(param_4 + 9);
    }
    *(char *)(param_3 + 0xb) = (char)param_4[0xb];
    *(undefined8 *)param_4 = uVar1;
    *(undefined8 *)(param_4 + 2) = uVar4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uVar5;
    if ((char)param_4[8] == '\0') {
      if (cVar8 != '\0') {
        *(undefined8 *)(param_4 + 9) = uVar12;
        *(undefined1 *)(param_4 + 8) = 1;
      }
    }
    else if (cVar8 == '\0') {
      *(undefined1 *)(param_4 + 8) = 0;
    }
    else {
      *(undefined8 *)(param_4 + 9) = uVar12;
    }
    *(char *)(param_4 + 0xb) = (char)uVar9;
    iVar10 = (int)uVar11;
    if (*param_3 < *param_2) {
      uVar1 = *(undefined8 *)param_2;
      uVar4 = *(undefined8 *)(param_2 + 2);
      uVar2 = *(undefined8 *)(param_2 + 4);
      uVar5 = *(undefined8 *)(param_2 + 6);
      cVar8 = (char)param_2[8];
      uVar6 = *(undefined8 *)(param_3 + 6);
      uVar12 = *(undefined8 *)(param_2 + 9);
      uVar3 = *(undefined8 *)param_3;
      uVar7 = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
      *(undefined8 *)(param_2 + 6) = uVar6;
      uVar9 = param_2[0xb];
      *(undefined8 *)param_2 = uVar3;
      *(undefined8 *)(param_2 + 2) = uVar7;
      if (cVar8 == '\0') {
        if ((char)param_3[8] != '\0') {
          *(undefined8 *)(param_2 + 9) = *(undefined8 *)(param_3 + 9);
          *(undefined1 *)(param_2 + 8) = 1;
        }
      }
      else if ((char)param_3[8] == '\0') {
        *(undefined1 *)(param_2 + 8) = 0;
      }
      else {
        *(undefined8 *)(param_2 + 9) = *(undefined8 *)(param_3 + 9);
      }
      *(char *)(param_2 + 0xb) = (char)param_3[0xb];
      *(undefined8 *)param_3 = uVar1;
      *(undefined8 *)(param_3 + 2) = uVar4;
      *(undefined8 *)(param_3 + 4) = uVar2;
      *(undefined8 *)(param_3 + 6) = uVar5;
      if ((char)param_3[8] == '\0') {
        if (cVar8 != '\0') {
          *(undefined8 *)(param_3 + 9) = uVar12;
          *(undefined1 *)(param_3 + 8) = 1;
        }
      }
      else if (cVar8 == '\0') {
        *(undefined1 *)(param_3 + 8) = 0;
      }
      else {
        *(undefined8 *)(param_3 + 9) = uVar12;
      }
      *(char *)(param_3 + 0xb) = (char)uVar9;
      if (*param_2 < *param_1) {
        uVar1 = *(undefined8 *)param_1;
        uVar4 = *(undefined8 *)(param_1 + 2);
        uVar2 = *(undefined8 *)(param_1 + 4);
        uVar5 = *(undefined8 *)(param_1 + 6);
        cVar8 = (char)param_1[8];
        uVar6 = *(undefined8 *)(param_2 + 6);
        uVar12 = *(undefined8 *)(param_1 + 9);
        uVar3 = *(undefined8 *)param_2;
        uVar7 = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
        *(undefined8 *)(param_1 + 6) = uVar6;
        uVar9 = param_1[0xb];
        *(undefined8 *)param_1 = uVar3;
        *(undefined8 *)(param_1 + 2) = uVar7;
        if (cVar8 == '\0') {
          if ((char)param_2[8] != '\0') {
            *(undefined8 *)(param_1 + 9) = *(undefined8 *)(param_2 + 9);
            *(undefined1 *)(param_1 + 8) = 1;
          }
        }
        else if ((char)param_2[8] == '\0') {
          *(undefined1 *)(param_1 + 8) = 0;
        }
        else {
          *(undefined8 *)(param_1 + 9) = *(undefined8 *)(param_2 + 9);
        }
        *(char *)(param_1 + 0xb) = (char)param_2[0xb];
        *(undefined8 *)param_2 = uVar1;
        *(undefined8 *)(param_2 + 2) = uVar4;
        *(undefined8 *)(param_2 + 4) = uVar2;
        *(undefined8 *)(param_2 + 6) = uVar5;
        if ((char)param_2[8] == '\0') {
          if (cVar8 != '\0') {
            *(undefined8 *)(param_2 + 9) = uVar12;
            *(undefined1 *)(param_2 + 8) = 1;
          }
        }
        else if (cVar8 == '\0') {
          *(undefined1 *)(param_2 + 8) = 0;
        }
        else {
          *(undefined8 *)(param_2 + 9) = uVar12;
        }
        uVar11 = (ulong)(iVar10 + 3);
        *(char *)(param_2 + 0xb) = (char)uVar9;
      }
      else {
        uVar11 = (ulong)(iVar10 + 2);
      }
    }
    else {
      uVar11 = (ulong)(iVar10 + 1);
    }
  }
  return uVar11;
}



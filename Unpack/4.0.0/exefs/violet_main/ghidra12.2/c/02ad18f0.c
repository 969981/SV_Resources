/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ad18f0; name: FUN_02ad18f0
 */


ulong FUN_02ad18f0(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

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
  
  uVar11 = FUN_02ad1670();
  if (*param_5 < *param_4) {
    uVar1 = *(undefined8 *)param_4;
    uVar4 = *(undefined8 *)(param_4 + 2);
    uVar2 = *(undefined8 *)(param_4 + 4);
    uVar5 = *(undefined8 *)(param_4 + 6);
    cVar8 = (char)param_4[8];
    uVar6 = *(undefined8 *)(param_5 + 6);
    uVar12 = *(undefined8 *)(param_4 + 9);
    uVar3 = *(undefined8 *)param_5;
    uVar7 = *(undefined8 *)(param_5 + 2);
    *(undefined8 *)(param_4 + 4) = *(undefined8 *)(param_5 + 4);
    *(undefined8 *)(param_4 + 6) = uVar6;
    uVar9 = param_4[0xb];
    *(undefined8 *)param_4 = uVar3;
    *(undefined8 *)(param_4 + 2) = uVar7;
    if (cVar8 == '\0') {
      if ((char)param_5[8] != '\0') {
        *(undefined8 *)(param_4 + 9) = *(undefined8 *)(param_5 + 9);
        *(undefined1 *)(param_4 + 8) = 1;
      }
    }
    else if ((char)param_5[8] == '\0') {
      *(undefined1 *)(param_4 + 8) = 0;
    }
    else {
      *(undefined8 *)(param_4 + 9) = *(undefined8 *)(param_5 + 9);
    }
    *(char *)(param_4 + 0xb) = (char)param_5[0xb];
    *(undefined8 *)param_5 = uVar1;
    *(undefined8 *)(param_5 + 2) = uVar4;
    *(undefined8 *)(param_5 + 4) = uVar2;
    *(undefined8 *)(param_5 + 6) = uVar5;
    if ((char)param_5[8] == '\0') {
      if (cVar8 != '\0') {
        *(undefined8 *)(param_5 + 9) = uVar12;
        *(undefined1 *)(param_5 + 8) = 1;
      }
    }
    else if (cVar8 == '\0') {
      *(undefined1 *)(param_5 + 8) = 0;
    }
    else {
      *(undefined8 *)(param_5 + 9) = uVar12;
    }
    *(char *)(param_5 + 0xb) = (char)uVar9;
    iVar10 = (int)uVar11;
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
          uVar11 = (ulong)(iVar10 + 4);
          *(char *)(param_2 + 0xb) = (char)uVar9;
        }
        else {
          uVar11 = (ulong)(iVar10 + 3);
        }
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



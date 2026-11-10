/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001139d0; name: FUN_001139d0
 */


void FUN_001139d0(uint param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if ((param_1 & 0x88) == 0) {
    if ((param_1 >> 5 & 1) != 0) {
      iVar8 = *param_3;
      iVar5 = param_3[1];
      iVar3 = param_3[4];
      iVar6 = param_3[5];
      iVar4 = param_3[6];
      iVar7 = param_3[7];
      iVar9 = iVar8;
      iVar2 = iVar3;
      if (iVar3 <= iVar8) {
        iVar9 = iVar3;
        iVar2 = iVar8;
      }
      iVar8 = iVar4;
      if (iVar4 <= iVar9) {
        iVar8 = iVar9;
      }
      if (iVar8 <= iVar2) {
        iVar2 = iVar8;
      }
      iVar9 = iVar5;
      iVar8 = iVar6;
      if (iVar6 <= iVar5) {
        iVar9 = iVar6;
        iVar8 = iVar5;
      }
      iVar5 = iVar7;
      if (iVar7 <= iVar9) {
        iVar5 = iVar9;
      }
      if (iVar5 <= iVar8) {
        iVar8 = iVar5;
      }
      iVar9 = iVar3;
      iVar5 = iVar2;
      if (iVar3 <= iVar2) {
        iVar9 = iVar2;
        iVar5 = iVar3;
      }
      if (iVar4 <= iVar5) {
        iVar4 = iVar5;
      }
      if (iVar4 <= iVar9) {
        iVar9 = iVar4;
      }
      iVar4 = iVar6;
      iVar5 = iVar8;
      if (iVar6 <= iVar8) {
        iVar4 = iVar8;
        iVar5 = iVar6;
      }
      if (iVar7 <= iVar5) {
        iVar7 = iVar5;
      }
      if (iVar7 <= iVar4) {
        iVar4 = iVar7;
      }
      *param_2 = iVar2;
      param_2[1] = iVar8;
      iVar7 = iVar2;
      iVar5 = iVar9;
      if (iVar9 <= iVar2) {
        iVar7 = iVar9;
        iVar5 = iVar2;
      }
      if (iVar3 <= iVar7) {
        iVar3 = iVar7;
      }
      if (iVar3 <= iVar5) {
        iVar5 = iVar3;
      }
      param_2[2] = iVar9;
      param_2[3] = iVar4;
      iVar9 = iVar8;
      if (iVar4 <= iVar8) {
        iVar9 = iVar4;
        iVar4 = iVar8;
      }
      if (iVar6 <= iVar9) {
        iVar6 = iVar9;
      }
      if (iVar6 <= iVar4) {
        iVar4 = iVar6;
      }
      iVar2 = iVar5;
      if (iVar5 <= iVar7) {
        iVar2 = iVar7;
      }
      param_2[4] = iVar5;
      param_2[5] = iVar4;
      if (iVar4 <= iVar9) {
        iVar4 = iVar9;
      }
      param_2[6] = iVar2;
      param_2[7] = iVar4;
      return;
    }
    iVar3 = param_2[-6];
    iVar9 = param_2[-5];
    iVar4 = param_3[4];
    iVar7 = param_3[5];
    iVar2 = iVar4;
    iVar6 = iVar3;
    if (iVar4 <= iVar3) {
      iVar2 = iVar3;
      iVar6 = iVar4;
    }
    iVar8 = param_3[-2];
    if (param_3[-2] <= iVar6) {
      iVar8 = iVar6;
    }
    if (iVar8 <= iVar2) {
      iVar2 = iVar8;
    }
    iVar6 = iVar7;
    iVar8 = iVar9;
    if (iVar7 <= iVar9) {
      iVar6 = iVar9;
      iVar8 = iVar7;
    }
    iVar5 = param_3[-1];
    if (param_3[-1] <= iVar8) {
      iVar5 = iVar8;
    }
    if (iVar5 <= iVar6) {
      iVar6 = iVar5;
    }
    iVar8 = param_3[6];
    iVar10 = param_3[7];
    *param_2 = iVar2;
    param_2[1] = iVar6;
    iVar5 = iVar2;
    if (iVar8 <= iVar2) {
      iVar5 = iVar8;
      iVar8 = iVar2;
    }
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    if (iVar4 <= iVar8) {
      iVar8 = iVar4;
    }
    iVar4 = iVar6;
    if (iVar10 <= iVar6) {
      iVar4 = iVar10;
      iVar10 = iVar6;
    }
    if (iVar7 <= iVar4) {
      iVar7 = iVar4;
    }
    if (iVar7 <= iVar10) {
      iVar10 = iVar7;
    }
    iVar4 = iVar2;
    if (iVar3 <= iVar2) {
      iVar4 = iVar3;
      iVar3 = iVar2;
    }
    iVar7 = param_2[-2];
    if (param_2[-2] <= iVar4) {
      iVar7 = iVar4;
    }
    if (iVar7 <= iVar3) {
      iVar3 = iVar7;
    }
    iVar4 = iVar6;
    if (iVar9 <= iVar6) {
      iVar4 = iVar9;
      iVar9 = iVar6;
    }
    iVar7 = param_2[-1];
    if (param_2[-1] <= iVar4) {
      iVar7 = iVar4;
    }
    if (iVar7 <= iVar9) {
      iVar9 = iVar7;
    }
    param_2[2] = iVar8;
    param_2[3] = iVar10;
    iVar4 = iVar2;
    if (iVar8 <= iVar2) {
      iVar4 = iVar8;
      iVar8 = iVar2;
    }
    param_2[4] = iVar3;
    param_2[5] = iVar9;
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
    if (iVar3 <= iVar8) {
      iVar8 = iVar3;
    }
    iVar2 = iVar6;
    if (iVar10 <= iVar6) {
      iVar2 = iVar10;
      iVar10 = iVar6;
    }
    if (iVar9 <= iVar2) {
      iVar9 = iVar2;
    }
  }
  else {
    if ((param_1 >> 5 & 1) != 0) {
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      return;
    }
    iVar8 = param_2[-8];
    iVar5 = param_2[-7];
    iVar3 = param_2[-6];
    iVar6 = param_2[-5];
    iVar4 = param_2[-2];
    iVar7 = param_2[-1];
    iVar9 = iVar8;
    iVar2 = iVar3;
    if (iVar3 <= iVar8) {
      iVar9 = iVar3;
      iVar2 = iVar8;
    }
    iVar8 = iVar4;
    if (iVar4 <= iVar9) {
      iVar8 = iVar9;
    }
    if (iVar8 <= iVar2) {
      iVar2 = iVar8;
    }
    iVar9 = iVar5;
    iVar1 = iVar6;
    if (iVar6 <= iVar5) {
      iVar9 = iVar6;
      iVar1 = iVar5;
    }
    iVar8 = iVar7;
    if (iVar7 <= iVar9) {
      iVar8 = iVar9;
    }
    if (iVar8 <= iVar1) {
      iVar1 = iVar8;
    }
    iVar5 = iVar3;
    iVar9 = iVar2;
    if (iVar3 <= iVar2) {
      iVar5 = iVar2;
      iVar9 = iVar3;
    }
    if (iVar4 <= iVar9) {
      iVar4 = iVar9;
    }
    if (iVar4 <= iVar5) {
      iVar5 = iVar4;
    }
    iVar9 = iVar6;
    iVar4 = iVar1;
    if (iVar6 <= iVar1) {
      iVar9 = iVar1;
      iVar4 = iVar6;
    }
    if (iVar7 <= iVar4) {
      iVar7 = iVar4;
    }
    if (iVar7 <= iVar9) {
      iVar9 = iVar7;
    }
    iVar8 = iVar5;
    iVar4 = iVar2;
    if (iVar5 <= iVar2) {
      iVar8 = iVar2;
      iVar4 = iVar5;
    }
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
    if (iVar3 <= iVar8) {
      iVar8 = iVar3;
    }
    iVar10 = iVar9;
    iVar4 = iVar1;
    if (iVar9 <= iVar1) {
      iVar10 = iVar1;
      iVar4 = iVar9;
    }
    if (iVar6 <= iVar4) {
      iVar6 = iVar4;
    }
    if (iVar6 <= iVar10) {
      iVar10 = iVar6;
    }
    *param_2 = iVar2;
    param_2[1] = iVar1;
    param_2[2] = iVar8;
    param_2[3] = iVar10;
    iVar4 = iVar2;
    if (iVar8 <= iVar2) {
      iVar4 = iVar8;
      iVar8 = iVar2;
    }
    iVar2 = iVar5;
    if (iVar5 <= iVar4) {
      iVar2 = iVar4;
    }
    if (iVar2 <= iVar8) {
      iVar8 = iVar2;
    }
    iVar2 = iVar1;
    if (iVar10 <= iVar1) {
      iVar2 = iVar10;
      iVar10 = iVar1;
    }
    param_2[4] = iVar5;
    param_2[5] = iVar9;
    if (iVar9 <= iVar2) {
      iVar9 = iVar2;
    }
  }
  if (iVar9 <= iVar10) {
    iVar10 = iVar9;
  }
  param_2[6] = iVar8;
  param_2[7] = iVar10;
  return;
}



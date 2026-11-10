/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033d1854; name: FUN_033d1854
 */


undefined8
FUN_033d1854(long *param_1,long *param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  ulong uVar4;
  float *pfVar5;
  ulong uVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  *(uint *)(param_1 + 1) = param_3;
  pfVar2 = (float *)(**(code **)(*param_2 + 0x10))
                              (param_2,(ulong)(param_3 >> 1) << 2,
                               "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Common/TimeWindow.cpp"
                               ,0x1e);
  *param_1 = (long)pfVar2;
  if (pfVar2 == (float *)0x0) {
    return 0x34;
  }
  if (param_4 == 1) {
    dVar11 = 0.0;
    uVar3 = *(uint *)(param_1 + 1) >> 1;
    uVar6 = (ulong)uVar3;
    dVar10 = 3.141592653589793;
    if ((param_6 & 1) == 0) {
      dVar10 = 0.0;
    }
    dVar12 = 6.283185307179586 / ((double)*(uint *)(param_1 + 1) + -1.0);
    if ((param_5 & 1) == 0) {
      if (uVar3 != 0) {
        dVar11 = 0.0;
        do {
          dVar8 = cos(dVar10);
          dVar10 = dVar10 + dVar12;
          uVar6 = uVar6 - 1;
          dVar8 = dVar8 * -0.46 + 0.54;
          dVar11 = dVar11 + dVar8 * dVar8;
          *pfVar2 = (float)dVar8;
          pfVar2 = pfVar2 + 1;
        } while (uVar6 != 0);
      }
    }
    else if (uVar3 != 0) {
      dVar11 = 0.0;
      do {
        dVar8 = cos(dVar10);
        dVar10 = dVar10 + dVar12;
        uVar6 = uVar6 - 1;
        dVar8 = dVar8 * -0.46 + 0.54;
        dVar11 = dVar8 + dVar11;
        *pfVar2 = (float)SQRT(dVar8);
        pfVar2 = pfVar2 + 1;
      } while (uVar6 != 0);
    }
  }
  else if (param_4 == 2) {
    dVar11 = 0.0;
    uVar3 = *(uint *)(param_1 + 1) >> 1;
    uVar6 = (ulong)uVar3;
    dVar10 = 3.141592653589793;
    if ((param_6 & 1) == 0) {
      dVar10 = 0.0;
    }
    dVar12 = 6.283185307179586 / ((double)*(uint *)(param_1 + 1) + -1.0);
    if ((param_5 & 1) == 0) {
      if (uVar3 != 0) {
        dVar11 = 0.0;
        do {
          dVar8 = cos(dVar10);
          dVar8 = 0.5 - dVar8 * 0.5;
          dVar11 = dVar11 + dVar8 * dVar8;
          dVar10 = dVar10 + dVar12;
          uVar6 = uVar6 - 1;
          *pfVar2 = (float)dVar8;
          pfVar2 = pfVar2 + 1;
        } while (uVar6 != 0);
      }
    }
    else if (uVar3 != 0) {
      dVar11 = 0.0;
      do {
        dVar8 = cos(dVar10);
        dVar8 = 0.5 - dVar8 * 0.5;
        dVar11 = dVar8 + dVar11;
        dVar10 = dVar10 + dVar12;
        uVar6 = uVar6 - 1;
        *pfVar2 = (float)SQRT(dVar8);
        pfVar2 = pfVar2 + 1;
      } while (uVar6 != 0);
    }
  }
  else {
    if (param_4 != 3) {
      uVar3 = *(uint *)(param_1 + 1);
      uVar1 = uVar3 >> 1;
      if (uVar1 != 0) {
        uVar6 = (ulong)(uVar3 >> 1) & 3;
        if ((ulong)uVar1 - 1 < 3) {
          uVar4 = 0;
        }
        else {
          uVar4 = 0;
          pfVar5 = pfVar2 + 2;
          do {
            uVar4 = uVar4 + 4;
            pfVar5[-2] = 1.0;
            pfVar5[-1] = 1.0;
            pfVar5[0] = 1.0;
            pfVar5[1] = 1.0;
            pfVar5 = pfVar5 + 4;
          } while (((ulong)uVar1 & 0x7ffffffc) != uVar4);
        }
        if ((uVar3 >> 1 & 3) != 0) {
          pfVar2 = pfVar2 + uVar4;
          do {
            uVar6 = uVar6 - 1;
            *pfVar2 = 1.0;
            pfVar2 = pfVar2 + 1;
          } while (uVar6 != 0);
        }
        uVar3 = *(uint *)(param_1 + 1);
      }
      fVar7 = (float)uVar3;
      goto LAB_033d1c2c;
    }
    dVar11 = 0.0;
    uVar3 = *(uint *)(param_1 + 1) >> 1;
    uVar6 = (ulong)uVar3;
    dVar10 = 3.141592653589793;
    if ((param_6 & 1) == 0) {
      dVar10 = 0.0;
    }
    dVar12 = 6.283185307179586 / ((double)*(uint *)(param_1 + 1) + -1.0);
    if ((param_5 & 1) == 0) {
      if (uVar3 != 0) {
        dVar11 = 0.0;
        do {
          dVar8 = cos(dVar10);
          dVar9 = cos(dVar10 + dVar10);
          dVar8 = dVar8 * -0.5 + 0.42 + dVar9 * 0.08;
          dVar11 = dVar11 + dVar8 * dVar8;
          dVar10 = dVar10 + dVar12;
          uVar6 = uVar6 - 1;
          *pfVar2 = (float)dVar8;
          pfVar2 = pfVar2 + 1;
        } while (uVar6 != 0);
      }
    }
    else if (uVar3 != 0) {
      dVar11 = 0.0;
      do {
        dVar8 = cos(dVar10);
        dVar9 = cos(dVar10 + dVar10);
        dVar8 = dVar8 * -0.5 + 0.42 + dVar9 * 0.08;
        dVar11 = dVar8 + dVar11;
        dVar10 = dVar10 + dVar12;
        *pfVar2 = (float)SQRT(dVar8);
        uVar6 = uVar6 - 1;
        pfVar2 = pfVar2 + 1;
      } while (uVar6 != 0);
    }
  }
  fVar7 = (float)dVar11 + (float)dVar11;
LAB_033d1c2c:
  *(float *)((long)param_1 + 0xc) = fVar7;
  return 1;
}



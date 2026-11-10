/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00183f20; name: FUN_00183f20
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00183f20(long *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  
  uVar2 = param_1[2];
  uVar11 = param_4 - param_3;
  uVar4 = uVar2 + uVar11;
  if ((ulong)param_1[1] < uVar4) {
    iVar3 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector_a.h",0x3f,"needmakefit",
                         "newsize <= m_capacity");
    if (iVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar4 = param_1[2] + uVar11;
  }
  uVar7 = uVar11 + param_2;
  param_1[2] = uVar4;
  if (uVar2 < uVar7) {
    uVar7 = uVar7 - uVar2;
    lVar5 = *param_1;
    uVar4 = uVar2 - param_2;
    if (uVar7 != 0) {
      uVar6 = uVar7 & 3;
      if ((param_4 + param_2 + ~param_3) - uVar2 < 3) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        do {
          puVar8 = (undefined1 *)(param_3 + ((uVar2 + 1) - param_2) + lVar10);
          puVar9 = (undefined1 *)(lVar5 + uVar2 + 1 + lVar10);
          lVar10 = lVar10 + 4;
          puVar9[-1] = puVar8[-1];
          *puVar9 = *puVar8;
          puVar9[1] = puVar8[1];
          puVar9[2] = puVar8[2];
        } while (uVar7 - uVar6 != lVar10);
      }
      if (uVar6 != 0) {
        puVar8 = (undefined1 *)(lVar5 + lVar10 + uVar2);
        puVar9 = (undefined1 *)(param_3 + ((lVar10 + uVar2) - param_2));
        do {
          uVar6 = uVar6 - 1;
          *puVar8 = *puVar9;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar6 != 0);
      }
      lVar5 = *param_1;
    }
    if (uVar4 != 0) {
      uVar7 = uVar4 & 3;
      if (uVar2 + ~param_2 < 3) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        puVar8 = (undefined1 *)(param_2 + lVar5 + 1);
        do {
          puVar1 = puVar8 + uVar11;
          puVar1[-1] = puVar8[-1];
          *puVar1 = *puVar8;
          puVar1[1] = puVar8[1];
          puVar9 = puVar8 + 2;
          lVar10 = lVar10 + -4;
          puVar8 = puVar8 + 4;
          puVar1[2] = *puVar9;
        } while ((param_2 + uVar7) - uVar2 != lVar10);
        lVar10 = -lVar10;
      }
      if (uVar7 != 0) {
        puVar8 = (undefined1 *)(lVar5 + lVar10 + param_2);
        do {
          puVar8[uVar11] = *puVar8;
          uVar7 = uVar7 - 1;
          puVar8 = puVar8 + 1;
        } while (uVar7 != 0);
      }
      lVar5 = *param_1;
      uVar11 = uVar4 & 3;
      if (uVar2 + ~param_2 < 3) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        do {
          puVar8 = (undefined1 *)(param_3 + 1 + lVar10);
          puVar9 = (undefined1 *)(param_2 + lVar5 + 1 + lVar10);
          lVar10 = lVar10 + 4;
          puVar9[-1] = puVar8[-1];
          *puVar9 = *puVar8;
          puVar9[1] = puVar8[1];
          puVar9[2] = puVar8[2];
        } while (uVar4 - uVar11 != lVar10);
      }
      if (uVar11 != 0) {
        puVar8 = (undefined1 *)(lVar5 + lVar10 + param_2);
        puVar9 = (undefined1 *)(param_3 + lVar10);
        do {
          uVar11 = uVar11 - 1;
          *puVar8 = *puVar9;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar11 != 0);
      }
    }
  }
  else {
    lVar5 = *param_1;
    if (uVar11 != 0) {
      uVar4 = uVar11 & 3;
      if (~param_3 + param_4 < 3) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        do {
          puVar8 = (undefined1 *)(((lVar5 + uVar2) - uVar11) + lVar10);
          puVar9 = (undefined1 *)(lVar5 + uVar2 + lVar10);
          lVar10 = lVar10 + 4;
          *puVar9 = *puVar8;
          puVar9[1] = puVar8[1];
          puVar9[2] = puVar8[2];
          puVar9[3] = puVar8[3];
        } while (uVar11 - uVar4 != lVar10);
      }
      if (uVar4 != 0) {
        puVar8 = (undefined1 *)(lVar5 + lVar10 + uVar2);
        do {
          uVar4 = uVar4 - 1;
          *puVar8 = puVar8[-uVar11];
          puVar8 = puVar8 + 1;
        } while (uVar4 != 0);
      }
      lVar5 = *param_1;
    }
    uVar4 = lVar5 + param_2;
    uVar7 = uVar2 - uVar7;
    if (uVar4 < uVar4 + uVar11) {
      if (-1 < (long)(uVar7 - 1)) {
        puVar8 = (undefined1 *)(uVar2 + lVar5);
        lVar10 = ((param_3 + uVar2) - param_4) - param_2;
        do {
          puVar8 = puVar8 + -1;
          lVar10 = lVar10 + -1;
          *puVar8 = puVar8[param_3 - param_4];
        } while (0 < lVar10);
      }
    }
    else if (uVar7 != 0) {
      uVar6 = uVar7 & 3;
      if ((uVar2 + param_3 + ~param_4) - param_2 < 3) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        do {
          puVar8 = (undefined1 *)(uVar4 + lVar10);
          puVar9 = (undefined1 *)(uVar4 + uVar11 + lVar10);
          lVar10 = lVar10 + 4;
          *puVar9 = *puVar8;
          puVar9[1] = puVar8[1];
          puVar9[2] = puVar8[2];
          puVar9[3] = puVar8[3];
        } while (uVar7 - uVar6 != lVar10);
      }
      if (uVar6 != 0) {
        puVar8 = (undefined1 *)(lVar5 + lVar10 + param_2);
        do {
          puVar8[uVar11] = *puVar8;
          uVar6 = uVar6 - 1;
          puVar8 = puVar8 + 1;
        } while (uVar6 != 0);
      }
    }
    if (uVar11 != 0) {
      uVar4 = uVar11 & 3;
      if (~param_3 + param_4 < 3) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        do {
          puVar8 = (undefined1 *)(param_3 + 1 + lVar10);
          puVar9 = (undefined1 *)(param_2 + lVar5 + 1 + lVar10);
          lVar10 = lVar10 + 4;
          puVar9[-1] = puVar8[-1];
          *puVar9 = *puVar8;
          puVar9[1] = puVar8[1];
          puVar9[2] = puVar8[2];
        } while (uVar11 - uVar4 != lVar10);
      }
      if (uVar4 != 0) {
        puVar8 = (undefined1 *)(lVar5 + lVar10 + param_2);
        puVar9 = (undefined1 *)(param_3 + lVar10);
        do {
          uVar4 = uVar4 - 1;
          *puVar8 = *puVar9;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar4 != 0);
      }
    }
  }
  return;
}



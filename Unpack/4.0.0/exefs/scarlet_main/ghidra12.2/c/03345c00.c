/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03345c00; name: FUN_03345c00
 */


void FUN_03345c00(long param_1,long *param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint local_34;
  
  lVar14 = *(long *)(param_1 + 0x10);
  iVar4 = FUN_03342d98(param_2);
  if (iVar4 != 0) {
    lVar5 = *param_2;
    lVar15 = param_2[1];
    uVar6 = 0x811c9dc5;
    if (lVar5 == lVar15) {
      local_34 = 0;
    }
    else {
      uVar8 = lVar15 - lVar5;
      local_34 = uVar6;
      if (0 < (long)uVar8) {
        if (lVar15 == lVar5 + 1) {
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          do {
            pbVar1 = (byte *)(lVar5 + uVar13);
            uVar13 = uVar13 + 2;
            local_34 = ((local_34 ^ *pbVar1) * 0x1000193 ^ (uint)pbVar1[1]) * 0x1000193;
          } while ((uVar8 & 0xfffffffffffffffe) != uVar13);
        }
        if ((uVar8 & 1) != 0) {
          local_34 = (local_34 ^ *(byte *)(lVar5 + uVar13)) * 0x1000193;
        }
      }
    }
    uVar2 = (int)param_2[4] * -0x61c8864f;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    local_34 = uVar2 + local_34 * 0x40 + (uVar2 >> 2) + 0x9e3779b9 ^ local_34;
    lVar5 = param_2[2];
    lVar15 = param_2[3];
    if (lVar5 == lVar15) {
      uVar6 = 0;
    }
    else {
      uVar8 = lVar15 - lVar5;
      if (0 < (long)uVar8) {
        if (lVar15 == lVar5 + 1) {
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          do {
            pbVar1 = (byte *)(lVar5 + uVar13);
            uVar13 = uVar13 + 2;
            uVar6 = ((uVar6 ^ *pbVar1) * 0x1000193 ^ (uint)pbVar1[1]) * 0x1000193;
          } while ((uVar8 & 0xfffffffffffffffe) != uVar13);
        }
        if ((uVar8 & 1) != 0) {
          uVar6 = (uVar6 ^ *(byte *)(lVar5 + uVar13)) * 0x1000193;
        }
      }
    }
    plVar10 = (long *)(lVar14 + 0x168);
    uVar2 = *(int *)((long)param_2 + 0x24) * -0x61c8864f;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar6 = uVar6 * 0x40 + -0x61c88647 + uVar2 + (uVar2 >> 2) ^ uVar6;
    local_34 = local_34 * 0x40 + -0x61c88647 + uVar6 + (uVar6 >> 2) ^ local_34;
    lVar5 = FUN_033490d4(plVar10,&local_34);
    if ((lVar5 != 0) &&
       (lVar15 = *(long *)(*plVar10 + (long)*(int *)(lVar5 + 4) * 0x10 + 8), lVar15 != 0)) {
      FUN_03349144(plVar10,lVar5);
      iVar4 = *(int *)(lVar14 + 0xa0);
      if (iVar4 == 0) {
        iVar7 = 0;
        iVar4 = 0;
      }
      else {
        plVar10 = *(long **)(lVar14 + 0x98);
        iVar7 = 0;
        plVar9 = (long *)0x0;
        plVar11 = plVar10 + (long)iVar4 + -1;
        do {
          if (lVar15 == *plVar11) {
            iVar7 = iVar7 + 1;
            if (plVar9 == (long *)0x0) {
              plVar12 = plVar11 + -1;
            }
            else {
              if (plVar11 != plVar9) {
                *plVar11 = *plVar9;
              }
              plVar10 = plVar11 + 1;
              plVar12 = plVar9 + -1;
              plVar9 = (long *)0x0;
            }
          }
          else {
            plVar12 = plVar10;
            if (plVar9 != (long *)0x0) {
              plVar12 = plVar11 + 1;
              plVar11 = plVar9;
            }
            plVar9 = plVar11;
          }
          iVar4 = iVar4 + -1;
          plVar11 = plVar12;
        } while (iVar4 != 0);
        iVar4 = *(int *)(lVar14 + 0xa0);
      }
      *(int *)(lVar14 + 0xa0) = iVar4 - iVar7;
      if (*(int *)(lVar14 + 0xb0) != 0) {
        lVar5 = *(long *)(lVar14 + 0xb8);
        *(undefined4 *)(lVar14 + 0xb0) = 0;
        if ((((lVar5 != 0) && (*(int *)(lVar5 + 4) != -2)) && (-1 < *(int *)(lVar14 + 0xc0))) &&
           (*(undefined4 *)(lVar5 + 4) = 0xffffffff, 0 < *(int *)(lVar14 + 0xc0))) {
          lVar5 = 0;
          lVar15 = 0xc;
          do {
            *(undefined4 *)(*(long *)(lVar14 + 0xb8) + lVar15) = 0xffffffff;
            lVar5 = lVar5 + 1;
            lVar15 = lVar15 + 8;
          } while (lVar5 < *(int *)(lVar14 + 0xc0));
        }
      }
      puVar3 = PTR_DAT_047d1a08;
      if (*(int *)(lVar14 + 0xf0) != 0) {
        lVar15 = *(long *)(lVar14 + 0xe8);
        lVar5 = (long)*(int *)(lVar14 + 0xf0) << 4;
        do {
          uVar8 = *(ulong *)(lVar15 + -0x10 + lVar5);
          if ((uVar8 & 1) != 0) {
            (**(code **)(puVar3 + 8))(0,uVar8 - 1,0);
          }
          lVar5 = lVar5 + -0x10;
        } while (lVar5 != 0);
        lVar5 = *(long *)(lVar14 + 0xf8);
        *(undefined4 *)(lVar14 + 0xf0) = 0;
        if (((lVar5 != 0) && (*(int *)(lVar5 + 4) != -2)) &&
           ((-1 < *(int *)(lVar14 + 0x100) &&
            (*(undefined4 *)(lVar5 + 4) = 0xffffffff, 0 < *(int *)(lVar14 + 0x100))))) {
          lVar5 = 0;
          lVar15 = 0xc;
          do {
            *(undefined4 *)(*(long *)(lVar14 + 0xf8) + lVar15) = 0xffffffff;
            lVar5 = lVar5 + 1;
            lVar15 = lVar15 + 8;
          } while (lVar5 < *(int *)(lVar14 + 0x100));
        }
      }
    }
  }
  return;
}



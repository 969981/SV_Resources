/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001cf174; name: FUN_001cf174
 */


undefined8 FUN_001cf174(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  uint local_94 [5];
  int local_80 [6];
  int local_68;
  int local_64;
  
  local_80[0] = -1;
  local_80[1] = -1;
  local_80[2] = -1;
  local_80[3] = -1;
  local_80[4] = 0xffffffff;
  uVar6 = FUN_001cf53c(param_2,local_80);
  uVar14 = 0;
  lVar1 = param_1 + 0xb8;
  do {
    uVar12 = (uint)uVar14;
    uVar3 = 1 << (ulong)(uVar12 & 0x1f);
    uVar4 = 1 << (ulong)(uVar12 + 0x10 & 0x1f);
    if (((uVar4 | uVar3) & uVar6) == 0) break;
    iVar13 = local_80[(int)uVar12];
    local_64 = iVar13;
    if (iVar13 == -1) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_001c8b08(lVar1,&local_64,4);
    }
    uVar3 = uVar3 & uVar6;
    uVar2 = (uint)(uVar3 != 0);
    if ((uVar4 & uVar6) != 0) {
      uVar2 = uVar3 != 0 | 2;
    }
    local_94[(int)uVar12] = uVar2;
    if (lVar7 == 0) {
      local_68 = iVar13;
      local_64 = iVar13;
      if ((iVar13 == -1) || (lVar7 = FUN_001c8b08(lVar1,&local_64,4), lVar7 == 0)) {
        lVar7 = FUN_001ec338(1,0x40);
        if (lVar7 == 0) {
          return 3;
        }
        FUN_001cb57c(lVar7,0);
        lVar8 = FUN_001c8974(lVar1,&local_68,4,lVar7);
        if (lVar8 == 0) {
          FUN_001ec308(lVar7);
          return 3;
        }
      }
    }
    else if (*(int *)(param_2 + 0xc0) < 1) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      do {
        lVar8 = param_2 + uVar14 * 4;
        if (iVar13 == *(int *)(lVar8 + 0x98)) {
          uVar4 = *(uint *)(lVar8 + 0xac);
          if (uVar4 != uVar2) {
            if ((uVar4 & 1) != 0) {
              *(int *)(lVar7 + 0x34) = *(int *)(lVar7 + 0x34) + -1;
            }
            if ((uVar4 >> 1 & 1) != 0) {
              *(int *)(lVar7 + 0x38) = *(int *)(lVar7 + 0x38) + -1;
            }
            if (uVar3 != 0) {
              *(int *)(lVar7 + 0x34) = *(int *)(lVar7 + 0x34) + 1;
            }
            if (uVar2 >> 1 != 0) {
              *(int *)(lVar7 + 0x38) = *(int *)(lVar7 + 0x38) + 1;
            }
          }
          goto LAB_001cf308;
        }
        uVar14 = uVar14 + 1;
      } while ((long)uVar14 < (long)*(int *)(param_2 + 0xc0));
    }
    *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + 1;
    if (uVar3 != 0) {
      *(int *)(lVar7 + 0x34) = *(int *)(lVar7 + 0x34) + 1;
    }
    if (uVar2 >> 1 != 0) {
      *(int *)(lVar7 + 0x38) = *(int *)(lVar7 + 0x38) + 1;
    }
    FUN_001cb588(lVar7,*(undefined8 *)(lVar7 + 8),param_2,param_2 + 0x48);
LAB_001cf308:
    uVar3 = (uint)(*(int *)(lVar7 + 0x34) != 0) | (uint)(*(int *)(lVar7 + 0x38) != 0) << 1;
    if (*(uint *)(lVar7 + 0x20) != uVar3) {
      if (*(code **)(param_1 + 0x60) != (code *)0x0) {
        (**(code **)(param_1 + 0x60))
                  (param_2,iVar13,uVar3,*(undefined8 *)(param_1 + 0x68),
                   *(undefined8 *)(lVar7 + 0x28));
      }
      *(uint *)(lVar7 + 0x20) = uVar3;
    }
    iVar13 = (int)uVar14;
    uVar14 = (ulong)(iVar13 + 1);
  } while (iVar13 < 4);
  if (0 < *(int *)(param_2 + 0xc0)) {
    lVar7 = 0;
    do {
      lVar8 = param_2 + lVar7 * 4;
      iVar13 = *(int *)(lVar8 + 0x98);
      if (0 < (int)uVar14) {
        piVar10 = local_80;
        uVar11 = uVar14;
        do {
          if (iVar13 == *piVar10) goto LAB_001cf4b0;
          piVar10 = piVar10 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      local_64 = iVar13;
      if ((iVar13 != -1) && (lVar9 = FUN_001c8b08(lVar1,&local_64,4), lVar9 != 0)) {
        iVar5 = *(int *)(lVar9 + 0x30) + -1;
        uVar6 = *(uint *)(lVar8 + 0xac);
        *(int *)(lVar9 + 0x30) = iVar5;
        if ((uVar6 >> 1 & 1) != 0) {
          *(int *)(lVar9 + 0x38) = *(int *)(lVar9 + 0x38) + -1;
        }
        if ((uVar6 & 1) != 0) {
          *(int *)(lVar9 + 0x34) = *(int *)(lVar9 + 0x34) + -1;
        }
        if (iVar5 == 0) {
          if (*(code **)(param_1 + 0x60) != (code *)0x0) {
            (**(code **)(param_1 + 0x60))
                      (param_2,iVar13,4,*(undefined8 *)(param_1 + 0x68),
                       *(undefined8 *)(lVar9 + 0x28));
          }
          local_64 = iVar13;
          FUN_001c8a64(lVar1,&local_64,4);
        }
        else {
          FUN_001cb600(lVar9,param_2 + 0x48,0);
        }
      }
LAB_001cf4b0:
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_2 + 0xc0));
  }
  uVar11 = -(uVar14 >> 0x1f) & 0xfffffffc00000000 | uVar14 << 2;
  memcpy((void *)(param_2 + 0x98),local_80,uVar11);
  memcpy((void *)(param_2 + 0xac),local_94,uVar11);
  *(int *)(param_2 + 0xc0) = (int)uVar14;
  return 0;
}



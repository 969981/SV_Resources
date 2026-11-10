/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ae1a60; name: FUN_02ae1a60
 */


void FUN_02ae1a60(long param_1,int param_2,short *param_3)

{
  int iVar1;
  void *__dest;
  long *plVar2;
  int iVar3;
  short sVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_48;
  
  sVar4 = *param_3;
  lVar13 = (long)param_2;
  if (sVar4 == 0) {
    param_1 = param_1 + lVar13 * 0x20;
    puVar9 = *(undefined8 **)(param_1 + 0xaa0);
    *(undefined8 *)(param_1 + 0xaa0) = 0;
    if (puVar9 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar13 = FUN_00c4e600();
      iVar3 = *(int *)(lVar13 + 0x12c8);
      iVar1 = iVar3 + 1;
      *(int *)(lVar13 + 0x12c8) = iVar1;
      if (*(int *)(lVar13 + 0x12cc) <= iVar3) {
        *(int *)(lVar13 + 0x12cc) = iVar1;
      }
      (**(code **)*puVar9)(puVar9);
      plVar14 = *(long **)(param_1 + 0xaa8);
      uVar10 = *(undefined8 *)(param_1 + 0xab0);
      uVar11 = *(undefined8 *)(param_1 + 0xab8);
      uVar5 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar5 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,puVar9,uVar10,uVar11);
      }
      else {
        FUN_00c48fe8(plVar14,puVar9,uVar10,uVar11);
      }
      lVar13 = FUN_00c4e600();
      iVar1 = *(int *)(lVar13 + 0x12c8) + -1;
      *(int *)(lVar13 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar14 = (long *)FUN_00c4e600();
        if (plVar14[600] != 0) {
          local_48 = plVar14 + plVar14[600] * 3;
          local_88 = plVar14;
          FUN_00c4ea30(&local_88,&local_48);
          plVar12 = (long *)*plVar14;
          plVar2 = plVar14;
          if (plVar14[600] != 0) {
            plVar2 = plVar14 + plVar14[600] * 3;
          }
          if (plVar2 == plVar14) {
            lVar8 = 0;
            lVar6 = 0;
          }
          else {
            lVar6 = 0;
            lVar8 = 0;
            plVar15 = plVar14;
            do {
              (**(code **)(*(long *)*plVar15 + 0xd0))();
              if ((long *)*plVar15 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar14 + lVar8 * 3,plVar15);
                plVar12 = (long *)*plVar15;
                lVar8 = lVar6;
              }
              plVar15 = plVar15 + 3;
              lVar6 = lVar6 + 1;
            } while (plVar2 != plVar15);
          }
          (**(code **)(*plVar12 + 0x100))(plVar12,plVar14 + lVar8 * 3,plVar14 + lVar6 * 3);
          plVar14[600] = 0;
        }
        *(undefined4 *)(lVar13 + 0x12cc) = 0;
      }
    }
  }
  else {
    __dest = (void *)(param_1 + lVar13 * 0x210 + 0x438);
    memcpy(__dest,param_3,0x4c);
    lVar6 = *(long *)(param_1 + 0x2d8);
    lVar8 = *(long *)(param_1 + 0x2e0);
    if ((lVar6 != lVar8) &&
       (*(short *)(lVar6 + 2) != sVar4 || *(int *)(lVar6 + 4) != *(int *)(param_3 + 6))) {
      do {
        lVar7 = lVar6;
        if (lVar8 + -0x1c == lVar7) {
          return;
        }
        lVar6 = lVar7 + 0x1c;
      } while ((*(short *)(lVar7 + 0x1e) != sVar4) ||
              (*(int *)(lVar7 + 0x20) != *(int *)(param_3 + 6)));
    }
    if (lVar6 != lVar8) {
      FUN_02ae06a0(&local_88,*(undefined8 *)(param_1 + 8),__dest,lVar6,0);
      plVar14 = local_88;
      param_1 = param_1 + lVar13 * 0x20;
      local_88 = (long *)0x0;
      puVar9 = *(undefined8 **)(param_1 + 0xaa0);
      *(long **)(param_1 + 0xaa0) = plVar14;
      if (puVar9 != (undefined8 *)0x0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar13 = FUN_00c4e600();
        iVar3 = *(int *)(lVar13 + 0x12c8);
        iVar1 = iVar3 + 1;
        *(int *)(lVar13 + 0x12c8) = iVar1;
        if (*(int *)(lVar13 + 0x12cc) <= iVar3) {
          *(int *)(lVar13 + 0x12cc) = iVar1;
        }
        (**(code **)*puVar9)(puVar9);
        plVar14 = *(long **)(param_1 + 0xaa8);
        uVar10 = *(undefined8 *)(param_1 + 0xab0);
        uVar11 = *(undefined8 *)(param_1 + 0xab8);
        uVar5 = (**(code **)(*plVar14 + 0xf8))(plVar14);
        if (((uVar5 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
          (**(code **)(*plVar14 + 0x18))(plVar14,puVar9,uVar10,uVar11);
        }
        else {
          FUN_00c48fe8(plVar14,puVar9,uVar10,uVar11);
        }
        lVar13 = FUN_00c4e600();
        iVar1 = *(int *)(lVar13 + 0x12c8) + -1;
        *(int *)(lVar13 + 0x12c8) = iVar1;
        if (iVar1 == 0) {
          plVar14 = (long *)FUN_00c4e600();
          if (plVar14[600] != 0) {
            local_68 = plVar14 + plVar14[600] * 3;
            local_48 = plVar14;
            FUN_00c4ea30(&local_48,&local_68);
            plVar12 = (long *)*plVar14;
            plVar2 = plVar14;
            if (plVar14[600] != 0) {
              plVar2 = plVar14 + plVar14[600] * 3;
            }
            if (plVar2 == plVar14) {
              lVar8 = 0;
              lVar6 = 0;
            }
            else {
              lVar6 = 0;
              lVar8 = 0;
              plVar15 = plVar14;
              do {
                (**(code **)(*(long *)*plVar15 + 0xd0))();
                if ((long *)*plVar15 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar14 + lVar8 * 3,plVar15);
                  plVar12 = (long *)*plVar15;
                  lVar8 = lVar6;
                }
                plVar15 = plVar15 + 3;
                lVar6 = lVar6 + 1;
              } while (plVar2 != plVar15);
            }
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar14 + lVar8 * 3,plVar14 + lVar6 * 3);
            plVar14[600] = 0;
          }
          *(undefined4 *)(lVar13 + 0x12cc) = 0;
        }
      }
      *(undefined8 *)(param_1 + 0xab8) = local_70;
      *(undefined8 *)(param_1 + 0xab0) = uStack_78;
      *(undefined8 *)(param_1 + 0xaa8) = local_80;
    }
  }
  return;
}



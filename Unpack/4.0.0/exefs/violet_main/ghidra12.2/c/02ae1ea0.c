/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ae1ea0; name: FUN_02ae1ea0
 */


void FUN_02ae1ea0(long param_1,short *param_2)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  short sVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_48;
  
  memcpy((void *)(param_1 + 0x178),param_2,0x4c);
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined2 *)(param_1 + 0x34a) = 0;
  sVar4 = *param_2;
  if (sVar4 == 0) {
    FUN_02addd90(param_1);
    return;
  }
  lVar6 = *(long *)(param_1 + 0x2d8);
  lVar7 = *(long *)(param_1 + 0x2e0);
  if ((lVar6 != lVar7) &&
     (*(short *)(lVar6 + 2) != sVar4 || *(int *)(lVar6 + 4) != *(int *)(param_2 + 6))) {
    do {
      lVar14 = lVar6;
      if (lVar7 + -0x1c == lVar14) {
        return;
      }
      lVar6 = lVar14 + 0x1c;
    } while ((*(short *)(lVar14 + 0x1e) != sVar4) ||
            (*(int *)(lVar14 + 0x20) != *(int *)(param_2 + 6)));
  }
  if (lVar6 != lVar7) {
    FUN_02ae06a0(&local_88,*(undefined8 *)(param_1 + 8),(void *)(param_1 + 0x178),lVar6,0);
    uVar9 = local_88;
    local_88 = 0;
    puVar8 = *(undefined8 **)(param_1 + 0xb00);
    *(undefined8 *)(param_1 + 0xb00) = uVar9;
    if (puVar8 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar6 = FUN_00c4e600();
      iVar3 = *(int *)(lVar6 + 0x12c8);
      iVar1 = iVar3 + 1;
      *(int *)(lVar6 + 0x12c8) = iVar1;
      if (*(int *)(lVar6 + 0x12cc) <= iVar3) {
        *(int *)(lVar6 + 0x12cc) = iVar1;
      }
      (**(code **)*puVar8)(puVar8);
      plVar12 = *(long **)(param_1 + 0xb08);
      uVar9 = *(undefined8 *)(param_1 + 0xb10);
      uVar10 = *(undefined8 *)(param_1 + 0xb18);
      uVar5 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar9,uVar10);
      }
      else {
        FUN_00c48fe8(plVar12,puVar8,uVar9,uVar10);
      }
      lVar6 = FUN_00c4e600();
      iVar1 = *(int *)(lVar6 + 0x12c8) + -1;
      *(int *)(lVar6 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar12 = (long *)FUN_00c4e600();
        if (plVar12[600] != 0) {
          local_68 = plVar12 + plVar12[600] * 3;
          local_48 = plVar12;
          FUN_00c4ea30(&local_48,&local_68);
          plVar11 = (long *)*plVar12;
          plVar2 = plVar12;
          if (plVar12[600] != 0) {
            plVar2 = plVar12 + plVar12[600] * 3;
          }
          if (plVar2 == plVar12) {
            lVar14 = 0;
            lVar7 = 0;
          }
          else {
            lVar7 = 0;
            lVar14 = 0;
            plVar13 = plVar12;
            do {
              (**(code **)(*(long *)*plVar13 + 0xd0))();
              if ((long *)*plVar13 != plVar11) {
                (**(code **)(*plVar11 + 0x100))(plVar11,plVar12 + lVar14 * 3,plVar13);
                plVar11 = (long *)*plVar13;
                lVar14 = lVar7;
              }
              plVar13 = plVar13 + 3;
              lVar7 = lVar7 + 1;
            } while (plVar2 != plVar13);
          }
          (**(code **)(*plVar11 + 0x100))(plVar11,plVar12 + lVar14 * 3,plVar12 + lVar7 * 3);
          plVar12[600] = 0;
        }
        *(undefined4 *)(lVar6 + 0x12cc) = 0;
      }
    }
    *(undefined8 *)(param_1 + 0xb18) = local_70;
    *(undefined8 *)(param_1 + 0xb10) = uStack_78;
    *(undefined8 *)(param_1 + 0xb08) = local_80;
  }
  return;
}



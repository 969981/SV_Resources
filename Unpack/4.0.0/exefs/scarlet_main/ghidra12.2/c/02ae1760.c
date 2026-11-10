/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ae1760; name: FUN_02ae1760
 */


void FUN_02ae1760(long param_1,int param_2,int param_3,short *param_4)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  void *__dest;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_48;
  
  lVar12 = (long)param_2;
  if (param_3 == 2) {
    __dest = (void *)(param_1 + lVar12 * 0x210 + 1000);
  }
  else if (param_3 == 1) {
    __dest = (void *)(param_1 + lVar12 * 0x210 + 0x39c);
  }
  else {
    if (param_3 != 0) goto LAB_02ae17dc;
    __dest = (void *)(param_1 + lVar12 * 0x210 + 0x350);
  }
  memcpy(__dest,param_4,0x4c);
LAB_02ae17dc:
  lVar5 = *(long *)(param_1 + 0x2d8);
  lVar7 = *(long *)(param_1 + 0x2e0);
  if (lVar5 != lVar7) {
    if ((*(short *)(lVar5 + 2) != *param_4) || (*(int *)(lVar5 + 4) != *(int *)(param_4 + 6))) {
      do {
        lVar6 = lVar5;
        if (lVar7 + -0x1c == lVar6) {
          return;
        }
        lVar5 = lVar6 + 0x1c;
      } while ((*(short *)(lVar6 + 0x1e) != *param_4) ||
              (*(int *)(lVar6 + 0x20) != *(int *)(param_4 + 6)));
    }
  }
  if (lVar5 != lVar7) {
    lVar7 = param_1 + lVar12 * 0x210;
    if (param_3 == 1) {
      lVar7 = lVar7 + 0x39c;
    }
    else if (param_3 == 2) {
      lVar7 = lVar7 + 1000;
    }
    else {
      lVar7 = lVar7 + 0x350;
    }
    FUN_02ae06a0(&local_88,*(undefined8 *)(param_1 + 8),lVar7,lVar5,0);
    uVar9 = local_88;
    param_1 = param_1 + (lVar12 * 3 + (long)param_3) * 0x20;
    local_88 = 0;
    puVar8 = *(undefined8 **)(param_1 + 0x980);
    *(undefined8 *)(param_1 + 0x980) = uVar9;
    if (puVar8 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar12 = FUN_00c4e600();
      iVar3 = *(int *)(lVar12 + 0x12c8);
      iVar1 = iVar3 + 1;
      *(int *)(lVar12 + 0x12c8) = iVar1;
      if (*(int *)(lVar12 + 0x12cc) <= iVar3) {
        *(int *)(lVar12 + 0x12cc) = iVar1;
      }
      (**(code **)*puVar8)(puVar8);
      plVar13 = *(long **)(param_1 + 0x988);
      uVar9 = *(undefined8 *)(param_1 + 0x990);
      uVar10 = *(undefined8 *)(param_1 + 0x998);
      uVar4 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar4 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,puVar8,uVar9,uVar10);
      }
      else {
        FUN_00c48fe8(plVar13,puVar8,uVar9,uVar10);
      }
      lVar12 = FUN_00c4e600();
      iVar1 = *(int *)(lVar12 + 0x12c8) + -1;
      *(int *)(lVar12 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar13 = (long *)FUN_00c4e600();
        if (plVar13[600] != 0) {
          local_68 = plVar13 + plVar13[600] * 3;
          local_48 = plVar13;
          FUN_00c4ea30(&local_48,&local_68);
          plVar11 = (long *)*plVar13;
          plVar2 = plVar13;
          if (plVar13[600] != 0) {
            plVar2 = plVar13 + plVar13[600] * 3;
          }
          if (plVar2 == plVar13) {
            lVar7 = 0;
            lVar5 = 0;
          }
          else {
            lVar5 = 0;
            lVar7 = 0;
            plVar14 = plVar13;
            do {
              (**(code **)(*(long *)*plVar14 + 0xd0))();
              if ((long *)*plVar14 != plVar11) {
                (**(code **)(*plVar11 + 0x100))(plVar11,plVar13 + lVar7 * 3,plVar14);
                plVar11 = (long *)*plVar14;
                lVar7 = lVar5;
              }
              plVar14 = plVar14 + 3;
              lVar5 = lVar5 + 1;
            } while (plVar2 != plVar14);
          }
          (**(code **)(*plVar11 + 0x100))(plVar11,plVar13 + lVar7 * 3,plVar13 + lVar5 * 3);
          plVar13[600] = 0;
        }
        *(undefined4 *)(lVar12 + 0x12cc) = 0;
      }
    }
    *(undefined8 *)(param_1 + 0x998) = local_70;
    *(undefined8 *)(param_1 + 0x990) = uStack_78;
    *(undefined8 *)(param_1 + 0x988) = local_80;
  }
  return;
}



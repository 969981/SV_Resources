/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021e2e80; name: FUN_021e2e80
 */


/* WARNING: Removing unreachable block (ram,0x021e31e4) */
/* WARNING: Removing unreachable block (ram,0x021e3238) */
/* WARNING: Removing unreachable block (ram,0x021e3248) */
/* WARNING: Removing unreachable block (ram,0x021e3208) */

bool FUN_021e2e80(uint *param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  uint *puVar16;
  long lVar17;
  int iVar18;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  switch(((long)param_2 - (long)param_1 >> 3) * -0x1111111111111111) {
  case 0:
  case 1:
    break;
  case 2:
    if (*param_1 <= param_2[-0x1e]) {
      return true;
    }
LAB_021e2ef4:
    puVar7 = param_2 + -0x1e;
    goto LAB_021e2ef8;
  case 3:
    puVar7 = param_1 + 0x1e;
    uVar6 = *puVar7;
    puVar10 = param_2 + -0x1e;
    if (uVar6 < *param_1) {
      if (uVar6 <= *puVar10) {
        FUN_00d42490(param_1,puVar7);
        if (param_1[0x1e] <= *puVar10) {
          return true;
        }
        param_1 = puVar7;
      }
      goto LAB_021e2ef4;
    }
    if (uVar6 <= *puVar10) {
      return true;
    }
    FUN_00d42490(puVar7,puVar10);
    if (*param_1 <= param_1[0x1e]) {
      return true;
    }
LAB_021e2ef8:
    FUN_00d42490(param_1,puVar7);
    break;
  case 4:
    FUN_00d42350(param_1,param_1 + 0x1e,param_1 + 0x3c,param_2 + -0x1e);
    break;
  case 5:
    FUN_00d42b30(param_1,param_1 + 0x1e,param_1 + 0x3c,param_1 + 0x5a,param_2 + -0x1e);
    break;
  default:
    puVar16 = param_1 + 0x3c;
    puVar10 = param_1 + 0x1e;
    uVar6 = *puVar10;
    puVar7 = param_1;
    if (uVar6 < *param_1) {
      if (uVar6 <= *puVar16) {
        FUN_00d42490(param_1,puVar10);
        if (param_1[0x1e] <= param_1[0x3c]) goto LAB_021e3044;
        puVar7 = puVar10;
      }
      puVar10 = puVar16;
LAB_021e3040:
      FUN_00d42490(puVar7,puVar10);
    }
    else if ((*puVar16 < uVar6) && (FUN_00d42490(puVar10,puVar16), param_1[0x1e] < *param_1)) {
      goto LAB_021e3040;
    }
LAB_021e3044:
    if (param_1 + 0x5a != param_2) {
      lVar17 = 0;
      iVar18 = 0;
      puVar7 = param_1 + 0x5a;
      do {
        puVar10 = puVar7;
        uVar6 = *puVar10;
        if (uVar6 < *puVar16) {
          uVar1 = *(undefined8 *)(puVar10 + 8);
          uVar3 = *(undefined8 *)(puVar10 + 10);
          uVar2 = *(undefined8 *)(puVar10 + 0xc);
          uVar4 = *(undefined8 *)(puVar10 + 0xe);
          uVar14 = *(undefined8 *)(puVar10 + 2);
          uVar11 = *(undefined8 *)(puVar10 + 4);
          uVar12 = *(undefined8 *)(puVar10 + 6);
          puVar10[2] = 0;
          puVar10[3] = 0;
          puVar10[4] = 0;
          puVar10[5] = 0;
          puVar10[6] = 0;
          puVar10[7] = 0;
          local_88 = *(undefined8 *)(puVar10 + 0x16);
          uStack_80 = *(undefined8 *)(puVar10 + 0x18);
          local_78 = *(undefined8 *)(puVar10 + 0x1a);
          uStack_70 = *(undefined8 *)(puVar10 + 0x1c);
          local_a0 = *(undefined8 *)(puVar10 + 0x10);
          local_98 = *(undefined8 *)(puVar10 + 0x12);
          local_90 = *(undefined8 *)(puVar10 + 0x14);
          puVar10[0x10] = 0;
          puVar10[0x11] = 0;
          puVar10[0x12] = 0;
          puVar10[0x13] = 0;
          puVar10[0x14] = 0;
          puVar10[0x15] = 0;
          lVar13 = lVar17;
          do {
            lVar15 = lVar13;
            FUN_00d42fcc((long)param_1 + lVar15 + 0x168,(long)param_1 + lVar15 + 0xf0);
            if (lVar15 == -0xf0) {
              puVar7 = param_1;
              goto LAB_021e3140;
            }
            lVar13 = lVar15 + -0x78;
          } while (uVar6 < *(uint *)((long)param_1 + lVar15 + 0x78));
          puVar7 = (uint *)((long)param_1 + lVar15 + 0xf0);
LAB_021e3140:
          *puVar7 = uVar6;
          puVar16 = puVar7 + 2;
          lVar13 = *(long *)puVar16;
          if (lVar13 != 0) {
            lVar15 = *(long *)(puVar7 + 6);
            plVar5 = *(long **)(puVar7 + 8);
            *(long *)(puVar7 + 4) = lVar13;
            uVar8 = (**(code **)(*plVar5 + 0xf8))();
            if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
              (**(code **)(*plVar5 + 0x18))(plVar5,lVar13,lVar15 - lVar13,0x10);
            }
            else {
              FUN_00c48fe8(plVar5,lVar13,lVar15 - lVar13,0x10);
            }
            puVar7[4] = 0;
            puVar7[5] = 0;
            puVar7[6] = 0;
            puVar7[7] = 0;
            puVar16[0] = 0;
            puVar16[1] = 0;
          }
          *(undefined8 *)(puVar7 + 0xc) = uVar2;
          *(undefined8 *)(puVar7 + 0xe) = uVar4;
          *(undefined8 *)(puVar7 + 8) = uVar1;
          *(undefined8 *)(puVar7 + 10) = uVar3;
          *(undefined8 *)(puVar7 + 2) = uVar14;
          *(undefined8 *)(puVar7 + 4) = uVar11;
          *(undefined8 *)(puVar7 + 6) = uVar12;
          FUN_00d42734(puVar7 + 0x10);
          iVar18 = iVar18 + 1;
          *(undefined8 *)(puVar7 + 0x1a) = local_78;
          *(undefined8 *)(puVar7 + 0x1c) = uStack_70;
          *(undefined8 *)(puVar7 + 0x16) = local_88;
          *(undefined8 *)(puVar7 + 0x18) = uStack_80;
          *(undefined8 *)(puVar7 + 0x10) = local_a0;
          *(undefined8 *)(puVar7 + 0x12) = local_98;
          *(undefined8 *)(puVar7 + 0x14) = local_90;
          local_a0 = 0;
          local_98 = 0;
          local_90 = 0;
          FUN_00d42924(&local_a0);
          if (iVar18 == 8) {
            return puVar10 + 0x1e == param_2;
          }
        }
        lVar17 = lVar17 + 0x78;
        puVar7 = puVar10 + 0x1e;
        puVar16 = puVar10;
      } while (puVar10 + 0x1e != param_2);
    }
  }
  return true;
}



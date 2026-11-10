/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03367e18; name: FUN_03367e18
 */


undefined8
FUN_03367e18(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  uint uStack_64;
  
  uVar7 = FUN_03335924(*(undefined8 *)PTR_DAT_047e66c8,*param_2,
                       *(int *)(param_2 + 1) - (int)*param_2,1);
  uVar15 = (uint)((ulong)(param_5 - (long)param_4) >> 4);
  if ((int)uVar15 < 1) {
    uStack_64 = 0;
  }
  else {
    uStack_64 = 0;
    uVar14 = (ulong)(param_5 - (long)param_4) >> 4 & 0xffffffff;
    puVar9 = param_4;
    do {
      uVar6 = (int)*puVar9 * -0x61c8864f;
      uVar10 = (int)((ulong)*puVar9 >> 0x20) * -0x61c8864f;
      uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
      uVar4 = uVar6 >> 0x10 | uVar6 << 0x10;
      uVar6 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
      uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
      uVar6 = uVar4 + 0x9e3779b9 + (uVar4 >> 2) + uVar6 * 0x40 ^ uVar6;
      uStack_64 = uStack_64 * 0x40 + -0x61c88647 + uVar6 + (uVar6 >> 2) ^ uStack_64;
      uVar14 = uVar14 - 1;
      puVar9 = puVar9 + 2;
    } while (uVar14 != 0);
  }
  plVar1 = (long *)(param_1 + 0x40);
  local_68 = 0xffffffff;
  local_78 = param_3;
  uStack_70 = uVar7;
  uVar6 = FUN_0336edd8(plVar1,&local_78);
  if (*(uint *)(param_1 + 0x48) == uVar6) {
    plVar8 = (long *)(**(code **)**(undefined8 **)(param_1 + 0x60))();
    if (uVar15 == 0) {
      puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x18))(plVar8,0x20);
      *puVar9 = &LAB_00200008;
      puVar9[1] = param_3;
      puVar9[2] = uVar7;
      puVar9[3] = 0x1000;
    }
    else {
      puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x18))(plVar8,0x78);
      *puVar9 = 0x208008;
      puVar9[1] = param_3;
      puVar9[4] = 0x1000;
      uVar10 = uVar15;
      if (3 < (int)uVar15) {
        uVar10 = 4;
      }
      puVar9[7] = (long)(int)uVar10;
      puVar9[6] = 0;
      puVar9[2] = uVar7;
      puVar9[3] = puVar9 + 6;
      if (0 < (int)uVar15) {
        puVar9[8] = *param_4;
        uVar15 = uVar10;
        if ((int)uVar10 < 2) {
          uVar15 = 1;
        }
        puVar9[9] = param_4[1];
        if (1 < (int)uVar10) {
          puVar9[10] = param_4[2];
          puVar9[0xb] = param_4[3];
          if (uVar15 != 2) {
            puVar9[0xc] = param_4[4];
            *(undefined8 *)(puVar9[3] + 0x38) = param_4[5];
            if (uVar15 != 3) {
              lVar13 = 0;
              lVar12 = (ulong)uVar15 - 3;
              do {
                *(undefined8 *)(puVar9[3] + lVar13 + 0x40) =
                     *(undefined8 *)((long)param_4 + lVar13 + 0x30);
                lVar5 = lVar13 + 0x38;
                lVar2 = puVar9[3] + lVar13;
                lVar12 = lVar12 + -1;
                lVar13 = lVar13 + 0x10;
                *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)((long)param_4 + lVar5);
              } while (lVar12 != 0);
            }
          }
        }
      }
    }
    iVar11 = *(int *)(param_1 + 0x48);
    lVar13 = (long)iVar11;
    if ((int)(*(uint *)(param_1 + 0x4c) & 0x7fffffff) <= iVar11) {
      FUN_0336ef84(plVar1,lVar13 + 1);
      iVar11 = *(int *)(param_1 + 0x48);
    }
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x40) + (long)iVar11 * 0x20);
    *puVar3 = local_78;
    puVar3[1] = uStack_70;
    puVar3[2] = CONCAT44(uStack_64,local_68);
    puVar3[3] = puVar9;
    *(int *)(param_1 + 0x48) = (int)(lVar13 + 1);
  }
  return *(undefined8 *)(*plVar1 + ((long)((ulong)uVar6 << 0x20) >> 0x1b) + 0x18);
}



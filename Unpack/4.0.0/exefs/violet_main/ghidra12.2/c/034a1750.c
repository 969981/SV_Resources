/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034a1750; name: FUN_034a1750
 */


ulong * FUN_034a1750(undefined8 *param_1,undefined8 *param_2,ulong *param_3,ulong *param_4,
                    long param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined2 uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong *puVar20;
  undefined4 *puVar21;
  ulong *puVar22;
  undefined8 uStack_c0;
  ulong local_b8;
  undefined1 auStack_b0 [40];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  iVar6 = *(int *)(param_2 + 1);
  puVar18 = (ulong *)*param_2;
  if (iVar6 == 3) {
    uVar7 = (uint)param_3[1];
    if (((uVar7 & 0xff) == 1) || (*(char *)(param_5 + 0xd) != '\0')) {
      if (puVar18 == (ulong *)0x0) {
        uVar19 = *param_4;
        puVar18 = (ulong *)FUN_034a0f60(param_1);
        if (puVar18 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
        *puVar18 = uVar19;
        *(undefined4 *)(puVar18 + 0x16) = 3;
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        uVar19 = *param_3;
        uVar15 = param_3[1];
        *(int *)(puVar18 + 0x15) = (int)param_3[2];
        puVar18[0x13] = uVar19;
        puVar18[0x14] = uVar15;
        memcpy(puVar18 + 1,param_4 + 1,0x50);
        puVar18[0xb] = param_4[0xb];
      }
      else {
        memcpy(puVar18 + 1,param_4 + 1,0x50);
        puVar18[0xb] = param_4[0xb];
        uVar19 = *param_3;
        uVar15 = param_3[1];
        *(int *)(puVar18 + 0x15) = (int)param_3[2];
        puVar18[0x13] = uVar19;
        puVar18[0x14] = uVar15;
      }
      if (puVar18[0xd] != 0) {
        *(undefined4 *)(puVar18 + 0xe) = 0;
        (**(code **)(*(long *)puVar18[0xc] + 0x18))();
        puVar18[0xd] = 0;
        *(undefined4 *)((long)puVar18 + 0x74) = 0;
      }
      puVar18[0xd] = param_4[0xd];
      puVar18[0xc] = param_4[0xc];
      *(int *)(puVar18 + 0xe) = (int)param_4[0xe];
      *(undefined4 *)((long)puVar18 + 0x74) = *(undefined4 *)((long)param_4 + 0x74);
      param_4[0xd] = 0;
      param_4[0xe] = 0;
    }
    else {
      uVar15 = (ulong)(uVar7 + ((int)(uVar7 << 0x10) >> 0x1f));
      uVar19 = (ulong)(uVar7 >> 0xc) & 0x637;
      local_b8 = uVar15 & 0xff;
      lVar16 = -(ulong)(uint)((int)local_b8 << 4);
      puVar20 = (ulong *)(auStack_b0 + lVar16 + -0x10);
      puVar21 = (undefined4 *)((long)puVar20 - ((ulong)((int)local_b8 * 4 + 0xf) & 0x7f0));
      local_68 = 0;
      local_88 = 0;
      uStack_80 = 0x3f800000;
      local_78 = 0x3f800000;
      uStack_70 = 0;
      memcpy(auStack_b0,param_4 + 1,0x24);
      FUN_034d5c14(*(undefined4 *)((long)param_4 + 0x2c),&local_88,auStack_b0,
                   *(undefined4 *)((long)param_4 + 0x4c),
                   uVar19 << 0xc | uVar15 & 0xff | (ulong)((int)uVar19 != 0) << 8,puVar20,puVar21);
      if (puVar18 == (ulong *)0x0) {
        uVar19 = *param_4;
        puVar18 = (ulong *)FUN_034a0f60(param_1);
        if (puVar18 != (ulong *)0x0) {
          *puVar18 = uVar19;
          *(undefined4 *)(puVar18 + 0x16) = 3;
          *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        }
        if (puVar18[0xd] != 0) {
          *(undefined4 *)(puVar18 + 0xe) = 0;
          (**(code **)(*(long *)puVar18[0xc] + 0x18))();
          puVar18[0xd] = 0;
          *(undefined4 *)((long)puVar18 + 0x74) = 0;
        }
        puVar18[0xd] = param_4[0xd];
        puVar18[0xc] = param_4[0xc];
        *(int *)(puVar18 + 0xe) = (int)param_4[0xe];
        *(undefined4 *)((long)puVar18 + 0x74) = *(undefined4 *)((long)param_4 + 0x74);
        param_4[0xd] = 0;
        param_4[0xe] = 0;
        uVar13 = *param_3;
        uVar19 = param_3[2];
        uVar8 = *puVar21;
        uVar15 = param_4[0xb];
        uVar4 = *(undefined4 *)((long)param_4 + 0x5c);
        *(undefined4 *)(puVar18 + 0x14) = 0x4101;
        puVar18[0x13] = uVar13;
        *(int *)(puVar18 + 0x15) = (int)uVar19;
        *(undefined4 *)((long)puVar18 + 0xa4) = *(undefined4 *)((long)param_3 + 0xc);
        uVar19 = *puVar20;
        *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(auStack_b0 + lVar16 + -8);
        *(undefined4 *)((long)puVar18 + 0x2c) = uVar8;
        *(int *)(puVar18 + 0xb) = (int)uVar15;
        *(undefined4 *)((long)puVar18 + 0x5c) = uVar4;
        puVar18[4] = uVar19;
        if (1 < (uint)local_b8) {
          uVar19 = 1;
          do {
            uVar15 = *param_4;
            puVar22 = (ulong *)FUN_034a0f60(param_1);
            if (puVar22 != (ulong *)0x0) {
              *puVar22 = uVar15 | uVar19 << 0x38;
              *(undefined4 *)(puVar22 + 0x16) = 3;
              *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
            }
            if ((int)puVar18[0xe] != 0) {
              puVar22[0xc] = (ulong)PTR_PTR_047e71e0;
              *(undefined4 *)(puVar22 + 0xe) = 0;
              uVar7 = (uint)puVar18[0xe];
              if (*(uint *)((long)puVar22 + 0x74) < uVar7) {
                uVar1 = *(uint *)((long)puVar22 + 0x74) + uVar7;
                uVar15 = (**(code **)(*(long *)PTR_PTR_047e71e0 + 0x28))
                                   (PTR_PTR_047e71e0,puVar22[0xd],(ulong)uVar1 * 0x18,
                                    "../../../../include\\AK/SoundEngine/Common/IAkPluginMemAlloc.h"
                                    ,0xce);
                if (uVar15 == 0) goto LAB_034a1d34;
                puVar22[0xd] = uVar15;
                *(uint *)((long)puVar22 + 0x74) = uVar1;
              }
              *(uint *)(puVar22 + 0xe) = uVar7;
              if ((int)puVar18[0xe] != 0) {
                lVar16 = 0;
                uVar15 = 0;
                do {
                  puVar2 = (undefined8 *)(puVar18[0xd] + lVar16);
                  uVar5 = puVar2[1];
                  uVar17 = puVar2[2];
                  puVar3 = (undefined8 *)(puVar22[0xd] + lVar16);
                  lVar16 = lVar16 + 0x18;
                  *puVar3 = *puVar2;
                  puVar3[1] = uVar5;
                  puVar3[2] = uVar17;
                  uVar15 = uVar15 + 1;
                } while (uVar15 < (uint)puVar18[0xe]);
              }
            }
LAB_034a1d34:
            uVar14 = *param_3;
            uVar15 = param_3[2];
            uVar11 = *(undefined2 *)((long)param_3 + 0x12);
            uVar8 = puVar21[uVar19];
            uVar13 = param_4[0xb];
            uVar4 = *(undefined4 *)((long)param_4 + 0x5c);
            *(undefined4 *)(puVar22 + 0x14) = 0x4101;
            *(ushort *)(puVar22 + 0x15) = (ushort)uVar15;
            *(undefined2 *)((long)puVar22 + 0xaa) = uVar11;
            puVar22[0x13] = uVar14 + uVar19 * 4 * (ulong)(ushort)uVar15;
            *(undefined4 *)((long)puVar22 + 0xa4) = *(undefined4 *)((long)param_3 + 0xc);
            uVar15 = uVar19 + 1;
            uVar9 = *(undefined4 *)((long)puVar20 + (uVar19 << 4 | 4));
            uVar10 = *(undefined4 *)((long)puVar20 + (uVar19 << 4 | 8));
            *(int *)(puVar22 + 4) = (int)puVar20[uVar19 * 2];
            *(undefined4 *)((long)puVar22 + 0x24) = uVar9;
            *(undefined4 *)(puVar22 + 5) = uVar10;
            *(undefined4 *)((long)puVar22 + 0x2c) = uVar8;
            *(int *)(puVar22 + 0xb) = (int)uVar13;
            *(undefined4 *)((long)puVar22 + 0x5c) = uVar4;
            uVar19 = uVar15;
          } while (uVar15 != local_b8);
        }
      }
      else {
        uVar13 = *param_3;
        uVar19 = param_3[2];
        uVar8 = *puVar21;
        uVar15 = param_4[0xb];
        uVar4 = *(undefined4 *)((long)param_4 + 0x5c);
        *(undefined4 *)(puVar18 + 0x14) = 0x4101;
        puVar18[0x13] = uVar13;
        *(int *)(puVar18 + 0x15) = (int)uVar19;
        *(undefined4 *)((long)puVar18 + 0xa4) = *(undefined4 *)((long)param_3 + 0xc);
        uVar19 = *puVar20;
        *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(auStack_b0 + lVar16 + -8);
        *(undefined4 *)((long)puVar18 + 0x2c) = uVar8;
        puVar18[4] = uVar19;
        *(int *)(puVar18 + 0xb) = (int)uVar15;
        *(undefined4 *)((long)puVar18 + 0x5c) = uVar4;
        if (puVar18[0xd] != 0) {
          *(undefined4 *)(puVar18 + 0xe) = 0;
          (**(code **)(*(long *)puVar18[0xc] + 0x18))();
          puVar18[0xd] = 0;
          *(undefined4 *)((long)puVar18 + 0x74) = 0;
        }
        puVar18[0xd] = param_4[0xd];
        puVar18[0xc] = param_4[0xc];
        *(int *)(puVar18 + 0xe) = (int)param_4[0xe];
        *(undefined4 *)((long)puVar18 + 0x74) = *(undefined4 *)((long)param_4 + 0x74);
        param_4[0xd] = 0;
        param_4[0xe] = 0;
        puVar12 = PTR_PTR_047e71e0;
        if (1 < (uint)local_b8) {
          uVar19 = 1;
          do {
            if (*(uint *)(param_1 + 1) != 0) {
              lVar16 = (ulong)*(uint *)(param_1 + 1) * 0xc0;
              puVar22 = (ulong *)*param_1;
              do {
                if (*puVar22 == (*param_4 | uVar19 << 0x38)) goto LAB_034a19fc;
                puVar22 = puVar22 + 0x18;
                lVar16 = lVar16 + -0xc0;
              } while (lVar16 != 0);
            }
            puVar22 = (ulong *)0x0;
LAB_034a19fc:
            if ((int)puVar18[0xe] != 0) {
              puVar22[0xc] = (ulong)puVar12;
              *(undefined4 *)(puVar22 + 0xe) = 0;
              uVar7 = (uint)puVar18[0xe];
              if (*(uint *)((long)puVar22 + 0x74) < uVar7) {
                uStack_c0._4_4_ = *(uint *)((long)puVar22 + 0x74) + uVar7;
                uVar15 = (**(code **)(*(long *)puVar12 + 0x28))
                                   (puVar12,puVar22[0xd],(ulong)uStack_c0._4_4_ * 0x18,
                                    "../../../../include\\AK/SoundEngine/Common/IAkPluginMemAlloc.h"
                                    ,0xce);
                if (uVar15 == 0) goto LAB_034a1ad8;
                puVar22[0xd] = uVar15;
                *(uint *)((long)puVar22 + 0x74) = uStack_c0._4_4_;
              }
              *(uint *)(puVar22 + 0xe) = uVar7;
              if ((int)puVar18[0xe] != 0) {
                lVar16 = 0;
                uVar15 = 0;
                do {
                  puVar2 = (undefined8 *)(puVar18[0xd] + lVar16);
                  uVar5 = puVar2[1];
                  uVar17 = puVar2[2];
                  puVar3 = (undefined8 *)(puVar22[0xd] + lVar16);
                  lVar16 = lVar16 + 0x18;
                  *puVar3 = *puVar2;
                  puVar3[1] = uVar5;
                  puVar3[2] = uVar17;
                  uVar15 = uVar15 + 1;
                } while (uVar15 < (uint)puVar18[0xe]);
              }
            }
LAB_034a1ad8:
            uVar14 = *param_3;
            uVar15 = param_3[2];
            uVar11 = *(undefined2 *)((long)param_3 + 0x12);
            uVar8 = puVar21[uVar19];
            uVar13 = param_4[0xb];
            uVar4 = *(undefined4 *)((long)param_4 + 0x5c);
            *(undefined4 *)(puVar22 + 0x14) = 0x4101;
            *(ushort *)(puVar22 + 0x15) = (ushort)uVar15;
            *(undefined2 *)((long)puVar22 + 0xaa) = uVar11;
            puVar22[0x13] = uVar14 + uVar19 * 4 * (ulong)(ushort)uVar15;
            *(undefined4 *)((long)puVar22 + 0xa4) = *(undefined4 *)((long)param_3 + 0xc);
            uVar15 = uVar19 + 1;
            uVar9 = *(undefined4 *)((long)puVar20 + (uVar19 << 4 | 4));
            uVar10 = *(undefined4 *)((long)puVar20 + (uVar19 << 4 | 8));
            *(int *)(puVar22 + 4) = (int)puVar20[uVar19 * 2];
            *(undefined4 *)((long)puVar22 + 0x24) = uVar9;
            *(undefined4 *)(puVar22 + 5) = uVar10;
            *(undefined4 *)((long)puVar22 + 0x2c) = uVar8;
            *(int *)(puVar22 + 0xb) = (int)uVar13;
            *(undefined4 *)((long)puVar22 + 0x5c) = uVar4;
            uVar19 = uVar15;
          } while (uVar15 != local_b8);
        }
      }
    }
  }
  else {
    if (puVar18 == (ulong *)0x0) {
      uVar19 = *param_4;
      if (*(char *)((long)param_2 + 0xc) == '\0') {
        param_1 = param_1 + 2;
      }
      puVar18 = (ulong *)FUN_034a0f60(param_1);
      if (puVar18 != (ulong *)0x0) {
        *puVar18 = uVar19;
        *(int *)(puVar18 + 0x16) = iVar6;
      }
    }
    uVar19 = *param_3;
    uVar15 = param_3[1];
    *(int *)(puVar18 + 0x15) = (int)param_3[2];
    puVar18[0x13] = uVar19;
    puVar18[0x14] = uVar15;
  }
  return puVar18;
}



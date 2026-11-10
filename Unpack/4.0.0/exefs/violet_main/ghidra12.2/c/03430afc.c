/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03430afc; name: FUN_03430afc
 */


uint FUN_03430afc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                 ulong param_9)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined **local_100;
  undefined8 uStack_f8;
  undefined8 local_d0;
  long local_c8;
  ulong local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  long local_a8;
  ulong local_a0;
  undefined4 local_98;
  long local_90;
  ulong local_88;
  undefined4 local_80;
  undefined8 local_78;
  float local_70;
  
  local_78 = 0;
  local_70 = 0.0;
  local_100 = (undefined **)*param_5;
  uStack_f8 = CONCAT44(uStack_f8._4_4_,*(undefined4 *)(param_5 + 1));
  local_b0 = *param_6;
  local_a8 = CONCAT44(local_a8._4_4_,*(undefined4 *)(param_6 + 1));
  uVar7 = FUN_0341a340(param_3,&local_100,&local_b0,&local_78);
  uVar14 = 0;
  if ((uVar7 & 1) == 0) goto LAB_03430e58;
  uVar13 = *(uint *)(param_9 + 0x40);
  uVar14 = *(uint *)(param_9 + 0x44);
  if (uVar13 < uVar14) {
LAB_03430bc4:
    if (uVar13 < uVar14) {
      puVar10 = (undefined8 *)(*(long *)(param_9 + 0x38) + (ulong)*(uint *)(param_9 + 0x40) * 0x20);
      *(uint *)(param_9 + 0x40) = *(uint *)(param_9 + 0x40) + 1;
      puVar11 = (undefined8 *)0x0;
      if (*(long *)(param_9 + 0x38) != 0) {
        puVar10[2] = 0;
        puVar10[3] = 0;
        puVar11 = *(undefined8 **)(param_9 + 0x38);
      }
      if (puVar11 < puVar10) {
        do {
          puVar12 = puVar10 + -4;
          *puVar10 = *puVar12;
          puVar10[1] = puVar10[-3];
          puVar10[2] = puVar10[-2];
          puVar10[3] = puVar10[-1];
          puVar11 = *(undefined8 **)(param_9 + 0x38);
          puVar10 = puVar12;
        } while (puVar11 < puVar12);
      }
      if (puVar11 != (undefined8 *)0x0) {
        puVar11[2] = 0;
        puVar11[3] = 0;
        puVar9 = *(undefined4 **)(param_9 + 0x38);
        if (puVar9 != (undefined4 *)0x0) {
          *(undefined8 *)(puVar9 + 4) = 0;
          *(undefined8 *)(puVar9 + 6) = param_3;
          auVar18 = NEON_fmov(0x3f800000,4);
          *puVar9 = param_4;
          uVar15 = *param_5;
          *(undefined8 *)(param_9 + 0x18) = param_5[1];
          *(undefined8 *)(param_9 + 0x10) = uVar15;
          uVar15 = *param_5;
          fVar16 = *(float *)((ulong)&local_78 | 4);
          fVar17 = auVar18._12_4_;
          *(ulong *)(param_9 + 0x28) =
               CONCAT44(fVar17 - (float)((ulong)param_5[1] >> 0x20),local_70 - (float)param_5[1]);
          *(ulong *)(param_9 + 0x20) =
               CONCAT44(fVar16 - (float)((ulong)uVar15 >> 0x20),(float)local_78 - (float)uVar15);
          local_100 = (undefined **)*param_2;
          uStack_f8 = CONCAT44(fVar17,*(undefined4 *)(param_2 + 1));
          iVar5 = FUN_0342ffb8(param_1,&local_100,param_5,param_9,param_8,0,0);
          if (iVar5 != 0) {
            local_98 = 0;
            local_a8 = 0;
            local_a0 = 0;
            local_b0 = 0;
            local_80 = 0;
            local_100 = &PTR_FUN_047bf6c0;
            local_c0 = 0;
            local_b8 = 0;
            local_90 = 0;
            local_88 = 0;
            local_d0 = 0;
            local_c8 = 0;
            if (*(uint *)(param_9 + 0x40) < 8) {
              local_110 = *param_5;
              uStack_108 = CONCAT44(uStack_108._4_4_,*(undefined4 *)(param_5 + 1));
              uVar7 = FUN_0341a5f0(*(undefined4 *)(param_2 + 5),&local_b0,&local_110,param_3,param_7
                                   ,*param_1,&local_100,8 - *(uint *)(param_9 + 0x40));
              if ((uVar7 & 1) == 0) goto LAB_03430e7c;
              uVar14 = (uint)local_c0;
              while (uVar14 = uVar14 - 1, -1 < (int)uVar14) {
                uVar1 = *(uint *)(param_9 + 0x40);
                uVar13 = *(uint *)(param_9 + 0x44);
                if (uVar13 <= uVar1) {
                  uVar13 = uVar13 + 1;
                  lVar8 = (**(code **)(PTR_DAT_047e2fd0 + 0x28))
                                    (0xb,*(undefined8 *)(param_9 + 0x38),(ulong)uVar13 << 5,0x10);
                  if (lVar8 != 0) {
                    *(long *)(param_9 + 0x38) = lVar8;
                    *(uint *)(param_9 + 0x44) = uVar13;
                    goto LAB_03430d74;
                  }
LAB_03430f08:
                  bVar4 = false;
                  param_9 = 0;
                  goto LAB_03430e80;
                }
LAB_03430d74:
                if (uVar13 <= uVar1) goto LAB_03430f08;
                puVar10 = (undefined8 *)
                          (*(long *)(param_9 + 0x38) + (ulong)*(uint *)(param_9 + 0x40) * 0x20);
                *(uint *)(param_9 + 0x40) = *(uint *)(param_9 + 0x40) + 1;
                lVar8 = 0;
                if (*(long *)(param_9 + 0x38) != 0) {
                  puVar10[2] = 0;
                  puVar10[3] = 0;
                  lVar8 = *(long *)(param_9 + 0x38);
                }
                if ((undefined8 *)(lVar8 + 0x20U) < puVar10) {
                  do {
                    puVar11 = puVar10 + -4;
                    *puVar10 = *puVar11;
                    puVar10[1] = puVar10[-3];
                    puVar10[2] = puVar10[-2];
                    puVar10[3] = puVar10[-1];
                    lVar8 = *(long *)(param_9 + 0x38);
                    puVar10 = puVar11;
                  } while ((undefined8 *)(lVar8 + 0x20U) < puVar11);
                }
                if (lVar8 == 0) {
                  lVar8 = 0;
                }
                else {
                  *(undefined8 *)(lVar8 + 0x30) = 0;
                  *(undefined8 *)(lVar8 + 0x38) = 0;
                  lVar8 = *(long *)(param_9 + 0x38);
                }
                puVar10 = (undefined8 *)(local_c8 + (ulong)uVar14 * 0x20);
                uVar15 = *puVar10;
                uVar2 = puVar10[1];
                uVar3 = puVar10[3];
                *(undefined8 *)(lVar8 + 0x30) = puVar10[2];
                *(undefined8 *)(lVar8 + 0x38) = uVar3;
                *(undefined8 *)(lVar8 + 0x20) = uVar15;
                *(undefined8 *)(lVar8 + 0x28) = uVar2;
              }
              local_110 = *param_2;
              uStack_108 = CONCAT44(fVar17,*(undefined4 *)(param_2 + 1));
              iVar6 = FUN_0342ffb8(param_1,&local_110,param_5,param_9,param_8,0,0);
              bVar4 = false;
              param_9 = (ulong)(iVar6 == 0);
            }
            else {
LAB_03430e7c:
              bVar4 = true;
            }
LAB_03430e80:
            uVar14 = (uint)param_9;
            local_100 = &PTR_FUN_047bf6c0;
            if (local_c8 != 0) {
              local_c0 = local_c0 & 0xffffffff00000000;
              (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0xb);
              local_c8 = 0;
              local_c0 = local_c0 & 0xffffffff;
            }
            if (local_90 != 0) {
              local_88 = local_88 & 0xffffffff00000000;
              (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
              local_90 = 0;
              local_88 = local_88 & 0xffffffff;
            }
            if (local_a8 != 0) {
              local_a0 = local_a0 & 0xffffffff00000000;
              (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0xb);
            }
            if (!bVar4) goto LAB_03430e58;
          }
          uVar14 = (uint)(iVar5 == 0);
          goto LAB_03430e58;
        }
      }
    }
  }
  else {
    uVar14 = uVar14 + 1;
    lVar8 = (**(code **)(PTR_DAT_047e2fd0 + 0x28))
                      (0xb,*(undefined8 *)(param_9 + 0x38),(ulong)uVar14 << 5,0x10);
    if (lVar8 != 0) {
      *(long *)(param_9 + 0x38) = lVar8;
      *(uint *)(param_9 + 0x44) = uVar14;
      goto LAB_03430bc4;
    }
  }
  uVar14 = 0;
LAB_03430e58:
  return uVar14 & 1;
}



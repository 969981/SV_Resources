/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0113f454; name: FUN_0113f454
 */


void FUN_0113f454(undefined8 param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  char cVar3;
  ulong uVar4;
  size_t sVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long *plVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  byte bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  long local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  long *plStack_128;
  undefined8 local_120;
  undefined *puStack_118;
  undefined8 local_110;
  long *local_108;
  char local_100 [32];
  byte local_e0 [8];
  undefined1 auStack_d8 [8];
  undefined8 local_d0;
  long *local_c8;
  
  local_e0[0] = 0x60;
  local_e0[1] = 0xec;
  local_e0[2] = 0x99;
  local_e0[3] = 0xc3;
  local_e0[4] = 0x2e;
  local_e0[5] = 0xb8;
  local_e0[6] = 0xd7;
  local_e0[7] = 0x12;
  auStack_d8 = (undefined1  [8])0x3be99fd;
  local_d0 = 10;
  local_c8 = (long *)0x0;
  uVar4 = FUN_01470908(param_2,local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  puVar12 = &DAT_cbf29ce484222645;
  memset(local_e0,0,0x80);
  sVar5 = strlen((char *)local_e0);
  *(undefined8 *)(local_e0 + sVar5) = s_DistanceFogColorNear_03c04989._0_8_;
  *(ulong *)(auStack_d8 + sVar5) =
       CONCAT35(s_DistanceFogColorNear_03c04989._13_3_,s_DistanceFogColorNear_03c04989._8_5_);
  *(ulong *)(auStack_d8 + sVar5 + 5) =
       CONCAT53(s_DistanceFogColorNear_03c04989._16_5_,s_DistanceFogColorNear_03c04989._13_3_);
  sVar5 = strlen((char *)local_e0);
  (local_e0 + sVar5)[0] = 0x5f;
  (local_e0 + sVar5)[1] = 0;
  strcat((char *)local_e0,(char *)param_3[1]);
  if (local_e0[0] != 0) {
    pbVar7 = (byte *)((ulong)local_e0 | 1);
    bVar13 = local_e0[0];
    do {
      puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar13) * 0x100000001b3);
      bVar13 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar13 != 0);
  }
  puVar6 = *(undefined1 **)(param_2 + 0x160);
  local_150 = 0;
  if (puVar6 != (undefined1 *)0x0) {
    uVar8 = (long)puVar6 - ((ulong)puVar6 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      puVar9 = (undefined1 *)((ulong)(puVar6 + -1) & (ulong)puVar12);
    }
    else {
      puVar9 = puVar12;
      if (puVar6 <= puVar12) {
        uVar1 = 0;
        if (puVar6 != (undefined1 *)0x0) {
          uVar1 = (ulong)puVar12 / (ulong)puVar6;
        }
        puVar9 = puVar12 + -(uVar1 * (long)puVar6);
      }
    }
    plVar10 = *(long **)(*(long *)(param_2 + 0x158) + (long)puVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if ((undefined1 *)plVar10[1] == puVar12) {
            if ((undefined1 *)plVar10[2] == puVar12) goto LAB_0113f644;
          }
          else if ((undefined1 *)((ulong)plVar10[1] & (ulong)(puVar6 + -1)) != puVar9) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          puVar11 = (undefined1 *)plVar10[1];
          if (puVar11 == puVar12) {
            if ((undefined1 *)plVar10[2] == puVar12) goto LAB_0113f644;
          }
          else {
            if (puVar6 <= puVar11) {
              uVar8 = 0;
              if (puVar6 != (undefined1 *)0x0) {
                uVar8 = (ulong)puVar11 / (ulong)puVar6;
              }
              puVar11 = puVar11 + -(uVar8 * (long)puVar6);
            }
            if (puVar11 != puVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
LAB_0113f64c:
  local_120 = 0x5d486426e00af3fc;
  puStack_118 = &DAT_03c8c547;
  local_110 = 3;
  local_108 = (long *)0x0;
  FUN_015eea10(local_100,param_2,&local_120);
  cVar3 = local_100[0];
  if (local_100[0] != '\0') {
    local_100[0] = '\0';
  }
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 0x20))();
  }
  puVar2 = PTR_PTR_047d9248;
  uVar8 = 0;
  if ((uVar4 & 0xff) != 0) {
    uVar8 = uVar4 >> 0x20;
  }
  bVar13 = -(cVar3 == '\0');
  fVar14 = (float)CONCAT13(local_100[0x13] & ~bVar13,
                           CONCAT12(local_100[0x12] & ~bVar13,
                                    CONCAT11(local_100[0x11] & ~bVar13,local_100[0x10] & ~bVar13)));
  fVar15 = (float)(**(code **)(PTR_PTR_047d9248 + uVar8 * 8))(param_1);
  fVar17 = (float)((ulong)local_150 >> 0x20);
  fVar16 = (float)(**(code **)(puVar2 + uVar8 * 8))(param_1);
  (**(code **)(puVar2 + uVar8 * 8))(param_1,local_150);
  (**(code **)(puVar2 + uVar8 * 8))(param_1,local_150);
  local_140 = *param_3;
  uStack_138 = param_3[1];
  local_130 = param_3[2];
  plVar10 = (long *)param_3[3];
  plStack_128 = plVar10;
  if (plVar10 == (long *)0x0) {
    FUN_0126b72c(param_2,&local_140);
  }
  else {
    (**(code **)(*plVar10 + 0x18))(plVar10);
    FUN_0126b72c(CONCAT44(fVar17 + fVar16 * ((float)(CONCAT17(local_100[0x17] & ~bVar13,
                                                              CONCAT16(local_100[0x16] & ~bVar13,
                                                                       CONCAT15(local_100[0x15] &
                                                                                ~bVar13,CONCAT14(
                                                  local_100[0x14] & ~bVar13,fVar14)))) >> 0x20) -
                                            fVar17),
                          (float)local_150 + fVar15 * (fVar14 - (float)local_150)),param_2,
                 &local_140);
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  return;
LAB_0113f644:
  local_150 = plVar10[6];
  goto LAB_0113f64c;
}



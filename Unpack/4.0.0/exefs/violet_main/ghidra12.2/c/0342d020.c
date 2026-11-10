/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0342d020; name: FUN_0342d020
 */


void FUN_0342d020(long param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined **local_f0;
  undefined8 uStack_e8;
  long local_e0;
  long local_c8 [2];
  uint local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  long *local_80;
  long *plStack_78;
  long *local_70;
  undefined4 local_68;
  undefined2 local_64;
  
  puVar5 = PTR_DAT_047e6e68;
  lVar7 = *(long *)(param_1 + 8);
  uVar2 = *(uint *)(param_2 + 1);
  if (uVar2 == 0) {
    lVar11 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)(lVar7 + 0x58) + 0x68);
    uVar4 = 0;
    uVar9 = (uint)lVar10;
    if (uVar2 != 0) {
      uVar4 = uVar9 / uVar2;
    }
    for (lVar11 = *(long *)(*param_2 + (ulong)(uVar9 - uVar4 * uVar2) * 8);
        (lVar11 != 0 && (*(long *)(lVar11 + 0x70) != lVar10)); lVar11 = *(long *)(lVar11 + 0x78)) {
    }
  }
  plVar1 = (long *)(lVar11 + 0xa8);
  plVar12 = param_2 + 0xf;
  if (lVar11 != 0) {
    plVar12 = plVar1;
  }
  lVar10 = *plVar12;
  uVar3 = *(undefined4 *)PTR_DAT_047e6e78;
  local_b8 = *(uint *)(PTR_DAT_047e6e68 + 0xc);
  local_b0 = *(undefined4 *)(PTR_DAT_047e6e68 + 0x10);
  if (3 < local_b8) {
    local_b8 = 4;
  }
  uStack_b4 = 1;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_a4 = 0x447a0000;
  local_a8 = PTR_DAT_047e6e68[0x18];
  local_a7 = 0;
  uStack_ac = uVar3;
  if (*(char *)(*(long *)(lVar7 + 0x58) + 0xc5) != '\0') {
    if (*(uint *)(param_1 + 0x58) != 0) {
      lVar7 = (ulong)*(uint *)(param_1 + 0x58) * 0x50;
      puVar13 = *(undefined8 **)(param_1 + 0x50);
      do {
        (**(code **)*puVar13)(puVar13);
        lVar7 = lVar7 + -0x50;
        puVar13 = puVar13 + 10;
      } while (lVar7 != 0);
      lVar7 = *(long *)(param_1 + 8);
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  local_f0 = &PTR_LAB_047bf600;
  uStack_e8 = 0x40c90fdb40000000;
  local_c8[0] = lVar10 + 8;
  local_90 = *(undefined8 *)(*(long *)(lVar7 + 0x40) + 0x78);
  local_88 = *(undefined4 *)(*(long *)(lVar7 + 0x40) + 0x80);
  lVar7 = param_1 + 0x50;
  local_e0 = param_1;
  FUN_03431b50(local_c8,&local_90,lVar7,uVar3,&local_f0);
  if (lVar11 != 0) {
    local_a7 = puVar5[0x19];
    if (*(int *)(param_1 + 0x90) != 0) {
      plVar12 = *(long **)(param_1 + 0x88);
      if (*(char *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0xc4) == '\0') {
        do {
          if (*(char *)((long)plVar12 + 0x8c) == '\0') {
            uVar2 = *(uint *)(param_2 + 4);
            if (uVar2 == 0) {
              lVar10 = 0;
            }
            else {
              uVar4 = 0;
              uVar9 = (uint)*plVar12;
              if (uVar2 != 0) {
                uVar4 = uVar9 / uVar2;
              }
              for (lVar10 = *(long *)(param_2[3] + (ulong)(uVar9 - uVar4 * uVar2) * 8);
                  (lVar10 != 0 && (*(long *)(lVar10 + 0x68) != *plVar12));
                  lVar10 = *(long *)(lVar10 + 0x70)) {
              }
            }
            uVar6 = FUN_0342ca30(param_1,lVar11,plVar12,lVar10);
            if ((uVar6 & 1) != 0) {
              local_c8[0] = *plVar1 + 8;
              if (*(int *)(lVar10 + 0x58) == 0) {
                lVar8 = 0;
              }
              else {
                lVar8 = **(long **)(lVar10 + 0x50);
              }
              FUN_03423e4c(&local_a0,lVar10,lVar8 != lVar11);
              local_90 = CONCAT44(uStack_9c,local_a0);
              local_80 = plVar12 + 10;
              plStack_78 = plVar12 + 7;
              local_68 = (undefined4)plVar12[0x11];
              local_70 = plVar12 + 1;
              local_88 = local_98;
              local_64 = 0x100;
              lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x40);
              local_a0 = *(undefined4 *)(lVar10 + 0x78);
              uStack_9c = *(undefined4 *)(lVar10 + 0x7c);
              local_98 = *(undefined4 *)(lVar10 + 0x80);
              FUN_034325c0(local_c8,&local_a0,lVar7,&local_90);
            }
            if ((int)plVar12[6] != 0) {
              lVar10 = plVar12[5];
              do {
                FUN_03426968(lVar10);
                lVar10 = lVar10 + 0x94;
              } while (lVar10 != plVar12[5] + (ulong)*(uint *)(plVar12 + 6) * 0x94);
            }
            if (*(char *)((long)plVar12 + 0x8c) == '\0') {
              *(undefined1 *)((long)plVar12 + 0x8c) = 1;
            }
          }
          plVar12 = plVar12 + 0x12;
        } while (plVar12 !=
                 (long *)(*(long *)(param_1 + 0x88) + (ulong)*(uint *)(param_1 + 0x90) * 0x90));
      }
      else {
        do {
          uVar2 = *(uint *)(param_2 + 4);
          if (uVar2 == 0) {
            lVar10 = 0;
          }
          else {
            uVar4 = 0;
            uVar9 = (uint)*plVar12;
            if (uVar2 != 0) {
              uVar4 = uVar9 / uVar2;
            }
            for (lVar10 = *(long *)(param_2[3] + (ulong)(uVar9 - uVar4 * uVar2) * 8);
                (lVar10 != 0 && (*(long *)(lVar10 + 0x68) != *plVar12));
                lVar10 = *(long *)(lVar10 + 0x70)) {
            }
          }
          uVar6 = FUN_0342ca30(param_1,lVar11,plVar12,lVar10);
          if ((uVar6 & 1) != 0) {
            local_c8[0] = *plVar1 + 8;
            if (*(int *)(lVar10 + 0x58) == 0) {
              lVar8 = 0;
            }
            else {
              lVar8 = **(long **)(lVar10 + 0x50);
            }
            FUN_03423e4c(&local_a0,lVar10,lVar8 != lVar11);
            local_90 = CONCAT44(uStack_9c,local_a0);
            local_80 = plVar12 + 10;
            plStack_78 = plVar12 + 7;
            local_68 = (undefined4)plVar12[0x11];
            local_70 = plVar12 + 1;
            local_88 = local_98;
            local_64 = 0x100;
            lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x40);
            local_a0 = *(undefined4 *)(lVar10 + 0x78);
            uStack_9c = *(undefined4 *)(lVar10 + 0x7c);
            local_98 = *(undefined4 *)(lVar10 + 0x80);
            FUN_034325c0(local_c8,&local_a0,lVar7,&local_90);
          }
          if ((int)plVar12[6] != 0) {
            lVar10 = plVar12[5];
            do {
              FUN_03426968(lVar10);
              lVar10 = lVar10 + 0x94;
            } while (lVar10 != plVar12[5] + (ulong)*(uint *)(plVar12 + 6) * 0x94);
          }
          if (*(char *)((long)plVar12 + 0x8c) == '\0') {
            *(undefined1 *)((long)plVar12 + 0x8c) = 1;
          }
          plVar12 = plVar12 + 0x12;
        } while (plVar12 !=
                 (long *)(*(long *)(param_1 + 0x88) + (ulong)*(uint *)(param_1 + 0x90) * 0x90));
      }
    }
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03517538; name: FUN_03517538
 */


int FUN_03517538(undefined4 param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5
                ,undefined8 param_6,undefined8 *param_7,uint param_8,long param_9,
                undefined4 param_10,uint param_11,long *param_12)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int *piVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  bool bVar16;
  undefined8 local_3c8;
  long *local_3c0;
  undefined8 uStack_3b8;
  long *local_3b0;
  undefined8 local_3a8;
  ulong local_3a0;
  long local_398;
  char local_38c [4];
  undefined1 local_388 [8];
  undefined8 uStack_380;
  undefined4 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  int *local_350;
  undefined8 local_348;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined1 auStack_334 [64];
  undefined4 local_2f4;
  uint local_2ec;
  undefined8 local_2e0;
  undefined2 local_2d8;
  undefined8 local_2c8;
  undefined1 auStack_2c0 [104];
  undefined4 local_258;
  undefined8 local_254;
  undefined8 local_24c;
  undefined4 local_244;
  undefined8 local_240;
  undefined4 local_238;
  undefined2 local_234;
  ushort local_232;
  long local_230;
  ulong local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  undefined1 auStack_208 [256];
  undefined1 *local_108;
  ulong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  byte local_e4;
  byte local_e0;
  undefined1 auStack_d8 [64];
  undefined4 local_98 [2];
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_7c [3];
  
  *param_12 = 0;
  plVar13 = param_3;
  if ((*(byte *)((long)param_3 + 0xdb) >> 4 & 1) == 0) {
    do {
      plVar12 = (long *)plVar13[0x13];
      if (plVar12 == (long *)0x0) break;
      plVar13 = plVar12;
    } while ((*(byte *)((long)plVar12 + 0xdb) >> 4 & 1) == 0);
  }
  bVar1 = *(byte *)((long)plVar13 + 0xf1);
  FUN_034e7568(local_98,param_3,param_5,&local_80);
  local_7c[0] = 0x21;
  iVar8 = FUN_034e84d4(local_98[0]);
  if (iVar8 == 2) {
    bVar3 = false;
    iVar9 = 3;
  }
  else {
    local_2d8 = 0xff00;
    local_368 = 0;
    local_350 = (int *)0x0;
    local_2f4 = 0;
    local_2e0 = 0;
    local_2c8 = 0;
    local_240 = 0;
    local_238 = 0;
    local_108 = (undefined1 *)0x0;
    local_100 = 0;
    memset(auStack_2c0,0,0x68);
    local_234 = 0;
    local_254 = 0;
    local_24c = 0;
    local_e4 = local_e4 & 0xfe;
    local_230 = 0;
    local_228 = 0;
    local_220 = 0;
    uStack_218 = 0;
    local_210 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_258 = 0x3f800000;
    bVar2 = local_e0 & 0xf0 | 3;
    local_244 = 0;
    local_33c = *(undefined4 *)((long)param_7 + 0x14);
    local_348 = param_7[1];
    local_340 = *(undefined4 *)(param_7 + 2);
    local_350 = (int *)*param_7;
    if (local_350 != (int *)0x0) {
      *local_350 = *local_350 + 1;
    }
    local_338 = 0;
    local_360 = param_5;
    local_232 = local_232 & 0xfc00;
    local_e0 = bVar2;
    memcpy(auStack_334,auStack_d8,0x40);
    puVar4 = PTR_DAT_047e2fd0;
    local_2ec = param_11;
    local_e0 = 4;
    if ((param_8 & 1) == 0) {
      local_e0 = 0;
    }
    local_e0 = bVar2 | local_e0;
    local_2f4 = 0;
    plVar13 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x350);
    if (plVar13 == (long *)0x0) {
      bVar3 = false;
      *param_12 = 0;
      iVar9 = 2;
      local_38c[0] = '\0';
      bVar16 = false;
    }
    else {
      bVar2 = bVar1 & 0xf;
      uStack_380 = uStack_90;
      local_378 = local_88;
      FUN_034a1dac(plVar13,&local_370,param_3,param_4,local_388,param_10);
      plVar13[0x66] = param_2;
      puVar5 = PTR_DAT_047e74d0;
      *plVar13 = (long)(PTR_DAT_047e74d0 + 0x10);
      plVar13[2] = (long)(puVar5 + 0x148);
      plVar13[3] = (long)(puVar5 + 0x160);
      plVar13[100] = (long)(puVar5 + 0x1e8);
      plVar13[0x67] = param_9;
      plVar13[0x68] = 0;
      *(byte *)(plVar13 + 0x69) = *(byte *)(plVar13 + 0x69) & 0xfe;
      *(uint *)((long)plVar13 + 699) = *(uint *)((long)plVar13 + 699) & 0x8fdfffff | 0x10000000;
      *(undefined4 *)((long)plVar13 + 0x264) = param_1;
      *param_12 = (long)plVar13;
      local_38c[0] = '\0';
      iVar9 = FUN_0346db58(local_80,plVar13 + 3,0,bVar2 != 1,local_7c,auStack_2c0,local_38c);
      if (iVar9 == 1) {
        plVar13 = (long *)*param_12;
        local_3a8 = CONCAT44(1,local_98[0]);
        local_3c0 = plVar13 + 0x60;
        local_3a0 = (ulong)CONCAT61((int6)(local_3a0 >> 0x10),
                                    ((bVar1 & 0xf) == 0 || local_38c[0] == '\0') &&
                                    (*(uint *)((long)plVar13 + 699) & 0x2000000) == 0) << 8;
        if ((*(ushort *)(plVar13 + 0x36) & 0x40) != 0) {
          local_3c0 = (long *)0x0;
        }
        uStack_3b8 = 0;
        local_3c8 = param_5;
        local_3b0 = plVar13;
        iVar9 = (**(code **)(*param_3 + 0x118))(param_3,&local_3c8,1,0);
        if ((iVar9 == 2) ||
           (((iVar8 == 0x50 || (iVar9 == 0x50)) &&
            (*(ushort *)(plVar13 + 0x36) = *(ushort *)(plVar13 + 0x36) | 0x100, bVar2 == 1)))) {
          bVar16 = false;
          local_7c[0] = 0x20;
          bVar3 = true;
          iVar9 = 3;
        }
        else {
          iVar9 = (**(code **)(*plVar13 + 0x18))(plVar13);
          if (iVar9 == 1) {
            local_3c0 = (long *)CONCAT62(local_3c0._2_6_,0xff00);
            local_3b0 = (long *)0x0;
            local_398 = *param_12;
            local_3a8 = (ulong)*(uint *)(local_398 + 0x228) << 0x20;
            local_3a0 = (ulong)param_11;
            local_3c8 = param_5;
            (**(code **)(*param_3 + 0x148))(param_3,&local_3c8,local_398 + 0x68,1);
            lVar14 = *param_12;
            *(undefined8 *)(lVar14 + 0x1e0) = 0;
            puVar5 = PTR_DAT_047e70c8;
            plVar13 = (long *)(PTR_DAT_047e70c8 + 0x10);
            if (*(long *)(PTR_DAT_047e70c8 + 0x10) != 0) {
              plVar13 = (long *)(*(long *)(PTR_DAT_047e70c8 + 8) + 0x1e0);
            }
            *plVar13 = lVar14;
            *(long *)(puVar5 + 8) = lVar14;
            *(int *)puVar5 = *(int *)puVar5 + 1;
            uVar7 = FUN_034cb578(*(undefined8 *)(lVar14 + 0x188));
            *(undefined2 *)(lVar14 + 0x2b8) = uVar7;
            uVar10 = *(uint *)(lVar14 + 699);
            if ((uVar10 >> 0xf & 1) == 0) {
              *(uint *)(lVar14 + 699) = uVar10 | 0x8000;
              if (*(long *)(lVar14 + 0x108) != 0) {
                lVar11 = *(long *)(lVar14 + 0x188);
                do {
                  if (*(long *)(lVar11 + 0x88) != 0) {
                    lVar11 = *(long *)(lVar11 + 0x88) + 0x38;
                    goto LAB_03517a34;
                  }
                  lVar11 = *(long *)(lVar11 + 0x98);
                } while (lVar11 != 0);
                lVar11 = 0;
LAB_03517a34:
                FUN_034b2e64(*(undefined8 *)PTR_DAT_047e7040,*(long *)(lVar14 + 0x108),lVar11);
              }
            }
            iVar9 = 1;
            FUN_034a3454(lVar14,param_6,0,1);
            bVar3 = true;
            bVar16 = true;
          }
          else {
            bVar16 = false;
            bVar3 = true;
          }
        }
      }
      else {
        bVar3 = false;
        bVar16 = false;
      }
    }
    if (local_230 != 0) {
      local_228 = local_228 & 0xffffffff00000000;
      (**(code **)(puVar4 + 0x30))(0);
      local_230 = 0;
      local_228 = local_228 & 0xffffffff;
    }
    if (local_108 != (undefined1 *)0x0) {
      local_100 = local_100 & 0xffffffff00000000;
      if (auStack_208 != local_108) {
        (**(code **)(puVar4 + 0x30))(0);
      }
      local_108 = (undefined1 *)0x0;
      local_100 = local_100 & 0xffffffff;
    }
    piVar6 = local_350;
    if ((local_350 != (int *)0x0) && (iVar8 = *local_350, *local_350 = iVar8 + -1, iVar8 + -1 == 0))
    {
      uVar10 = local_350[1];
      if (uVar10 != 0) {
        uVar15 = 0;
        plVar13 = (long *)(local_350 + 4);
        do {
          if (*plVar13 != 0) {
            (**(code **)(puVar4 + 0x30))(0);
            uVar10 = piVar6[1];
          }
          uVar15 = uVar15 + 1;
          plVar13 = plVar13 + 4;
        } while (uVar15 < uVar10);
      }
      (**(code **)(puVar4 + 0x30))(0,piVar6);
    }
    if (iVar9 == 1) {
      return 1;
    }
    if (bVar16) goto LAB_03517b18;
  }
  if (*(int *)((long)param_7 + 0x14) != 0) {
    FUN_034b40b8(*(undefined8 *)PTR_DAT_047e6f38,*(int *)((long)param_7 + 0x14),*param_12,&local_370
                );
  }
LAB_03517b18:
  plVar13 = (long *)*param_12;
  if (plVar13 == (long *)0x0) {
    if (bVar3) {
      local_358 = 0;
      local_350 = (int *)0x100000000;
      local_348 = CONCAT62(local_348._2_6_,0x100);
      local_360 = 0;
      local_368 = 0;
      local_370 = param_5;
      (**(code **)(*param_3 + 0x120))(param_3,&local_370);
    }
  }
  else {
    if (!bVar3) {
      *(uint *)((long)plVar13 + 699) = *(uint *)((long)plVar13 + 699) | 0x100000;
    }
    (**(code **)(*plVar13 + 0x20))(plVar13,1);
    (**(code **)(*plVar13 + 8))(plVar13);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar13);
  }
  *param_12 = 0;
  return iVar9;
}



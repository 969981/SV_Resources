/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019c5d84; name: FUN_019c5d84
 */


ulong FUN_019c5d84(byte *param_1,byte *param_2,ulong param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long local_118;
  int local_108;
  uint local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  byte *local_d0;
  byte *pbStack_c8;
  int *local_c0;
  byte local_6c [12];
  
  if (param_3 != 0) {
    bVar2 = *param_2;
    bVar5 = param_3 == 1;
    if (bVar2 == 0) {
      local_118 = 2;
    }
    else {
      lVar10 = 0;
      local_118 = ((ulong)(bVar2 - 1) & 0xff) + 3;
      do {
        if (bVar5) {
          return 0;
        }
        local_100 = CONCAT71(local_100._1_7_,1);
        local_100 = CONCAT44((int)lVar10,(int)local_100);
        local_108 = (int)(char)param_2[lVar10 + 1];
        if (*(long *)(param_1 + 0x1b8) == 0) {
          local_f0 = &LAB_02e657b0;
          local_e8 = FUN_02e657f0;
          local_e0 = &LAB_02e657f4;
          local_d8 = &LAB_02e65800;
          local_d0 = (byte *)&local_108;
          FUN_00c837c0(param_1,param_1 + 0x80,&local_100,&local_f0);
          pcVar4 = local_e8;
        }
        else {
          local_c0 = (int *)&local_100;
          local_f0 = &LAB_029e901c;
          local_e8 = FUN_02e65784;
          local_e0 = &LAB_02e65788;
          local_d8 = &LAB_02e6579c;
          local_d0 = param_1;
          pbStack_c8 = (byte *)&local_108;
          FUN_00c837c0(param_1,param_1 + 0x80,&local_100,&local_f0);
          pcVar4 = local_e8;
        }
        local_e8 = pcVar4;
        if (pcVar4 != (code *)0x0) {
          local_e0 = (undefined1 *)0x0;
          local_d8 = (undefined1 *)0x0;
          local_f0 = (undefined1 *)0x0;
          local_e8 = (code *)0x0;
          (*pcVar4)(&local_d0);
        }
        bVar5 = param_3 <= lVar10 + 2U;
        lVar10 = lVar10 + 1;
      } while ((uint)bVar2 != (uint)lVar10);
      param_2 = param_2 + lVar10;
    }
    if (!bVar5) {
      bVar2 = param_2[1];
      param_2 = param_2 + 2;
      if (bVar2 != 0) {
        uVar7 = local_118 + 4;
        local_118 = uVar7 + (ulong)(byte)(bVar2 - 1) * 4;
        uVar9 = 0;
        pbVar8 = param_2;
        do {
          if (param_3 < uVar7) {
            return 0;
          }
          param_2 = pbVar8 + 4;
          local_108 = *(int *)pbVar8;
          local_100 = CONCAT71(local_100._1_7_,1);
          local_100 = CONCAT44(uVar9,(int)local_100);
          if (*(long *)(param_1 + 0x220) == 0) {
            local_f0 = &LAB_02e65838;
            local_e8 = FUN_02e65878;
            local_e0 = &LAB_02e6587c;
            local_d8 = &LAB_02e65888;
            local_d0 = (byte *)&local_108;
            FUN_00c837c0(param_1,param_1 + 0xb8,&local_100,&local_f0);
            pcVar4 = local_e8;
          }
          else {
            local_c0 = (int *)&local_100;
            local_f0 = &LAB_029e9340;
            local_e8 = FUN_02e6580c;
            local_e0 = &LAB_02e65810;
            local_d8 = &LAB_02e65824;
            local_d0 = param_1;
            pbStack_c8 = (byte *)&local_108;
            FUN_00c837c0(param_1,param_1 + 0xb8,&local_100,&local_f0);
            pcVar4 = local_e8;
          }
          local_e8 = pcVar4;
          if (pcVar4 != (code *)0x0) {
            local_e0 = (undefined1 *)0x0;
            local_d8 = (undefined1 *)0x0;
            local_f0 = (undefined1 *)0x0;
            local_e8 = (code *)0x0;
            (*pcVar4)(&local_d0);
          }
          uVar9 = uVar9 + 1;
          uVar7 = uVar7 + 4;
          pbVar8 = param_2;
        } while (bVar2 != uVar9);
      }
      uVar7 = local_118 + 1;
      if (uVar7 <= param_3) {
        pbVar8 = param_2 + 1;
        bVar2 = *param_2;
        local_100 = 0;
        uStack_f8 = 0;
        if (bVar2 != 0) {
          iVar3 = bVar2 - 1;
          iVar1 = bVar2 + 6;
          if (-1 < iVar3) {
            iVar1 = iVar3;
          }
          uVar6 = (ulong)((iVar1 >> 3) + 1);
          uVar7 = uVar7 + uVar6;
          if (param_3 < uVar7) {
            return 0;
          }
          memcpy(&local_100,pbVar8,uVar6);
          uVar11 = 0;
          do {
            uVar9 = (uint)uVar11;
            local_6c[0] = *(byte *)((long)&local_100 + (uVar11 >> 3)) >> (ulong)(uVar9 & 7) & 1;
            local_108 = CONCAT31(local_108._1_3_,1);
            local_104 = uVar9;
            if (*(long *)(param_1 + 0x288) == 0) {
              local_e0 = &LAB_02e6590c;
              local_d8 = &LAB_02e65918;
              local_f0 = &LAB_02e658c0;
              local_e8 = FUN_02e65908;
              local_d0 = local_6c;
              FUN_00c837c0(param_1,param_1 + 0xf0,&local_108,&local_f0);
              pcVar4 = local_e8;
            }
            else {
              local_c0 = &local_108;
              local_f0 = &LAB_029e9640;
              local_e8 = FUN_02e65894;
              local_e0 = &LAB_02e65898;
              local_d8 = &LAB_02e658ac;
              local_d0 = param_1;
              pbStack_c8 = local_6c;
              FUN_00c837c0(param_1,param_1 + 0xf0,&local_108,&local_f0);
              pcVar4 = local_e8;
            }
            local_e8 = pcVar4;
            if (pcVar4 != (code *)0x0) {
              local_e0 = (undefined1 *)0x0;
              local_d8 = (undefined1 *)0x0;
              local_f0 = (undefined1 *)0x0;
              local_e8 = (code *)0x0;
              (*pcVar4)(&local_d0);
            }
            uVar11 = (ulong)(uVar9 + 1);
          } while ((uint)bVar2 != uVar9 + 1);
          pbVar8 = pbVar8 + uVar6;
        }
        uVar7 = uVar7 + 1;
        if (uVar7 <= param_3) {
          bVar2 = *pbVar8;
          local_100 = 0;
          uStack_f8 = 0;
          if (bVar2 == 0) {
            return uVar7;
          }
          iVar3 = bVar2 - 1;
          iVar1 = bVar2 + 6;
          if (-1 < iVar3) {
            iVar1 = iVar3;
          }
          uVar6 = (ulong)((iVar1 >> 3) + 1);
          uVar7 = uVar7 + uVar6;
          if (uVar7 <= param_3) {
            memcpy(&local_100,pbVar8 + 1,uVar6);
            uVar6 = 0;
            do {
              uVar9 = (uint)uVar6;
              local_6c[0] = *(byte *)((long)&local_100 + (uVar6 >> 3)) >> (ulong)(uVar9 & 7) & 1;
              local_108 = CONCAT31(local_108._1_3_,1);
              local_104 = uVar9;
              if (*(long *)(param_1 + 0x2f0) == 0) {
                local_e0 = &LAB_02e65a2c;
                local_d8 = &LAB_02e65a38;
                local_f0 = &LAB_02e659e0;
                local_e8 = FUN_02e65a28;
                local_d0 = local_6c;
                FUN_00c837c0(param_1,param_1 + 0x128,&local_108,&local_f0);
                pcVar4 = local_e8;
              }
              else {
                local_c0 = &local_108;
                local_f0 = &LAB_029e9c14;
                local_e8 = FUN_02e659b4;
                local_e0 = &LAB_02e659b8;
                local_d8 = &LAB_02e659cc;
                local_d0 = param_1;
                pbStack_c8 = local_6c;
                FUN_00c837c0(param_1,param_1 + 0x128,&local_108,&local_f0);
                pcVar4 = local_e8;
              }
              if (pcVar4 != (code *)0x0) {
                local_e0 = (undefined1 *)0x0;
                local_d8 = (undefined1 *)0x0;
                local_f0 = (undefined1 *)0x0;
                local_e8 = (code *)0x0;
                (*pcVar4)(&local_d0);
              }
              uVar6 = (ulong)(uVar9 + 1);
            } while ((uint)bVar2 != uVar9 + 1);
            return uVar7;
          }
        }
      }
    }
  }
  return 0;
}



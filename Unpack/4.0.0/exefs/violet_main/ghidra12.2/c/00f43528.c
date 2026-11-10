/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f43528; name: FUN_00f43528
 */


ulong FUN_00f43528(long param_1,undefined1 *param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 *__dest;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined4 local_110;
  uint local_10c;
  byte local_108 [4];
  uint uStack_104;
  undefined8 uStack_100;
  char local_f4 [4];
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  char *apcStack_d0 [14];
  
  if (param_3 != 0) {
    uVar5 = (*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) >> 3) * 0x8ba3;
    *param_2 = (char)uVar5;
    if ((uVar5 & 0xff) == 0) {
      uVar5 = 2;
    }
    else {
      uVar10 = 0;
      lVar4 = 0;
      do {
        lVar9 = lVar4;
        _local_108 = CONCAT71(stack0xfffffffffffffef9,1);
        local_f0 = &LAB_02e65a44;
        local_e8 = FUN_02e65a84;
        _local_108 = CONCAT44(uVar10,local_108);
        local_110 = 0;
        local_e0 = &LAB_02e65a88;
        local_d8 = &LAB_02e65a94;
        apcStack_d0[0] = (char *)&local_110;
        FUN_00c837c0(param_1,param_1 + 0x80,local_108,&local_f0);
        pcVar3 = local_e8;
        if (local_e8 != (code *)0x0) {
          local_e0 = (undefined1 *)0x0;
          local_d8 = (undefined1 *)0x0;
          local_f0 = (undefined1 *)0x0;
          local_e8 = (code *)0x0;
          (*pcVar3)(apcStack_d0);
        }
        if (param_3 < lVar9 + 2U) {
          return 0;
        }
        uVar11 = uVar10 + 1;
        uVar10 = uVar11 & 0xff;
        param_2[lVar9 + 1] = (char)local_110;
        lVar4 = lVar9 + 1;
      } while ((uVar11 & 0xff) < ((uint)uVar5 & 0xff));
      param_2 = param_2 + lVar9 + 1;
      uVar5 = lVar9 + 3;
    }
    if (uVar5 <= param_3) {
      uVar6 = (*(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb8) >> 3) * 0x8ba3;
      puVar8 = (undefined4 *)(param_2 + 2);
      param_2[1] = (char)uVar6;
      if ((uVar6 & 0xff) != 0) {
        uVar10 = 0;
        puVar7 = puVar8;
        do {
          _local_108 = CONCAT71(stack0xfffffffffffffef9,1);
          _local_108 = CONCAT44(uVar10,local_108);
          local_110 = 0;
          local_e0 = &LAB_02e65ae4;
          local_d8 = &LAB_02e65af0;
          local_f0 = &LAB_02e65aa0;
          local_e8 = FUN_02e65ae0;
          apcStack_d0[0] = (char *)&local_110;
          FUN_00c837c0(param_1,param_1 + 0xb8,local_108,&local_f0);
          pcVar3 = local_e8;
          if (local_e8 != (code *)0x0) {
            local_e0 = (undefined1 *)0x0;
            local_d8 = (undefined1 *)0x0;
            local_f0 = (undefined1 *)0x0;
            local_e8 = (code *)0x0;
            (*pcVar3)(apcStack_d0);
          }
          uVar5 = uVar5 + 4;
          if (param_3 < uVar5) {
            return 0;
          }
          puVar8 = puVar7 + 1;
          *puVar7 = local_110;
          uVar11 = uVar10 + 1;
          uVar10 = uVar11 & 0xff;
          puVar7 = puVar8;
        } while ((uVar11 & 0xff) < ((uint)uVar6 & 0xff));
      }
      uVar5 = uVar5 + 1;
      if (uVar5 <= param_3) {
        uVar6 = (*(long *)(param_1 + 0xf8) - *(long *)(param_1 + 0xf0) >> 3) * 0x8ba3;
        __dest = (undefined1 *)((long)puVar8 + 1);
        *(char *)puVar8 = (char)uVar6;
        uVar10 = (uint)uVar6 & 0xff;
        _local_108 = 0;
        uStack_100 = 0;
        if ((uVar6 & 0xff) != 0) {
          uVar11 = 0;
          do {
            local_110 = CONCAT31(local_110._1_3_,1);
            local_f4[0] = '\0';
            local_e0 = &LAB_02e65b44;
            local_d8 = &LAB_02e65b50;
            local_f0 = &LAB_02e65afc;
            local_e8 = FUN_02e65b40;
            local_10c = uVar11;
            apcStack_d0[0] = local_f4;
            FUN_00c837c0(param_1,param_1 + 0xf0,&local_110,&local_f0);
            pcVar3 = local_e8;
            if (local_e8 != (code *)0x0) {
              local_e0 = (undefined1 *)0x0;
              local_d8 = (undefined1 *)0x0;
              local_f0 = (undefined1 *)0x0;
              local_e8 = (code *)0x0;
              (*pcVar3)(apcStack_d0);
            }
            local_108[uVar11 >> 3] = local_108[uVar11 >> 3] | local_f4[0] << (ulong)(uVar11 & 7);
            uVar1 = uVar11 + 1;
            uVar11 = uVar1 & 0xff;
          } while ((uVar1 & 0xff) < uVar10);
          iVar2 = uVar10 + 6;
          if (-1 < (int)(uVar10 - 1)) {
            iVar2 = uVar10 - 1;
          }
          uVar6 = (ulong)((iVar2 >> 3) + 1);
          uVar5 = uVar5 + uVar6;
          if (param_3 < uVar5) {
            return 0;
          }
          memcpy(__dest,local_108,uVar6);
          __dest = __dest + uVar6;
        }
        uVar5 = uVar5 + 1;
        if (uVar5 <= param_3) {
          uVar6 = (*(long *)(param_1 + 0x130) - *(long *)(param_1 + 0x128) >> 3) * 0x8ba3;
          *__dest = (char)uVar6;
          uVar10 = (uint)uVar6 & 0xff;
          _local_108 = 0;
          uStack_100 = 0;
          if ((uVar6 & 0xff) == 0) {
            return uVar5;
          }
          uVar11 = 0;
          do {
            local_110 = CONCAT31(local_110._1_3_,1);
            local_f4[0] = '\0';
            local_d8 = &LAB_02e65bb0;
            local_e0 = &LAB_02e65ba4;
            local_f0 = &LAB_02e65b5c;
            local_e8 = FUN_02e65ba0;
            local_10c = uVar11;
            apcStack_d0[0] = local_f4;
            FUN_00c837c0(param_1,param_1 + 0x128,&local_110,&local_f0);
            pcVar3 = local_e8;
            if (local_e8 != (code *)0x0) {
              local_e0 = (undefined1 *)0x0;
              local_d8 = (undefined1 *)0x0;
              local_f0 = (undefined1 *)0x0;
              local_e8 = (code *)0x0;
              (*pcVar3)(apcStack_d0);
            }
            local_108[uVar11 >> 3] = local_108[uVar11 >> 3] | local_f4[0] << (ulong)(uVar11 & 7);
            uVar1 = uVar11 + 1;
            uVar11 = uVar1 & 0xff;
          } while ((uVar1 & 0xff) < uVar10);
          iVar2 = uVar10 + 6;
          if (-1 < (int)(uVar10 - 1)) {
            iVar2 = uVar10 - 1;
          }
          uVar6 = (ulong)((iVar2 >> 3) + 1);
          uVar5 = uVar5 + uVar6;
          if (uVar5 <= param_3) {
            memcpy(__dest + 1,local_108,uVar6);
            return uVar5;
          }
        }
      }
    }
  }
  return 0;
}



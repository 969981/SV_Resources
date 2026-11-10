/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0030f520; name: FUN_0030f520
 */


ulong FUN_0030f520(uint *param_1,long param_2,long param_3,long param_4,long *param_5)

{
  byte *pbVar1;
  byte bVar2;
  void *__ptr;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  long local_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  void *local_b0;
  byte local_a8 [16];
  ulong local_98;
  undefined1 auStack_90 [32];
  ulong local_70;
  undefined *puStack_68;
  
  if (*(long *)(param_3 + 0x10) != 0) {
    lVar11 = *(long *)(param_2 + 8);
    do {
      plVar12 = *(long **)(param_3 + 8);
      if (*plVar12 == 0) {
        pbVar15 = (byte *)((long)plVar12 + 9);
        uVar10 = (ulong)*(byte *)(plVar12 + 1);
        if (uVar10 != 0) goto LAB_0030f588;
LAB_0030f67c:
        FUN_003692b0(param_3);
      }
      else {
        uVar10 = plVar12[1];
        pbVar15 = (byte *)plVar12[2];
        if (uVar10 == 0) goto LAB_0030f67c;
LAB_0030f588:
        if (*param_1 < 7) {
          pbVar1 = pbVar15 + uVar10;
          switch(*param_1) {
          case 0:
            lVar6 = *(long *)(param_2 + 0x180) + 1;
            *(long *)(param_2 + 0x180) = lVar6;
            bVar2 = *pbVar15;
            local_70 = (ulong)bVar2;
            *(byte *)(param_1 + 1) = bVar2;
            uVar7 = 0;
            if (bVar2 != 0) {
              if (bVar2 != 1) {
                puStack_68 = PTR_FUN_047ccb10;
                FUN_00391b20(local_a8,"Bad GRPC frame type 0x%02x",0x1a,&local_70,1);
                uVar10 = (ulong)local_a8 | 1;
                if ((local_a8[0] & 1) != 0) {
                  uVar10 = local_98;
                }
                    /* try { // try from 0030f86c to 0030f88f has its CatchHandler @ 0030fa98 */
                FUN_00367770(auStack_90,uVar10);
                uVar5 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/frame_data.cc"
                                     ,0x85,auStack_90,0,0);
                *(undefined8 *)(param_1 + 4) = uVar5;
                if ((local_a8[0] & 1) != 0) {
                  FUN_0049e790(PTR_LAB_047cba48,local_98);
                  uVar5 = *(undefined8 *)(param_1 + 4);
                }
                uVar5 = FUN_00351770(uVar5,2,*(undefined4 *)(param_2 + 0xa0));
                *(undefined8 *)(param_1 + 4) = uVar5;
                local_b0 = (void *)FUN_0036a0b0(plVar12,3);
                    /* try { // try from 0030f8d4 to 0030f8ef has its CatchHandler @ 0030fa7c */
                FUN_003678d0(auStack_90,&local_b0);
                uVar5 = FUN_00351fa0(uVar5,6,auStack_90);
                __ptr = local_b0;
                *(undefined8 *)(param_1 + 4) = uVar5;
                local_b0 = (void *)0x0;
                if (__ptr != (void *)0x0) {
                    /* try { // try from 0030f900 to 0030f907 has its CatchHandler @ 0030fa78 */
                  free(__ptr);
                  uVar5 = *(undefined8 *)(param_1 + 4);
                }
                uVar5 = FUN_00351770(uVar5,4,0);
                *(undefined8 *)(param_1 + 4) = uVar5;
                *param_1 = 6;
                FUN_003692b0(param_3);
                uVar10 = *(ulong *)(param_1 + 4);
                if (uVar10 < 5) {
                  return uVar10;
                }
                uVar10 = FUN_00350fb0(uVar10);
                return uVar10;
              }
              uVar7 = 1;
            }
            *(undefined1 *)(param_1 + 6) = uVar7;
            if (uVar10 != 1) {
              pbVar13 = pbVar15 + 1;
              goto LAB_0030f610;
            }
            uVar8 = 1;
            break;
          case 1:
            lVar6 = *(long *)(param_2 + 0x180);
            pbVar13 = pbVar15;
LAB_0030f610:
            lVar6 = lVar6 + 1;
            *(long *)(param_2 + 0x180) = lVar6;
            pbVar14 = pbVar13 + 1;
            uVar8 = (uint)*pbVar13 << 0x18;
            param_1[2] = uVar8;
            if (pbVar14 != pbVar1) goto LAB_0030f62c;
            uVar8 = 2;
            break;
          case 2:
            lVar6 = *(long *)(param_2 + 0x180);
            uVar8 = param_1[2];
            pbVar14 = pbVar15;
LAB_0030f62c:
            lVar6 = lVar6 + 1;
            *(long *)(param_2 + 0x180) = lVar6;
            pbVar13 = pbVar14 + 1;
            uVar8 = uVar8 | (uint)*pbVar14 << 0x10;
            param_1[2] = uVar8;
            if (pbVar13 != pbVar1) goto LAB_0030f648;
            uVar8 = 3;
            break;
          case 3:
            lVar6 = *(long *)(param_2 + 0x180);
            uVar8 = param_1[2];
            pbVar13 = pbVar15;
LAB_0030f648:
            lVar6 = lVar6 + 1;
            *(long *)(param_2 + 0x180) = lVar6;
            pbVar14 = pbVar13 + 1;
            param_1[2] = uVar8 | (uint)*pbVar13 << 8;
            if (pbVar14 != pbVar1) goto LAB_0030f698;
            uVar8 = 4;
            break;
          case 4:
            lVar6 = *(long *)(param_2 + 0x180);
            pbVar14 = pbVar15;
LAB_0030f698:
            *(long *)(param_2 + 0x180) = lVar6 + 1;
            if ((param_5 == (long *)0x0) || (*(long *)(param_1 + 8) != 0)) {
LAB_0030fa74:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            param_1[2] = param_1[2] | (uint)*pbVar14;
            if (*(long *)(lVar11 + 0x1360) != 0) {
              FUN_00348828();
            }
            *param_1 = 5;
            uVar8 = param_1[6];
            lVar6 = FUN_0049e770(PTR_FUN_047cba38,0x80);
            if (lVar6 != 0) {
              FUN_0030a3ec(lVar6,lVar11,param_2,param_1[2],(uint)((char)uVar8 != '\0') << 0x1f);
            }
            *(long *)(param_1 + 8) = lVar6;
            puVar3 = (undefined8 *)*param_5;
            *param_5 = lVar6;
            if (puVar3 != (undefined8 *)0x0) {
                    /* try { // try from 0030f724 to 0030f727 has its CatchHandler @ 0030fabc */
              (**(code **)*puVar3)();
            }
            if (*(int *)(*(long *)(param_1 + 8) + 0x28) == 0) {
              uVar4 = FUN_0030aa74(*(long *)(param_1 + 8),0,1);
              if (4 < uVar4) {
                FUN_00350fd0();
              }
              param_1[8] = 0;
              param_1[9] = 0;
              *param_1 = 0;
              *(undefined1 *)(param_2 + 0x788) = 1;
            }
            else {
              *(undefined1 *)(param_2 + 0x788) = 1;
            }
            if (pbVar14 + 1 != pbVar1) {
              FUN_00369340(param_3,(long)(pbVar14 + 1) - (long)pbVar15,uVar10);
              return 0;
            }
LAB_0030f9e0:
            FUN_003692b0(param_3);
            return 0;
          case 5:
            lVar11 = *(long *)(param_1 + 8);
            if ((lVar11 == 0) || (param_4 == 0)) goto LAB_0030fa74;
            uVar8 = param_1[2];
            uVar9 = (uint)uVar10;
            if (uVar8 == uVar9) {
              *(ulong *)(param_2 + 0x188) = *(long *)(param_2 + 0x188) + (uVar10 & 0xffffffff);
              lStack_c8 = plVar12[1];
              local_d0 = *plVar12;
              lStack_b8 = plVar12[3];
              lStack_c0 = plVar12[2];
              FUN_00367c00(auStack_90,&local_d0,0,uVar10);
              uVar4 = FUN_0030a980(lVar11,auStack_90,param_4);
              if ((uVar4 == 0) &&
                 (uVar4 = FUN_0030aa74(*(undefined8 *)(param_1 + 8),0,1), uVar4 == 0)) {
                param_1[8] = 0;
                param_1[9] = 0;
                *param_1 = 0;
              }
LAB_0030fa4c:
              FUN_003692b0(param_3);
              return uVar4;
            }
            if (uVar9 < uVar8) {
              *(ulong *)(param_2 + 0x188) = *(long *)(param_2 + 0x188) + (uVar10 & 0xffffffff);
              lStack_e8 = plVar12[1];
              local_f0 = *plVar12;
              lStack_d8 = plVar12[3];
              lStack_e0 = plVar12[2];
              FUN_00367c00(auStack_90,&local_f0,0,uVar10);
              uVar10 = FUN_0030a980(lVar11,auStack_90,param_4);
              if (uVar10 != 0) {
                return uVar10;
              }
              param_1[2] = param_1[2] - uVar9;
              uVar4 = 0;
              goto LAB_0030fa4c;
            }
            if (uVar9 <= uVar8) goto LAB_0030fa74;
            *(ulong *)(param_2 + 0x188) = *(long *)(param_2 + 0x188) + (ulong)uVar8;
            lStack_108 = plVar12[1];
            local_110 = *plVar12;
            lStack_f8 = plVar12[3];
            lStack_100 = plVar12[2];
            FUN_00367c00(auStack_90,&local_110,0);
            lVar11 = FUN_0030a980(lVar11,auStack_90,param_4);
            if (lVar11 == 0) {
              uVar4 = FUN_0030aa74(*(undefined8 *)(param_1 + 8),0,1);
              if (uVar4 == 0) {
                param_1[8] = 0;
                param_1[9] = 0;
                *param_1 = 0;
                FUN_00369340(param_3,param_1[2],uVar10);
                return 0;
              }
              goto LAB_0030fa4c;
            }
            goto LAB_0030f9e0;
          case 6:
            *param_1 = 6;
            FUN_003692b0(param_3);
            uVar10 = *(ulong *)(param_1 + 4);
            if (uVar10 < 5) {
              return uVar10;
            }
            uVar10 = FUN_00350fb0(uVar10);
            return uVar10;
          }
          *param_1 = uVar8;
          goto LAB_0030f67c;
        }
      }
    } while (*(long *)(param_3 + 0x10) != 0);
  }
  return 0;
}



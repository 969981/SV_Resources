/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fc5f20; name: FUN_02fc5f20
 */


void FUN_02fc5f20(long param_1,uint *param_2,long param_3,long param_4,ulong param_5)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  void *__dest;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  long *plVar13;
  short sVar14;
  int iVar15;
  long lVar16;
  ushort uVar17;
  undefined8 uVar18;
  int *piVar19;
  uint unaff_w23;
  long lVar20;
  uint unaff_w24;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  long local_1b0;
  undefined8 *local_1a8;
  uint *local_1a0;
  uint local_198;
  uint local_194;
  undefined1 auStack_188 [24];
  long local_170;
  uint *local_168;
  uint local_160;
  undefined8 *local_158;
  long local_150;
  long local_148;
  long local_140;
  uint local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  uint local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  undefined1 auStack_c0 [80];
  undefined8 local_70;
  undefined8 uStack_68;
  
  bVar1 = *(byte *)((long)param_2 + 0xe) >> 5;
  uVar11 = (uint)(*(byte *)((long)param_2 + 0xe) >> 2);
  uVar4 = uVar11 & 7;
  if (*(int *)(param_3 + 0x80) == *(int *)(param_1 + 0x2a0)) {
    local_f8 = *(long *)(param_3 + 0x78);
    if ((local_f8 == 0) || (*(char *)(local_f8 + 0x18) != '\x15')) {
      local_100 = 0xffffffff;
    }
    else {
      plVar13 = (long *)(local_f8 + (ulong)bVar1 * 8 + 0x48);
      lVar16 = *plVar13;
      local_f8 = 0;
      if (lVar16 != 0) {
        local_f8 = lVar16 + (long)plVar13;
      }
      local_100 = (uint)bVar1 << 0x1d | 0x1fffffff;
    }
    local_110 = *(long *)(*(long *)(*(long *)(param_1 + 0x298) + 8) + 0x150) +
                (long)*(int *)(param_1 + 0x2a0) * 0x80;
    local_108 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x298) + 8) + 0x8a8) + 0x48) +
                (ulong)*(ushort *)(param_3 + 0x8a) * 0x50;
    local_118 = param_3;
    local_e8 = param_3;
    FUN_02fc2fe0(param_1,param_4,uVar4,1,&local_70,&local_e0,auStack_c0,&local_150);
    puVar6 = *(undefined8 **)(param_1 + 0x2a8);
    dVar21 = (double)puVar6[2];
    dVar22 = (double)puVar6[3];
    dVar23 = (double)puVar6[4];
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    *(undefined8 *)(param_1 + 0x300) = 0;
    *(undefined8 *)(param_1 + 0x308) = 0;
    *(double *)(param_1 + 0x2e8) = (double)(float)dVar22;
    *(double *)(param_1 + 0x2e0) = (double)(float)dVar21;
    *(double *)(param_1 + 0x2f0) = (double)(float)dVar23;
    uVar24 = puVar6[1];
    uVar18 = *puVar6;
    *(ulong *)(param_1 + 0x318) =
         CONCAT44((float)dStack_c8,(float)(local_d0 - (double)(float)dVar23));
    *(ulong *)(param_1 + 0x310) =
         CONCAT44((float)(dStack_d8 - (double)(float)dVar22),
                  (float)(local_e0 - (double)(float)dVar21));
    *(undefined8 *)(param_1 + 0x328) = uVar24;
    *(undefined8 *)(param_1 + 800) = uVar18;
    *(undefined8 *)(param_1 + 0x338) = uStack_68;
    *(undefined8 *)(param_1 + 0x330) = local_70;
    *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_1 + 0x4c8);
    *(uint *)(param_1 + 0x394) = (uint)*(ushort *)(local_150 + 0x94) << 0x10;
  }
  else {
    local_130 = *(long *)(param_4 + 0x78);
    if ((local_130 == 0) || (*(char *)(local_130 + 0x18) != '\x15')) {
      local_138 = 0xffffffff;
    }
    else {
      plVar13 = (long *)(local_130 + (ulong)uVar4 * 8 + 0x48);
      lVar16 = *plVar13;
      local_130 = 0;
      if (lVar16 != 0) {
        local_130 = lVar16 + (long)plVar13;
      }
      local_138 = uVar11 << 0x1d | 0x1fffffff;
    }
    local_148 = *(long *)(*(long *)(*(long *)(param_1 + 0x298) + 8) + 0x150) +
                (long)*(int *)(param_4 + 0x80) * 0x80;
    local_140 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x298) + 8) + 0x8a8) + 0x48) +
                (ulong)*(ushort *)(param_4 + 0x8a) * 0x50;
    local_150 = param_4;
    local_120 = param_4;
    FUN_02fc2fe0(param_1,param_3,(ulong)bVar1,1,&local_70,&local_e0,auStack_c0,&local_118);
    puVar6 = *(undefined8 **)(param_1 + 0x2a8);
    dVar23 = (double)puVar6[4];
    dVar21 = (double)puVar6[2];
    dVar22 = (double)puVar6[3];
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    *(undefined8 *)(param_1 + 0x318) = 0;
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(double *)(param_1 + 0x2e8) = (double)(float)dVar22;
    *(double *)(param_1 + 0x2e0) = (double)(float)dVar21;
    *(double *)(param_1 + 0x2f0) = (double)(float)dVar23;
    uVar24 = puVar6[1];
    uVar18 = *puVar6;
    *(ulong *)(param_1 + 0x308) =
         CONCAT44((float)dStack_c8,(float)(local_d0 - (double)(float)dVar23));
    *(ulong *)(param_1 + 0x300) =
         CONCAT44((float)(dStack_d8 - (double)(float)dVar22),
                  (float)(local_e0 - (double)(float)dVar21));
    *(undefined4 *)(param_1 + 0x394) = *(undefined4 *)(param_1 + 0x4c8);
    *(undefined8 *)(param_1 + 0x328) = uStack_68;
    *(undefined8 *)(param_1 + 800) = local_70;
    *(undefined8 *)(param_1 + 0x338) = uVar24;
    *(undefined8 *)(param_1 + 0x330) = uVar18;
    *(uint *)(param_1 + 0x390) = (uint)*(ushort *)(local_118 + 0x94) << 0x10;
  }
  if (*(int *)(param_1 + 0x118) < 0xec1) {
    __dest = (void *)(*(long *)(param_1 + 0x110) + (long)*(int *)(param_1 + 0x118) + 0x20);
  }
  else {
    __dest = (void *)FUN_031c36f4(param_1 + 0x100);
  }
  memcpy(__dest,param_2,(ulong)*(byte *)((long)param_2 + 9) << 4);
  *(long **)(param_1 + 0xa8) = &local_118;
  *(long **)(param_1 + 0xb0) = &local_150;
  *(undefined8 *)(param_1 + 0x378) = 0x7f8000007f800000;
  *(undefined8 *)(param_1 + 0x370) = 0x7f8000007f800000;
  if ((char)param_2[2] == '\x02') {
    local_f0 = local_f8;
    local_128 = local_130;
    if (((param_5 & 1) != 0) && (2 < *(byte *)((long)__dest + 9))) {
      *(undefined1 *)((long)__dest + 0x15) = 0;
      *(undefined4 *)((long)__dest + 0x1c) = 0;
      *(undefined1 *)((long)__dest + 0x1b) = 0;
      *(undefined1 *)((long)__dest + 9) = 2;
    }
    FUN_02fc3a30(param_1,&local_118,&local_150,__dest);
  }
  else {
    local_170 = 0;
    if ((param_5 & 1) == 0) {
      FUN_02fc5620(param_1,&local_118,&local_150,__dest,param_1 + 0x150);
    }
    else {
      if (*(int *)((long)__dest + 0x2c) == 0) {
        puVar9 = (uint *)0x0;
      }
      else {
        param_2 = *(uint **)((long)__dest + 0x20);
        uVar17 = *(ushort *)((long)__dest + 0x2a);
        unaff_w24 = (uint)uVar17;
        unaff_w23 = *(int *)((long)__dest + 0x2c) - (uint)uVar17;
        puVar9 = (uint *)0x0;
        if (uVar17 != 0) {
          puVar9 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)__dest + 0x28) + 0x20);
        }
      }
      lVar16 = param_1 + 400;
      local_1a8 = *(undefined8 **)(*(long *)(param_1 + 0x298) + 0x4e0);
      local_1a0 = *(uint **)(*(long *)(param_1 + 0x1a0) + (long)*(int *)(param_1 + 0x1a8) * 8 + -8);
      uVar11 = *local_1a0;
      local_198 = uVar11 >> 0x10;
      uVar4 = *local_1a0;
      local_194 = uVar4 & 0xffff;
      iVar12 = -*(int *)(param_1 + 0x198);
      *(uint *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) - (uVar4 & 0xffff);
      *(uint **)((long)__dest + 0x20) = local_1a0;
      *(short *)((long)__dest + 0x28) = (short)(uVar11 >> 0x10);
      *(short *)((long)__dest + 0x2a) = (short)uVar4;
      *(int *)((long)__dest + 0x2c) = iVar12;
      local_1b0 = lVar16;
      if (puVar9 != (uint *)0x0) {
        do {
          while( true ) {
            bVar1 = *(byte *)((long)puVar9 + 9);
            uVar11 = (uint)bVar1;
            if ((char)puVar9[2] == '\x02' && 2 < uVar11) {
              if ((int)local_198 < 0xf81) {
                puVar6 = (undefined8 *)((long)local_1a0 + (long)(int)local_198 + 0x20);
              }
              else {
                puVar6 = (undefined8 *)FUN_031c36f4(&local_1b0);
              }
              uVar11 = puVar9[2];
              uVar4 = puVar9[3];
              *puVar6 = *(undefined8 *)puVar9;
              *(uint *)(puVar6 + 1) = uVar11;
              *(uint *)((long)puVar6 + 0xc) = uVar4;
              uVar11 = puVar9[6];
              uVar4 = puVar9[7];
              puVar6[2] = *(undefined8 *)(puVar9 + 4);
              *(uint *)(puVar6 + 3) = uVar11;
              *(uint *)((long)puVar6 + 0x1c) = uVar4;
              local_198 = local_198 + 0x20;
              *(undefined1 *)((long)puVar6 + 0x15) = 0;
              *(undefined4 *)((long)puVar6 + 0x1c) = 0;
              *(undefined1 *)((long)puVar6 + 0x1b) = 0;
              *(undefined1 *)((long)puVar6 + 9) = 2;
            }
            else {
              if ((int)(local_198 + uVar11 * 0x10) < 0xfa1) {
                puVar6 = (undefined8 *)((long)local_1a0 + (long)(int)local_198 + 0x20);
              }
              else {
                puVar6 = (undefined8 *)FUN_031c36f4(&local_1b0);
              }
              iVar12 = uVar11 + 1;
              puVar10 = puVar9;
              do {
                iVar12 = iVar12 + -1;
                uVar11 = puVar10[2];
                uVar4 = puVar10[3];
                *puVar6 = *(undefined8 *)puVar10;
                *(uint *)(puVar6 + 1) = uVar11;
                *(uint *)((long)puVar6 + 0xc) = uVar4;
                puVar10 = puVar10 + 4;
                puVar6 = puVar6 + 2;
              } while (1 < iVar12);
              local_198 = local_198 + (uint)bVar1 * 0x10;
            }
            local_194 = local_194 + 1;
            if (1 < (int)unaff_w24) break;
            if ((unaff_w23 == 0) || (param_2 = *(uint **)(param_2 + 2), param_2 == (uint *)0x0))
            goto LAB_02fc6484;
            unaff_w24 = *param_2 & 0xffff;
            if ((int)unaff_w23 <= (int)(*param_2 & 0xffff)) {
              unaff_w24 = unaff_w23;
            }
            if ((int)unaff_w24 < 1) goto LAB_02fc6484;
            unaff_w23 = unaff_w23 - unaff_w24;
            puVar9 = param_2 + 8;
            Hint_Prefetch(*(long *)(param_2 + 2),0,0,0);
            Hint_Prefetch(*(long *)(param_2 + 2) + 0x40,0,0,0);
            Hint_Prefetch(param_2 + 0x20,0,0,0);
            Hint_Prefetch(param_2 + 0x30,0,0,0);
            if (puVar9 == (uint *)0x0) goto LAB_02fc6484;
          }
          unaff_w24 = unaff_w24 - 1;
          puVar9 = puVar9 + (ulong)*(byte *)((long)puVar9 + 9) * 4;
        } while (puVar9 != (uint *)0x0);
LAB_02fc6484:
        iVar12 = *(int *)((long)__dest + 0x2c);
      }
      puVar6 = local_1a8;
      piVar7 = (int *)(local_1b0 + 8);
      iVar12 = local_194 + *piVar7 + iVar12;
      if (iVar12 != 0) {
        puVar9 = *(uint **)((long)__dest + 0x20);
        uVar11 = local_194;
        if (puVar9 == local_1a0) {
          uVar17 = *(ushort *)((long)__dest + 0x2a);
        }
        else {
          uVar17 = *(ushort *)((long)__dest + 0x2a);
          if ((uint)uVar17 == (*puVar9 & 0xffff)) {
            puVar9 = *(uint **)(puVar9 + 2);
            uVar17 = 0;
            *(undefined4 *)((long)__dest + 0x28) = 0;
          }
          if (puVar9 == local_1a0) {
            puVar9 = local_1a0;
          }
          else {
            uVar11 = *puVar9;
          }
        }
        *(ushort *)((long)__dest + 0x2a) = (short)uVar11 - uVar17;
        *(uint **)((long)__dest + 0x20) = puVar9;
      }
      *(int *)((long)__dest + 0x2c) = iVar12;
      *(ushort *)((long)__dest + 10) = *(ushort *)((long)__dest + 10) & 0xfbff;
      if (local_194 == 0) {
        piVar19 = (int *)(local_1b0 + 0x18);
        iVar12 = *piVar19;
        if (iVar12 < 2) goto LAB_02fc6588;
        lVar8 = local_1a8[1];
        lVar20 = *(long *)(*(long *)(local_1b0 + 0x10) + (long)(iVar12 + -2) * 8);
        iVar15 = *(int *)(local_1a8 + 0xb);
        *(undefined8 *)(lVar8 + (long)iVar15 * 8) =
             *(undefined8 *)(*(long *)(local_1b0 + 0x10) + (long)(iVar12 + -1) * 8);
        *(int *)(local_1a8 + 0xb) = iVar15 + 1;
        if (*(int *)((long)local_1a8 + 0x5c) <= iVar15 + 1) {
          (**(code **)(*(long *)*local_1a8 + 0x28))
                    ((long *)*local_1a8,lVar8 + (long)(iVar15 + -5) * 8,6);
          *(int *)(puVar6 + 0xb) = iVar15 + -5;
        }
        *(undefined8 *)(lVar20 + 8) = 0;
        piVar7 = piVar19;
        uVar11 = 0xffffffff;
      }
      else {
LAB_02fc6588:
        local_1a0[2] = 0;
        local_1a0[3] = 0;
        *local_1a0 = *local_1a0 & 0xffff0000 | local_194 & 0xffff;
        *local_1a0 = *local_1a0 & 0xffff | local_198 << 0x10;
        uVar11 = local_194;
      }
      *piVar7 = *piVar7 + uVar11;
      local_158 = *(undefined8 **)(*(long *)(param_1 + 0x298) + 0x4e0);
      local_160 = 0;
      local_168 = (uint *)0x0;
      local_170 = lVar16;
      FUN_02fc5620(param_1,&local_118,&local_150,__dest,auStack_188);
      puVar6 = local_158;
      if (local_160 != 0) {
        if (local_160 == (*local_168 & 0xffff)) {
          *(undefined8 *)(*(long *)(local_170 + 0x10) + (long)(int)local_168[1] * 8) = 0;
          *(undefined1 *)(local_170 + 0xc) = 1;
          iVar12 = *(int *)(local_158 + 0xb);
          lVar8 = local_158[1];
          *(uint **)(lVar8 + (long)iVar12 * 8) = local_168;
          *(int *)(local_158 + 0xb) = iVar12 + 1;
          if (*(int *)((long)local_158 + 0x5c) <= iVar12 + 1) {
            (**(code **)(*(long *)*local_158 + 0x28))
                      ((long *)*local_158,lVar8 + (long)(iVar12 + -5) * 8,6);
            *(int *)(puVar6 + 0xb) = iVar12 + -5;
          }
        }
        else {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(local_168,0x10);
            if (bVar3) {
              *local_168 = *local_168 - local_160;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        local_160 = 0;
        *(undefined1 *)(local_170 + 0xc) = 1;
      }
      local_170 = 0;
      local_158 = (undefined8 *)0x0;
      FUN_031c2be4(lVar16,*(undefined8 *)(*(long *)(param_1 + 0x298) + 0x4e0));
    }
  }
  lVar16 = *(long *)(param_1 + 0xe0);
  *(uint *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + (uint)*(byte *)((long)__dest + 9) * 0x10;
  *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 1;
  if (lVar16 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xfb) == '\0') {
    FUN_02f24e3c(param_1 + 0x80,*(undefined8 *)(param_1 + 0x298),param_1);
    return;
  }
  puVar6 = (undefined8 *)(param_1 + 0xd0);
  uVar18 = **(undefined8 **)(param_1 + 200);
  *(undefined4 *)(lVar16 + 8) = 0x7777;
  plVar13 = *(long **)(param_1 + 200);
  iVar15 = *(int *)((long)plVar13 + 0x1c);
  iVar12 = iVar15 + *(int *)(*plVar13 + 8) + *(int *)(param_1 + 0xdc);
  if (iVar12 == 0) goto LAB_02fc676c;
  puVar9 = (uint *)*puVar6;
  if (puVar9 == (uint *)plVar13[2]) {
    uVar17 = *(ushort *)(param_1 + 0xda);
LAB_02fc675c:
    sVar14 = (short)iVar15;
  }
  else {
    uVar17 = *(ushort *)(param_1 + 0xda);
    puVar10 = puVar9;
    puVar5 = (uint *)plVar13[2];
    if ((uint)uVar17 == (*puVar9 & 0xffff)) {
      puVar10 = *(uint **)(puVar9 + 2);
      *(undefined4 *)(param_1 + 0xd8) = 0;
      uVar17 = 0;
      puVar5 = (uint *)plVar13[2];
    }
    puVar9 = puVar5;
    if (puVar10 == puVar9) {
      iVar15 = *(int *)((long)plVar13 + 0x1c);
      goto LAB_02fc675c;
    }
    sVar14 = (short)*puVar10;
    puVar9 = puVar10;
  }
  *(ushort *)(param_1 + 0xda) = sVar14 - uVar17;
  *puVar6 = puVar9;
LAB_02fc676c:
  *(int *)(param_1 + 0xdc) = iVar12;
  FUN_031c34c8();
  FUN_031c35ac(*(undefined8 *)(param_1 + 200),uVar18,puVar6);
  plVar13 = *(long **)(param_1 + 200);
  lVar16 = plVar13[3];
  iVar12 = *(int *)((long)plVar13 + 0x1c);
  iVar15 = *(int *)(*plVar13 + 8);
  *(long *)(param_1 + 0xd0) = plVar13[2];
  *(short *)(param_1 + 0xd8) = (short)lVar16;
  *(short *)(param_1 + 0xda) = (short)iVar12;
  *(int *)(param_1 + 0xdc) = -(iVar12 + iVar15);
  *(long *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  return;
}



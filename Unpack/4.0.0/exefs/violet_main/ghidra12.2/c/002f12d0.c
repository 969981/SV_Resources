/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f12d0; name: FUN_002f12d0
 */


undefined8 FUN_002f12d0(int *param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  char *__s;
  size_t sVar6;
  undefined8 *puVar7;
  char *__nptr;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  char *__s_00;
  char *__s_01;
  char *local_1c0;
  size_t local_1b8;
  undefined *local_190;
  undefined8 uStack_188;
  byte local_160 [16];
  undefined8 local_150;
  undefined1 auStack_148 [32];
  undefined *local_128;
  undefined8 uStack_120;
  char *local_118;
  byte local_108;
  undefined7 uStack_107;
  byte bStack_100;
  undefined2 uStack_ff;
  undefined1 uStack_fd;
  undefined1 uStack_fc;
  undefined1 uStack_fb;
  undefined2 uStack_fa;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 auStack_e8 [8];
  undefined8 local_e0;
  undefined1 auStack_d0 [24];
  ulong local_b8;
  int local_b0 [2];
  ulong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_b0[0] = 0;
  local_78 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  local_70 = 0;
  uStack_68 = 0;
  puStack_90 = &local_88;
  if (param_1 == (int *)0x0) {
    __s = (char *)0x0;
  }
  else {
    if (*(long *)(param_1 + 6) == 0) {
      __s = (char *)0x0;
      iVar3 = *param_1;
    }
    else {
                    /* try { // try from 002f132c to 002f132f has its CatchHandler @ 002f178c */
      __s = (char *)FUN_0038c780(*(long *)(param_1 + 6) + 1);
      __s[*(long *)(param_1 + 6)] = '\0';
      memcpy(__s,*(void **)(param_1 + 8),*(size_t *)(param_1 + 6));
      iVar3 = *param_1;
    }
    if (iVar3 == 200) {
      local_b8 = 0;
      if (__s == (char *)0x0) {
        sVar6 = 0;
      }
      else {
        sVar6 = strlen(__s);
      }
                    /* try { // try from 002f1388 to 002f1397 has its CatchHandler @ 002f1788 */
      FUN_00362c44(&local_108,__s,sVar6,&local_b8);
                    /* try { // try from 002f1398 to 002f13a7 has its CatchHandler @ 002f1754 */
      FUN_002f17c8(local_b0,&local_108);
      FUN_002f2580(auStack_d0);
      FUN_0025cef0(auStack_e8,local_e0);
      if ((bStack_100 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_f0);
      }
      if (local_b8 == 0) {
        if (local_b0[0] == 5) {
          local_108 = 0x18;
          uStack_107 = s_access_token_03c3283a._0_7_;
          bStack_100 = s_access_token_03c3283a[7];
          uStack_ff = 0x6b6f;
          uStack_fd = 0x65;
          uStack_fc = 0x6e;
          uStack_fb = 0;
                    /* try { // try from 002f142c to 002f1437 has its CatchHandler @ 002f173c */
          puVar7 = (undefined8 *)FUN_0027bd44(&puStack_90,&local_108);
          if ((local_108 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_f8);
          }
          if ((&local_88 != puVar7) && (*(int *)(puVar7 + 7) == 4)) {
            if ((*(byte *)(puVar7 + 8) & 1) == 0) {
              __s_00 = (char *)((long)puVar7 + 0x41);
            }
            else {
              __s_00 = (char *)puVar7[10];
            }
            local_108 = 0x14;
            uStack_ff = 0x6570;
            uStack_107 = s_token_type_03c0857a._0_7_;
            bStack_100 = s_token_type_03c0857a[7];
            uStack_fd = 0;
                    /* try { // try from 002f14a4 to 002f14af has its CatchHandler @ 002f1738 */
            puVar7 = (undefined8 *)FUN_0027bd44(&puStack_90,&local_108);
            if ((local_108 & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,local_f8);
            }
            if ((&local_88 != puVar7) && (*(int *)(puVar7 + 7) == 4)) {
              if ((*(byte *)(puVar7 + 8) & 1) == 0) {
                __s_01 = (char *)((long)puVar7 + 0x41);
              }
              else {
                __s_01 = (char *)puVar7[10];
              }
              local_108 = 0x14;
              uStack_ff = 0x6e69;
              uStack_107 = s_expires_in_03c24d1b._0_7_;
              bStack_100 = s_expires_in_03c24d1b[7];
              uStack_fd = 0;
                    /* try { // try from 002f1518 to 002f1523 has its CatchHandler @ 002f1734 */
              puVar7 = (undefined8 *)FUN_0027bd44(&puStack_90,&local_108);
              if ((local_108 & 1) != 0) {
                FUN_0049e790(PTR_LAB_047cba48,local_f8);
              }
              if ((&local_88 != puVar7) && (*(int *)(puVar7 + 7) == 3)) {
                if ((*(byte *)(puVar7 + 8) & 1) == 0) {
                  __nptr = (char *)((long)puVar7 + 0x41);
                }
                else {
                  __nptr = (char *)puVar7[10];
                }
                lVar9 = strtol(__nptr,(char **)0x0,10);
                *param_3 = lVar9 * 1000;
                uVar8 = *param_2;
                if ((3 < uVar8) && (uVar2 = (uint)uVar8 & 3, 1 < uVar2)) {
                  uVar8 = uVar8 & 0xfffffffffffffffc;
                  plVar1 = (long *)(uVar8 + 0x40);
                  do {
                    lVar9 = *plVar1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar5) {
                      *plVar1 = lVar9 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (lVar9 + -1 == 0) {
                    /* try { // try from 002f1714 to 002f1717 has its CatchHandler @ 002f1750 */
                    FUN_00376de0(uVar2,uVar8,*(undefined4 *)(uVar8 + 0x48));
                  }
                }
                local_118 = "authorization";
                local_128 = PTR_DAT_047cc5d0;
                uStack_120 = 0xd;
                local_108 = (byte)__s_01;
                uStack_107 = (undefined7)((ulong)__s_01 >> 8);
                if (__s_01 == (char *)0x0) {
                  sVar6 = 0;
                }
                else {
                  sVar6 = strlen(__s_01);
                }
                bStack_100 = (byte)sVar6;
                uStack_ff = (undefined2)(sVar6 >> 8);
                uStack_fd = (undefined1)(sVar6 >> 0x18);
                uStack_fc = (undefined1)(sVar6 >> 0x20);
                uStack_fb = (undefined1)(sVar6 >> 0x28);
                uStack_fa = (undefined2)(sVar6 >> 0x30);
                local_190 = &DAT_03bf391f;
                uStack_188 = 1;
                local_1c0 = __s_00;
                if (__s_00 == (char *)0x0) {
                  local_1b8 = 0;
                }
                else {
                  local_1b8 = strlen(__s_00);
                }
                    /* try { // try from 002f16bc to 002f16cf has its CatchHandler @ 002f171c */
                FUN_00395a70(local_160,&local_108,&local_190,&local_1c0);
                    /* try { // try from 002f16d0 to 002f16e7 has its CatchHandler @ 002f1720 */
                FUN_003679b0(auStack_148,local_160);
                uVar8 = FUN_00376460(&local_128,auStack_148);
                *param_2 = uVar8;
                if ((local_160[0] & 1) != 0) {
                  FUN_0049e790(PTR_LAB_047cba48,local_150);
                }
                uVar10 = 0;
                goto LAB_002f15a8;
              }
            }
          }
        }
      }
      else if (4 < local_b8) {
                    /* try { // try from 002f13e4 to 002f13e7 has its CatchHandler @ 002f1750 */
        FUN_00350fd0();
      }
    }
  }
  uVar8 = *param_2;
  if (3 < uVar8) {
    uVar2 = (uint)uVar8 & 3;
    if (1 < uVar2) {
      uVar8 = uVar8 & 0xfffffffffffffffc;
      plVar1 = (long *)(uVar8 + 0x40);
      do {
        lVar9 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 + -1 == 0) {
                    /* try { // try from 002f170c to 002f170f has its CatchHandler @ 002f178c */
        FUN_00376de0(uVar2,uVar8,*(undefined4 *)(uVar8 + 0x48));
      }
    }
    *param_2 = 0;
  }
  uVar10 = 1;
LAB_002f15a8:
                    /* try { // try from 002f15a8 to 002f15af has its CatchHandler @ 002f178c */
  free(__s);
  FUN_002f2580(&local_78);
  FUN_0025cef0(&puStack_90,local_88);
  if ((local_a8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_98);
  }
  return uVar10;
}



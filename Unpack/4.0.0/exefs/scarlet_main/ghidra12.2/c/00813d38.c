/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00813d38; name: FUN_00813d38
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00813d38(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  size_t sVar9;
  byte bVar10;
  ushort uVar11;
  undefined2 uVar12;
  char *pcVar13;
  undefined *puVar14;
  undefined *puVar15;
  int iVar16;
  undefined4 uVar17;
  ulong uVar18;
  void *pvVar19;
  long *plVar20;
  undefined8 *puVar21;
  char *pcVar22;
  undefined8 uVar23;
  ulong uVar24;
  void *pvVar25;
  size_t sVar26;
  long lVar27;
  byte bVar28;
  long lVar29;
  ulong uVar30;
  size_t sVar31;
  long lVar32;
  ErrorResultVariant *this;
  long *plVar33;
  undefined1 *puVar34;
  void *pvVar35;
  undefined8 local_9c8;
  undefined1 *puStack_9c0;
  undefined4 local_9b8;
  undefined4 uStack_9b4;
  undefined4 local_9b0;
  undefined *local_9a8;
  undefined1 local_9a0;
  undefined4 local_99f;
  undefined2 local_99b;
  char local_999 [193];
  undefined8 local_8d8;
  undefined8 local_8d0;
  ushort local_8c8;
  undefined2 uStack_8c6;
  uint uStack_8c4;
  ushort local_8c0;
  undefined2 uStack_8be;
  undefined *local_8b8;
  undefined1 local_8b0 [2];
  ushort uStack_8ae;
  undefined2 local_8ab;
  char local_8a9 [193];
  undefined *local_7e8;
  short local_7e0;
  byte local_7d8;
  char local_7d7 [7];
  size_t local_7d0;
  char *local_7c8;
  undefined1 auStack_7a0 [40];
  undefined8 local_778;
  undefined1 *local_770;
  undefined4 local_768;
  undefined4 uStack_764;
  undefined4 local_760;
  undefined *local_758;
  undefined1 local_750;
  undefined4 local_74f;
  undefined2 local_74b;
  undefined1 local_749 [193];
  int local_688 [4];
  int local_678;
  undefined1 local_674 [4];
  long alStack_670 [4];
  byte local_64c;
  byte bStack_64b;
  ushort uStack_64a;
  undefined1 uStack_648;
  ushort local_647;
  uint local_645;
  ushort local_641;
  ulong local_63f;
  ushort local_637;
  ushort local_635;
  undefined4 local_70 [4];
  
  puVar15 = PTR_DAT_047d0c98;
  plVar2 = param_1 + 0xfb;
  plVar3 = param_1 + 0xff;
  plVar4 = param_1 + 0x10b;
  pcVar5 = (char *)((long)param_1 + 0x819);
  uVar24 = (ulong)&local_9c8 | 1;
  this = (ErrorResultVariant *)((ulong)&local_8d8 | 4);
  pvVar25 = (void *)((ulong)&local_8d8 | 1);
  puVar6 = PTR_DAT_047d18e0 + 0x10;
  puVar7 = PTR_DAT_047d18e8 + 0x10;
  plVar33 = (long *)PTR_DAT_047d0860;
  do {
    FUN_0284e338(alStack_670);
    local_674[0] = 0;
    local_678 = 0;
    FUN_007927c8(local_688,param_1[0xde],&local_64c,0x5dc,alStack_670,local_674,&local_678);
    local_778 = puVar15 + 0x10;
    local_758 = puVar15 + 0x68;
    local_768 = 0xc0;
    puVar34 = local_749;
    local_750 = 0;
    lVar29 = 0x2f;
    do {
      *(undefined4 *)(puVar34 + -6) = 0;
      lVar27 = lVar29 + 8;
      *(undefined2 *)(puVar34 + -2) = 0;
      *puVar34 = 0;
      puVar34 = local_749 + lVar29 + -0x27;
      auStack_7a0[lVar29 + 0x29] = 0;
      lVar29 = lVar27;
    } while (lVar27 != 0xef);
    uStack_764 = 0;
    local_760 = 0;
    local_770 = &local_750;
    FUN_0078a4fc(alStack_670,&local_778);
    if (local_688[0] != 0) {
      local_8d8 = (undefined *)CONCAT44(local_8d8._4_4_,0x2c09);
      local_9c8 = (undefined *)((ulong)local_9c8 & 0xffffffff00000000);
      nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)&local_9c8);
LAB_00813f38:
      iVar16 = 1;
      goto LAB_00813e74;
    }
    uVar11 = (ushort)bStack_64b | CONCAT11(bStack_64b,local_64c) << 8;
    if ((local_64c & 0xc0) == 0x40) {
      if (local_678 + -4 < (int)((uint)(uStack_64a >> 8) | (uStack_64a & 0xff00ff) << 8)) {
LAB_00813f70:
        iVar16 = 2;
      }
      else if (local_678 + -4 == 0x19) {
        local_8d0 = (undefined1 *)(((ulong)local_8d0 >> 8 & 0xffffff) << 8);
        local_8c8 = 0;
        uStack_8c4 = 0;
        local_8c0 = 0;
        local_8b8 = (undefined *)0x0;
        _local_8b0 = 0;
        local_8d8 = puVar6;
        FUN_008173c4(&local_9c8,&local_8d8,&uStack_648,0x19);
        FUN_018ff39c(local_688,&local_9c8);
        if (local_688[0] != 0) goto LAB_00813f38;
        FUN_00817488(param_1,&local_8d8);
        iVar16 = 2;
      }
      else {
        if (*(ushort *)(*plVar33 + 0x50) < 2) goto LAB_00813f70;
        lVar29 = param_1[0x10c];
        uVar30 = 0;
        do {
          uVar30 = uVar30 & 0xffff;
          if ((*(ushort *)(lVar29 + uVar30 * 0xb0 + 0x58) == uVar11) ||
             (*(ushort *)(lVar29 + uVar30 * 0xb0 + 0x5a) == uVar11)) {
            (**(code **)(*(long *)param_1[0xdd] + 0x3f0))
                      ((long *)param_1[0xdd],*(undefined8 *)(lVar29 + uVar30 * 0xb0 + 8),&uStack_648
                      );
            iVar16 = 2;
            break;
          }
          uVar1 = (int)uVar30 + 1;
          uVar30 = (ulong)uVar1;
          iVar16 = 2;
        } while ((int)(uVar1 & 0xffff) < (int)(*(ushort *)(*plVar33 + 0x50) - 1));
      }
    }
    else {
      FUN_00819774(auStack_7a0,&local_64c,(long)local_678);
      FUN_00819d14(&local_7e8);
      local_7e8 = puVar7;
      uVar30 = FUN_0081a8c8(&local_7e8,auStack_7a0);
      if ((uVar30 & 1) == 0) {
        if (local_678 == 0x19) {
          local_9c8 = (undefined *)((ulong)local_9c8 & 0xffffffff00000000);
          local_70[0] = 0;
          local_8d8 = PTR_DAT_047d18e0 + 0x10;
          local_8d0 = (undefined1 *)CONCAT71(local_8d0._1_7_,local_64c);
          uVar1 = (CONCAT13(uStack_648,CONCAT21(uStack_64a,bStack_64b)) & 0xff00ff00) >> 8 |
                  (CONCAT21(uStack_64a,bStack_64b) & 0xff00ff) << 8;
          local_8d0 = (undefined1 *)CONCAT44(uVar1 >> 0x10 | uVar1 << 0x10,(undefined4)local_8d0);
          uVar1 = (local_645 & 0xff00ff00) >> 8 | (local_645 & 0xff00ff) << 8;
          uStack_8c4 = uVar1 >> 0x10 | uVar1 << 0x10;
          uVar30 = (local_63f & 0xff00ff00ff00ff00) >> 8 | (local_63f & 0xff00ff00ff00ff) << 8;
          uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
          local_8b8 = (undefined *)(uVar30 >> 0x20 | uVar30 << 0x20);
          local_8c8 = local_647 >> 8 | local_647 << 8;
          local_8c0 = local_641 >> 8 | local_641 << 8;
          _local_8b0 = CONCAT22(local_635 >> 8 | local_635 << 8,local_637 >> 8 | local_637 << 8);
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)&local_9c8 | 4),(Result *)local_70);
          FUN_00cbd7c0(local_70,&local_9c8);
          FUN_018ff39c(local_688,local_70);
          if (local_688[0] == 0) {
            FUN_00817488(param_1,&local_8d8);
            iVar16 = 2;
          }
          else {
            iVar16 = 1;
          }
        }
        else if (*(ushort *)(*plVar33 + 0x50) < 2) {
          iVar16 = 2;
        }
        else {
          uVar30 = 0;
          do {
            uVar18 = FUN_0078b278(param_1[0x10c] + (uVar30 & 0xffff) * 0xb0 + 0x38,alStack_670);
            if ((uVar18 & 1) != 0) {
              (**(code **)(*(long *)param_1[0xdd] + 0x3f0))
                        ((long *)param_1[0xdd],
                         *(undefined8 *)(param_1[0x10c] + (uVar30 & 0xffff) * 0xb0 + 8),&local_64c,
                         local_678);
              break;
            }
            uVar1 = (int)uVar30 + 1;
            uVar30 = (ulong)uVar1;
          } while ((int)(uVar1 & 0xffff) < (int)(*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50) - 1))
          ;
          iVar16 = 2;
          plVar33 = (long *)PTR_DAT_047d0860;
        }
        goto LAB_00813e6c;
      }
      iVar16 = FUN_0081a0e4(&local_7e8);
      if (iVar16 == 0x1b6) {
        lVar29 = FUN_0081a0b8(&local_7e8,0x14);
        uVar11 = *(ushort *)(lVar29 + 10);
        puVar34 = (undefined1 *)(ulong)uVar11;
        pvVar35 = *(void **)(lVar29 + 0x10);
        if (puVar34 < (undefined1 *)0x17) {
          local_8d8 = (undefined *)CONCAT71(local_8d8._1_7_,(char)uVar11 << 1);
          pvVar19 = pvVar25;
          if (uVar11 != 0) goto LAB_00814240;
        }
        else {
          uVar30 = (ulong)(uVar11 + 0x10) & 0x1fff0;
          pvVar19 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar30);
          local_8d8 = (undefined *)(uVar30 | 1);
          local_8c8 = (ushort)pvVar19;
          uStack_8c6 = (undefined2)((ulong)pvVar19 >> 0x10);
          uStack_8c4 = (uint)((ulong)pvVar19 >> 0x20);
          local_8d0 = puVar34;
LAB_00814240:
          memcpy(pvVar19,pvVar35,(size_t)puVar34);
        }
        *(undefined1 *)((long)pvVar19 + (long)puVar34) = 0;
        lVar29 = 0;
        pvVar35 = pvVar25;
        if (((ulong)local_8d8 & 1) != 0) {
          pvVar35 = (void *)CONCAT44(uStack_8c4,CONCAT22(uStack_8c6,local_8c8));
        }
        do {
          pcVar22 = (char *)((long)pvVar35 + lVar29);
          if (*pcVar22 == '\0') {
            *(undefined1 *)((long)param_1 + lVar29 + 0x740) = 0;
            goto joined_r0x008143b0;
          }
          *(char *)((long)param_1 + lVar29 + 0x740) = *pcVar22;
          if (pcVar22[1] == '\0') {
            *(undefined1 *)((long)param_1 + lVar29 + 0x741) = 0;
            goto joined_r0x008143b0;
          }
          *(char *)((long)param_1 + lVar29 + 0x741) = pcVar22[1];
          if (pcVar22[2] == '\0') {
            *(undefined1 *)((long)param_1 + lVar29 + 0x742) = 0;
            goto joined_r0x008143b0;
          }
          lVar27 = lVar29 + 3;
          *(char *)((long)param_1 + lVar29 + 0x742) = pcVar22[2];
          lVar29 = lVar27;
        } while (lVar27 != 0x3f);
        *(undefined1 *)((long)param_1 + 0x77f) = 0;
joined_r0x008143b0:
        if (((ulong)local_8d8 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,CONCAT44(uStack_8c4,CONCAT22(uStack_8c6,local_8c8)));
        }
        lVar29 = FUN_0081a0b8(&local_7e8,0x15);
        uVar11 = *(ushort *)(lVar29 + 10);
        puVar34 = (undefined1 *)(ulong)uVar11;
        pvVar35 = *(void **)(lVar29 + 0x10);
        if (puVar34 < (undefined1 *)0x17) {
          local_8d8 = (undefined *)CONCAT71(local_8d8._1_7_,(char)uVar11 << 1);
          pvVar19 = pvVar25;
          if (uVar11 != 0) goto LAB_0081441c;
        }
        else {
          uVar30 = (ulong)(uVar11 + 0x10) & 0x1fff0;
          pvVar19 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar30);
          local_8d8 = (undefined *)(uVar30 | 1);
          local_8c8 = (ushort)pvVar19;
          uStack_8c6 = (undefined2)((ulong)pvVar19 >> 0x10);
          uStack_8c4 = (uint)((ulong)pvVar19 >> 0x20);
          local_8d0 = puVar34;
LAB_0081441c:
          memcpy(pvVar19,pvVar35,(size_t)puVar34);
        }
        *(undefined1 *)((long)pvVar19 + (long)puVar34) = 0;
        lVar29 = 0;
        pvVar35 = pvVar25;
        if (((ulong)local_8d8 & 1) != 0) {
          pvVar35 = (void *)CONCAT44(uStack_8c4,CONCAT22(uStack_8c6,local_8c8));
        }
        do {
          pcVar22 = (char *)((long)pvVar35 + lVar29);
          if (*pcVar22 == '\0') {
            *(undefined1 *)((long)param_1 + lVar29 + 0x780) = 0;
            goto joined_r0x008144ac;
          }
          *(char *)((long)param_1 + lVar29 + 0x780) = *pcVar22;
          if (pcVar22[1] == '\0') {
            *(undefined1 *)((long)param_1 + lVar29 + 0x781) = 0;
            goto joined_r0x008144ac;
          }
          *(char *)((long)param_1 + lVar29 + 0x781) = pcVar22[1];
          if (pcVar22[2] == '\0') {
            *(undefined1 *)((long)param_1 + lVar29 + 0x782) = 0;
            goto joined_r0x008144ac;
          }
          lVar27 = lVar29 + 3;
          *(char *)((long)param_1 + lVar29 + 0x782) = pcVar22[2];
          lVar29 = lVar27;
        } while (lVar27 != 0x3f);
        *(undefined1 *)((long)param_1 + 0x7bf) = 0;
joined_r0x008144ac:
        if (((ulong)local_8d8 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,CONCAT44(uStack_8c4,CONCAT22(uStack_8c6,local_8c8)));
        }
        if ((char)param_1[0xf8] == '\x04') {
          lVar29 = param_1[0xc];
          FUN_0284e338(&local_8d8);
          FUN_0081649c(param_1,5,&local_8d8,(short)lVar29,0);
          FUN_0284e3d4(&local_8d8);
          FUN_007935cc(param_1 + 0x10a);
        }
LAB_00813e60:
        iVar16 = 1;
        plVar33 = (long *)PTR_DAT_047d0860;
      }
      else {
        iVar16 = FUN_0081a0e4(&local_7e8);
        if (iVar16 == 0x191) {
          if (local_7e0 != 0x114) {
            FUN_00817ab0(&local_8d8,param_1);
            iVar16 = 1;
            goto LAB_00813e6c;
          }
          lVar29 = FUN_0081a0b8(&local_7e8,0x14);
          uVar11 = *(ushort *)(lVar29 + 10);
          puVar34 = (undefined1 *)(ulong)uVar11;
          pvVar35 = *(void **)(lVar29 + 0x10);
          if (puVar34 < (undefined1 *)0x17) {
            local_8d8 = (undefined *)CONCAT71(local_8d8._1_7_,(char)uVar11 << 1);
            pvVar19 = pvVar25;
            if (uVar11 != 0) goto LAB_008145cc;
          }
          else {
            uVar30 = (ulong)(uVar11 + 0x10) & 0x1fff0;
            pvVar19 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar30);
            local_8d8 = (undefined *)(uVar30 | 1);
            local_8c8 = (ushort)pvVar19;
            uStack_8c6 = (undefined2)((ulong)pvVar19 >> 0x10);
            uStack_8c4 = (uint)((ulong)pvVar19 >> 0x20);
            local_8d0 = puVar34;
LAB_008145cc:
            memcpy(pvVar19,pvVar35,(size_t)puVar34);
          }
          *(undefined1 *)((long)pvVar19 + (long)puVar34) = 0;
          lVar29 = 0;
          pvVar35 = pvVar25;
          if (((ulong)local_8d8 & 1) != 0) {
            pvVar35 = (void *)CONCAT44(uStack_8c4,CONCAT22(uStack_8c6,local_8c8));
          }
          do {
            pcVar22 = (char *)((long)pvVar35 + lVar29);
            if (*pcVar22 == '\0') {
              *(undefined1 *)((long)param_1 + lVar29 + 0x740) = 0;
              goto joined_r0x008146c4;
            }
            *(char *)((long)param_1 + lVar29 + 0x740) = *pcVar22;
            if (pcVar22[1] == '\0') {
              *(undefined1 *)((long)param_1 + lVar29 + 0x741) = 0;
              goto joined_r0x008146c4;
            }
            *(char *)((long)param_1 + lVar29 + 0x741) = pcVar22[1];
            if (pcVar22[2] == '\0') {
              *(undefined1 *)((long)param_1 + lVar29 + 0x742) = 0;
              goto joined_r0x008146c4;
            }
            lVar27 = lVar29 + 3;
            *(char *)((long)param_1 + lVar29 + 0x742) = pcVar22[2];
            lVar29 = lVar27;
          } while (lVar27 != 0x3f);
          *(undefined1 *)((long)param_1 + 0x77f) = 0;
joined_r0x008146c4:
          if (((ulong)local_8d8 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,CONCAT44(uStack_8c4,CONCAT22(uStack_8c6,local_8c8)));
          }
          lVar29 = FUN_0081a0b8(&local_7e8,0x15);
          uVar11 = *(ushort *)(lVar29 + 10);
          puVar34 = (undefined1 *)(ulong)uVar11;
          pvVar35 = *(void **)(lVar29 + 0x10);
          if (puVar34 < (undefined1 *)0x17) {
            local_8d8 = (undefined *)CONCAT71(local_8d8._1_7_,(char)uVar11 << 1);
            pvVar19 = pvVar25;
            if (uVar11 != 0) goto LAB_00814730;
          }
          else {
            uVar30 = (ulong)(uVar11 + 0x10) & 0x1fff0;
            pvVar19 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar30);
            local_8d8 = (undefined *)(uVar30 | 1);
            local_8c8 = (ushort)pvVar19;
            uStack_8c6 = (undefined2)((ulong)pvVar19 >> 0x10);
            uStack_8c4 = (uint)((ulong)pvVar19 >> 0x20);
            local_8d0 = puVar34;
LAB_00814730:
            memcpy(pvVar19,pvVar35,(size_t)puVar34);
          }
          *(undefined1 *)((long)pvVar19 + (long)puVar34) = 0;
          lVar29 = 0;
          pvVar35 = pvVar25;
          if (((ulong)local_8d8 & 1) != 0) {
            pvVar35 = (void *)CONCAT44(uStack_8c4,CONCAT22(uStack_8c6,local_8c8));
          }
          do {
            pcVar22 = (char *)((long)pvVar35 + lVar29);
            if (*pcVar22 == '\0') {
              *(undefined1 *)((long)param_1 + lVar29 + 0x780) = 0;
              goto joined_r0x00814dec;
            }
            *(char *)((long)param_1 + lVar29 + 0x780) = *pcVar22;
            if (pcVar22[1] == '\0') {
              *(undefined1 *)((long)param_1 + lVar29 + 0x781) = 0;
              goto joined_r0x00814dec;
            }
            *(char *)((long)param_1 + lVar29 + 0x781) = pcVar22[1];
            if (pcVar22[2] == '\0') {
              *(undefined1 *)((long)param_1 + lVar29 + 0x782) = 0;
              goto joined_r0x00814dec;
            }
            lVar27 = lVar29 + 3;
            *(char *)((long)param_1 + lVar29 + 0x782) = pcVar22[2];
            lVar29 = lVar27;
          } while (lVar27 != 0x3f);
          *(undefined1 *)((long)param_1 + 0x7bf) = 0;
joined_r0x00814dec:
          if (((ulong)local_8d8 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,CONCAT44(uStack_8c4,CONCAT22(uStack_8c6,local_8c8)));
          }
          *(undefined1 *)(param_1 + 0xf8) = 3;
          FUN_007935cc(plVar4);
          lVar29 = param_1[0xc];
          FUN_0284e338(&local_8d8);
          FUN_0081649c(param_1,2,&local_8d8,(short)lVar29,0);
          FUN_0284e3d4(&local_8d8);
          goto LAB_00813e60;
        }
        switch(local_7e0) {
        case 0x103:
          bVar10 = *(byte *)(param_1 + 0x103);
          sVar26 = (size_t)(bVar10 >> 1);
          sVar9 = sVar26;
          if ((bVar10 & 1) != 0) {
            sVar9 = param_1[0x104];
          }
          sVar31 = (ulong)(local_7d8 >> 1);
          if ((local_7d8 & 1) != 0) {
            sVar31 = local_7d0;
          }
          if (sVar9 == sVar31) {
            pcVar22 = pcVar5;
            if ((bVar10 & 1) != 0) {
              pcVar22 = (char *)param_1[0x105];
            }
            pcVar8 = local_7d7;
            if ((local_7d8 & 1) != 0) {
              pcVar8 = local_7c8;
            }
            pcVar13 = pcVar5;
            if ((bVar10 & 1) == 0) {
              while (sVar9 != 0) {
                if (*pcVar13 != *pcVar8) goto LAB_008150f4;
                pcVar8 = pcVar8 + 1;
                sVar26 = sVar26 - 1;
                pcVar13 = pcVar13 + 1;
                sVar9 = sVar26;
              }
            }
            else if ((sVar9 != 0) && (iVar16 = memcmp(pcVar22,pcVar8,sVar9), iVar16 != 0)) break;
            *(undefined1 *)(param_1 + 0xf8) = 4;
            lVar29 = FUN_0081a038(&local_7e8,0x20);
            FUN_00818b44(&local_9c8,lVar29 + 0x10);
            local_8b8 = puVar15 + 0x68;
            local_8d8 = puVar15 + 0x10;
            local_8c8 = 0xc0;
            uStack_8c6 = 0;
            uStack_8c4 = 0;
            uVar30 = uVar24;
            if (((ulong)local_9c8 & 1) != 0) {
              uVar30 = CONCAT44(uStack_9b4,local_9b8);
            }
            local_8c0 = 0;
            uStack_8be = 0;
            local_8d0 = local_8b0;
            uVar17 = FUN_00793194(&local_8d8,uVar30,1);
            FUN_007ab0c4(local_70,&local_8d8,uVar30,uVar17,1);
            FUN_0078a794(local_70,plVar2,&local_8d8);
            if (((ulong)local_9c8 & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,CONCAT44(uStack_9b4,local_9b8));
            }
            uVar30 = FUN_00817b3c(param_1);
            if ((uVar30 & 1) == 0) {
              lVar29 = FUN_0081a038(&local_7e8,0x16);
              FUN_00818b44(&local_9c8,lVar29 + 0x10);
              uVar30 = uVar24;
              if (((ulong)local_9c8 & 1) != 0) {
                uVar30 = CONCAT44(uStack_9b4,local_9b8);
              }
              local_8c8 = 0xc0;
              uStack_8c6 = 0;
              uStack_8c4 = 0;
              local_8c0 = 0;
              uStack_8be = 0;
              local_8d8 = puVar15 + 0x10;
              local_8d0 = local_8b0;
              local_8b8 = puVar15 + 0x68;
              uVar17 = FUN_00793194(&local_8d8,uVar30,1);
              FUN_007ab0c4(local_70,&local_8d8,uVar30,uVar17,1);
              FUN_0078a794(local_70,plVar3,&local_8d8);
              if (((ulong)local_9c8 & 1) != 0) {
                FUN_0049e790(PTR_LAB_047cba48,CONCAT44(uStack_9b4,local_9b8));
              }
              local_9c8 = (undefined *)((ulong)local_9c8 & 0xffffffff00000000);
              FUN_0078a244(&local_8d8,plVar3,&local_9c8);
              puVar14 = PTR_DAT_047d0868;
              *(undefined4 *)(PTR_DAT_047d0868 + 0x1f8) = (undefined4)local_9c8;
              *(short *)(puVar14 + 0x1fc) = (short)param_1[0x102];
              plVar33 = (long *)PTR_DAT_047d0860;
              local_8c8 = 0xc0;
              uStack_8c6 = 0;
              pcVar22 = local_8a9;
              _local_8b0 = _local_8b0 & 0xffffff00;
              lVar29 = 0x2f;
              do {
                pcVar22[-6] = '\0';
                pcVar22[-5] = '\0';
                pcVar22[-4] = '\0';
                pcVar22[-3] = '\0';
                lVar27 = lVar29 + 8;
                pcVar22[-2] = '\0';
                pcVar22[-1] = '\0';
                *pcVar22 = '\0';
                pcVar22 = local_8b0 + lVar29 + -0x20;
                local_999[lVar29 + 0xc2] = '\0';
                lVar29 = lVar27;
              } while (lVar27 != 0xef);
              uStack_8c4 = 0;
              local_8c0 = 0;
              uStack_8be = 0;
              local_8d8 = puVar15 + 0x10;
              local_8d0 = local_8b0;
              local_8b8 = puVar15 + 0x68;
              FUN_0078a4fc(plVar2,&local_8d8);
              local_9c8 = puVar15 + 0x10;
              local_9a8 = puVar15 + 0x68;
              local_9b8 = 0xc0;
              pcVar22 = local_999;
              local_9a0 = 0;
              lVar29 = 0x2f;
              do {
                pcVar22[-6] = '\0';
                pcVar22[-5] = '\0';
                pcVar22[-4] = '\0';
                pcVar22[-3] = '\0';
                lVar27 = lVar29 + 8;
                pcVar22[-2] = '\0';
                pcVar22[-1] = '\0';
                *pcVar22 = '\0';
                pcVar22 = local_999 + lVar29 + -0x27;
                local_999[lVar29 + -0x2e] = '\0';
                lVar29 = lVar27;
              } while (lVar27 != 0xef);
              puVar21 = &local_9c8;
              uStack_9b4 = 0;
              local_9b0 = 0;
              plVar20 = plVar3;
              puStack_9c0 = &local_9a0;
              goto LAB_008146b0;
            }
            local_8d8 = (undefined *)CONCAT44(local_8d8._4_4_,0x6c8e);
            local_9c8 = (undefined *)((ulong)local_9c8 & 0xffffffff00000000);
            nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)&local_9c8);
            FUN_018ff39c(param_1 + 0xe6,&local_8d8);
            *(undefined1 *)(param_1 + 0xf8) = 5;
            plVar33 = (long *)PTR_DAT_047d0860;
          }
          break;
        case 0x104:
          bVar10 = *(byte *)(param_1 + 0x106);
          sVar9 = (ulong)(bVar10 >> 1);
          if ((bVar10 & 1) != 0) {
            sVar9 = param_1[0x107];
          }
          sVar26 = (ulong)(local_7d8 >> 1);
          if ((local_7d8 & 1) != 0) {
            sVar26 = local_7d0;
          }
          iVar16 = 0;
          if (((sVar9 == sVar26) && ((bVar10 & 1) != 0)) && (sVar9 != 0)) {
            pcVar22 = local_7d7;
            if ((local_7d8 & 1) != 0) {
              pcVar22 = local_7c8;
            }
            memcmp((void *)param_1[0x108],pcVar22,sVar9);
            break;
          }
          goto LAB_00813e6c;
        case 0x109:
          if (1 < *(ushort *)(*plVar33 + 0x50)) {
            uVar30 = 0;
            do {
              uVar30 = uVar30 & 0xffff;
              lVar29 = uVar30 * 0xb0;
              lVar32 = param_1[0x10c];
              lVar27 = lVar32 + lVar29;
              bVar10 = *(byte *)(lVar27 + 0x60);
              uVar18 = (ulong)(bVar10 >> 1);
              sVar9 = uVar18;
              if ((bVar10 & 1) != 0) {
                sVar9 = *(size_t *)(lVar27 + 0x68);
              }
              bVar28 = local_7d8 & 1;
              sVar31 = (size_t)(local_7d8 >> 1);
              sVar26 = sVar31;
              if ((local_7d8 & 1) != 0) {
                sVar26 = local_7d0;
              }
              if (sVar9 == sVar26) {
                pvVar35 = *(void **)(lVar32 + uVar30 * 0xb0 + 0x70);
                if ((bVar10 & 1) == 0) {
                  pvVar35 = (void *)(lVar27 + 0x61);
                }
                pcVar22 = local_7d7;
                if ((local_7d8 & 1) != 0) {
                  pcVar22 = local_7c8;
                }
                if ((bVar10 & 1) == 0) {
                  if (sVar9 != 0) {
                    lVar27 = lVar29 + 0x61;
                    while (*(char *)(lVar32 + lVar27) == *pcVar22) {
                      uVar18 = uVar18 - 1;
                      pcVar22 = pcVar22 + 1;
                      lVar27 = lVar27 + 1;
                      if (uVar18 == 0) goto LAB_008150e4;
                    }
                    goto LAB_00814940;
                  }
                }
                else if (sVar9 != 0) {
                  iVar16 = memcmp(pvVar35,pcVar22,sVar9);
                  lVar32 = param_1[0x10c];
                  if (iVar16 != 0) {
                    bVar28 = local_7d8 & 1;
                    sVar31 = (size_t)(local_7d8 >> 1);
                    goto LAB_00814940;
                  }
                }
LAB_008150e4:
                *(undefined1 *)(lVar32 + uVar30 * 0xb0 + 0x90) = 0;
                plVar33 = (long *)PTR_DAT_047d0860;
                goto LAB_008150f4;
              }
LAB_00814940:
              lVar27 = lVar32 + uVar30 * 0xb0;
              bVar10 = *(byte *)(lVar27 + 0x78);
              uVar18 = (ulong)(bVar10 >> 1);
              sVar9 = uVar18;
              if ((bVar10 & 1) != 0) {
                sVar9 = *(size_t *)(lVar27 + 0x80);
              }
              if (bVar28 != 0) {
                sVar31 = local_7d0;
              }
              if (sVar9 == sVar31) {
                pvVar35 = *(void **)(lVar32 + uVar30 * 0xb0 + 0x88);
                if ((bVar10 & 1) == 0) {
                  pvVar35 = (void *)(lVar27 + 0x79);
                }
                pcVar22 = local_7d7;
                if (bVar28 != 0) {
                  pcVar22 = local_7c8;
                }
                if ((bVar10 & 1) == 0) {
                  if (sVar9 != 0) {
                    lVar29 = lVar29 + 0x79;
                    while (*(char *)(lVar32 + lVar29) == *pcVar22) {
                      uVar18 = uVar18 - 1;
                      pcVar22 = pcVar22 + 1;
                      lVar29 = lVar29 + 1;
                      if (uVar18 == 0) goto LAB_008149cc;
                    }
                    goto LAB_00814864;
                  }
                }
                else if (sVar9 != 0) {
                  iVar16 = memcmp(pvVar35,pcVar22,sVar9);
                  if (iVar16 != 0) goto LAB_00814864;
                  lVar32 = param_1[0x10c];
                }
LAB_008149cc:
                *(undefined1 *)(lVar32 + uVar30 * 0xb0 + 0x91) = 0;
                plVar33 = (long *)PTR_DAT_047d0860;
                goto LAB_008150f4;
              }
LAB_00814864:
              uVar1 = (int)uVar30 + 1;
              uVar30 = (ulong)uVar1;
              iVar16 = 0;
              plVar33 = (long *)PTR_DAT_047d0860;
            } while ((int)(uVar1 & 0xffff) <
                     (int)(*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50) - 1));
            goto LAB_00813e6c;
          }
          break;
        case 0x113:
          bVar10 = *(byte *)(param_1 + 0x103);
          sVar26 = (size_t)(bVar10 >> 1);
          sVar9 = sVar26;
          if ((bVar10 & 1) != 0) {
            sVar9 = param_1[0x104];
          }
          sVar31 = (ulong)(local_7d8 >> 1);
          if ((local_7d8 & 1) != 0) {
            sVar31 = local_7d0;
          }
          if (sVar9 == sVar31) {
            pcVar22 = pcVar5;
            if ((bVar10 & 1) != 0) {
              pcVar22 = (char *)param_1[0x105];
            }
            pcVar8 = local_7d7;
            if ((local_7d8 & 1) != 0) {
              pcVar8 = local_7c8;
            }
            pcVar13 = pcVar5;
            if ((bVar10 & 1) == 0) {
              while (sVar9 != 0) {
                if (*pcVar13 != *pcVar8) goto LAB_008150f4;
                pcVar8 = pcVar8 + 1;
                sVar26 = sVar26 - 1;
                pcVar13 = pcVar13 + 1;
                sVar9 = sVar26;
              }
            }
            else if ((sVar9 != 0) && (iVar16 = memcmp(pcVar22,pcVar8,sVar9), iVar16 != 0)) break;
            iVar16 = FUN_0081a0e4(&local_7e8);
            if (iVar16 == 0x1b5) {
              FUN_0081308c(&local_8d8,param_1);
              FUN_007935cc(plVar4);
              lVar29 = param_1[0xc];
              FUN_0284e338(&local_8d8);
              plVar33 = (long *)PTR_DAT_047d0860;
              FUN_0081649c(param_1,2,&local_8d8,(short)lVar29,0);
              FUN_0284e3d4(&local_8d8);
            }
          }
          break;
        case 0x114:
          iVar16 = FUN_0081a0e4(&local_7e8);
          if (iVar16 == 0x1b5) {
            if ((char)param_1[0xf8] != '\x04') break;
            lVar27 = param_1[0xf9];
            *(undefined1 *)(param_1 + 0xf8) = 0;
            param_1[0xf9] = 0;
            lVar29 = param_1[0xfa];
            *(undefined2 *)(param_1 + 0xfa) = 0;
            FUN_0078b160(plVar2);
            FUN_0078b160(plVar3);
            FUN_00817eec(param_1 + 0x103,&DAT_03c886bc);
            FUN_00817eec(param_1 + 0x106,&DAT_03c886bc);
            param_1[0x109] = 0;
            FUN_007935cc(param_1 + 0x10a);
            FUN_007935cc(plVar4);
            param_1[0xf9] = lVar27;
            *(short *)(param_1 + 0xfa) = (short)lVar29;
            *(undefined1 *)(param_1 + 0xe8) = 0;
            *(undefined1 *)(param_1 + 0xf0) = 0;
            if (1 < *(ushort *)(*plVar33 + 0x50)) {
              lVar29 = param_1[0x10c];
              uVar30 = 0;
              do {
                lVar27 = (uVar30 & 0xffff) * 0xb0;
                puVar34 = (undefined1 *)(lVar29 + lVar27);
                uVar23 = *(undefined8 *)(puVar34 + 8);
                uVar12 = *(undefined2 *)(puVar34 + 0x10);
                *puVar34 = 0;
                *(undefined8 *)(puVar34 + 8) = 0;
                *(undefined2 *)(puVar34 + 0x10) = 0;
                FUN_0078b160(puVar34 + 0x18);
                FUN_0078b160(puVar34 + 0x38);
                *(undefined4 *)(puVar34 + 0x58) = 0x50004000;
                FUN_00817eec(puVar34 + 0x60,&DAT_03c886bc);
                FUN_00817eec(puVar34 + 0x78,&DAT_03c886bc);
                *(undefined2 *)(puVar34 + 0x90) = 0;
                FUN_007935cc(puVar34 + 0x98);
                FUN_007935cc(puVar34 + 0xa0);
                *(undefined2 *)(puVar34 + 0xa8) = 2;
                lVar29 = param_1[0x10c];
                lVar27 = lVar29 + lVar27;
                *(undefined8 *)(lVar27 + 8) = uVar23;
                *(undefined2 *)(lVar27 + 0x10) = uVar12;
                uVar1 = (int)uVar30 + 1;
                uVar30 = (ulong)uVar1;
              } while ((int)(uVar1 & 0xffff) <
                       (int)(*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50) - 1));
            }
            FUN_0081308c(&local_8d8,param_1);
            *(undefined1 *)(param_1 + 0xf8) = 1;
            iVar16 = 0;
            plVar33 = (long *)PTR_DAT_047d0860;
            goto LAB_00813e6c;
          }
        case 0x105:
        case 0x106:
        case 0x107:
        case 0x108:
        case 0x10a:
        case 0x10b:
        case 0x10c:
        case 0x10d:
        case 0x10e:
        case 0x10f:
        case 0x110:
        case 0x111:
        case 0x112:
        case 0x115:
        case 0x116:
        case 0x117:
        case 0x118:
switchD_008142dc_caseD_105:
          local_8d0 = (undefined1 *)((ulong)local_8d0 & 0xffffffff00000000);
          local_8d8 = (undefined *)0x1000;
          (**(code **)(*param_1 + 0x10))(param_1,&local_8d8);
          break;
        case 0x119:
          if (1 < *(ushort *)(*plVar33 + 0x50)) {
            uVar30 = 0;
            do {
              uVar30 = uVar30 & 0xffff;
              lVar29 = uVar30 * 0xb0;
              lVar27 = param_1[0x10c];
              lVar32 = lVar27 + lVar29;
              bVar10 = *(byte *)(lVar32 + 0x60);
              uVar18 = (ulong)(bVar10 >> 1);
              sVar9 = uVar18;
              if ((bVar10 & 1) != 0) {
                sVar9 = *(size_t *)(lVar32 + 0x68);
              }
              bVar28 = local_7d8 & 1;
              sVar31 = (size_t)(local_7d8 >> 1);
              sVar26 = sVar31;
              if ((local_7d8 & 1) != 0) {
                sVar26 = local_7d0;
              }
              if (sVar9 == sVar26) {
                pvVar35 = *(void **)(lVar27 + uVar30 * 0xb0 + 0x70);
                if ((bVar10 & 1) == 0) {
                  pvVar35 = (void *)(lVar32 + 0x61);
                }
                pcVar22 = local_7d7;
                if ((local_7d8 & 1) != 0) {
                  pcVar22 = local_7c8;
                }
                if ((bVar10 & 1) == 0) {
                  if (sVar9 != 0) {
                    lVar32 = lVar29 + 0x61;
                    while (*(char *)(lVar27 + lVar32) == *pcVar22) {
                      uVar18 = uVar18 - 1;
                      pcVar22 = pcVar22 + 1;
                      lVar32 = lVar32 + 1;
                      if (uVar18 == 0) goto LAB_00815100;
                    }
                    goto LAB_00814d0c;
                  }
                }
                else if (sVar9 != 0) {
                  iVar16 = memcmp(pvVar35,pcVar22,sVar9);
                  lVar27 = param_1[0x10c];
                  if (iVar16 != 0) {
                    bVar28 = local_7d8 & 1;
                    sVar31 = (size_t)(local_7d8 >> 1);
                    goto LAB_00814d0c;
                  }
                }
LAB_00815100:
                lVar29 = lVar27 + uVar30 * 0xb0;
                uVar1 = *(ushort *)(lVar29 + 0x58) + 1;
                *(short *)(lVar29 + 0x58) = (short)uVar1;
                if (0x40 < (uVar1 >> 8 & 0xff)) goto LAB_0081511c;
                lVar27 = lVar27 + uVar30 * 0xb0;
                uVar12 = *(undefined2 *)(lVar27 + 0x10);
                lVar27 = lVar27 + 0x18;
                uVar23 = 3;
LAB_00815168:
                FUN_0081649c(param_1,uVar23,lVar27,uVar30,uVar12);
LAB_00815174:
                iVar16 = 0;
                plVar33 = (long *)PTR_DAT_047d0860;
                break;
              }
LAB_00814d0c:
              lVar32 = lVar27 + uVar30 * 0xb0;
              bVar10 = *(byte *)(lVar32 + 0x78);
              uVar18 = (ulong)(bVar10 >> 1);
              sVar9 = uVar18;
              if ((bVar10 & 1) != 0) {
                sVar9 = *(size_t *)(lVar32 + 0x80);
              }
              if (bVar28 != 0) {
                sVar31 = local_7d0;
              }
              if (sVar9 == sVar31) {
                pvVar35 = *(void **)(lVar27 + uVar30 * 0xb0 + 0x88);
                if ((bVar10 & 1) == 0) {
                  pvVar35 = (void *)(lVar32 + 0x79);
                }
                pcVar22 = local_7d7;
                if (bVar28 != 0) {
                  pcVar22 = local_7c8;
                }
                if ((bVar10 & 1) == 0) {
                  if (sVar9 != 0) {
                    lVar29 = lVar29 + 0x79;
                    while (*(char *)(lVar27 + lVar29) == *pcVar22) {
                      uVar18 = uVar18 - 1;
                      pcVar22 = pcVar22 + 1;
                      lVar29 = lVar29 + 1;
                      if (uVar18 == 0) goto LAB_00814d98;
                    }
                    goto LAB_00814c2c;
                  }
                }
                else if (sVar9 != 0) {
                  iVar16 = memcmp(pvVar35,pcVar22,sVar9);
                  if (iVar16 != 0) goto LAB_00814c2c;
                  lVar27 = param_1[0x10c];
                }
LAB_00814d98:
                lVar29 = lVar27 + uVar30 * 0xb0;
                uVar1 = *(ushort *)(lVar29 + 0x5a) + 1;
                *(short *)(lVar29 + 0x5a) = (short)uVar1;
                if ((uVar1 >> 8 & 0xff) < 0x51) {
                  lVar27 = lVar27 + uVar30 * 0xb0;
                  uVar12 = *(undefined2 *)(lVar27 + 0x10);
                  lVar27 = lVar27 + 0x38;
                  uVar23 = 4;
                  goto LAB_00815168;
                }
LAB_0081511c:
                local_8d8 = (undefined *)CONCAT44(local_8d8._4_4_,0x10408);
                local_9c8 = (undefined *)((ulong)local_9c8 & 0xffffffff00000000);
                nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)&local_9c8);
                FUN_018ff39c(param_1 + 0xe6,&local_8d8);
                *(undefined1 *)(param_1 + 0xf8) = 5;
                goto LAB_00815174;
              }
LAB_00814c2c:
              uVar1 = (int)uVar30 + 1;
              uVar30 = (ulong)uVar1;
              iVar16 = 0;
              plVar33 = (long *)PTR_DAT_047d0860;
            } while ((int)(uVar1 & 0xffff) <
                     (int)(*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50) - 1));
            goto LAB_00813e6c;
          }
          break;
        default:
          if (local_7e0 != 0x17) goto switchD_008142dc_caseD_105;
          local_8d8 = puVar15 + 0x10;
          local_8b8 = puVar15 + 0x68;
          local_8c8 = 0xc0;
          uStack_8c6 = 0;
          pcVar22 = local_8a9;
          _local_8b0 = _local_8b0 & 0xffffff00;
          lVar29 = 0x2f;
          do {
            lVar27 = lVar29 + 8;
            pcVar22[-6] = '\0';
            pcVar22[-5] = '\0';
            pcVar22[-4] = '\0';
            pcVar22[-3] = '\0';
            pcVar22[-2] = '\0';
            pcVar22[-1] = '\0';
            *pcVar22 = '\0';
            pcVar22 = local_8b0 + lVar29 + -0x20;
            local_999[lVar29 + 0xc2] = '\0';
            lVar29 = lVar27;
          } while (lVar27 != 0xef);
          puVar21 = &local_8d8;
          uStack_8c4 = 0;
          local_8c0 = 0;
          uStack_8be = 0;
          plVar20 = alStack_670;
          local_8d0 = local_8b0;
LAB_008146b0:
          FUN_0078a4fc(plVar20,puVar21);
        }
LAB_008150f4:
        iVar16 = 0;
      }
LAB_00813e6c:
      FUN_0081cc58(&local_7e8);
    }
LAB_00813e74:
    FUN_0284e3d4(alStack_670);
    if (iVar16 == 1) {
      return;
    }
  } while( true );
}



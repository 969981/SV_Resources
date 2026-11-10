/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dcdeac; name: FUN_00dcdeac
 */


void FUN_00dcdeac(undefined *param_1,float *param_2,MutexType *param_3)

{
  undefined *puVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [12];
  ulong uVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  undefined1 auStack_650 [16];
  undefined1 auStack_640 [16];
  undefined1 local_630 [16];
  undefined8 local_620;
  undefined8 uStack_618;
  undefined1 local_610 [4];
  undefined4 local_60c;
  uint uStack_608;
  undefined8 local_600;
  ulong uStack_5f8;
  undefined8 local_5f0;
  ulong uStack_5e8;
  undefined8 local_5e0;
  ulong uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined *local_5c0;
  double local_5b8;
  double dStack_5b0;
  undefined8 local_5a8;
  undefined *local_5a0;
  ulong uStack_598;
  undefined8 local_590;
  ulong uStack_588;
  undefined8 *local_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 local_560;
  ulong uStack_558;
  undefined8 uStack_550;
  ulong uStack_548;
  undefined4 local_540;
  undefined4 local_53c;
  undefined1 local_538;
  
  if ((param_1[0x70] != '\0') && (*(int *)(param_1 + 0x74) == 2)) {
    local_5a0 = param_1;
    auVar6 = (**(code **)(param_1 + 0x170))(param_1 + 400,&local_5a0);
    if (*param_2 <= 1.1920929e-07) {
      *(undefined4 *)(param_1 + 0x4c8) = 0;
    }
    else {
      *(float *)(param_1 + 0x4c8) = *param_2;
      *(float *)(param_1 + 0x4cc) = 1.0 / *param_2;
      param_1[0x480] = param_1[0x130];
      *(ulong *)(param_1 + 0x498) = *(ulong *)(param_1 + 0x148) & 0xffffffff;
      *(undefined8 *)(param_1 + 0x490) = *(undefined8 *)(param_1 + 0x140);
      *(ulong *)(param_1 + 0x4a8) = *(ulong *)(param_1 + 0x158) & 0xffffffff;
      *(undefined8 *)(param_1 + 0x4a0) = *(undefined8 *)(param_1 + 0x150);
      param_1[0x481] = (char)*(undefined4 *)(param_1 + 0x138);
      *(ulong *)(param_1 + 0x4b8) = *(ulong *)(param_1 + 0x168) & 0xffffffff;
      *(undefined8 *)(param_1 + 0x4b0) = *(undefined8 *)(param_1 + 0x160);
      *(undefined4 *)(param_1 + 0x484) = 0;
      *(ulong *)(param_1 + 0x458) = (ulong)auVar6._8_4_;
      *(long *)(param_1 + 0x450) = auVar6._0_8_;
      local_5d0 = CONCAT44(-(float)((ulong)*(undefined8 *)(param_1 + 0x450) >> 0x20),
                           -(float)*(undefined8 *)(param_1 + 0x450));
      uStack_5c8 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x458) >> 0x20),
                            -(float)*(undefined8 *)(param_1 + 0x458));
      nn::os::LockMutex(param_3);
      uVar11 = *(undefined8 *)(param_1 + 0xb8);
      uStack_598 = (uStack_598 >> 8 & 0xffffff) << 8;
      uStack_588 = uStack_588 & 0xffffffffffffff00;
      local_580 = &local_560;
      puVar1 = PTR_DAT_047ddb00 + 0x10;
      uStack_578 = -0x7ffffff600000000;
      local_590 = 0x5f7ffff05f7ffff0;
      local_5a0 = puVar1;
      FUN_00c7a7ac(&local_5a0);
      uStack_598 = uStack_598 | 0x40;
      FUN_00dce624(uVar11,param_1 + 0x4c0,&local_5d0,param_1 + 0x480,&local_5a0);
      local_5a0 = puVar1;
      FUN_00c7a7ac(&local_5a0);
      lVar8 = uStack_578;
      uVar7 = (ulong)uStack_578._4_4_;
      uStack_578 = (ulong)uStack_578._4_4_ << 0x20;
      if ((-1 < lVar8) && (local_580 != (undefined8 *)0x0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_580,uVar7 << 7);
      }
      nn::os::UnlockMutex(param_3);
      local_610[0] = param_1[0x480] != '\0';
      local_60c = *(undefined4 *)(param_1 + 0x138);
      uStack_608 = (uint)(byte)param_1[0x481];
      local_600 = *(undefined8 *)(param_1 + 0x490);
      uStack_5f8 = *(ulong *)(param_1 + 0x498) & 0xffffffff;
      local_5f0 = *(undefined8 *)(param_1 + 0x4a0);
      uStack_5e8 = *(ulong *)(param_1 + 0x4a8) & 0xffffffff;
      local_5e0 = *(undefined8 *)(param_1 + 0x4b0);
      uStack_5d8 = *(ulong *)(param_1 + 0x4b8) & 0xffffffff;
      local_5c0 = param_1;
      (**(code **)(param_1 + 0x1f0))
                (&local_5a0,local_5e0,uStack_5d8,0,param_1 + 0x210,&local_5c0,local_610);
      memcpy(param_1 + 0xd0,&local_5a0,0xa0);
      param_1[0x480] = param_1[0x130];
      *(ulong *)(param_1 + 0x498) = *(ulong *)(param_1 + 0x148) & 0xffffffff;
      *(undefined8 *)(param_1 + 0x490) = *(undefined8 *)(param_1 + 0x140);
      *(ulong *)(param_1 + 0x4a8) = *(ulong *)(param_1 + 0x158) & 0xffffffff;
      *(undefined8 *)(param_1 + 0x4a0) = *(undefined8 *)(param_1 + 0x150);
      *(undefined4 *)(param_1 + 0x484) = 0;
      *(ulong *)(param_1 + 0x4b8) = *(ulong *)(param_1 + 0x168) & 0xffffffff;
      *(undefined8 *)(param_1 + 0x4b0) = *(undefined8 *)(param_1 + 0x160);
      param_1[0x481] = (char)*(undefined4 *)(param_1 + 0x138);
      local_538 = 0;
      local_540 = *(undefined4 *)(param_1 + 0xd0);
      local_53c = *(undefined4 *)(param_1 + 0xd4);
      local_5a0 = *(undefined **)(param_1 + 0xe0);
      uStack_568 = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 200);
      uStack_570 = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0xc0);
      uStack_598 = *(ulong *)(param_1 + 0xe8) & 0xffffffff;
      local_590 = *(undefined8 *)(param_1 + 0xf0);
      uStack_588 = *(ulong *)(param_1 + 0xf8) & 0xffffffff;
      local_580 = *(undefined8 **)(param_1 + 0x100);
      uStack_578 = *(ulong *)(param_1 + 0x108) & 0xffffffff;
      uStack_558 = *(ulong *)(param_1 + 0x110) >> 0x20;
      local_560 = CONCAT44((int)*(ulong *)(param_1 + 0x110),-(float)*(undefined8 *)(param_1 + 0x118)
                          );
      uStack_550 = *(undefined8 *)(param_1 + 0x120);
      uStack_548 = *(ulong *)(param_1 + 0x128) & 0xffffffff;
      FUN_00dce39c(&local_5a0,&local_620);
      puVar1 = PTR_PTR_047d1bb0;
      uVar15 = (*(undefined8 **)PTR_PTR_047d1bb0)[1];
      uVar11 = **(undefined8 **)PTR_PTR_047d1bb0;
      iVar13 = CONCAT13((byte)((ulong)uVar11 >> 0x18) & (byte)((ulong)local_620 >> 0x18),
                        CONCAT12((byte)((ulong)uVar11 >> 0x10) & (byte)((ulong)local_620 >> 0x10),
                                 CONCAT11((byte)((ulong)uVar11 >> 8) & (byte)((ulong)local_620 >> 8)
                                          ,(byte)uVar11 & (byte)local_620)));
      iVar16 = CONCAT13((byte)((ulong)uVar15 >> 0x18) & (byte)((ulong)uStack_618 >> 0x18),
                        CONCAT12((byte)((ulong)uVar15 >> 0x10) & (byte)((ulong)uStack_618 >> 0x10),
                                 CONCAT11((byte)((ulong)uVar15 >> 8) &
                                          (byte)((ulong)uStack_618 >> 8),
                                          (byte)uVar15 & (byte)uStack_618)));
      iVar12 = -(uint)(iVar13 == (int)uVar11);
      iVar13 = -(uint)((int)(CONCAT17((byte)((ulong)uVar11 >> 0x38) &
                                      (byte)((ulong)local_620 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar11 >> 0x30) &
                                               (byte)((ulong)local_620 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar11 >> 0x28) &
                                                        (byte)((ulong)local_620 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar11 >> 0x20) &
                                                                 (byte)((ulong)local_620 >> 0x20),
                                                                 iVar13)))) >> 0x20) ==
                      (int)((ulong)uVar11 >> 0x20));
      iVar14 = -(uint)(iVar16 == (int)uVar15);
      iVar16 = -(uint)((int)(CONCAT17((byte)((ulong)uVar15 >> 0x38) &
                                      (byte)((ulong)uStack_618 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar15 >> 0x30) &
                                               (byte)((ulong)uStack_618 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar15 >> 0x28) &
                                                        (byte)((ulong)uStack_618 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar15 >> 0x20) &
                                                                 (byte)((ulong)uStack_618 >> 0x20),
                                                                 iVar16)))) >> 0x20) ==
                      (int)((ulong)uVar15 >> 0x20));
      if (CONCAT13(~(byte)((uint)iVar13 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18) &
                   ~(byte)((uint)iVar14 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                   CONCAT12(~(byte)((uint)iVar13 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10) &
                            ~(byte)((uint)iVar14 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                            CONCAT11(~(byte)((uint)iVar13 >> 8) & ~(byte)((uint)iVar12 >> 8) &
                                     ~(byte)((uint)iVar14 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                     ~(byte)iVar13 & ~(byte)iVar12 & ~(byte)iVar14 & ~(byte)iVar16))
                  ) == 0) {
        uStack_618 = 0;
        local_620 = 0;
      }
      lVar8 = *(long *)(param_1 + 0x60);
      if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar8 + 0x1a);
        sVar9 = *(short *)(lVar8 + 0x1a);
        do {
          sVar3 = *psVar2;
          if (sVar3 == sVar9) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar9 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_00dce290;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00dce290:
            bVar5 = false;
          }
          if (bVar5) {
            if (*(long *)(lVar8 + 0x10) != 0) {
              plVar10 = (long *)(*(long *)(lVar8 + 0x10) + -0x28);
              lVar8 = (**(code **)(*plVar10 + 0x68))(plVar10);
              uVar15 = *(undefined8 *)(lVar8 + 0x38);
              uVar11 = *(undefined8 *)(lVar8 + 0x30);
              FUN_022013ec(auStack_650,*(long *)(param_1 + 0xb8) + 0x60);
              nn::os::LockMutex(param_3);
              local_5c0 = (undefined *)(double)(float)uVar11;
              dStack_5b0 = (double)(float)uVar15;
              lVar8 = 0;
              if (*(long *)(param_1 + 0xb0) != 0) {
                lVar8 = *(long *)(param_1 + 0xb0) + 0x20;
              }
              local_5b8 = (double)(float)((ulong)uVar11 >> 0x20);
              local_5a8 = 0;
              FUN_02200b10(*(undefined4 *)(param_1 + 0x4cc),lVar8,*(undefined8 *)(param_1 + 0x340),
                           &local_5c0,auStack_650,local_630,auStack_640);
              nn::os::UnlockMutex(param_3);
              uVar15 = (*(undefined8 **)puVar1)[1];
              uVar11 = **(undefined8 **)puVar1;
              iVar13 = CONCAT13((byte)((ulong)uVar11 >> 0x18) & local_630[3],
                                CONCAT12((byte)((ulong)uVar11 >> 0x10) & local_630[2],
                                         CONCAT11((byte)((ulong)uVar11 >> 8) & local_630[1],
                                                  (byte)uVar11 & local_630[0])));
              iVar16 = CONCAT13((byte)((ulong)uVar15 >> 0x18) & local_630[0xb],
                                CONCAT12((byte)((ulong)uVar15 >> 0x10) & local_630[10],
                                         CONCAT11((byte)((ulong)uVar15 >> 8) & local_630[9],
                                                  (byte)uVar15 & local_630[8])));
              iVar12 = -(uint)(iVar13 == (int)uVar11);
              iVar13 = -(uint)((int)(CONCAT17((byte)((ulong)uVar11 >> 0x38) & local_630[7],
                                              CONCAT16((byte)((ulong)uVar11 >> 0x30) & local_630[6],
                                                       CONCAT15((byte)((ulong)uVar11 >> 0x28) &
                                                                local_630[5],
                                                                CONCAT14((byte)((ulong)uVar11 >>
                                                                               0x20) & local_630[4],
                                                                         iVar13)))) >> 0x20) ==
                              (int)((ulong)uVar11 >> 0x20));
              iVar14 = -(uint)(iVar16 == (int)uVar15);
              iVar16 = -(uint)((int)(CONCAT17((byte)((ulong)uVar15 >> 0x38) & local_630[0xf],
                                              CONCAT16((byte)((ulong)uVar15 >> 0x30) &
                                                       local_630[0xe],
                                                       CONCAT15((byte)((ulong)uVar15 >> 0x28) &
                                                                local_630[0xd],
                                                                CONCAT14((byte)((ulong)uVar15 >>
                                                                               0x20) &
                                                                         local_630[0xc],iVar16))))
                                    >> 0x20) == (int)((ulong)uVar15 >> 0x20));
              if (CONCAT13(~(byte)((uint)iVar13 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18) &
                           ~(byte)((uint)iVar14 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                           CONCAT12(~(byte)((uint)iVar13 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10) &
                                    ~(byte)((uint)iVar14 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                    CONCAT11(~(byte)((uint)iVar13 >> 8) & ~(byte)((uint)iVar12 >> 8)
                                             & ~(byte)((uint)iVar14 >> 8) &
                                             ~(byte)((uint)iVar16 >> 8),
                                             ~(byte)iVar13 & ~(byte)iVar12 & ~(byte)iVar14 &
                                             ~(byte)iVar16))) != 0) {
                local_620 = CONCAT44((float)((ulong)local_620 >> 0x20) + local_630._4_4_,
                                     (float)local_620 + local_630._0_4_);
                uStack_618 = CONCAT44((float)((ulong)uStack_618 >> 0x20) + local_630._12_4_,
                                      (float)uStack_618 + local_630._8_4_);
              }
              *(undefined8 *)(param_1 + 0x518) = uStack_618;
              *(undefined8 *)(param_1 + 0x510) = local_620;
              (**(code **)(*plVar10 + 0x60))(plVar10);
              return;
            }
            break;
          }
          sVar9 = sVar3;
        } while (sVar3 != 0);
      }
      *(undefined8 *)(param_1 + 0x518) = uStack_618;
      *(undefined8 *)(param_1 + 0x510) = local_620;
    }
  }
  return;
}



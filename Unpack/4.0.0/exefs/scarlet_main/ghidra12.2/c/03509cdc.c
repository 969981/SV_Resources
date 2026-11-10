/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03509cdc; name: FUN_03509cdc
 */


/* WARNING: Removing unreachable block (ram,0x03509ef0) */

undefined8 FUN_03509cdc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  bool bVar8;
  undefined *puVar9;
  bool bVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  int iVar17;
  uint uVar18;
  float *pfVar19;
  long lVar20;
  undefined4 *puVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  byte bVar25;
  long *plVar26;
  long lVar27;
  undefined8 uVar28;
  byte bVar29;
  long lVar30;
  long *plVar31;
  long *plVar32;
  ulong uVar33;
  bool bVar34;
  ulong uVar35;
  undefined1 uVar36;
  long *plVar37;
  long *plVar38;
  byte *pbVar39;
  long *plVar40;
  float fVar41;
  float fVar42;
  ushort uVar43;
  float fVar44;
  undefined4 local_80;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined4 local_78;
  int local_74;
  
  plVar31 = *(long **)(param_1 + 0x118);
  uVar13 = *(undefined4 *)(param_1 + 0x188);
  plVar40 = (long *)plVar31[3];
  lVar20 = plVar40[99];
  if (((int)lVar20 != -1) && (*(undefined4 *)(param_1 + 0x130) = 2, (int)lVar20 == 0)) {
    return 0;
  }
  *param_2 = 0;
  *(undefined2 *)((long)param_2 + 0x12) = 0;
  *(undefined4 *)(param_2 + 1) = uVar13;
  *(short *)(param_2 + 2) = (short)*(undefined4 *)PTR_DAT_047e6d08;
  local_78 = (undefined4)plVar40[0x45];
  fVar41 = *(float *)((long)plVar40 + 0x204) + *(float *)((long)plVar40 + 0x8c);
  if (fVar41 == *(float *)(param_1 + 0x18c)) {
    fVar44 = *(float *)(param_1 + 400);
  }
  else {
    pfVar19 = (float *)plVar31[2];
    if (pfVar19 == (float *)0x0) {
      fVar42 = 1.0;
    }
    else {
      fVar42 = pfVar19[1];
      if ((*(byte *)(plVar31[3] + 0x106) >> 5 & 1) != 0) {
        fVar42 = *pfVar19 * fVar42;
      }
    }
    if (-37.0 <= fVar41 * 0.05) {
      uVar18 = (uint)(fVar41 * 1393317.6 + 1.0653532e+09);
      fVar44 = (float)(uVar18 & 0x7fffff | 0x3f800000);
      fVar44 = (fVar44 * (fVar44 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar18 & 0xff800000);
    }
    else {
      fVar44 = 0.0;
    }
    fVar44 = fVar44 * fVar42;
    *(float *)(param_1 + 400) = fVar44;
    *(float *)(param_1 + 0x18c) = fVar41;
  }
  lVar20 = *(long *)(param_1 + 0x28);
  if (lVar20 == 0) {
    uVar18 = 0;
    if ((*(byte *)(param_1 + 0x50) >> 1 & 1) != 0) {
      bVar29 = 1;
LAB_03509efc:
      if (bVar29 != 0) goto LAB_03509f00;
      goto LAB_03509f08;
    }
  }
  else {
    bVar25 = 1;
    bVar29 = 1;
    lVar30 = lVar20;
    do {
      if (bVar29 == 0) {
        bVar29 = 0;
      }
      else {
        bVar29 = *(byte *)(lVar30 + 0x1d8) >> 1 & 1;
      }
      if (bVar25 == 0) {
        bVar25 = 0;
      }
      else {
        bVar25 = *(byte *)(lVar30 + 0x1d8) & 1;
      }
      lVar30 = *(long *)(lVar30 + 0x20);
    } while (lVar30 != 0);
    if ((*(byte *)(param_1 + 0x50) >> 1 & 1) == 0) {
      if (bVar25 == 0) {
        if ((*(byte *)(*(long *)(param_1 + 8) + 0x199) & 3) == 0) goto LAB_03509f60;
        bVar10 = -4096.0 <= DAT_047c66c4;
        do {
          *(byte *)(lVar20 + 0x1d8) = *(byte *)(lVar20 + 0x1d8) & 0xfc | bVar10 | 2;
          *(undefined4 *)(lVar20 + 0x1cc) = 0xc5800000;
          lVar20 = *(long *)(lVar20 + 0x20);
        } while (lVar20 != 0);
      }
LAB_03509f00:
      uVar18 = 0;
    }
    else {
      if (bVar25 == 1) goto LAB_03509efc;
LAB_03509f08:
      if ((*(byte *)(*(long *)(param_1 + 8) + 0x199) & 3) == 0) {
LAB_03509f60:
        uVar18 = 1;
      }
      else {
        if (lVar20 == 0) {
          uVar18 = 1;
        }
        else {
          bVar10 = -4096.0 <= DAT_047c66c4;
          uVar18 = 1;
          do {
            bVar29 = *(byte *)(lVar20 + 0x1d8);
            *(byte *)(lVar20 + 0x1d8) = bVar29 & 0xfe | bVar10;
            *(undefined4 *)(lVar20 + 0x1cc) = 0xc5800000;
            lVar20 = *(long *)(lVar20 + 0x20);
            uVar18 = uVar18 & (bVar29 & 2) >> 1;
          } while (lVar20 != 0);
        }
        uVar18 = uVar18 ^ 1;
      }
    }
  }
  puVar9 = PTR_DAT_047e7208;
  pbVar39 = (byte *)(param_1 + 0x50);
  fVar41 = (float)NEON_fminnm((int)plVar40[0x10],0x42c80000);
  fVar42 = *(float *)(param_1 + 0xbc);
  if (fVar41 <= 0.0) {
    fVar41 = 0.0;
  }
  if (fVar41 != fVar42) {
    *(undefined1 *)(param_1 + 0xc3) = 1;
    uVar43 = *(ushort *)puVar9;
    fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(param_1 + 0xc0));
    *(float *)(param_1 + 0xbc) = fVar41;
    fVar41 = (float)NEON_ucvtf((uint)uVar43);
    *(float *)(param_1 + 0xb8) =
         ((fVar42 - *(float *)(param_1 + 0xb8)) * fVar7) / fVar41 + *(float *)(param_1 + 0xb8);
  }
  fVar41 = (float)NEON_fminnm(*(undefined4 *)((long)plVar40 + 0x84),0x42c80000);
  fVar42 = *(float *)(param_1 + 0xcc);
  if (fVar41 <= 0.0) {
    fVar41 = 0.0;
  }
  if (fVar41 != fVar42) {
    *(undefined1 *)(param_1 + 0xd3) = 1;
    uVar43 = *(ushort *)puVar9;
    fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(param_1 + 0xd0));
    *(float *)(param_1 + 0xcc) = fVar41;
    fVar41 = (float)NEON_ucvtf((uint)uVar43);
    *(float *)(param_1 + 200) =
         ((fVar42 - *(float *)(param_1 + 200)) * fVar7) / fVar41 + *(float *)(param_1 + 200);
  }
  plVar1 = plVar40 + 3;
  plVar32 = (long *)(param_1 + 0x68);
  fVar41 = (float)NEON_ucvtf((uint)*(ushort *)(param_2 + 2));
  fVar41 = *(float *)((long)plVar40 + 0x264) * fVar41;
  fVar42 = 0.5;
  if (fVar41 <= 0.0) {
    fVar42 = -0.5;
  }
  iVar17 = (int)(fVar42 + fVar41);
  if (uVar18 == 0) {
    if (*(int *)(param_1 + 0x14c) == 1) {
      if (*(long *)(param_1 + 0x118) != 0) {
        lVar20 = *(long *)(*(long *)(param_1 + 0x118) + 0x18);
        *(byte *)(lVar20 + 0x2ba) = *(byte *)(lVar20 + 0x2ba) & 0x87;
      }
      bVar8 = false;
      bVar10 = false;
      *(undefined4 *)(param_1 + 0x130) = 2;
    }
    else if (*(int *)(param_1 + 0x14c) == 2) {
      if (((*pbVar39 & 1) != 0) &&
         ((**(code **)(*(long *)(param_1 + 0x68) + 0x28))(plVar32,*(undefined4 *)(param_1 + 0x148)),
         *(int *)(param_1 + 0x148) != 2)) {
        (**(code **)(*(long *)(param_1 + 0x68) + 0x18))(plVar32);
        uVar18 = *(uint *)(param_1 + 0x140);
        uVar35 = (ulong)uVar18;
        if (uVar18 == 0) {
          uVar35 = 0;
        }
        else {
          lVar20 = *(long *)(param_1 + 0x138);
          uVar16 = *(undefined8 *)PTR_DAT_047e6f38;
          uVar33 = uVar35;
          do {
            FUN_034b3b18(uVar16,*(undefined4 *)(lVar20 + 0x14),lVar20);
            puVar9 = PTR_DAT_047e2fd0;
            uVar33 = uVar33 - 1;
            lVar20 = lVar20 + 0x20;
          } while (uVar33 != 0);
          if (0 < (int)uVar18) {
            lVar20 = 0;
            do {
              lVar30 = *(long *)(param_1 + 0x138) + lVar20;
              if (*(char *)(lVar30 + 0x18) != '\0') {
                (**(code **)(puVar9 + 0x30))(5,*(undefined8 *)(lVar30 + 8));
                *(undefined8 *)(*(long *)(param_1 + 0x138) + lVar20 + 8) = 0;
              }
              lVar20 = lVar20 + 0x20;
            } while (uVar35 * 0x20 != lVar20);
          }
        }
        uVar18 = *(int *)(param_1 + 0x140) - uVar18;
        if (uVar18 != 0) {
          memmove(*(void **)(param_1 + 0x138),
                  (void *)((long)*(void **)(param_1 + 0x138) + uVar35 * 0x20),(ulong)uVar18 << 5);
        }
        *(uint *)(param_1 + 0x140) = uVar18;
      }
      if ((*(int *)(param_1 + 0x148) == 1) && ((int)plVar40[0x5b] < iVar17)) {
        local_74 = iVar17;
        uVar13 = (**(code **)(*plVar32 + 0x20))(plVar32,&local_74);
        *(undefined4 *)((long)param_2 + 0x2c) = uVar13;
      }
      bVar8 = false;
      bVar10 = false;
    }
    else {
      bVar10 = false;
      bVar8 = true;
    }
  }
  else {
    uVar35 = (ulong)*(uint *)(plVar40 + 0x35);
    if (*(uint *)(plVar40 + 0x35) == 0) {
      lVar20 = 0;
    }
    else {
      lVar20 = (**(code **)(*(long *)PTR_PTR_047e71e0 + 0x28))
                         (PTR_PTR_047e71e0,0,uVar35 * 0x18,
                          "../../../../include\\AK/SoundEngine/Common/IAkPluginMemAlloc.h",0xce);
      if (lVar20 == 0) {
        uVar35 = 0;
      }
      else if ((int)plVar40[0x35] != 0) {
        plVar37 = (long *)plVar40[0x34];
        uVar33 = 0;
        do {
          uVar11 = (**(code **)(*plVar37 + 0x10))(plVar37);
          puVar21 = (undefined4 *)(lVar20 + uVar33 * 0x18);
          uVar33 = (ulong)((int)uVar33 + 1);
          *puVar21 = uVar11;
          *(long *)(puVar21 + 2) = plVar37[1];
          puVar21[4] = 0;
          plVar37 = plVar37 + 0xc;
        } while (plVar37 != (long *)(plVar40[0x34] + (ulong)*(uint *)(plVar40 + 0x35) * 0x60));
      }
    }
    lVar30 = *(long *)(param_1 + 0x28);
    if (lVar30 != 0) {
      uVar18 = (uint)uVar35;
      if (uVar18 < 2) {
        uVar35 = 1;
      }
      uVar33 = uVar35 & 0xfffffffe;
      uVar11 = *(undefined4 *)((long)plVar40 + 0x19c);
      do {
        uVar14 = *(uint *)(lVar30 + 0x188);
        if (uVar14 == 1) {
          if ((((*(uint *)(*(long *)(lVar30 + 0x198) + 0x158) & 0xf00) == 0x300) &&
              (*(int *)(*(long *)(param_1 + 8) + 0x150) != 1)) && (*(int *)(lVar30 + 0x1d4) != 3)) {
            plVar37 = *(long **)(lVar30 + 0x180);
            goto LAB_0350a35c;
          }
          lVar22 = *(long *)(lVar30 + 0x180);
          *(undefined4 *)(lVar22 + 0x14c) = uVar13;
          *(undefined1 *)(lVar22 + 0x150) = 0;
          lVar22 = *(long *)(lVar30 + 0x180);
          *(undefined4 *)(lVar22 + 0x38) = 0x3f800000;
          *(undefined8 *)(lVar22 + 0x28) = 0;
          *(undefined8 *)(lVar22 + 0x30) = 0x3f800000;
          *(undefined8 *)(lVar22 + 0x3c) = 0;
          *(undefined8 *)(lVar22 + 0x44) = 0;
          *(undefined8 *)(lVar22 + 0x4c) = 0x3f8000003f800000;
          *(undefined8 *)(lVar22 + 0x5c) = 0;
          *(undefined8 *)(lVar22 + 0x6c) = 0;
          *(undefined1 *)(lVar22 + 0x74) = 1;
          *(undefined8 *)(lVar22 + 0x54) = 0x3f8000000000ffff;
          *(undefined8 *)(lVar22 + 100) = 0x3f80000000000000;
          *(undefined2 *)(lVar22 + 0x75) = local_7c;
          *(undefined1 *)(lVar22 + 0x77) = local_7a;
          *(undefined8 *)(lVar22 + 0x78) = 0x3f8000003f800000;
          *(undefined4 *)(lVar22 + 0x90) = 0;
          if (*(uint *)(lVar22 + 0x94) < uVar18) {
            uVar14 = *(uint *)(lVar22 + 0x94) + uVar18;
            lVar15 = (**(code **)(**(long **)(lVar22 + 0x80) + 0x28))
                               (*(long **)(lVar22 + 0x80),*(undefined8 *)(lVar22 + 0x88),
                                (ulong)uVar14 * 0x18,
                                "../../../../include\\AK/SoundEngine/Common/IAkPluginMemAlloc.h",
                                0xce);
            if (lVar15 != 0) {
              *(long *)(lVar22 + 0x88) = lVar15;
              *(uint *)(lVar22 + 0x90) = uVar18;
              *(uint *)(lVar22 + 0x94) = uVar14;
              goto LAB_0350a3c8;
            }
          }
          else {
            *(uint *)(lVar22 + 0x90) = uVar18;
            if (uVar18 != 0) {
LAB_0350a3c8:
              if (uVar18 < 2) {
                uVar23 = 0;
              }
              else {
                lVar15 = 0;
                uVar23 = 0;
                do {
                  puVar3 = (undefined8 *)(lVar20 + lVar15);
                  puVar4 = (undefined8 *)(*(long *)(lVar22 + 0x88) + lVar15);
                  uVar16 = *puVar3;
                  uVar28 = puVar3[2];
                  puVar4[1] = puVar3[1];
                  puVar4[2] = uVar28;
                  *puVar4 = uVar16;
                  uVar16 = puVar3[4];
                  uVar28 = puVar3[5];
                  uVar23 = uVar23 + 2;
                  lVar27 = *(long *)(lVar22 + 0x88) + lVar15;
                  lVar15 = lVar15 + 0x30;
                  *(undefined8 *)(lVar27 + 0x18) = puVar3[3];
                  *(undefined8 *)(lVar27 + 0x20) = uVar16;
                  *(undefined8 *)(lVar27 + 0x28) = uVar28;
                } while (uVar33 != uVar23);
              }
              if ((uVar35 & 1) != 0) {
                puVar3 = (undefined8 *)(lVar20 + uVar23 * 0x18);
                puVar4 = (undefined8 *)(*(long *)(lVar22 + 0x88) + uVar23 * 0x18);
                uVar16 = *puVar3;
                uVar28 = puVar3[2];
                puVar4[1] = puVar3[1];
                puVar4[2] = uVar28;
                *puVar4 = uVar16;
              }
            }
          }
          *(undefined4 *)(lVar22 + 0x98) = uVar11;
          if ((*(long *)(lVar22 + 0xa8) != 0) && (*(char *)(lVar22 + 0xb0) != '\0')) {
            (**(code **)(**(long **)(lVar22 + 0xa0) + 0x18))();
            *(undefined1 *)(lVar22 + 0xb0) = 0;
          }
          *(undefined8 *)(lVar22 + 0xa0) = 0;
          *(undefined8 *)(lVar22 + 0xa8) = 0;
          *(undefined1 *)(*(long *)(lVar30 + 0x180) + 0x148) = 1;
        }
        else {
          plVar37 = *(long **)(lVar30 + 0x180);
          if (uVar14 == 0) {
            uVar23 = 0;
            uVar36 = 1;
          }
          else {
LAB_0350a35c:
            plVar26 = plVar37;
            do {
              uVar5 = *(uint *)((long)plVar26 + 0x14c) >> 8 & 0xf;
              plVar38 = plVar37;
              if ((uVar5 < 4) &&
                 ((uVar36 = 0, (*(uint *)((long)plVar26 + 0x14c) & 0xff) != 0 || (uVar5 == 3))))
              goto LAB_0350a39c;
              plVar26 = plVar26 + 0x2b;
            } while (plVar37 + (ulong)uVar14 * 0x2b != plVar26);
            uVar36 = 1;
LAB_0350a39c:
            do {
              *(undefined4 *)((long)plVar38 + 0x14c) = 0;
              plVar37 = *(long **)(lVar30 + 0x180);
              uVar23 = (ulong)*(uint *)(lVar30 + 0x188);
              plVar38 = plVar38 + 0x2b;
            } while (plVar38 != plVar37 + uVar23 * 0x2b);
          }
          plVar26 = (long *)(lVar30 + 0x180);
          if ((*(int *)(lVar30 + 0x1d4) == 3) ||
             (lVar22 = *(long *)(param_1 + 8), (*(byte *)(lVar22 + 0x110) >> 3 & 1) == 0)) {
            plVar38 = plVar37 + uVar23 * 0x2b;
            if ((int)uVar23 != 0) {
              lVar22 = uVar23 * 0x158;
              do {
                if ((*plVar37 == 0) && ((int)plVar37[2] == 0)) goto LAB_0350a430;
                plVar37 = plVar37 + 0x2b;
                lVar22 = lVar22 + -0x158;
              } while (lVar22 != 0);
              plVar37 = plVar38;
            }
LAB_0350a430:
            if (plVar38 == plVar37) {
              plVar37 = (long *)FUN_03489c58(lVar30,0,0);
            }
            if (plVar37 != (long *)0x0) {
              plVar37[5] = 0;
              plVar37[6] = 0x3f800000;
              *(undefined4 *)(plVar37 + 7) = 0x3f800000;
              *(undefined8 *)((long)plVar37 + 0x54) = 0x3f8000000000ffff;
              *(undefined8 *)((long)plVar37 + 100) = 0x3f80000000000000;
              *(undefined4 *)((long)plVar37 + 0x14c) = uVar13;
              *(undefined1 *)(plVar37 + 0x2a) = 0;
              *(undefined8 *)((long)plVar37 + 0x3c) = 0;
              *(undefined8 *)((long)plVar37 + 0x44) = 0;
              *(undefined8 *)((long)plVar37 + 0x4c) = 0x3f8000003f800000;
              *(undefined8 *)((long)plVar37 + 0x5c) = 0;
              *(undefined8 *)((long)plVar37 + 0x6c) = 0;
              *(undefined1 *)((long)plVar37 + 0x74) = 1;
              *(undefined2 *)((long)plVar37 + 0x75) = local_7c;
              *(undefined1 *)((long)plVar37 + 0x77) = local_7a;
              plVar37[0xf] = 0x3f8000003f800000;
              *(undefined4 *)(plVar37 + 0x12) = 0;
              if (*(uint *)((long)plVar37 + 0x94) < uVar18) {
                uVar14 = *(uint *)((long)plVar37 + 0x94) + uVar18;
                lVar22 = (**(code **)(*(long *)plVar37[0x10] + 0x28))
                                   ((long *)plVar37[0x10],plVar37[0x11],(ulong)uVar14 * 0x18,
                                    "../../../../include\\AK/SoundEngine/Common/IAkPluginMemAlloc.h"
                                    ,0xce);
                if (lVar22 != 0) {
                  plVar37[0x11] = lVar22;
                  *(uint *)(plVar37 + 0x12) = uVar18;
                  *(uint *)((long)plVar37 + 0x94) = uVar14;
                  goto LAB_0350a7e0;
                }
              }
              else {
                *(uint *)(plVar37 + 0x12) = uVar18;
                if (uVar18 != 0) {
LAB_0350a7e0:
                  if (uVar18 < 2) {
                    uVar23 = 0;
                  }
                  else {
                    lVar22 = 0;
                    uVar23 = 0;
                    do {
                      puVar3 = (undefined8 *)(lVar20 + lVar22);
                      puVar4 = (undefined8 *)(plVar37[0x11] + lVar22);
                      uVar16 = *puVar3;
                      uVar28 = puVar3[2];
                      puVar4[1] = puVar3[1];
                      puVar4[2] = uVar28;
                      *puVar4 = uVar16;
                      uVar16 = puVar3[4];
                      uVar28 = puVar3[5];
                      uVar23 = uVar23 + 2;
                      lVar15 = plVar37[0x11] + lVar22;
                      lVar22 = lVar22 + 0x30;
                      *(undefined8 *)(lVar15 + 0x18) = puVar3[3];
                      *(undefined8 *)(lVar15 + 0x20) = uVar16;
                      *(undefined8 *)(lVar15 + 0x28) = uVar28;
                    } while (uVar33 != uVar23);
                  }
                  if ((uVar35 & 1) != 0) {
                    puVar3 = (undefined8 *)(lVar20 + uVar23 * 0x18);
                    puVar4 = (undefined8 *)(plVar37[0x11] + uVar23 * 0x18);
                    uVar16 = *puVar3;
                    uVar28 = puVar3[2];
                    puVar4[1] = puVar3[1];
                    puVar4[2] = uVar28;
                    *puVar4 = uVar16;
                  }
                }
              }
              *(undefined4 *)(plVar37 + 0x13) = uVar11;
              if ((plVar37[0x15] != 0) && ((char)plVar37[0x16] != '\0')) {
                (**(code **)(*(long *)plVar37[0x14] + 0x18))();
                *(undefined1 *)(plVar37 + 0x16) = 0;
              }
              plVar37[0x14] = 0;
              plVar37[0x15] = 0;
              *(undefined1 *)(plVar37 + 0x29) = uVar36;
            }
          }
          else if (*(int *)(lVar22 + 0x150) != 0) {
            lVar15 = *(long *)(lVar30 + 0x1b0);
            uVar23 = 0;
            do {
              if (lVar15 == *(long *)(*(long *)(lVar22 + 0x148) + uVar23 * 0x78 + 0x60)) {
                plVar37 = (long *)*plVar26;
                uVar14 = *(uint *)(lVar30 + 0x188);
                plVar38 = plVar37 + (ulong)uVar14 * 0x2b;
                if (uVar14 != 0) {
                  lVar27 = (ulong)uVar14 * 0x158;
                  do {
                    if ((*plVar37 == 0) &&
                       ((int)plVar37[2] ==
                        *(int *)(*(long *)(lVar22 + 0x148) + uVar23 * 0x78 + 0x5c)))
                    goto LAB_0350a570;
                    plVar37 = plVar37 + 0x2b;
                    lVar27 = lVar27 + -0x158;
                  } while (lVar27 != 0);
                  plVar37 = plVar38;
                }
LAB_0350a570:
                if (plVar38 == plVar37) {
                  plVar37 = (long *)FUN_03489c58(lVar30,0);
                }
                if (plVar37 != (long *)0x0) {
                  plVar37[5] = 0;
                  plVar37[6] = 0x3f800000;
                  *(undefined4 *)(plVar37 + 7) = 0x3f800000;
                  *(undefined8 *)((long)plVar37 + 0x54) = 0x3f8000000000ffff;
                  *(undefined8 *)((long)plVar37 + 100) = 0x3f80000000000000;
                  *(undefined4 *)((long)plVar37 + 0x14c) = uVar13;
                  *(undefined1 *)(plVar37 + 0x2a) = 0;
                  *(undefined8 *)((long)plVar37 + 0x3c) = 0;
                  *(undefined8 *)((long)plVar37 + 0x44) = 0;
                  *(undefined8 *)((long)plVar37 + 0x4c) = 0x3f8000003f800000;
                  *(undefined8 *)((long)plVar37 + 0x5c) = 0;
                  *(undefined8 *)((long)plVar37 + 0x6c) = 0;
                  *(undefined1 *)((long)plVar37 + 0x74) = 1;
                  *(undefined1 *)((long)plVar37 + 0x77) = local_7a;
                  *(undefined2 *)((long)plVar37 + 0x75) = local_7c;
                  plVar37[0xf] = 0x3f8000003f800000;
                  *(undefined4 *)(plVar37 + 0x12) = 0;
                  if (*(uint *)((long)plVar37 + 0x94) < uVar18) {
                    uVar14 = *(uint *)((long)plVar37 + 0x94) + uVar18;
                    lVar27 = (**(code **)(*(long *)plVar37[0x10] + 0x28))
                                       ((long *)plVar37[0x10],plVar37[0x11],(ulong)uVar14 * 0x18,
                                        "../../../../include\\AK/SoundEngine/Common/IAkPluginMemAlloc.h"
                                        ,0xce);
                    if (lVar27 != 0) {
                      plVar37[0x11] = lVar27;
                      *(uint *)(plVar37 + 0x12) = uVar18;
                      *(uint *)((long)plVar37 + 0x94) = uVar14;
                      goto LAB_0350a648;
                    }
                  }
                  else {
                    *(uint *)(plVar37 + 0x12) = uVar18;
                    if (uVar18 != 0) {
LAB_0350a648:
                      if (uVar18 < 2) {
                        uVar24 = 0;
                      }
                      else {
                        lVar27 = 0;
                        uVar24 = 0;
                        do {
                          puVar3 = (undefined8 *)(lVar20 + lVar27);
                          puVar4 = (undefined8 *)(plVar37[0x11] + lVar27);
                          uVar16 = *puVar3;
                          uVar28 = puVar3[2];
                          puVar4[1] = puVar3[1];
                          puVar4[2] = uVar28;
                          *puVar4 = uVar16;
                          uVar16 = puVar3[4];
                          uVar28 = puVar3[5];
                          uVar24 = uVar24 + 2;
                          lVar2 = plVar37[0x11] + lVar27;
                          lVar27 = lVar27 + 0x30;
                          *(undefined8 *)(lVar2 + 0x18) = puVar3[3];
                          *(undefined8 *)(lVar2 + 0x20) = uVar16;
                          *(undefined8 *)(lVar2 + 0x28) = uVar28;
                        } while (uVar33 != uVar24);
                      }
                      if ((uVar35 & 1) != 0) {
                        puVar3 = (undefined8 *)(lVar20 + uVar24 * 0x18);
                        puVar4 = (undefined8 *)(plVar37[0x11] + uVar24 * 0x18);
                        uVar16 = *puVar3;
                        uVar28 = puVar3[2];
                        puVar4[1] = puVar3[1];
                        puVar4[2] = uVar28;
                        *puVar4 = uVar16;
                      }
                    }
                  }
                  *(undefined4 *)(plVar37 + 0x13) = uVar11;
                  if ((plVar37[0x15] != 0) && ((char)plVar37[0x16] != '\0')) {
                    (**(code **)(*(long *)plVar37[0x14] + 0x18))();
                    *(undefined1 *)(plVar37 + 0x16) = 0;
                  }
                  plVar37[0x14] = 0;
                  plVar37[0x15] = 0;
                  *(undefined1 *)(plVar37 + 0x29) = uVar36;
                }
              }
              uVar23 = uVar23 + 1;
            } while (uVar23 < *(uint *)(lVar22 + 0x150));
          }
          if (*(int *)(lVar30 + 0x188) != 0) {
            uVar14 = *(int *)(lVar30 + 0x188) - 1;
            lVar22 = (ulong)uVar14 * 0x158 + 0x150;
            do {
              lVar15 = *plVar26;
              uVar5 = *(uint *)(lVar15 + lVar22 + -4);
              uVar6 = uVar5 >> 8 & 0xf;
              if ((3 < uVar6) || ((uVar5 & 0xff) == 0 && uVar6 != 3)) {
                if (*(char *)(lVar15 + lVar22) == '\0') {
                  *(undefined4 *)(lVar15 + lVar22 + -4) = uVar13;
                  *(undefined1 *)(lVar15 + lVar22) = 0;
                  *(undefined1 *)(*plVar26 + lVar22) = 1;
                }
                else {
                  FUN_0348a520(lVar30 + 0x28,uVar14);
                }
              }
              uVar14 = uVar14 - 1;
              lVar22 = lVar22 + -0x158;
            } while (uVar14 != 0xffffffff);
          }
        }
        lVar30 = *(long *)(lVar30 + 0x20);
      } while (lVar30 != 0);
    }
    plVar37 = (long *)0x0;
    if (plVar40 != (long *)0x0) {
      plVar37 = plVar1;
    }
    puVar21 = (undefined4 *)0x0;
    if ((*(uint *)(plVar40 + 1) & 0x10) != 0) {
      puVar21 = &local_78;
    }
    FUN_034fec14(fVar44,param_1,plVar37,*(uint *)(plVar31[3] + 699) >> 0x1b & 1,puVar21);
    if ((((*(byte *)(param_1 + 0x50) & 1) == 0) || ((*(byte *)(plVar31 + 4) & 1) == 0)) &&
       (*(int *)(param_1 + 0x14c) == 2)) {
      if ((*(byte *)(plVar31 + 4) & 1) == 0) {
        iVar12 = (**(code **)(*plVar31 + 0x68))(plVar31,plVar40[0x5c],(int)plVar40[0x5d]);
        if (iVar12 == 0x3f) {
          bVar10 = false;
        }
        else {
          if (iVar12 == 1) {
            *(byte *)(plVar31 + 4) = *(byte *)(plVar31 + 4) | 1;
            goto LAB_0350aa50;
          }
          if (*(long *)(param_1 + 0x118) != 0) {
            lVar30 = *(long *)(*(long *)(param_1 + 0x118) + 0x18);
            *(byte *)(lVar30 + 0x2ba) = *(byte *)(lVar30 + 0x2ba) & 0x87;
          }
          bVar10 = false;
          *(undefined4 *)(param_1 + 0x130) = 2;
        }
        goto LAB_0350aa54;
      }
      iVar12 = (**(code **)(*plVar40 + 0x88))(plVar40,*(undefined4 *)(param_1 + 0x148));
      if (iVar12 == 1) {
        uVar16 = 1;
LAB_0350aa34:
        iVar12 = (**(code **)(*(long *)(param_1 + 0x68) + 0x30))
                           (plVar32,*(undefined4 *)(param_1 + 0x148),uVar16);
        if (iVar12 == 1) goto LAB_0350aa50;
      }
      else if (iVar12 != 2) {
        uVar16 = 0;
        goto LAB_0350aa34;
      }
      if (*(long *)(param_1 + 0x118) != 0) {
        lVar30 = *(long *)(*(long *)(param_1 + 0x118) + 0x18);
        *(byte *)(lVar30 + 0x2ba) = *(byte *)(lVar30 + 0x2ba) & 0x87;
      }
      bVar34 = false;
      *(undefined4 *)(param_1 + 0x130) = 2;
      bVar10 = true;
    }
    else {
LAB_0350aa50:
      bVar10 = true;
LAB_0350aa54:
      bVar34 = true;
    }
    if (lVar20 != 0) {
      (**(code **)(*(long *)PTR_PTR_047e71e0 + 0x18))(PTR_PTR_047e71e0,lVar20);
    }
    bVar8 = bVar10;
    if (!bVar34) {
      return 0;
    }
  }
  if ((*(byte *)(param_1 + 0x150) & 1) != 0) {
    iVar12 = (**(code **)(*plVar40 + 0x88))(plVar40,*(undefined4 *)(param_1 + 0x148));
    if (iVar12 == 2) {
      if (*(long *)(param_1 + 0x118) != 0) {
        lVar20 = *(long *)(*(long *)(param_1 + 0x118) + 0x18);
        *(byte *)(lVar20 + 0x2ba) = *(byte *)(lVar20 + 0x2ba) & 0x87;
      }
      bVar8 = false;
      *(undefined4 *)(param_1 + 0x130) = 2;
    }
    else if (iVar12 == 1) {
      if ((*(int *)(param_1 + 0x148) == 0) && (*(int *)(param_1 + 0x14c) == 2)) {
        lVar20 = *(long *)(param_1 + 8);
        if (lVar20 != 0) {
          *(undefined4 *)(lVar20 + 0x29c) = 0;
          *(uint *)(lVar20 + 0x2a3) = *(uint *)(lVar20 + 0x2a3) & 0xfe3fffff;
        }
      }
      else if ((*(long *)(param_1 + 0x118) != 0) &&
              ((*(byte *)(*(long *)(param_1 + 0x118) + 0x20) & 1) != 0)) {
        (**(code **)(*(long *)(param_1 + 0x68) + 0x18))(plVar32);
        for (lVar20 = *(long *)(param_1 + 0x28); lVar20 != 0; lVar20 = *(long *)(lVar20 + 0x20)) {
          if (*(int *)(lVar20 + 0x188) != 0) {
            lVar30 = *(long *)(lVar20 + 0x180);
            do {
              *(undefined8 *)(lVar30 + 0x18) = 0;
              lVar30 = lVar30 + 0x158;
            } while (lVar30 != *(long *)(lVar20 + 0x180) + (ulong)*(uint *)(lVar20 + 0x188) * 0x158)
            ;
          }
        }
        iVar12 = (**(code **)(*plVar32 + 0x38))();
        if (iVar12 != 1) {
          if (*(long *)(param_1 + 0x118) != 0) {
            lVar20 = *(long *)(*(long *)(param_1 + 0x118) + 0x18);
            *(byte *)(lVar20 + 0x2ba) = *(byte *)(lVar20 + 0x2ba) & 0x87;
          }
          *(undefined4 *)(param_1 + 0x130) = 2;
        }
      }
      for (lVar20 = *(long *)(param_1 + 0x28); lVar20 != 0; lVar20 = *(long *)(lVar20 + 0x20)) {
        *(byte *)(lVar20 + 0x1d8) = *(byte *)(lVar20 + 0x1d8) | 2;
      }
    }
    *(byte *)(param_1 + 0x150) = *(byte *)(param_1 + 0x150) & 0xfe;
  }
  iVar12 = (int)plVar40[0x5b];
  if (-1 < iVar12) {
    *(int *)(plVar40 + 0x5b) = iVar12 - iVar17;
  }
  if (*(int *)(param_1 + 0x14c) != 0) {
    if ((*pbVar39 & 1) == 0) {
      if (bVar10) {
        FUN_034a4b68(plVar40,1);
      }
    }
    else if (bVar10 == false) {
      FUN_034a5e44(plVar40);
    }
  }
  *pbVar39 = bVar10;
  if ((bool)(bVar8 & iVar12 < iVar17)) {
    if ((*(byte *)(param_1 + 0x150) >> 1 & 1) == 0) {
      iVar17 = FUN_0350b104(param_1);
      if (iVar17 != 1) {
        if (*(long *)(param_1 + 0x118) != 0) {
          lVar20 = *(long *)(*(long *)(param_1 + 0x118) + 0x18);
          *(byte *)(lVar20 + 0x2ba) = *(byte *)(lVar20 + 0x2ba) & 0x87;
        }
        uVar16 = 0;
        *(undefined4 *)(param_1 + 0x130) = 2;
        goto LAB_0350afe0;
      }
      if ((*(ushort *)(plVar40 + 0x36) & 1) == 0) {
        (**(code **)(*plVar1 + 0x58))(plVar1,0);
      }
      else if ((*(ushort *)(plVar40 + 0x36) >> 4 & 1) != 0) {
        (**(code **)(*plVar1 + 0x60))();
      }
      *(undefined4 *)((long)plVar40 + 300) = 0x42ca0000;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x188);
      uVar18 = *(uint *)(param_1 + 0x48);
      *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) & 0xfd;
      fVar41 = DAT_047c66c4;
      if (uVar18 != 0) {
        plVar32 = *(long **)(param_1 + 0x40);
        plVar37 = plVar32;
        do {
          lVar20 = *plVar32;
          fVar44 = *(float *)(lVar20 + 0x1b0);
          if (*(float *)(lVar20 + 0x1b0) <= *(float *)(plVar32 + 1)) {
            fVar44 = *(float *)(plVar32 + 1);
          }
          fVar44 = *(float *)(lVar20 + 0x14) - fVar44;
          fVar42 = 0.0;
          if (-37.0 <= fVar44 * 0.05) {
            uVar14 = (uint)(fVar44 * 1393317.6 + 1.0653532e+09);
            fVar42 = (float)(uVar14 & 0x7fffff | 0x3f800000);
            fVar42 = (fVar42 * (fVar42 * 0.32518977 + 0.020805772) + 0.65304345) *
                     (float)(uVar14 & 0xff800000);
          }
          lVar30 = *(long *)(param_1 + 0x28);
          if (lVar30 != 0) {
            do {
              if (*(long *)(lVar30 + 0x1a0) == lVar20) {
                *(float *)(lVar30 + 0x1c8) = *(float *)(lVar30 + 0x1c8) * fVar42;
                fVar7 = *(float *)(lVar30 + 0x1cc) + fVar44;
                *(byte *)(lVar30 + 0x1d8) = *(byte *)(lVar30 + 0x1d8) & 0xfe | fVar7 <= fVar41;
                *(float *)(lVar30 + 0x1cc) = fVar7;
              }
              lVar30 = *(long *)(lVar30 + 0x20);
            } while (lVar30 != 0);
            plVar37 = *(long **)(param_1 + 0x40);
            uVar18 = *(uint *)(param_1 + 0x48);
          }
          plVar32 = plVar32 + 2;
        } while (plVar32 != plVar37 + (ulong)uVar18 * 2);
      }
      fVar41 = *(float *)((long)plVar40 + 0x204) + *(float *)((long)plVar40 + 0x8c);
      if (fVar41 == *(float *)(param_1 + 0x18c)) {
        fVar44 = *(float *)(param_1 + 400);
      }
      else {
        pfVar19 = (float *)plVar31[2];
        if (pfVar19 == (float *)0x0) {
          fVar42 = 1.0;
        }
        else {
          fVar42 = pfVar19[1];
          if ((*(byte *)(plVar31[3] + 0x106) >> 5 & 1) != 0) {
            fVar42 = *pfVar19 * fVar42;
          }
        }
        if (-37.0 <= fVar41 * 0.05) {
          uVar18 = (uint)(fVar41 * 1393317.6 + 1.0653532e+09);
          fVar44 = (float)(uVar18 & 0x7fffff | 0x3f800000);
          fVar44 = (fVar44 * (fVar44 * 0.32518977 + 0.020805772) + 0.65304345) *
                   (float)(uVar18 & 0xff800000);
        }
        else {
          fVar44 = 0.0;
        }
        fVar44 = fVar44 * fVar42;
        *(float *)(param_1 + 400) = fVar44;
        *(float *)(param_1 + 0x18c) = fVar41;
      }
      for (lVar20 = *(long *)(param_1 + 0x28); lVar20 != 0; lVar20 = *(long *)(lVar20 + 0x20)) {
        lVar30 = *(long *)(lVar20 + 0x180);
        *(undefined4 *)(lVar30 + 0x14c) = *(undefined4 *)(param_1 + 0x188);
        *(undefined1 *)(lVar30 + 0x150) = 0;
      }
      local_80 = (undefined4)plVar40[0x45];
      plVar32 = (long *)0x0;
      if (plVar40 != (long *)0x0) {
        plVar32 = plVar1;
      }
      puVar21 = (undefined4 *)0x0;
      if ((*(uint *)(plVar40 + 1) & 0x10) != 0) {
        puVar21 = &local_80;
      }
      FUN_034fec14(fVar44,param_1,plVar32,*(uint *)(plVar31[3] + 699) >> 0x1b & 1,puVar21);
    }
    uVar16 = 1;
  }
  else {
    uVar16 = 0;
  }
LAB_0350afe0:
  *pbVar39 = *pbVar39 | 2;
  return uVar16;
}



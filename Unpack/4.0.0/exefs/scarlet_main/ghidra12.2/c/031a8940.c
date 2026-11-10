/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031a8940; name: FUN_031a8940
 */


undefined8 FUN_031a8940(uint param_1,uint param_2,byte param_3,long *param_4,int *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined4 local_b8;
  undefined3 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0 [8];
  
  *(undefined4 *)(param_4 + 1) = 0;
  *param_5 = 0;
  if (param_2 == param_1) {
    iVar5 = (int)param_4[1];
    lVar7 = (long)iVar5;
    if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar5) {
      FUN_031affdc(param_4,lVar7 + 1);
      iVar5 = (int)param_4[1];
    }
    puVar11 = (undefined8 *)(*param_4 + (long)iVar5 * 0x20);
    *puVar11 = 0;
    *(uint *)(puVar11 + 1) = param_2;
    *(uint *)((long)puVar11 + 0xc) = param_2;
    puVar11[2] = 0;
    *(byte *)(puVar11 + 3) = param_3 & 1;
    uVar13 = (undefined4)local_b0;
    *(undefined4 *)((long)puVar11 + 0x1c) = local_b0._3_4_;
    *(undefined4 *)((long)puVar11 + 0x19) = uVar13;
    *(int *)(param_4 + 1) = (int)(lVar7 + 1);
  }
  else {
    uVar15 = param_1;
    if ((DAT_0487ea20 & 1) == 0) {
      FUN_031a8f64();
    }
    do {
      local_a0[0] = 0x7f7fffee00000000;
      local_b0 = (undefined8 *)0x0;
      local_a8 = 0;
      lVar7 = FUN_031b0150(uVar15,param_2);
      if (lVar7 == 0) {
        plVar8 = &local_b0;
      }
      else {
        plVar8 = (long *)(DAT_0487e9d8 + (long)*(int *)(lVar7 + 4) * 0x20 + 8);
      }
      lVar7 = *plVar8;
      if (lVar7 == 0) {
        return 0x80040200;
      }
      lVar10 = plVar8[1];
      uVar15 = *(uint *)((long)plVar8 + 0xc);
      lVar4 = plVar8[2];
      iVar5 = (int)param_4[1];
      uVar17 = (long)iVar5 + 1;
      iVar6 = iVar5;
      if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar5) {
        FUN_031affdc(param_4,uVar17);
        iVar6 = (int)param_4[1];
      }
      plVar8 = (long *)(*param_4 + (long)iVar6 * 0x20);
      *plVar8 = lVar7;
      *(int *)(plVar8 + 1) = (int)lVar10;
      *(uint *)((long)plVar8 + 0xc) = uVar15;
      *(byte *)(plVar8 + 3) = (byte)lVar4 & 1;
      uVar13 = (undefined4)local_b0;
      *(undefined4 *)((long)plVar8 + 0x1c) = local_b0._3_4_;
      *(undefined4 *)((long)plVar8 + 0x19) = uVar13;
      *(int *)(param_4 + 1) = (int)uVar17;
    } while (uVar15 != param_2);
    local_b0 = local_a0;
    if (*(char *)((long)&DAT_0487f14d + (ulong)param_2 * 0x38 + 7) == '\0') {
      uVar15 = (uint)(ushort)(&DAT_0487f130)[(ulong)param_2 * 0x1c];
    }
    else {
      lVar7 = (ulong)param_2 * 0x38;
      iVar6 = (uint)(byte)(&DAT_0487f133)[lVar7] * (uint)(byte)(&DAT_0487f132)[lVar7] *
              (uint)(byte)(&DAT_0487f134)[lVar7];
      uVar15 = 0;
      if (iVar6 != 0) {
        uVar15 = (int)((uint)(ushort)(&DAT_0487f130)[(ulong)param_2 * 0x1c] + iVar6 + -1) / iVar6;
      }
    }
    local_a0[0] = CONCAT44(local_a0[0]._4_4_,uVar15);
    local_a8 = -0x7fffffefffffffff;
    if (-1 < iVar5) {
      uVar18 = uVar17 & 0xffffffff;
      uVar9 = (long)(int)uVar17;
      do {
        uVar19 = uVar9 - 1;
        if ((int)uVar17 == (int)uVar9) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(undefined4 *)(*param_4 + (uVar9 & 0xffffffff) * 0x20 + 0x10);
        }
        *(undefined4 *)(*param_4 + uVar19 * 0x20 + 0x14) = uVar13;
        if (1 < (long)uVar9) {
          lVar10 = *param_4;
          lVar7 = lVar10 + uVar19 * 0x20;
          if (*(char *)(lVar7 + 0x18) == '\0') {
            uVar17 = (ulong)*(uint *)(lVar7 + 8);
            if (*(char *)((long)&DAT_0487f14d + uVar17 * 0x38 + 7) == '\0') {
              uVar15 = (uint)(ushort)(&DAT_0487f130)[uVar17 * 0x1c];
            }
            else {
              lVar4 = uVar17 * 0x38;
              iVar5 = (uint)(byte)(&DAT_0487f133)[lVar4] * (uint)(byte)(&DAT_0487f132)[lVar4] *
                      (uint)(byte)(&DAT_0487f134)[lVar4];
              uVar15 = 0;
              if (iVar5 != 0) {
                uVar15 = (int)((uint)(ushort)(&DAT_0487f130)[uVar17 * 0x1c] + iVar5 + -1) / iVar5;
              }
            }
            iVar5 = (int)local_a8;
            if ((int)local_a8 != 0) {
              iVar6 = 0;
              do {
                if ((*(int *)(lVar7 + 0x14) != iVar6) &&
                   (*(uint *)((long)local_b0 + (long)iVar6 * 4) == uVar15)) {
                  if (-1 < iVar6) goto LAB_031a8c38;
                  break;
                }
                iVar6 = iVar6 + 1;
              } while ((int)local_a8 != iVar6);
            }
            lVar7 = (long)(int)local_a8;
            if ((int)(local_a8._4_4_ & 0x7fffffff) <= (int)local_a8) {
              FUN_031afe64(&local_b0,lVar7 + 1);
            }
            *(uint *)((long)local_b0 + (long)(int)local_a8 * 4) = uVar15;
            local_a8 = CONCAT44(local_a8._4_4_,(int)(lVar7 + 1));
            lVar10 = *param_4;
            iVar6 = iVar5;
          }
          else {
            iVar6 = *(int *)(lVar7 + 0x14);
          }
LAB_031a8c38:
          *(int *)(lVar10 + uVar19 * 0x20 + 0x10) = iVar6;
        }
        if ((long)uVar18 < 2) break;
        uVar17 = (ulong)*(uint *)(param_4 + 1);
        uVar18 = uVar18 - 1;
        uVar9 = uVar19;
      } while( true );
    }
    iVar5 = (int)local_a8;
    if ((param_3 & 1) == 0) {
      *(int *)(*param_4 + 0x10) = (int)local_a8;
    }
    else {
      *(undefined4 *)(*param_4 + 0x10) = 0;
      lVar7 = *param_4;
      iVar6 = *(int *)(lVar7 + 0x10);
      if ((iVar6 == *(int *)(lVar7 + 0x14)) && (*(char *)(lVar7 + 0x18) == '\0')) {
        if ((int)param_4[1] == 1) {
          uVar17 = (ulong)*(uint *)(lVar7 + 8);
          if (*(char *)((long)&DAT_0487f14d + uVar17 * 0x38 + 7) == '\0') {
            uVar15 = (uint)(ushort)(&DAT_0487f130)[uVar17 * 0x1c];
          }
          else {
            lVar10 = uVar17 * 0x38;
            iVar16 = (uint)(byte)(&DAT_0487f133)[lVar10] * (uint)(byte)(&DAT_0487f132)[lVar10] *
                     (uint)(byte)(&DAT_0487f134)[lVar10];
            uVar15 = 0;
            if (iVar16 != 0) {
              uVar15 = (int)((uint)(ushort)(&DAT_0487f130)[uVar17 * 0x1c] + iVar16 + -1) / iVar16;
            }
          }
          if ((int)local_a8 != 0) {
            iVar16 = 0;
            do {
              if ((iVar6 != iVar16) && (*(uint *)((long)local_b0 + (long)iVar16 * 4) == uVar15)) {
                if (-1 < iVar16) goto LAB_031a8e08;
                break;
              }
              iVar16 = iVar16 + 1;
            } while ((int)local_a8 != iVar16);
          }
          lVar7 = (long)(int)local_a8;
          if ((int)(local_a8._4_4_ & 0x7fffffff) <= (int)local_a8) {
            FUN_031afe64(&local_b0,lVar7 + 1);
          }
          *(uint *)((long)local_b0 + (long)(int)local_a8 * 4) = uVar15;
          local_a8 = CONCAT44(local_a8._4_4_,(int)(lVar7 + 1));
          lVar7 = *param_4;
          iVar16 = iVar5;
LAB_031a8e08:
          *(int *)(lVar7 + 0x10) = iVar16;
          uVar15 = *(uint *)(param_4 + 1);
          if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= (int)uVar15) {
            FUN_031b01ec(param_4,(long)(int)uVar15 + 1);
          }
          puVar11 = (undefined8 *)*param_4;
          if (0 < (int)uVar15) {
            puVar14 = puVar11 + (ulong)(uVar15 - 1) * 4;
            puVar12 = puVar14 + 4;
            if (uVar15 - 1 != 0) {
              iVar5 = -(uVar15 & 0xfffffffe);
              do {
                puVar14 = puVar12;
                iVar5 = iVar5 + 2;
                *puVar14 = puVar14[-4];
                puVar14[1] = puVar14[-3];
                puVar14[2] = puVar14[-2];
                puVar14[3] = puVar14[-1];
                puVar12 = puVar14 + -8;
                puVar14[-4] = *puVar12;
                puVar14[-3] = puVar14[-7];
                puVar14[-2] = puVar14[-6];
                puVar14[-1] = puVar14[-5];
              } while (iVar5 != 0);
              puVar14 = puVar14 + -0xc;
            }
            if ((uVar15 & 1) != 0) {
              uVar1 = *puVar14;
              uVar2 = puVar14[1];
              uVar3 = puVar14[3];
              puVar12[2] = puVar14[2];
              puVar12[3] = uVar3;
              *puVar12 = uVar1;
              puVar12[1] = uVar2;
            }
          }
          *puVar11 = 0;
          *(uint *)(puVar11 + 1) = param_1;
          *(uint *)((long)puVar11 + 0xc) = param_1;
          *(int *)(puVar11 + 2) = iVar6;
          *(int *)((long)puVar11 + 0x14) = iVar16;
          *(undefined1 *)(puVar11 + 3) = 0;
          *(uint *)((long)puVar11 + 0x1c) = CONCAT31(uStack_b4,local_b8._3_1_);
          *(undefined4 *)((long)puVar11 + 0x19) = local_b8;
          *(int *)(param_4 + 1) = (int)((long)(int)uVar15 + 1);
        }
        else {
          *(undefined1 *)(lVar7 + 0x38) = 0;
          lVar7 = *param_4;
          uVar17 = (ulong)*(uint *)(lVar7 + 0x28);
          if (*(char *)((long)&DAT_0487f14d + uVar17 * 0x38 + 7) == '\0') {
            uVar15 = (uint)(ushort)(&DAT_0487f130)[uVar17 * 0x1c];
          }
          else {
            lVar10 = uVar17 * 0x38;
            iVar6 = (uint)(byte)(&DAT_0487f133)[lVar10] * (uint)(byte)(&DAT_0487f132)[lVar10] *
                    (uint)(byte)(&DAT_0487f134)[lVar10];
            uVar15 = 0;
            if (iVar6 != 0) {
              uVar15 = (int)((uint)(ushort)(&DAT_0487f130)[uVar17 * 0x1c] + iVar6 + -1) / iVar6;
            }
          }
          if ((int)local_a8 != 0) {
            iVar6 = 0;
            do {
              if ((*(int *)(lVar7 + 0x10) != iVar6) &&
                 (*(uint *)((long)local_b0 + (long)iVar6 * 4) == uVar15)) {
                if (-1 < iVar6) goto LAB_031a8f40;
                break;
              }
              iVar6 = iVar6 + 1;
            } while ((int)local_a8 != iVar6);
          }
          lVar7 = (long)(int)local_a8;
          if ((int)(local_a8._4_4_ & 0x7fffffff) <= (int)local_a8) {
            FUN_031afe64(&local_b0,lVar7 + 1);
          }
          *(uint *)((long)local_b0 + (long)(int)local_a8 * 4) = uVar15;
          local_a8 = CONCAT44(local_a8._4_4_,(int)(lVar7 + 1));
          lVar7 = *param_4;
          iVar6 = iVar5;
LAB_031a8f40:
          *(int *)(lVar7 + 0x30) = iVar6;
          *(undefined4 *)(*param_4 + 0x14) = *(undefined4 *)(*param_4 + 0x30);
        }
      }
    }
    lVar7 = local_a8;
    *param_5 = (int)local_a8 + -1;
    uVar17 = (ulong)local_a8._4_4_;
    local_a8 = (ulong)local_a8._4_4_ << 0x20;
    if ((-1 < lVar7) && (local_b0 != (undefined8 *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_b0,uVar17 << 2);
    }
  }
  return 0;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031f7e68; name: FUN_031f7e68
 */


void FUN_031f7e68(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  undefined8 uVar15;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x30));
  puVar4 = PTR_PTR_047d1a50;
  uVar8 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar8) {
    lVar6 = *(long *)(param_1 + 0x20);
    lVar13 = 0;
    iVar5 = 1;
    do {
      if (*(long *)(lVar6 + lVar13) == param_2) {
        iVar3 = iVar5 + -1;
        if (-1 < iVar3) {
          local_70 = 0;
          local_68 = -0x8000000000000000;
          local_80 = 0;
          local_78 = -0x8000000000000000;
          local_90 = (long *)0x0;
          local_88._0_4_ = 0;
          local_88._4_4_ = 0x80000000;
          puVar14 = *(ulong **)(lVar6 + lVar13);
          if (puVar14 != (ulong *)0x0) {
            do {
              uVar12 = puVar14[1];
              iVar1 = (int)local_88 + 1;
              if ((int)(local_88._4_4_ & 0x7fffffff) <= (int)local_88) {
                FUN_031bc928(&local_90,puVar4,(long)iVar1);
              }
              local_90[(int)local_88] = uVar12;
              local_88._0_4_ = iVar1;
              if (((byte)*puVar14 >> 1 & 1) == 0) {
                lVar6 = (long)(int)local_78;
                uVar12 = puVar14[1];
                if ((int)(local_78._4_4_ & 0x7fffffff) <= (int)local_78) {
                  FUN_031bc928(&local_80,puVar4,lVar6 + 1);
                }
                *(ulong *)(local_80 + (long)(int)local_78 * 8) = uVar12;
                local_78 = CONCAT44(local_78._4_4_,(int)(lVar6 + 1));
                uVar9 = puVar14[1];
                uVar8 = *(uint *)(param_1 + 0x8c);
                uVar12 = (ulong)((int)(uVar9 >> 4) * -0x61c8864f & uVar8);
                lVar6 = *(long *)(param_1 + 0x80);
                uVar10 = *(ulong *)(lVar6 + uVar12 * 0x10);
                if (uVar10 == 0xffffffffffffffff) {
LAB_031f7fe0:
                  uVar12 = (ulong)(uVar8 + 1);
                }
                else if (uVar10 != uVar9) {
                  do {
                    uVar12 = (ulong)((int)uVar12 + 1U & uVar8);
                    uVar10 = *(ulong *)(lVar6 + uVar12 * 0x10);
                    if (uVar10 == 0xffffffffffffffff) goto LAB_031f7fe0;
                  } while (uVar10 != uVar9);
                }
                if ((int)uVar12 <= (int)uVar8) {
                  uVar15 = *(undefined8 *)(lVar6 + ((long)(uVar12 << 0x20) >> 0x1c) + 8);
                  lVar6 = (long)(int)local_68;
                  if ((int)(local_68._4_4_ & 0x7fffffff) <= (int)local_68) {
                    FUN_031bc928(&local_70,puVar4,lVar6 + 1);
                  }
                  *(undefined8 *)(local_70 + (long)(int)local_68 * 8) = uVar15;
                  local_68 = CONCAT44(local_68._4_4_,(int)(lVar6 + 1));
                }
              }
              puVar14 = (ulong *)(*puVar14 & 0xfffffffffffffffc);
            } while (puVar14 != (ulong *)0x0);
            uVar8 = *(uint *)(param_1 + 0x28);
            lVar6 = *(long *)(param_1 + 0x20);
          }
          uVar2 = uVar8 - 1;
          uVar8 = uVar8 - iVar5;
          *(uint *)(param_1 + 0x28) = uVar2;
          if (uVar8 != 0) {
            uVar12 = -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3;
            if (uVar12 < 9) {
              uVar12 = 8;
            }
            if (uVar12 - 1 < 0x18) {
              uVar10 = 0;
            }
            else {
              uVar9 = (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3) +
                      (long)iVar3 * -8;
              if (uVar9 < 9) {
                uVar9 = 8;
              }
              uVar10 = 0;
              puVar11 = (undefined8 *)(lVar6 + lVar13 + 0x10);
              do {
                uVar10 = uVar10 + 4;
                puVar11[-2] = puVar11[-1];
                puVar11[-1] = *puVar11;
                *puVar11 = puVar11[1];
                puVar11[1] = puVar11[2];
                puVar11 = puVar11 + 4;
              } while (((uVar9 - 1 >> 3) + 1 & 0x3ffffffffffffffc) != uVar10);
            }
            if ((((uint)(uVar12 - 1 >> 3) & 0x1fffffff) + 1 & 3) != 0) {
              uVar12 = (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3) +
                       (long)iVar3 * -8;
              iVar5 = (int)uVar12;
              if (uVar12 < 9) {
                iVar5 = 8;
              }
              uVar12 = 0;
              do {
                puVar11 = (undefined8 *)(lVar6 + uVar10 * 8 + lVar13 + uVar12 * 8);
                uVar12 = uVar12 + 1;
                *puVar11 = puVar11[1];
              } while (((ulong)((iVar5 - 1U >> 3) + 1) & 3) != uVar12);
            }
          }
          lStack_b8 = local_70 + (long)(int)local_68 * 8;
          local_c0 = local_70;
          lStack_a8 = local_80 + (long)(int)local_78 * 8;
          local_a0 = 0;
          uStack_98 = 0;
          local_b0 = local_80;
          FUN_031f4b48(param_1,&local_c0);
          if ((int)local_88 != 0) {
            plVar7 = local_90;
            do {
              puVar14 = (ulong *)*plVar7;
              while( true ) {
                uVar8 = (uint)*puVar14;
                if ((uVar8 >> 0xd & 1) != 0) break;
                if (((*puVar14 & 1) != 0) ||
                   (puVar14 = (ulong *)puVar14[1], puVar14 == (ulong *)0x0)) goto LAB_031f81a8;
              }
              if (puVar14 != (ulong *)0x0) {
                uVar12 = CONCAT44(uVar8,uVar8) & 0x1fff00001fff;
                puVar14[(ulong)(byte)(POPCOUNT((char)uVar12) + POPCOUNT((char)(uVar12 >> 8))) + 2] =
                     0;
              }
LAB_031f81a8:
              plVar7 = plVar7 + 1;
            } while (plVar7 != local_90 + (int)local_88);
          }
          puVar4 = PTR_PTR_047d1a50;
          FUN_031f7120(param_1);
          local_d0 = 0;
          uStack_c8 = 0;
          local_e0 = 0;
          uStack_d8 = 0;
          local_f0 = 0;
          uStack_e8 = 0;
          FUN_031f4b48(param_1,&local_f0);
          uVar8 = local_88._4_4_;
          uVar12 = (ulong)local_88._4_4_;
          local_88 = (ulong)local_88._4_4_ << 0x20;
          if ((-1 < (int)uVar8) && (local_90 != (long *)0x0)) {
            (**(code **)(*(long *)puVar4 + 0x20))(puVar4,local_90,uVar12 << 3);
          }
          lVar13 = local_78;
          uVar12 = (ulong)local_78._4_4_;
          local_78 = (ulong)local_78._4_4_ << 0x20;
          if ((-1 < lVar13) && (local_80 != 0)) {
            (**(code **)(*(long *)puVar4 + 0x20))(puVar4,local_80,uVar12 << 3);
          }
          lVar13 = local_68;
          uVar12 = (ulong)local_68._4_4_;
          local_68 = (ulong)local_68._4_4_ << 0x20;
          if ((-1 < lVar13) && (local_70 != 0)) {
            (**(code **)(*(long *)puVar4 + 0x20))(puVar4,local_70,uVar12 << 3);
          }
        }
        break;
      }
      lVar13 = lVar13 + 8;
      iVar5 = iVar5 + 1;
    } while ((ulong)uVar8 * 8 != lVar13);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x30));
  return;
}



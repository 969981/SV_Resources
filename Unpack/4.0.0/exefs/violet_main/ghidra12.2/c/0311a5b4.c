/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0311a5b4; name: FUN_0311a5b4
 */


void FUN_0311a5b4(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong *puVar3;
  int *piVar4;
  uint uVar5;
  byte bVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  char cVar10;
  bool bVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  long *plVar22;
  undefined8 uVar23;
  long lVar24;
  undefined4 *puVar25;
  long lVar26;
  uint uVar27;
  long lVar28;
  long local_1e8;
  long local_1e0;
  uint local_1cc;
  undefined1 auStack_1c8 [8];
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0 [2];
  undefined4 local_d8 [2];
  ulong local_d0;
  undefined8 local_c8;
  ulong local_c0;
  undefined8 local_b8;
  long local_b0;
  ulong local_a8;
  ulong local_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  ulong local_78;
  ulong local_70 [2];
  
  local_1a0 = 0;
  local_1a8 = 0;
  uVar27 = 0;
  local_188 = 0;
  local_190 = 0;
  local_180 = 0;
  local_178 = 0;
  local_160 = 0;
  local_168 = 0;
  local_158 = 0;
  local_140 = 0;
  local_148 = 0;
  local_128 = 0;
  local_130 = 0;
  local_110 = 0;
  local_118 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  lVar17 = (long)(*(int *)(param_2 + 0x18) + 1);
  lVar12 = tpidr_el0;
  do {
    if ((((uVar27 & 3) == 0) && (*(long **)(param_2 + 0x10) != (long *)0x0)) &&
       (uVar14 = (**(code **)(**(long **)(param_2 + 0x10) + 0x10))(), (uVar14 & 1) != 0)) {
      return;
    }
    uVar27 = uVar27 + 1;
    puVar3 = (ulong *)(*(long *)(param_1 + 0x4c0) +
                      (long)*(int *)(*(long *)(param_1 + 0x70) + lVar17 * 0x40) * 0x40);
    do {
      uVar14 = *puVar3;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar11) {
        *puVar3 = uVar14 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if ((uint)uVar14 < (uint)(uVar14 >> 0x20)) {
      local_1cc = (uint)uVar14;
    }
    else {
      iVar13 = FUN_03232ac8(param_1 + 0x30,lVar17,1,&local_1cc);
      if (iVar13 == 0) {
        lVar17 = *(long *)(lVar12 + 0x1000b8);
        if (lVar17 == 0) {
          lVar17 = FUN_00e5d3b4();
          *(long *)(lVar12 + 0x1000b8) = lVar17;
        }
        FUN_03067494(auStack_1c8,*(undefined8 *)(lVar17 + 0x3e0));
        return;
      }
      uVar14 = (ulong)local_1cc;
    }
    lVar26 = *(long *)(param_1 + 0x918);
    puVar1 = (uint *)(*(long *)(lVar26 + 0x68) + (long)(int)uVar14 * 0x10);
    lVar21 = *(long *)(lVar26 + 0x50);
    uVar5 = *puVar1;
    plVar22 = *(long **)(puVar1 + 2);
    lVar24 = *(long *)(*(long *)(lVar21 + 0x38) + ((ulong)(uVar5 >> 0xe) & 0x3ff00));
    lVar18 = *(long *)(lVar24 + 0x20);
    uVar14 = (ulong)uVar5 & 0x3fffff;
    iVar13 = (int)uVar14;
    if ((*(int *)(lVar18 + 0x108) == 0) ||
       (bVar6 = *(byte *)(*(long *)(lVar18 + 0x100) + uVar14), (bVar6 & 1) == 0)) {
      plVar15 = (long *)(*(long *)(lVar24 + 0x38) + (*plVar22 >> 0x20) * 0x18);
      if ((char)plVar15[2] == '\x01') {
        lVar28 = *plVar15;
      }
      else {
        lVar28 = FUN_03065a74();
        lVar18 = *(long *)(lVar24 + 0x20);
      }
      iVar20 = iVar13 - *(int *)(lVar18 + 0x20);
      iVar9 = *(int *)(lVar18 + 0x50);
      lVar24 = (long)iVar9;
      if (iVar13 < *(int *)(lVar18 + 0x20)) {
        iVar20 = iVar13;
        if ((*(int *)(lVar18 + 0x98) == 0) ||
           (iVar20 = *(int *)(*(long *)(lVar18 + 0x90) + uVar14 * 4), iVar20 != -1)) {
          local_1e0 = *(long *)(lVar18 + 0x120) + (long)(iVar20 * iVar9) * 4;
          local_1e8 = local_1e0 + lVar24 * 4;
          lVar18 = *(long *)(lVar18 + 0xb0);
          goto LAB_0311a7b0;
        }
        local_1e0 = *(long *)(lVar18 + 0x48) + (long)(iVar9 * iVar13) * 4;
        puVar25 = (undefined4 *)(*(long *)(lVar18 + 0x18) + uVar14 * 0x10);
        local_1e8 = local_1e0 + lVar24 * 4;
      }
      else {
        local_1e0 = *(long *)(lVar18 + 0x140) + (long)(iVar9 * iVar20) * 4;
        local_1e8 = local_1e0 + lVar24 * 4;
        lVar18 = *(long *)(lVar18 + 0xd0);
LAB_0311a7b0:
        puVar25 = (undefined4 *)(lVar18 + (long)iVar20 * 0x10);
      }
      sVar7 = *(short *)(puVar25 + 2);
      local_98 = 0;
      local_90 = 0x8000000000000000;
      lVar18 = *(long *)(lVar12 + 0x1000b8);
      if (lVar18 == 0) {
        lVar18 = FUN_00e5d3b4();
        *(long *)(lVar12 + 0x1000b8) = lVar18;
      }
      local_88 = *(long *)(*(long *)(lVar18 + 0x3d0) + 0x10);
      if (*(long *)(local_88 + 8) != 0) {
        local_88 = 0;
      }
      local_d0 = -((ulong)(long)sVar7 >> 0x1f & 1) & 0xfffffff800000000 |
                 ((long)sVar7 & 0xffffffffU) << 3;
      local_78 = local_d0;
      if (local_88 == 0) {
        lVar18 = (**(code **)PTR_DAT_047d1a08)(1,&local_d0,0x40);
      }
      else {
        local_c0 = local_d0 + 0x3f & 0xffffffffffffffc0;
        if (local_c0 <= *(ulong *)(local_88 + 0x28)) {
          lVar18 = *(long *)(local_88 + 0x38);
          if (local_c0 + lVar18 <= *(ulong *)(local_88 + 0x40)) {
            *(ulong *)(local_88 + 0x38) = local_c0 + lVar18;
            goto LAB_0311a880;
          }
        }
        lVar18 = FUN_031cf3b4(local_88,&local_c0);
      }
LAB_0311a880:
      local_90 = CONCAT44((int)sVar7,(int)local_90) | 0x8000000000000000;
      sVar7 = *(short *)(puVar25 + 2);
      sVar8 = *(short *)((long)puVar25 + 10);
      local_c0 = 0;
      local_b8 = 0x8000000000000000;
      lVar24 = *(long *)(lVar12 + 0x1000b8);
      local_98 = lVar18;
      local_80 = lVar18;
      if (lVar24 == 0) {
        lVar24 = FUN_00e5d3b4();
        *(long *)(lVar12 + 0x1000b8) = lVar24;
      }
      uVar2 = (int)sVar8 + (int)sVar7;
      local_b0 = *(long *)(*(long *)(lVar24 + 0x3d0) + 0x10);
      if (*(long *)(local_b0 + 8) != 0) {
        local_b0 = 0;
      }
      local_a0 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
      local_70[0] = local_a0;
      if (local_b0 == 0) {
        uVar14 = (**(code **)PTR_DAT_047d1a08)(1,local_70,0x40);
      }
      else {
        local_d0 = local_a0 + 0x3f & 0xffffffffffffffc0;
        if (local_d0 <= *(ulong *)(local_b0 + 0x28)) {
          uVar14 = *(ulong *)(local_b0 + 0x38);
          if (local_d0 + uVar14 <= *(ulong *)(local_b0 + 0x40)) {
            *(ulong *)(local_b0 + 0x38) = local_d0 + uVar14;
            goto LAB_0311a938;
          }
        }
        uVar14 = FUN_031cf3b4(local_b0,&local_d0);
      }
LAB_0311a938:
      local_b8 = CONCAT44(uVar2,(undefined4)local_b8) | 0x8000000000000000;
      iVar20 = *(int *)PTR_DAT_047e4f38;
      local_d0 = 0;
      local_c8 = -0x8000000000000000;
      lVar18 = *(long *)(lVar12 + 0x1000b8);
      local_c0 = uVar14;
      local_a8 = uVar14;
      if (lVar18 == 0) {
        lVar18 = FUN_00e5d3b4();
        *(long *)(lVar12 + 0x1000b8) = lVar18;
      }
      if (*(long *)(lVar18 + (long)iVar20 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
      local_70[0] = CONCAT44((int)plVar22[3],(int)plVar22[3]);
      FUN_0306bd40(lVar21,plVar22[2],(ulong)uVar5,puVar25,local_1e0,local_1e8,lVar26 + 0x20,local_70
                   ,&local_98,&local_c0,&local_d0,auStack_1c8);
      iVar20 = *(int *)PTR_DAT_047e4f38;
      lVar18 = *(long *)(lVar12 + 0x1000b8);
      if (lVar18 == 0) {
        lVar18 = FUN_00e5d3b4();
        *(long *)(lVar12 + 0x1000b8) = lVar18;
      }
      if (*(long *)(lVar18 + (long)iVar20 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
      if (0 < (int)local_90) {
        if ((int)local_90 == 1) {
          uVar14 = 0;
        }
        else {
          lVar18 = 0;
          uVar14 = 0;
          do {
            uVar14 = uVar14 + 2;
            *(char *)(*(long *)(lVar28 + 0x60) + (long)*(int *)(local_98 + lVar18)) =
                 (char)(int)(((float)((int *)(local_98 + lVar18))[1] - *(float *)(lVar28 + 0x1c)) *
                            *(float *)(lVar28 + 0x24));
            lVar21 = local_98 + lVar18;
            lVar18 = lVar18 + 0x10;
            *(char *)(*(long *)(lVar28 + 0x60) + (long)*(int *)(lVar21 + 8)) =
                 (char)(int)((*(float *)(lVar21 + 0xc) - *(float *)(lVar28 + 0x1c)) *
                            *(float *)(lVar28 + 0x24));
          } while ((local_90 & 0xfffffffe) != uVar14);
        }
        if ((local_90 & 1) != 0) {
          piVar4 = (int *)(local_98 + uVar14 * 8);
          *(char *)(*(long *)(lVar28 + 0x60) + (long)*piVar4) =
               (char)(int)(((float)piVar4[1] - *(float *)(lVar28 + 0x1c)) *
                          *(float *)(lVar28 + 0x24));
        }
      }
      local_70[0] = CONCAT44(local_70[0]._4_4_,iVar13);
      FUN_03076e30(lVar28,local_70,&local_d0);
      local_d8[0] = *puVar25;
      local_e0[0] = puVar25[1];
      FUN_0307717c(lVar28,local_d8,(long)*(short *)(puVar25 + 2),local_e0,
                   (long)*(short *)((long)puVar25 + 10),&local_c0);
      lVar18 = local_c8;
      uVar14 = (ulong)local_c8._4_4_;
      local_c8 = (ulong)local_c8._4_4_ << 0x20;
      if ((-1 < lVar18) && (local_d0 != 0)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                  (PTR_PTR_047d1a50 + 0x20,local_d0,uVar14 << 2);
      }
      if (local_a8 == local_c0) {
        local_b8 = local_b8 & 0xffffffff00000000;
      }
      if (local_b0 == 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(1);
      }
      else {
        uVar14 = local_a0 + 0x3f & 0xffffffffffffffc0;
        if ((*(ulong *)(local_b0 + 0x28) < uVar14) ||
           (*(long *)(local_b0 + 0x38) != uVar14 + local_a8)) {
          if (local_a8 != 0) {
            if (*(ulong *)(local_b0 + 0x28) < uVar14 + 0x40) {
              *(int *)(*(long *)(local_b0 + 0x30) + 0x20) =
                   *(int *)(*(long *)(local_b0 + 0x30) + 0x20) + -1;
              (**(code **)(**(long **)(local_b0 + 0x10) + 0x18))
                        (*(long **)(local_b0 + 0x10),local_a8 - (long)*(int *)(local_a8 - 4),
                         uVar14 + 0x44);
            }
            else {
              if (*(long *)(local_b0 + 0x38) == uVar14 + local_a8) {
                *(ulong *)(local_b0 + 0x38) = local_a8;
                goto LAB_0311aca8;
              }
              FUN_031cf778();
            }
          }
        }
        else {
          *(ulong *)(local_b0 + 0x38) = local_a8;
          if (*(ulong *)(local_b0 + 0x48) == local_a8) {
LAB_0311aca8:
            FUN_031cf578();
          }
        }
      }
      uVar14 = local_b8;
      uVar19 = (ulong)local_b8._4_4_;
      local_b8 = (ulong)local_b8._4_4_ << 0x20;
      if ((-1 < (long)uVar14) && (local_c0 != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_c0,uVar19 << 3);
      }
      if (local_80 == local_98) {
        local_90 = local_90 & 0xffffffff00000000;
      }
      if (local_88 == 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(1);
      }
      else {
        uVar14 = local_78 + 0x3f & 0xffffffffffffffc0;
        if ((*(ulong *)(local_88 + 0x28) < uVar14) ||
           (*(long *)(local_88 + 0x38) != uVar14 + local_80)) {
          if (local_80 != 0) {
            if (*(ulong *)(local_88 + 0x28) < uVar14 + 0x40) {
              *(int *)(*(long *)(local_88 + 0x30) + 0x20) =
                   *(int *)(*(long *)(local_88 + 0x30) + 0x20) + -1;
              (**(code **)(**(long **)(local_88 + 0x10) + 0x18))
                        (*(long **)(local_88 + 0x10),local_80 - *(int *)(local_80 + -4),
                         uVar14 + 0x44);
            }
            else {
              if (*(long *)(local_88 + 0x38) == uVar14 + local_80) {
                *(long *)(local_88 + 0x38) = local_80;
                goto LAB_0311ada0;
              }
              FUN_031cf778();
            }
          }
        }
        else {
          *(long *)(local_88 + 0x38) = local_80;
          if (*(long *)(local_88 + 0x48) == local_80) {
LAB_0311ada0:
            FUN_031cf578();
          }
        }
      }
      uVar14 = local_90;
      uVar19 = (ulong)local_90._4_4_;
      local_90 = (ulong)local_90._4_4_ << 0x20;
      if ((-1 < (long)uVar14) && (local_98 != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_98,uVar19 << 3);
      }
    }
    else if ((bVar6 >> 1 & 1) == 0) {
      puVar16 = (undefined8 *)(*(long *)(lVar24 + 0x38) + (*plVar22 >> 0x20) * 0x18);
      if (*(char *)(puVar16 + 2) == '\x01') {
        uVar23 = *puVar16;
      }
      else {
        uVar23 = FUN_03065a74();
        lVar18 = *(long *)(lVar24 + 0x20);
      }
      iVar20 = iVar13 - *(int *)(lVar18 + 0x20);
      if (iVar13 < *(int *)(lVar18 + 0x20)) {
        uVar19 = uVar14;
        if ((*(int *)(lVar18 + 0x98) == 0) ||
           (uVar5 = *(uint *)(*(long *)(lVar18 + 0x90) + uVar14 * 4), uVar19 = (ulong)uVar5,
           uVar5 != 0xffffffff)) {
          iVar20 = (int)uVar19;
          lVar18 = *(long *)(lVar18 + 0xb0);
          goto LAB_0311ac64;
        }
        puVar25 = (undefined4 *)(*(long *)(lVar18 + 0x18) + uVar14 * 0x10);
      }
      else {
        lVar18 = *(long *)(lVar18 + 0xd0);
LAB_0311ac64:
        puVar25 = (undefined4 *)(lVar18 + (long)iVar20 * 0x10);
      }
      local_98 = CONCAT44(local_98._4_4_,iVar13);
      FUN_03076ffc(uVar23,&local_98);
      local_c0 = CONCAT44(local_c0._4_4_,*puVar25);
      local_d0 = CONCAT44(local_d0._4_4_,puVar25[1]);
      FUN_03077294(uVar23,&local_c0,(long)*(short *)(puVar25 + 2),&local_d0,
                   (long)*(short *)((long)puVar25 + 10));
    }
    iVar13 = *(int *)PTR_DAT_047e4f38;
    lVar18 = *(long *)(lVar12 + 0x1000b8);
    if (lVar18 == 0) {
      lVar18 = FUN_00e5d3b4();
      *(long *)(lVar12 + 0x1000b8) = lVar18;
    }
    if (*(long *)(lVar18 + (long)iVar13 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
  } while( true );
}



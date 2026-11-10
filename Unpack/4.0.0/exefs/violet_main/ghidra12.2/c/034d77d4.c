/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034d77d4; name: FUN_034d77d4
 */


undefined8 FUN_034d77d4(long param_1)

{
  void **ppvVar1;
  uint *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  void *__dest;
  uint uVar9;
  long lVar10;
  void **ppvVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined4 uVar15;
  size_t __n;
  ulong uVar16;
  void *pvVar17;
  uint local_10c;
  void *local_108;
  ulong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  uint local_e0 [2];
  void *local_d8;
  undefined4 local_d0 [4];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  byte local_b4;
  undefined1 local_b3;
  undefined2 uStack_b2;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  int local_90;
  uint uStack_8c;
  undefined2 local_88;
  long local_80;
  undefined1 auStack_78 [4];
  undefined4 local_74;
  undefined4 uStack_70;
  
  lVar10 = *(long *)(param_1 + 0x18);
  *(byte *)(param_1 + 0x20) =
       (byte)(*(uint *)(lVar10 + 699) >> 0x14) & 2 | *(byte *)(param_1 + 0x20) & 0xfd;
  plVar12 = (long *)(lVar10 + 0x18);
  if ((*(ushort *)(lVar10 + 0x1b0) & 1) == 0) {
    (**(code **)(*plVar12 + 0x58))(plVar12,0);
  }
  else if ((*(ushort *)(lVar10 + 0x1b0) >> 4 & 1) != 0) {
    (**(code **)(*plVar12 + 0x60))();
  }
  plVar12 = (long *)(param_1 + 0x40);
  if (*plVar12 == 0) {
    lVar10 = *(long *)(param_1 + 0x18);
    local_f0 = 0;
    local_e8 = 0;
    local_100 = *(ulong *)(lVar10 + 0x248);
    local_f8 = (ulong)CONCAT12((char)(int)*(float *)(lVar10 + 0x2c0),*(undefined2 *)(lVar10 + 0x2b8)
                              );
    if ((*(ushort *)(local_100 + 0xc) & 0x7c) == 0xc || (*(ushort *)(local_100 + 0xc) & 2) != 0) {
      local_f0 = *(undefined8 *)(lVar10 + 0x2e0);
      local_e8 = (ulong)*(uint *)(lVar10 + 0x2e8);
    }
    uVar7 = FUN_034d97a0(plVar12,&local_100);
    if ((int)uVar7 != 1) {
      return uVar7;
    }
  }
  puVar3 = PTR_DAT_047e2fd0;
  plVar8 = *(long **)(param_1 + 0xb8);
  if (plVar8 != (long *)0x0) goto LAB_034d78c8;
  uVar14 = 0;
  local_e0[0] = 0;
  ppvVar1 = (void **)(param_1 + 200);
  puVar2 = (uint *)(param_1 + 0xa0);
  local_d8 = (void *)0x0;
  local_108 = (void *)0x0;
  local_10c = 0;
  while( true ) {
    if ((*(byte *)(param_1 + 0x82) & 0x38) == 8) {
      local_108 = (void *)(*(long *)(param_1 + 0x50) + (ulong)*(uint *)(param_1 + 0x6c));
      local_10c = *(int *)(param_1 + 100) - *(uint *)(param_1 + 0x6c);
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) & 199 | 0x10;
    }
    else {
      *(undefined8 *)(param_1 + 0x58) = 0;
      (**(code **)(**(long **)(param_1 + 0x40) + 0x28))(*(long **)(param_1 + 0x40),&local_c0);
      local_b3 = *(undefined1 *)(param_1 + 0x48);
      (**(code **)(**(long **)(param_1 + 0x40) + 0x30))(*(long **)(param_1 + 0x40),&local_c0);
      iVar6 = (**(code **)(**(long **)(param_1 + 0x40) + 0x88))
                        (*(long **)(param_1 + 0x40),&local_108,&local_10c,*PTR_DAT_047e6980);
      if ((iVar6 != 0x11) && (iVar6 != 0x2d)) {
        if (iVar6 == 0x2e) {
          return 0x3f;
        }
        return 2;
      }
    }
    if (*ppvVar1 == (void *)0x0) {
      __n = (size_t)local_10c;
      ppvVar11 = &local_108;
    }
    else {
      uVar14 = (ulong)*(uint *)(param_1 + 0xc0);
      uVar9 = local_10c + *(uint *)(param_1 + 0xc0);
      __n = (size_t)uVar9;
      lVar10 = (**(code **)(puVar3 + 0x20))(5,*ppvVar1,__n);
      *(long *)(param_1 + 200) = lVar10;
      if (lVar10 == 0) {
        return 0x34;
      }
      memcpy((void *)(lVar10 + uVar14),local_108,(ulong)local_10c);
      *(uint *)(param_1 + 0xc0) = uVar9;
      ppvVar11 = ppvVar1;
    }
    pvVar17 = *ppvVar11;
    local_e0[0] = 0;
    local_d0[0] = 0;
    uVar7 = FUN_0347e990(pvVar17,__n,&local_100,puVar2,&local_e8,(long)&local_e8 + 4,&local_f0,
                         (long)&local_f0 + 4,local_e0,local_d0,0);
    if ((int)uVar7 != 8) break;
    if (*ppvVar1 == (void *)0x0) {
      __dest = (void *)(**(code **)(puVar3 + 0x10))(5,__n);
      *ppvVar1 = __dest;
      if (__dest == (void *)0x0) {
        return 0x34;
      }
      *(int *)(param_1 + 0xc0) = (int)__n;
      memcpy(__dest,pvVar17,__n);
    }
    if ((*(byte *)(param_1 + 0x82) & 0x38) == 0x10) {
      *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) & 0xdf | 0x18;
    }
    else {
      (**(code **)(*(long *)*plVar12 + 0x90))();
    }
    lVar10 = *(long *)(param_1 + 0xa8);
    if (lVar10 != 0) {
      uVar9 = *puVar2;
      if (uVar9 != 0) {
        lVar13 = 8;
        uVar16 = 1;
        while( true ) {
          if (*(long *)(lVar10 + lVar13) != 0) {
            (**(code **)(puVar3 + 0x30))(5);
            *(undefined8 *)(*(long *)(param_1 + 0xa8) + lVar13) = 0;
            uVar9 = *(uint *)(param_1 + 0xa0);
          }
          if (uVar9 <= uVar16) break;
          lVar10 = *(long *)(param_1 + 0xa8);
          uVar16 = uVar16 + 1;
          lVar13 = lVar13 + 0x10;
        }
        lVar10 = *(long *)(param_1 + 0xa8);
      }
      (**(code **)(puVar3 + 0x30))(5,lVar10);
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
    *puVar2 = 0;
  }
  if ((int)uVar7 != 1) {
    return uVar7;
  }
  *(byte *)(param_1 + 0xdc) =
       *(byte *)(param_1 + 0xdc) & 0xf7 | ((*(byte *)(param_1 + 0x82) & 0x3a) != 0) << 3;
  if (local_e8._4_4_ - 1U < (uint)local_e8) {
    return 7;
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (local_e0[0] != 0) {
    if ((*(byte *)(param_1 + 0x82) & 0x3a) == 0) {
      pvVar17 = (void *)(**(code **)(puVar3 + 0x10))(5);
      *(void **)(param_1 + 0x10) = pvVar17;
      if (pvVar17 == (void *)0x0) {
        return 0x34;
      }
      memcpy(pvVar17,local_d8,(ulong)local_e0[0]);
    }
    else {
      *(void **)(param_1 + 0x10) = local_d8;
    }
  }
  lVar10 = (**(code **)(param_1 + 0xb0))(&local_100);
  *(long *)(param_1 + 0xb8) = lVar10;
  if (lVar10 == 0) {
    return 0x34;
  }
  lVar10 = *(long *)(param_1 + 0x18);
  local_90 = *(int *)(lVar10 + 0x7c);
  uStack_8c = *(uint *)(lVar10 + 699) >> 0x1c & 7;
  local_88 = *(undefined2 *)(lVar10 + 0x2b8);
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_c0._0_2_ = 0;
  local_c0._2_2_ = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  local_b4 = 0;
  local_b3 = 0;
  uStack_b2 = 0;
  local_80 = param_1;
  (**(code **)(**(long **)(param_1 + 0x40) + 0x28))(*(long **)(param_1 + 0x40),(long)&local_a8 + 4);
  uVar7 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))
                    (*(long **)(param_1 + 0xb8),&local_100,&local_c0,&local_90);
  if ((int)uVar7 != 1) {
    return uVar7;
  }
  if (local_b0._4_4_ == 0) {
    return 7;
  }
  if ((uint)((int)local_f0 + local_f0._4_4_) < (uint)local_a0) {
    return 7;
  }
  if ((uint)((int)local_f0 + local_f0._4_4_) < local_a0._4_4_) {
    return 7;
  }
  if (local_a8._4_4_ == 0.0) {
    return 7;
  }
  if ((int)local_b0 == 0) {
    return 7;
  }
  lVar10 = *(long *)(param_1 + 0x18);
  *(ulong *)(lVar10 + 600) = CONCAT44(uStack_bc,CONCAT22(local_c0._2_2_,(undefined2)local_c0));
  *(uint *)(lVar10 + 0x25f) = CONCAT31((undefined3)uStack_b8,uStack_bc._3_1_);
  if (local_e8._4_4_ == 0) {
    local_e8 = CONCAT44(local_b0._4_4_ + -1,(uint)local_e8);
  }
  (**(code **)(**(long **)(param_1 + 0x40) + 0x30))(*(long **)(param_1 + 0x40),(long)&local_a8 + 4);
  (**(code **)(**(long **)(param_1 + 0x40) + 0x38))
            (*(long **)(param_1 + 0x40),local_a8 & 0xffffffff);
  *(int *)(param_1 + 0x74) = (int)local_f0 + local_f0._4_4_;
  *(uint *)(param_1 + 0x78) = (uint)local_a0;
  *(uint *)(param_1 + 0x7c) = local_a0._4_4_;
  *(undefined2 *)(param_1 + 0x80) = local_88;
  (**(code **)(**(long **)(param_1 + 0x40) + 0x28))(*(long **)(param_1 + 0x40),auStack_78);
  if (*(short *)(param_1 + 0x80) == 1) {
    local_74 = 0;
    uStack_70 = 0;
  }
  else {
    local_74 = *(undefined4 *)(param_1 + 0x78);
    uStack_70 = *(undefined4 *)(param_1 + 0x7c);
  }
  (**(code **)(**(long **)(param_1 + 0x40) + 0x30))(*(long **)(param_1 + 0x40),auStack_78);
  *(int *)(param_1 + 0x24) = (int)local_b0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(int *)(param_1 + 0x2c) = local_b0._4_4_;
  *(uint *)(param_1 + 0x30) = (uint)local_e8;
  *(int *)(param_1 + 0x34) = local_e8._4_4_;
  *(undefined2 *)(param_1 + 0x38) = local_88;
  *(int *)(param_1 + 0xd0) = local_f0._4_4_;
  *(ushort *)(param_1 + 0xd4) = uStack_98._4_2_;
  *(byte *)(param_1 + 0xdc) = *(byte *)(param_1 + 0xdc) & 0xf8 | local_b4 & 7;
  if ((uStack_98._4_2_ >> 4 & 1) == 0) {
    if ((uStack_98 & 0x100000000) != 0) {
      uVar15 = 1;
      goto LAB_034d7f60;
    }
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  else {
    uVar15 = 2;
LAB_034d7f60:
    *(undefined4 *)(param_1 + 0xd8) = uVar15;
  }
  if (*ppvVar1 != (void *)0x0) {
    (**(code **)(puVar3 + 0x30))(5);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  uVar7 = FUN_034d9b10(plVar12,local_108,local_10c);
  if ((int)uVar7 != 1) {
    return uVar7;
  }
  uVar9 = local_f0._4_4_ - (int)uVar14;
  plVar8 = *(long **)(param_1 + 0xb8);
  *(ulong *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + (ulong)uVar9;
  *(uint *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) - uVar9;
  *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar9;
LAB_034d78c8:
  uVar7 = (**(code **)(*plVar8 + 0x18))(plVar8,plVar12);
  if ((int)uVar7 != 1) {
    return uVar7;
  }
  lVar10 = *(long *)(param_1 + 0x18);
  if ((*(byte *)(lVar10 + 10) >> 6 & 1) != 0) {
    plVar8 = *(long **)(param_1 + 0x40);
    iVar6 = *(int *)(param_1 + 0x60);
    iVar4 = (**(code **)(*plVar8 + 0x58))(plVar8,&local_90);
    local_c0._0_2_ = 0;
    local_c0._2_2_ = 0;
    local_c0 = 0;
    if (iVar4 == 2) {
      uStack_bc = 2;
    }
    else {
      (**(code **)(*plVar8 + 0x28))(plVar8,&local_100);
      uVar9 = local_90 + iVar6;
      local_c0 = (int)((float)uVar9 / (float)local_100);
      uVar15 = 0x11;
      if (iVar4 != 0x11) {
        uVar5 = (**(code **)(*plVar8 + 0x60))(plVar8);
        uVar15 = 0x11;
        if (uVar9 < uVar5) {
          uVar15 = 1;
        }
      }
      uStack_bc = uVar15;
    }
    FUN_034b49fc(*(undefined8 *)PTR_DAT_047e6988,*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x228),
                 param_1,&local_c0);
    lVar10 = *(long *)(param_1 + 0x18);
  }
  if ((*(byte *)(lVar10 + 0x2bd) >> 6 & 1) != 0) {
    FUN_034d7fcc(param_1,&local_100,&local_c0);
    uVar7 = FUN_034d81ac(param_1,local_100 & 0xffffffff,(undefined2)local_c0);
    if ((int)uVar7 != 1) {
      return uVar7;
    }
  }
  if ((*(ushort *)(param_1 + 0xd4) & 0x11) != 1) {
    return 1;
  }
  if ((*(byte *)(param_1 + 0xdc) & 0x30) != 0) {
    return 1;
  }
  local_100 = CONCAT44(*(uint *)(*(long *)(param_1 + 0x18) + 699) >> 0x1c,
                       *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x7c)) & 0x7ffffffff;
  iVar6 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x28))
                    (*(long **)(param_1 + 0xb8),plVar12,param_1 + 0x24,&local_100,0);
  if (iVar6 != 0x34) {
    if (iVar6 == 0x11) {
      *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 4;
      return 1;
    }
    if (iVar6 != 2) {
      return 1;
    }
  }
  *(byte *)(param_1 + 0xdc) = *(byte *)(param_1 + 0xdc) | 0x40;
  return 1;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00772ed0; name: FUN_00772ed0
 */


void FUN_00772ed0(undefined8 param_1,long *param_2,undefined8 param_3,undefined1 *param_4,
                 long param_5,long param_6,long *param_7)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  bool bVar10;
  undefined *puVar11;
  void *pvVar12;
  long lVar13;
  long *plVar14;
  void *pvVar15;
  long lVar16;
  ulong uVar17;
  undefined8 local_118;
  ulong uStack_110;
  void *local_108;
  undefined8 local_100;
  ulong uStack_f8;
  void *local_f0;
  int local_e8 [2];
  byte local_e0;
  undefined7 uStack_df;
  ulong uStack_d8;
  void *local_d0;
  byte local_c8;
  undefined7 uStack_c7;
  ulong uStack_c0;
  void *local_b8;
  long *local_b0 [2];
  long local_a0;
  undefined4 local_80;
  uint uStack_7c;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar13 = (**(code **)(*param_2 + 0x48))(param_2);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  (**(code **)(*param_2 + 0x18))(local_b0,param_2,param_3,param_4,lVar13);
  puVar11 = PTR_DAT_047cbb08;
  plVar14 = (long *)(**(code **)(**(long **)PTR_DAT_047cbb08 + 0x128))
                              (*(long **)PTR_DAT_047cbb08,local_a0,0x280);
  *(undefined2 *)(plVar14 + 1) = 0;
  *(undefined1 *)(plVar14 + 5) = 0;
  plVar14[6] = 0;
  *(undefined2 *)(plVar14 + 7) = 0;
  plVar14[8] = 0;
  *(undefined4 *)(plVar14 + 9) = 0;
  *(undefined1 *)((long)plVar14 + 0x4c) = 0;
  plVar14[10] = 0;
  *(undefined1 *)(plVar14 + 0xd) = 0;
  plVar14[0xe] = 0;
  *(undefined1 *)(plVar14 + 0xf) = 0;
  *(undefined1 *)(plVar14 + 0x13) = 0;
  plVar14[0xb] = 0;
  plVar14[0xc] = 0;
  plVar14[0x16] = 0;
  plVar14[0x17] = 0;
  plVar14[0x10] = 0;
  plVar14[0x11] = 0;
  *(undefined8 *)((long)plVar14 + 0x8d) = 0;
  *plVar14 = (long)(PTR_DAT_047d0700 + 0x10);
  plVar14[0x1f] = 0;
  *(undefined4 *)(plVar14 + 0x22) = 0xffffffff;
  plVar14[0x1d] = (long)plVar14;
  plVar14[0x1e] = (long)plVar14;
  plVar14[0x20] = 0;
  plVar14[0x21] = 0;
  plVar14[0x23] = 0;
  plVar14[0x24] = 0;
  puVar1 = PTR_DAT_047cbe90 + 0x10;
  *(undefined1 *)(plVar14 + 0x25) = 0;
  plVar14[0x29] = 0;
  *(undefined2 *)(plVar14 + 0x2a) = 0;
  plVar14[0x26] = (long)puVar1;
  plVar14[0x27] = 0;
  *(undefined8 *)((long)plVar14 + 0x13d) = 0;
  plVar14[0x35] = 0;
  plVar14[0x2c] = 0;
  plVar14[0x2b] = 0;
  plVar14[0x32] = 0;
  plVar14[0x31] = 0;
  plVar14[0x34] = 0;
  plVar14[0x33] = 0;
  plVar14[0x2e] = 0;
  plVar14[0x2d] = 0;
  plVar14[0x30] = 0;
  plVar14[0x2f] = 0;
  plVar14[0x3f] = 0;
  plVar14[0x3c] = 0;
  plVar14[0x3b] = 0;
  plVar14[0x3e] = 0;
  plVar14[0x3d] = 0;
  plVar14[0x38] = 0;
  plVar14[0x37] = 0;
  plVar14[0x3a] = 0;
  plVar14[0x39] = 0;
  lVar13 = *param_7;
  lVar3 = param_7[1];
  if (lVar3 != 0) {
    plVar2 = (long *)(lVar3 + 8);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar10) {
        *plVar2 = *plVar2 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  lVar16 = param_7[2];
  plVar14[0x44] = local_a0;
  plVar14[0x45] = lVar13;
  plVar14[0x46] = lVar3;
  plVar14[0x48] = (long)plVar14;
  *(undefined4 *)(plVar14 + 0x49) = 0;
  plVar14[0x47] = lVar16;
  plVar14[0x4f] = 0;
  plVar14[0x4e] = 0;
  plVar14[0x4b] = 0;
  plVar14[0x4a] = 0;
  plVar14[0x4d] = 0;
  plVar14[0x4c] = 0;
  (**(code **)(**(long **)puVar11 + 0x118))();
  *(undefined4 *)(plVar14 + 0x42) = 0;
  plVar14[0x41] = (long)PTR_LAB_047cbec0;
  plVar14[6] = param_5;
  local_80 = 0;
  uStack_7c = uStack_7c & 0xffffff00;
  FUN_00772a24(local_e8,plVar14 + 6,param_5,&local_80);
  pvVar12 = local_d0;
  if (local_e8[0] == 0) {
    bVar4 = param_4[1];
    bVar5 = param_4[3];
    bVar6 = param_4[4];
    bVar7 = param_4[2];
    bVar8 = param_4[0x130];
    plVar14[3] = (long)(param_4 + 0x98);
    *(undefined1 *)(plVar14 + 5) = 0;
    *(undefined1 *)((long)plVar14 + 9) = 1;
    *(uint *)((long)plVar14 + 0xc) =
         (uint)bVar4 << 5 | (uint)bVar5 << 4 | (uint)bVar6 << 6 | (uint)bVar7 << 7 |
         (uint)bVar8 << 8;
    *param_4 = 1;
    plVar14[0xe] = (long)(param_4 + 0xb0);
    plVar14[0x10] = param_6;
    *(undefined1 *)(plVar14 + 0x12) = 1;
    *(undefined1 *)((long)plVar14 + 0x94) = 1;
    plVar14[0x16] = (long)(plVar14 + 0x49);
    plVar14[0x14] = (long)param_4;
    plVar14[0x15] = (long)(param_4 + 0xe8);
    (**(code **)(**(long **)puVar11 + 0x138))(&local_80);
    plVar14[0x1c] = lStack_68;
    plVar14[0x1b] = lStack_70;
    plVar14[0x1d] = (long)(plVar14 + 0x41);
    plVar14[0x1a] = lStack_78;
    plVar14[0x19] = CONCAT44(uStack_7c,local_80);
    (**(code **)(*local_b0[0] + 0x10))(local_b0[0],plVar14,local_b0);
    goto joined_r0x00773350;
  }
  if ((local_e0 & 1) == 0) {
    local_118 = CONCAT71(uStack_df,local_e0);
    local_108 = local_d0;
    uStack_110 = uStack_d8;
    if ((local_c8 & 1) != 0) goto LAB_0077320c;
LAB_007730e4:
    local_100 = CONCAT71(uStack_c7,local_c8);
    local_f0 = local_b8;
    uStack_f8 = uStack_c0;
  }
  else {
    if (uStack_d8 < 0x17) {
      pvVar15 = (void *)((long)&local_118 + 1);
      local_118 = CONCAT71(local_118._1_7_,(char)((int)uStack_d8 << 1));
    }
    else {
      if (0xffffffffffffffef < uStack_d8) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar17 = uStack_d8 + 0x10 & 0xfffffffffffffff0;
      pvVar15 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar17);
      local_118 = uVar17 | 1;
      uStack_110 = uStack_d8;
      local_108 = pvVar15;
    }
    memcpy(pvVar15,pvVar12,uStack_d8 + 1);
    if ((local_c8 & 1) == 0) goto LAB_007730e4;
LAB_0077320c:
    pvVar12 = local_b8;
    if (uStack_c0 < 0x17) {
      pvVar15 = (void *)((long)&local_100 + 1);
      local_100 = CONCAT71(local_100._1_7_,(char)((int)uStack_c0 << 1));
    }
    else {
      if (0xffffffffffffffef < uStack_c0) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar17 = uStack_c0 + 0x10 & 0xfffffffffffffff0;
      pvVar15 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar17);
      local_100 = uVar17 | 1;
      uStack_f8 = uStack_c0;
      local_f0 = pvVar15;
    }
    memcpy(pvVar15,pvVar12,uStack_c0 + 1);
  }
  *(int *)(plVar14 + 0x49) = local_e8[0];
  if ((plVar14[0x4a] & 1U) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,plVar14[0x4c]);
  }
  plVar14[0x4c] = (long)local_108;
  plVar14[0x4b] = uStack_110;
  plVar14[0x4a] = local_118;
  local_118 = local_118 & 0xffffffffffff0000;
  if ((*(byte *)(plVar14 + 0x4d) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,plVar14[0x4f]);
  }
  plVar14[0x4f] = (long)local_f0;
  plVar14[0x4e] = uStack_f8;
  plVar14[0x4d] = local_100;
  local_100 = local_100 & 0xffffffffffff0000;
  FUN_00226100(plVar14 + 0x41,1);
  if ((local_100 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_f0);
  }
  if ((local_118 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_108);
  }
joined_r0x00773350:
  if ((local_c8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_b8);
  }
  if ((local_e0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_d0);
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00509798; name: FUN_00509798
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00509798(long param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  size_t sVar8;
  void *pvVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 extraout_x1;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  byte local_e8 [16];
  undefined8 local_d8;
  undefined1 auStack_d0 [64];
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong local_78;
  size_t local_70;
  void *local_68;
  byte local_60 [8];
  ulong local_58;
  ulong local_50;
  ulong local_48;
  undefined8 local_38;
  
  uVar5 = FUN_0049f450(param_2,&local_38,&local_48);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  (**(code **)(*param_2 + 0x98))(param_2);
  FUN_004f2fb0(local_60,extraout_x1,param_2,local_38);
  local_78 = 0;
  local_70 = 0;
  local_68 = (void *)0x0;
  local_80 = 0;
  local_90 = 0;
  uStack_88 = 0;
                    /* try { // try from 00509804 to 00509813 has its CatchHandler @ 00509c24 */
  uVar5 = FUN_00520120(local_60,&local_78,&local_90);
  if ((uVar5 & 1) != 0) {
    plVar6 = *(long **)(param_1 + 0x50);
    if (plVar6 == (long *)0x0) {
      sVar8 = strlen(PTR_s_type_googleapis_com__047cc210);
      uVar5 = local_70;
      uVar1 = local_78;
      bVar2 = (byte)local_78;
      if ((local_78 & 1) == 0) {
        uVar5 = (ulong)((byte)local_78 >> 1);
        if (sVar8 != uVar5) {
          uVar10 = strlen(PTR_s_type_googleprod_com__047cdb70);
LAB_005098cc:
          if (uVar10 != uVar5) goto LAB_00509ad0;
          pvVar9 = (void *)((ulong)&local_78 | 1);
          goto LAB_00509910;
        }
        if (sVar8 == 0xffffffffffffffff) {
LAB_00509ba4:
                    /* try { // try from 00509ba4 to 00509bab has its CatchHandler @ 00509bb8 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_out_of_range();
        }
        pvVar9 = (void *)((ulong)&local_78 | 1);
LAB_00509894:
        if ((sVar8 != 0) &&
           (iVar4 = memcmp(pvVar9,PTR_s_type_googleapis_com__047cc210,sVar8), iVar4 != 0)) {
          uVar10 = strlen(PTR_s_type_googleprod_com__047cdb70);
          if ((uVar1 & 1) != 0) {
            uVar5 = local_70;
            if (uVar10 != local_70) goto LAB_00509ad0;
            goto LAB_00509904;
          }
          uVar5 = (ulong)(bVar2 >> 1);
          goto LAB_005098cc;
        }
      }
      else {
        if (sVar8 == local_70) {
          if (sVar8 == 0xffffffffffffffff) goto LAB_00509ba4;
          pvVar9 = local_68;
          goto LAB_00509894;
        }
        sVar8 = strlen(PTR_s_type_googleprod_com__047cdb70);
        if (sVar8 != uVar5) goto LAB_00509ad0;
LAB_00509904:
        if (uVar5 == 0xffffffffffffffff) {
                    /* try { // try from 00509bac to 00509bb3 has its CatchHandler @ 00509bb4 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_out_of_range();
        }
        pvVar9 = local_68;
LAB_00509910:
        if ((uVar5 != 0) &&
           (iVar4 = memcmp(pvVar9,PTR_s_type_googleprod_com__047cdb70,uVar5), iVar4 != 0))
        goto LAB_00509ad0;
      }
      lVar7 = (**(code **)(*param_2 + 0x98))(param_2);
      lVar7 = FUN_004a49b8(*(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x10),&local_90);
    }
    else {
                    /* try { // try from 00509828 to 00509947 has its CatchHandler @ 00509bc8 */
      lVar7 = (**(code **)(*plVar6 + 0x20))(plVar6,param_2,&local_78,&local_90);
    }
    if (lVar7 != 0) {
                    /* try { // try from 00509950 to 00509957 has its CatchHandler @ 00509bc4 */
      FUN_004ecde8(auStack_d0);
                    /* try { // try from 00509958 to 0050996f has its CatchHandler @ 00509bcc */
      plVar6 = (long *)FUN_004ed0e4(auStack_d0,lVar7);
      puVar11 = (undefined8 *)(**(code **)(*plVar6 + 0x18))();
                    /* try { // try from 00509978 to 00509987 has its CatchHandler @ 00509bbc */
      FUN_004f2fb0(local_e8,extraout_x1,param_2,local_48);
                    /* try { // try from 00509988 to 005099ff has its CatchHandler @ 00509bd8 */
      uVar5 = FUN_0052d318(puVar11,local_e8);
      if ((uVar5 & 1) == 0) {
        uVar13 = 0;
      }
      else {
        (**(code **)(*param_3 + 0x28))(param_3,&DAT_03be62d9,1);
        bVar3 = (local_60[0] & 1) != 0;
        uVar5 = (ulong)local_60 | 1;
        if (bVar3) {
          uVar5 = local_50;
        }
        uVar1 = (ulong)(local_60[0] >> 1);
        if (bVar3) {
          uVar1 = local_58;
        }
        (**(code **)(*param_3 + 0x28))(param_3,uVar5,uVar1);
        (**(code **)(*param_3 + 0x28))(param_3,&DAT_03c246fd,1);
        plVar6 = (long *)(param_1 + 0x28);
        plVar12 = (long *)*plVar6;
        if (plVar12 == (long *)0x0) {
LAB_00509a40:
          plVar14 = (long *)(param_1 + 0x18);
        }
        else {
          plVar14 = plVar6;
          do {
            if ((ulong)plVar12[4] >= local_48) {
              plVar14 = plVar12;
            }
            plVar12 = (long *)plVar12[(ulong)plVar12[4] < local_48];
          } while (plVar12 != (long *)0x0);
          if ((plVar14 == plVar6) || (local_48 < (ulong)plVar14[4])) goto LAB_00509a40;
          plVar14 = plVar14 + 5;
        }
        plVar14 = (long *)*plVar14;
                    /* try { // try from 00509a54 to 00509abf has its CatchHandler @ 00509bd4 */
        (**(code **)(*plVar14 + 0x70))
                  (plVar14,param_2,0xffffffff,0,*(undefined1 *)(param_1 + 4),param_3);
        (**(code **)(*param_3 + 0x10))(param_3);
        FUN_0050892c(param_1,puVar11,param_3);
        (**(code **)(*param_3 + 0x18))(param_3);
        (**(code **)(*plVar14 + 0x80))
                  (plVar14,param_2,0xffffffff,0,*(undefined1 *)(param_1 + 4),param_3);
        uVar13 = 1;
      }
      if ((local_e8[0] & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_d8);
      }
      if (puVar11 != (undefined8 *)0x0) {
        (**(code **)*puVar11)(puVar11);
        FUN_0049e790(PTR_LAB_047cba48,puVar11);
      }
      FUN_004ece4c(auStack_d0);
      goto joined_r0x00509ad8;
    }
  }
LAB_00509ad0:
  uVar13 = 0;
joined_r0x00509ad8:
  if ((local_90 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_80);
  }
  if ((local_78 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_68);
  }
  if ((local_60[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
  return uVar13;
}



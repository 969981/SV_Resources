/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a725cc; name: FUN_01a725cc
 */


undefined8 FUN_01a725cc(long *param_1,undefined8 *param_2)

{
  long lVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  ushort *puVar7;
  undefined8 local_e0;
  ulong local_d8;
  undefined1 local_d0;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [112];
  char local_28 [2];
  ushort local_26;
  
  if (((DAT_04839b78 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04839b78), iVar6 != 0)) {
    FUN_00100190(&LAB_00b1ecf8,&DAT_04839b68,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839b78);
  }
  lVar1 = DAT_04839b68;
  DAT_04839b60 = DAT_04839b68;
  if (DAT_04839b68 == 0) {
    return 0;
  }
  if (*(long *)(DAT_04839b68 + 0x40) == 0) {
LAB_01a727d0:
    if ((code *)*param_2 == (code *)0x0) {
      return 1;
    }
    local_e0 = CONCAT71(local_e0._1_7_,1);
    (*(code *)*param_2)(param_2 + 4,&local_e0);
    return 1;
  }
  if (((*param_1 != 0) && (*(short *)(*param_1 + 0x1a) != 0)) &&
     (*(char *)(DAT_04839b68 + 0x2c0) == '\0')) {
    puVar7 = *(ushort **)(DAT_04839b68 + 0x50);
    puVar2 = *(ushort **)(DAT_04839b68 + 0x58);
    if (puVar7 != puVar2) {
      do {
        if (((*(long *)(puVar7 + 0x3c) != 0) && (*(short *)(*(long *)(puVar7 + 0x3c) + 0x1a) != 0))
           && (*(long *)(puVar7 + 0x3c) == *param_1)) goto LAB_01a72710;
        puVar7 = puVar7 + 0x68;
      } while (puVar2 != puVar7);
      puVar7 = puVar2;
LAB_01a72710:
      if (puVar7 != *(ushort **)(DAT_04839b68 + 0x58)) {
        if (*(char *)((long)puVar7 + 0x71) == '\0') {
          puVar7[0x38] = 0x101;
          if ((code *)*param_2 != (code *)0x0) {
            local_e0 = CONCAT71(local_e0._1_7_,1);
            (*(code *)*param_2)(param_2 + 4,&local_e0);
          }
          uVar4 = (uint)*puVar7 | (uint)*puVar7 << 0xe;
          local_e0 = *(undefined8 *)(puVar7 + 4);
          local_d8 = CONCAT44(uVar4,uVar4) & 0x3fff00033fff0003;
          FUN_019da380(lVar1 + 0x370,&local_e0);
          return 1;
        }
        if ((char)puVar7[0x38] == '\0') {
          return 0;
        }
        goto LAB_01a727d0;
      }
    }
    puVar7 = *(ushort **)(DAT_04839b68 + 0x88);
    puVar2 = *(ushort **)(DAT_04839b68 + 0x90);
    if (puVar7 != puVar2) {
      lVar1 = DAT_04839b68 + 0x2c0;
      do {
        if (((*(long *)(puVar7 + 0x3c) != 0) && (*(short *)(*(long *)(puVar7 + 0x3c) + 0x1a) != 0))
           && (*(long *)(puVar7 + 0x3c) == *param_1)) goto LAB_01a727fc;
        puVar7 = puVar7 + 0x60;
      } while (puVar2 != puVar7);
      puVar7 = puVar2;
LAB_01a727fc:
      if (puVar7 != *(ushort **)(DAT_04839b68 + 0x90)) {
        uVar3 = *puVar7;
        FUN_01077654(local_28);
        if (local_28[0] != '\0') {
          local_c0 = 0;
          local_b8 = (code *)0x0;
          local_b0 = 0;
          local_a8 = 0;
          local_d8 = CONCAT44((uint)local_26 | (uint)local_26 << 0xe,
                              (uint)uVar3 | (uint)uVar3 << 0xe) & 0xffff0003ffff0003;
          local_e0 = *(undefined8 *)(puVar7 + 4);
          local_d0 = 0;
          if ((code *)param_2[2] != (code *)0x0) {
            (*(code *)param_2[2])(param_2 + 4,auStack_a0);
            local_a8 = param_2[3];
            local_b8 = (code *)param_2[1];
            local_c0 = *param_2;
            local_b0 = param_2[2];
          }
          FUN_01ebab48(lVar1,&local_e0);
          pcVar5 = local_b8;
          if (local_b8 != (code *)0x0) {
            local_b0 = 0;
            local_a8 = 0;
            local_c0 = 0;
            local_b8 = (code *)0x0;
            (*pcVar5)(auStack_a0);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}



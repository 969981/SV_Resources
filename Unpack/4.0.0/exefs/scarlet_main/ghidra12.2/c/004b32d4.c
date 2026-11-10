/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004b32d4; name: FUN_004b32d4
 */


void FUN_004b32d4(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  void *pvVar2;
  bool bVar3;
  undefined *puVar4;
  void *__dest;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  byte local_b8;
  undefined7 uStack_b7;
  undefined8 local_a8;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  undefined8 *local_88;
  undefined8 *local_78;
  undefined8 local_70;
  long local_68;
  
  puVar4 = PTR_LAB_047cba48;
  local_70 = 0;
  local_68 = 0;
  local_78 = &local_70;
  if (0 < *(int *)(param_2 + 0x74)) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      puVar7 = (undefined8 *)(*(long *)(param_2 + 0x38) + lVar9);
      puVar8 = (ulong *)*puVar7;
      if ((*puVar8 & 1) == 0) {
        uStack_98 = puVar8[1];
        local_a0 = *puVar8;
        local_90 = (void *)puVar8[2];
      }
      else {
        uVar1 = puVar8[1];
        pvVar2 = (void *)puVar8[2];
        if (uVar1 < 0x17) {
          local_a0 = CONCAT71(local_a0._1_7_,(char)((int)uVar1 << 1));
          __dest = (void *)((ulong)&local_a0 | 1);
        }
        else {
          if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 004b3890 to 004b3897 has its CatchHandler @ 004b3898 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          uVar13 = uVar1 + 0x10 & 0xfffffffffffffff0;
          __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar13);
          local_a0 = uVar13 | 1;
          uStack_98 = uVar1;
          local_90 = __dest;
        }
        memcpy(__dest,pvVar2,uVar1 + 1);
      }
                    /* try { // try from 004b33b8 to 004b33c7 has its CatchHandler @ 004b390c */
      local_88 = puVar7;
      puVar5 = (undefined8 *)FUN_004c8d08(&local_78,&local_b8,&local_a0);
      puVar11 = (undefined8 *)*puVar5;
      if (puVar11 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x40);
        pvVar2 = local_90;
        puVar11[5] = uStack_98;
        puVar11[4] = local_a0;
        uStack_98 = 0;
        local_90 = (void *)0x0;
        local_a0 = 0;
        puVar11[6] = pvVar2;
        puVar11[7] = local_88;
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = CONCAT71(uStack_b7,local_b8);
        *puVar5 = puVar11;
        if ((undefined8 *)*local_78 == (undefined8 *)0x0) {
          puVar5 = puVar11;
        }
        else {
          puVar5 = (undefined8 *)*puVar5;
          local_78 = (undefined8 *)*local_78;
        }
        FUN_010108e0(local_70,puVar5);
        bVar3 = false;
        local_68 = local_68 + 1;
      }
      else {
        bVar3 = true;
      }
      if ((local_a0 & 1) != 0) {
        FUN_0049e790(puVar4,local_90);
      }
      if ((bVar3) &&
         ((*(char *)(*(long *)(puVar11[7] + 0x20) + 0x4b) != '\0' ||
          (*(char *)(puVar7[4] + 0x4b) != '\0')))) {
        uVar12 = *(undefined8 *)(param_2 + 8);
                    /* try { // try from 004b3414 to 004b3423 has its CatchHandler @ 004b38e0 */
        FUN_004a8ec0(&local_b8,"Expanded map entry type ",*puVar7);
                    /* try { // try from 004b3424 to 004b3437 has its CatchHandler @ 004b38e4 */
        puVar8 = (ulong *)FUN_0021d540(&local_b8," conflicts with an existing nested message type.",
                                       0x30);
        uStack_98 = puVar8[1];
        local_a0 = *puVar8;
        local_90 = (void *)puVar8[2];
        puVar8[1] = 0;
        puVar8[2] = 0;
        *puVar8 = 0;
        plVar6 = *(long **)(param_1 + 0x10);
        if (plVar6 != (long *)0x0) {
                    /* try { // try from 004b3460 to 004b3477 has its CatchHandler @ 004b38a8 */
          (**(code **)(*plVar6 + 0x10))(plVar6,param_1 + 0x38,uVar12,param_3,0,&local_a0);
        }
        *(undefined1 *)(param_1 + 0x30) = 1;
        if ((local_a0 & 1) != 0) {
          FUN_0049e790(puVar4,local_90);
        }
        if ((local_b8 & 1) != 0) {
          FUN_0049e790(puVar4,local_a8);
        }
      }
                    /* try { // try from 004b34bc to 004b34c3 has its CatchHandler @ 004b3904 */
      FUN_004b32d4(param_1,*(long *)(param_2 + 0x38) + lVar9,
                   *(undefined8 *)(*(long *)(param_3 + 0x40) + lVar10 * 8 + 8));
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x90;
    } while (lVar10 < *(int *)(param_2 + 0x74));
  }
  puVar4 = PTR_LAB_047cba48;
  if (0 < *(int *)(param_2 + 0x68)) {
    lVar9 = 0;
    lVar10 = 0;
    do {
                    /* try { // try from 004b35a4 to 004b35ab has its CatchHandler @ 004b3900 */
      puVar7 = (undefined8 *)
               FUN_004c8e20(&local_78,*(undefined8 *)(*(long *)(param_2 + 0x28) + lVar9));
      if ((&local_70 != puVar7) && (*(char *)(((undefined8 *)puVar7[7])[4] + 0x4b) != '\0')) {
        uVar12 = *(undefined8 *)(param_2 + 8);
                    /* try { // try from 004b35cc to 004b35db has its CatchHandler @ 004b38d8 */
        FUN_004a8ec0(&local_b8,"Expanded map entry type ",*(undefined8 *)puVar7[7]);
                    /* try { // try from 004b35dc to 004b35eb has its CatchHandler @ 004b38dc */
        puVar8 = (ulong *)FUN_0021d540(&local_b8," conflicts with an existing field.",0x22);
        uStack_98 = puVar8[1];
        local_a0 = *puVar8;
        local_90 = (void *)puVar8[2];
        puVar8[1] = 0;
        puVar8[2] = 0;
        *puVar8 = 0;
        plVar6 = *(long **)(param_1 + 0x10);
        if (plVar6 != (long *)0x0) {
                    /* try { // try from 004b3614 to 004b362b has its CatchHandler @ 004b38a4 */
          (**(code **)(*plVar6 + 0x10))(plVar6,param_1 + 0x38,uVar12,param_3,0,&local_a0);
        }
        *(undefined1 *)(param_1 + 0x30) = 1;
        if ((local_a0 & 1) != 0) {
          FUN_0049e790(puVar4,local_90);
        }
        if ((local_b8 & 1) != 0) {
          FUN_0049e790(puVar4,local_a8);
        }
      }
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x98;
    } while (lVar10 < *(int *)(param_2 + 0x68));
  }
  puVar4 = PTR_LAB_047cba48;
  if (0 < *(int *)(param_2 + 0x78)) {
    lVar9 = 0;
    lVar10 = 0;
    do {
                    /* try { // try from 004b36a8 to 004b36af has its CatchHandler @ 004b38fc */
      puVar7 = (undefined8 *)
               FUN_004c8e20(&local_78,*(undefined8 *)(*(long *)(param_2 + 0x40) + lVar9));
      if ((&local_70 != puVar7) && (*(char *)(((undefined8 *)puVar7[7])[4] + 0x4b) != '\0')) {
        uVar12 = *(undefined8 *)(param_2 + 8);
                    /* try { // try from 004b36d0 to 004b36df has its CatchHandler @ 004b38d0 */
        FUN_004a8ec0(&local_b8,"Expanded map entry type ",*(undefined8 *)puVar7[7]);
                    /* try { // try from 004b36e0 to 004b36ef has its CatchHandler @ 004b38d4 */
        puVar8 = (ulong *)FUN_0021d540(&local_b8," conflicts with an existing enum type.",0x26);
        uStack_98 = puVar8[1];
        local_a0 = *puVar8;
        local_90 = (void *)puVar8[2];
        puVar8[1] = 0;
        puVar8[2] = 0;
        *puVar8 = 0;
        plVar6 = *(long **)(param_1 + 0x10);
        if (plVar6 != (long *)0x0) {
                    /* try { // try from 004b3718 to 004b372f has its CatchHandler @ 004b38a0 */
          (**(code **)(*plVar6 + 0x10))(plVar6,param_1 + 0x38,uVar12,param_3,0,&local_a0);
        }
        *(undefined1 *)(param_1 + 0x30) = 1;
        if ((local_a0 & 1) != 0) {
          FUN_0049e790(puVar4,local_90);
        }
        if ((local_b8 & 1) != 0) {
          FUN_0049e790(puVar4,local_a8);
        }
      }
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x50;
    } while (lVar10 < *(int *)(param_2 + 0x78));
  }
  puVar4 = PTR_LAB_047cba48;
  if (0 < *(int *)(param_2 + 0x6c)) {
    lVar9 = 0;
    lVar10 = 0;
    do {
                    /* try { // try from 004b37ac to 004b37b3 has its CatchHandler @ 004b38f8 */
      puVar7 = (undefined8 *)
               FUN_004c8e20(&local_78,*(undefined8 *)(*(long *)(param_2 + 0x30) + lVar9));
      if ((&local_70 != puVar7) && (*(char *)(((undefined8 *)puVar7[7])[4] + 0x4b) != '\0')) {
        uVar12 = *(undefined8 *)(param_2 + 8);
                    /* try { // try from 004b37d4 to 004b37e3 has its CatchHandler @ 004b38c8 */
        FUN_004a8ec0(&local_b8,"Expanded map entry type ",*(undefined8 *)puVar7[7]);
                    /* try { // try from 004b37e4 to 004b37f3 has its CatchHandler @ 004b38cc */
        puVar8 = (ulong *)FUN_0021d540(&local_b8," conflicts with an existing oneof type.",0x27);
        uStack_98 = puVar8[1];
        local_a0 = *puVar8;
        local_90 = (void *)puVar8[2];
        puVar8[1] = 0;
        puVar8[2] = 0;
        *puVar8 = 0;
        plVar6 = *(long **)(param_1 + 0x10);
        if (plVar6 != (long *)0x0) {
                    /* try { // try from 004b381c to 004b3833 has its CatchHandler @ 004b389c */
          (**(code **)(*plVar6 + 0x10))(plVar6,param_1 + 0x38,uVar12,param_3,0,&local_a0);
        }
        *(undefined1 *)(param_1 + 0x30) = 1;
        if ((local_a0 & 1) != 0) {
          FUN_0049e790(puVar4,local_90);
        }
        if ((local_b8 & 1) != 0) {
          FUN_0049e790(puVar4,local_a8);
        }
      }
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x30;
    } while (lVar10 < *(int *)(param_2 + 0x6c));
  }
  FUN_004c8cac(&local_78,local_70);
  return;
}



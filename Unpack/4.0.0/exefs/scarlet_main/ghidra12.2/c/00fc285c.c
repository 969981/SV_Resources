/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fc285c; name: FUN_00fc285c
 */


void FUN_00fc285c(long param_1)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  int iVar32;
  int *piVar33;
  long lVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  int iVar39;
  undefined4 *__dest;
  long *plVar40;
  undefined4 *puVar41;
  void *pvVar42;
  undefined8 uVar43;
  void *__src;
  int local_330;
  undefined4 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined2 local_284;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined1 auStack_268 [24];
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [64];
  undefined1 auStack_1f8 [64];
  undefined8 local_1b8;
  char *local_1b0;
  undefined8 uStack_1a8;
  long *local_1a0;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined8 local_c0;
  char *local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined1 auStack_a0 [24];
  undefined1 *local_88;
  char *local_80;
  undefined8 local_78;
  long *local_70;
  
  local_250 = *(undefined8 *)(param_1 + 0xfb0);
  local_248 = *(undefined8 *)(param_1 + 0xfb8);
  uStack_240 = *(undefined8 *)(param_1 + 0xfc0);
  FUN_00fb9f24(auStack_238,param_1 + 0xfc8);
  FUN_00fb9f24(auStack_1f8,param_1 + 0x1008);
  FUN_00fb4dd0(auStack_268,&local_250);
  *(undefined8 *)(param_1 + 0x1058) = *(undefined8 *)(param_1 + 0x1050);
  local_88 = &DAT_fbec41851566601b;
  local_80 = "values";
  local_78 = 6;
  local_70 = (long *)0x0;
  piVar33 = (int *)FUN_00efa07c(auStack_268,&local_88);
  if (piVar33 == (int *)0x0) {
    local_330 = 0;
  }
  else {
    local_330 = *piVar33;
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_330 != 0) {
    iVar39 = 0;
    do {
      local_70 = (long *)0x0;
      local_88 = &DAT_fbec41851566601b;
      local_80 = "values";
      local_78 = 6;
      FUN_00e90ee0(&local_280,auStack_268,&local_88,iVar39);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_2a0 = local_280;
      uStack_298 = uStack_278;
      local_290 = local_270;
      local_88 = (undefined1 *)0x778a568a77c65efb;
      local_284 = 0;
      local_70 = (long *)0x0;
      local_80 = "MotionCategory";
      local_78 = 0xe;
      piVar33 = (int *)FUN_00d27b5c(&local_2a0,&local_88);
      if (((piVar33 == (int *)0x0) || (*(ushort *)((long)piVar33 - (long)*piVar33) < 7)) ||
         (uVar35 = (ulong)((ushort *)((long)piVar33 - (long)*piVar33))[3], uVar35 == 0)) {
        local_2a8 = 0;
      }
      else {
        local_2a8 = *(undefined4 *)((long)piVar33 + uVar35);
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_1a0 = (long *)0x0;
      local_1b8 = 0x55101d62eb0df0f;
      local_1b0 = "ExistanceData";
      uStack_1a8 = 0xd;
      FUN_00d996a8(auStack_198,&local_2a0,&local_1b8);
      local_a8 = (long *)0x0;
      local_c0 = 0xa64abbe5b55e89e0;
      local_b8 = "Wait";
      uStack_b0 = 4;
      FUN_00d996a8(auStack_a0,auStack_198,&local_c0);
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0xd8c43314c3922e7e;
      local_80 = "FieldWait";
      local_78 = 9;
      bVar2 = FUN_00cf7518(auStack_a0,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0xe241e099c8fd36ce;
      local_80 = "BattleWait";
      local_78 = 10;
      bVar3 = FUN_00cf7518(auStack_a0,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0x886b2ded0386e84b;
      local_80 = "UniqueWait";
      local_78 = 10;
      bVar4 = FUN_00cf7518(auStack_a0,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      local_a8 = (long *)0x0;
      local_c0 = 0x742f30613d876119;
      local_b8 = "TriggerIdle";
      uStack_b0 = 0xb;
      FUN_00d996a8(auStack_d8,auStack_198,&local_c0);
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0xdf226deb3c981586;
      local_80 = "Idle1";
      local_78 = 5;
      bVar5 = FUN_00cf7518(auStack_d8,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0xdf226ceb3c9813d3;
      local_80 = "Idle2";
      local_78 = 5;
      bVar6 = FUN_00cf7518(auStack_d8,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      local_a8 = (long *)0x0;
      local_c0 = 0x2a98c4e6ffc10f60;
      local_b8 = "LoopEmotion";
      uStack_b0 = 0xb;
      FUN_00d996a8(auStack_f0,auStack_198,&local_c0);
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0xca888616ed3f9788;
      local_80 = "Sleep";
      local_78 = 5;
      bVar7 = FUN_00cf7518(auStack_f0,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0x6590f44fa4a8499c;
      local_80 = "Eat1";
      local_78 = 4;
      bVar8 = FUN_00cf7518(auStack_f0,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0x6590f74fa4a84eb5;
      local_80 = "Eat2";
      local_78 = 4;
      bVar9 = FUN_00cf7518(auStack_f0,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      local_a8 = (long *)0x0;
      local_c0 = 0xc7f0d57fd7568e38;
      local_b8 = "TriggerEmotion";
      uStack_b0 = 0xe;
      FUN_00d996a8(auStack_108,auStack_198,&local_c0);
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0x3fb9185cb1395d0b;
      local_80 = "Glad";
      local_78 = 4;
      bVar10 = FUN_00cf7518(auStack_108,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0xf17a4db84c9092b1;
      local_80 = "Notice";
      local_78 = 6;
      bVar11 = FUN_00cf7518(auStack_108,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0x7618b0bbfd613505;
      local_80 = "Hate";
      local_78 = 4;
      bVar12 = FUN_00cf7518(auStack_108,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0xef2a07af72d3e194;
      local_80 = "Refresh";
      local_78 = 7;
      bVar13 = FUN_00cf7518(auStack_108,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      local_a8 = (long *)0x0;
      local_c0 = 0x19ded615366a3e9b;
      local_b8 = "TriggerAttack";
      uStack_b0 = 0xd;
      FUN_00d996a8(auStack_120,auStack_198,&local_c0);
      local_88 = (undefined1 *)0x1ec4a7dbdbeaa744;
      local_80 = "Attack1";
      local_78 = 7;
      local_70 = (long *)0x0;
      bVar14 = FUN_00cf7518(auStack_120,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0x1ec4aadbdbeaac5d;
      local_80 = "Attack2";
      local_78 = 7;
      bVar15 = FUN_00cf7518(auStack_120,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0xb59f78e41992079e;
      local_80 = "RangeAttack";
      local_78 = 0xb;
      bVar16 = FUN_00cf7518(auStack_120,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0xe7e8260f7741205d;
      local_80 = "Roar";
      local_78 = 4;
      bVar17 = FUN_00cf7518(auStack_120,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      local_a8 = (long *)0x0;
      local_c0 = 0x2ae63b7c40d27c8;
      local_b8 = "TriggerDirectionAttack";
      uStack_b0 = 0x16;
      FUN_00d996a8(auStack_138,auStack_198,&local_c0);
      local_88 = (undefined1 *)0x1ec4a7dbdbeaa744;
      local_80 = "Attack1";
      local_78 = 7;
      local_70 = (long *)0x0;
      bVar18 = FUN_00cf7518(auStack_138,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_88 = (undefined1 *)0x1ec4a7dbdbeaa744;
      local_80 = "Attack1";
      local_78 = 7;
      local_70 = (long *)0x0;
      bVar19 = FUN_00cf7518(auStack_138,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_88 = (undefined1 *)0x1ec4a7dbdbeaa744;
      local_80 = "Attack1";
      local_78 = 7;
      local_70 = (long *)0x0;
      bVar20 = FUN_00cf7518(auStack_138,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      local_a8 = (long *)0x0;
      local_c0 = 0x36194cd8cb61db49;
      local_b8 = "TriggerDamae";
      uStack_b0 = 0xc;
      FUN_00d996a8(auStack_150,auStack_198,&local_c0);
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0xa3da8327c638cded;
      local_80 = "SmallDamage";
      local_78 = 0xb;
      bVar21 = FUN_00cf7518(auStack_150,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0xcffc555cd8c22405;
      local_80 = "LargeDamage";
      local_78 = 0xb;
      bVar22 = FUN_00cf7518(auStack_150,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      local_a8 = (long *)0x0;
      local_c0 = 0x999fc2833fa53e0f;
      local_b8 = "LoopWild";
      uStack_b0 = 8;
      FUN_00d996a8(auStack_168,auStack_198,&local_c0);
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0x9119860f46085817;
      local_80 = "Rest";
      local_78 = 4;
      bVar23 = FUN_00cf7518(auStack_168,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_88 = (undefined1 *)0xc3c56b685ddc575b;
      local_80 = "Free";
      local_78 = 4;
      local_70 = (long *)0x0;
      bVar24 = FUN_00cf7518(auStack_168,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      local_a8 = (long *)0x0;
      local_c0 = 0x99fe3eb48cea14e7;
      local_b8 = "TriggerWild";
      uStack_b0 = 0xb;
      FUN_00d996a8(auStack_180,auStack_198,&local_c0);
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0x6d20c7ac55cc51cb;
      local_80 = "LookAround";
      local_78 = 10;
      bVar25 = FUN_00cf7518(auStack_180,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_88 = (undefined1 *)0xc3c56b685ddc575b;
      local_80 = "Free";
      local_78 = 4;
      local_70 = (long *)0x0;
      bVar26 = FUN_00cf7518(auStack_180,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0x751e6f1b9a12e781;
      local_80 = "Stepout";
      local_78 = 7;
      bVar27 = FUN_00cf7518(auStack_198,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0x89658dc8996a990d;
      local_80 = "Jump";
      local_78 = 4;
      bVar28 = FUN_00cf7518(auStack_198,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0x20672956e80eea95;
      local_80 = "Down";
      local_78 = 4;
      bVar29 = FUN_00cf7518(auStack_198,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0x4a2a7b03bc264001;
      local_80 = "Stun";
      local_78 = 4;
      bVar30 = FUN_00cf7518(auStack_198,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0xe4712204b7e9c46;
      local_80 = "BlinkEye";
      local_78 = 8;
      bVar31 = FUN_00cf7518(auStack_198,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      bVar2 = bVar2 & 1;
      bVar3 = bVar3 & 1;
      bVar4 = bVar4 & 1;
      bVar5 = bVar5 & 1;
      bVar6 = bVar6 & 1;
      bVar7 = bVar7 & 1;
      bVar8 = bVar8 & 1;
      bVar9 = bVar9 & 1;
      bVar10 = bVar10 & 1;
      bVar11 = bVar11 & 1;
      bVar12 = bVar12 & 1;
      bVar13 = bVar13 & 1;
      bVar14 = bVar14 & 1;
      bVar15 = bVar15 & 1;
      bVar16 = bVar16 & 1;
      bVar17 = bVar17 & 1;
      bVar18 = bVar18 & 1;
      bVar19 = bVar19 & 1;
      bVar20 = bVar20 & 1;
      bVar21 = bVar21 & 1;
      bVar24 = bVar24 & 1;
      bVar25 = bVar25 & 1;
      bVar22 = bVar22 & 1;
      bVar23 = bVar23 & 1;
      bVar26 = bVar26 & 1;
      bVar27 = bVar27 & 1;
      bVar30 = bVar30 & 1;
      bVar28 = bVar28 & 1;
      bVar29 = bVar29 & 1;
      bVar31 = bVar31 & 1;
      if (local_1a0 != (long *)0x0) {
        (**(code **)(*local_1a0 + 0x20))();
      }
      puVar41 = *(undefined4 **)(param_1 + 0x1058);
      if (puVar41 == *(undefined4 **)(param_1 + 0x1060)) {
        uVar35 = *(ulong *)(param_1 + 0x1070);
        lVar37 = (long)puVar41 - *(long *)(param_1 + 0x1050) >> 2;
        if (0x7ffffffffffffffe < uVar35) {
          uVar35 = 0x7fffffffffffffff;
        }
        uVar1 = lVar37 * -0x71c71c71c71c71c7 + 1;
        if (uVar35 < uVar1) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar36 = (long)*(undefined4 **)(param_1 + 0x1060) - *(long *)(param_1 + 0x1050) >> 2;
        uVar38 = lVar36 * 0x1c71c71c71c71c72;
        if (uVar1 <= uVar38) {
          uVar1 = uVar38;
        }
        if (uVar35 >> 1 <= (ulong)(lVar36 * -0x71c71c71c71c71c7)) {
          uVar1 = uVar35;
        }
        if (uVar1 == 0) {
          lVar36 = 0;
        }
        else {
          lVar36 = (**(code **)(**(long **)(param_1 + 0x1068) + 0x10))
                             (*(long **)(param_1 + 0x1068),uVar1 * 0x24,4);
          if (lVar36 == 0) {
            (**(code **)(**(long **)(param_1 + 0x1068) + 0xe8))();
          }
        }
        puVar41 = (undefined4 *)(lVar36 + lVar37 * 4);
        uVar43 = *(undefined8 *)(param_1 + 0x1068);
        if (((DAT_04865a38 & 1) == 0) && (iVar32 = __cxa_guard_acquire(&DAT_04865a38), iVar32 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar34 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar34 == 0) {
          *puVar41 = local_2a8;
          lVar37 = lVar36 + lVar37 * 4;
          *(byte *)(lVar37 + 4) = bVar2;
          *(byte *)(lVar37 + 5) = bVar3;
          *(byte *)(lVar37 + 6) = bVar4;
          *(byte *)(lVar37 + 7) = bVar5;
          *(byte *)(lVar37 + 8) = bVar6;
          *(byte *)(lVar37 + 9) = bVar7;
          *(byte *)(lVar37 + 10) = bVar8;
          *(byte *)(lVar37 + 0xb) = bVar9;
          *(byte *)(lVar37 + 0xc) = bVar10;
          *(byte *)(lVar37 + 0xd) = bVar11;
          *(byte *)(lVar37 + 0xe) = bVar12;
          *(byte *)(lVar37 + 0xf) = bVar13;
          *(byte *)(lVar37 + 0x10) = bVar14;
          *(byte *)(lVar37 + 0x11) = bVar15;
          *(byte *)(lVar37 + 0x12) = bVar16;
          *(byte *)(lVar37 + 0x13) = bVar17;
          *(byte *)(lVar37 + 0x14) = bVar18;
          *(byte *)(lVar37 + 0x15) = bVar19;
          *(byte *)(lVar37 + 0x16) = bVar20;
          *(byte *)(lVar37 + 0x17) = bVar21;
          *(byte *)(lVar37 + 0x18) = bVar22;
          *(byte *)(lVar37 + 0x19) = bVar23;
          *(byte *)(lVar37 + 0x1c) = bVar26;
          *(byte *)(lVar37 + 0x1d) = bVar27;
          *(byte *)(lVar37 + 0x1e) = bVar28;
          *(byte *)(lVar37 + 0x1a) = bVar24;
          *(byte *)(lVar37 + 0x1b) = bVar25;
          *(byte *)(lVar37 + 0x20) = bVar30;
          *(byte *)(lVar37 + 0x21) = bVar31;
          *(byte *)(lVar37 + 0x1f) = bVar29;
          *(undefined2 *)((long)puVar41 + 0x22) = local_284;
        }
        else {
          if (0xf < *(ulong *)(lVar34 + 0x80)) {
LAB_00fc3cec:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar34 + *(ulong *)(lVar34 + 0x80) * 8) = uVar43;
          *(long *)(lVar34 + 0x80) = *(long *)(lVar34 + 0x80) + 1;
          *puVar41 = local_2a8;
          lVar37 = lVar36 + lVar37 * 4;
          *(byte *)(lVar37 + 4) = bVar2;
          *(byte *)(lVar37 + 5) = bVar3;
          *(byte *)(lVar37 + 6) = bVar4;
          *(byte *)(lVar37 + 7) = bVar5;
          *(byte *)(lVar37 + 8) = bVar6;
          *(byte *)(lVar37 + 9) = bVar7;
          *(byte *)(lVar37 + 10) = bVar8;
          *(byte *)(lVar37 + 0xb) = bVar9;
          *(byte *)(lVar37 + 0xc) = bVar10;
          *(byte *)(lVar37 + 0xd) = bVar11;
          *(byte *)(lVar37 + 0xe) = bVar12;
          *(byte *)(lVar37 + 0xf) = bVar13;
          *(byte *)(lVar37 + 0x10) = bVar14;
          *(byte *)(lVar37 + 0x11) = bVar15;
          *(byte *)(lVar37 + 0x12) = bVar16;
          *(byte *)(lVar37 + 0x13) = bVar17;
          *(byte *)(lVar37 + 0x14) = bVar18;
          *(byte *)(lVar37 + 0x15) = bVar19;
          *(byte *)(lVar37 + 0x16) = bVar20;
          *(byte *)(lVar37 + 0x17) = bVar21;
          *(byte *)(lVar37 + 0x18) = bVar22;
          *(byte *)(lVar37 + 0x19) = bVar23;
          *(byte *)(lVar37 + 0x1c) = bVar26;
          *(byte *)(lVar37 + 0x1d) = bVar27;
          *(byte *)(lVar37 + 0x1e) = bVar28;
          *(byte *)(lVar37 + 0x1a) = bVar24;
          *(byte *)(lVar37 + 0x1b) = bVar25;
          *(byte *)(lVar37 + 0x20) = bVar30;
          *(byte *)(lVar37 + 0x21) = bVar31;
          *(byte *)(lVar37 + 0x1f) = bVar29;
          *(undefined2 *)((long)puVar41 + 0x22) = local_284;
          *(long *)(lVar34 + 0x80) = *(long *)(lVar34 + 0x80) + -1;
        }
        pvVar42 = *(void **)(param_1 + 0x1050);
        __src = *(void **)(param_1 + 0x1058);
        __dest = puVar41;
        if (__src != pvVar42) {
          do {
            uVar43 = *(undefined8 *)(param_1 + 0x1068);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar32 = __cxa_guard_acquire(&DAT_04865a38), iVar32 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            __dest = __dest + -9;
            __src = (void *)((long)__src + -0x24);
            lVar37 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar37 == 0) {
              memcpy(__dest,__src,0x24);
            }
            else {
              if (0xf < *(ulong *)(lVar37 + 0x80)) goto LAB_00fc3cec;
              *(undefined8 *)(lVar37 + *(ulong *)(lVar37 + 0x80) * 8) = uVar43;
              *(long *)(lVar37 + 0x80) = *(long *)(lVar37 + 0x80) + 1;
              memcpy(__dest,__src,0x24);
              *(long *)(lVar37 + 0x80) = *(long *)(lVar37 + 0x80) + -1;
            }
          } while (pvVar42 != __src);
          pvVar42 = *(void **)(param_1 + 0x1050);
        }
        *(undefined4 **)(param_1 + 0x1058) = puVar41 + 9;
        lVar37 = *(long *)(param_1 + 0x1060);
        *(undefined4 **)(param_1 + 0x1050) = __dest;
        *(ulong *)(param_1 + 0x1060) = lVar36 + uVar1 * 0x24;
        if (pvVar42 != (void *)0x0) {
          plVar40 = *(long **)(param_1 + 0x1068);
          lVar37 = lVar37 - (long)pvVar42;
          uVar35 = (**(code **)(*plVar40 + 0xf8))(plVar40);
          if (((uVar35 & 1) == 0) || (lVar36 = FUN_00c4e600(), *(int *)(lVar36 + 0x12c8) < 1)) {
            (**(code **)(*plVar40 + 0x18))(plVar40,pvVar42,lVar37,4);
          }
          else {
            FUN_00c48fe8(plVar40,pvVar42,lVar37,4);
          }
        }
      }
      else {
        uVar43 = *(undefined8 *)(param_1 + 0x1068);
        if (((DAT_04865a38 & 1) == 0) && (iVar32 = __cxa_guard_acquire(&DAT_04865a38), iVar32 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar37 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar37 == 0) {
          *puVar41 = local_2a8;
          *(byte *)(puVar41 + 1) = bVar2;
          *(byte *)((long)puVar41 + 5) = bVar3;
          *(byte *)((long)puVar41 + 6) = bVar4;
          *(byte *)((long)puVar41 + 7) = bVar5;
          *(byte *)(puVar41 + 2) = bVar6;
          *(byte *)((long)puVar41 + 9) = bVar7;
          *(byte *)((long)puVar41 + 10) = bVar8;
          *(byte *)((long)puVar41 + 0xb) = bVar9;
          *(byte *)(puVar41 + 3) = bVar10;
          *(byte *)((long)puVar41 + 0xd) = bVar11;
          *(byte *)((long)puVar41 + 0xe) = bVar12;
          *(byte *)((long)puVar41 + 0xf) = bVar13;
          *(byte *)(puVar41 + 4) = bVar14;
          *(byte *)((long)puVar41 + 0x11) = bVar15;
          *(byte *)((long)puVar41 + 0x12) = bVar16;
          *(byte *)((long)puVar41 + 0x13) = bVar17;
          *(byte *)(puVar41 + 5) = bVar18;
          *(byte *)((long)puVar41 + 0x15) = bVar19;
          *(byte *)((long)puVar41 + 0x16) = bVar20;
          *(byte *)((long)puVar41 + 0x17) = bVar21;
          *(byte *)(puVar41 + 6) = bVar22;
          *(byte *)((long)puVar41 + 0x19) = bVar23;
          *(byte *)(puVar41 + 7) = bVar26;
          *(byte *)((long)puVar41 + 0x1d) = bVar27;
          *(byte *)((long)puVar41 + 0x1a) = bVar24;
          *(byte *)((long)puVar41 + 0x1b) = bVar25;
          *(byte *)((long)puVar41 + 0x1f) = bVar29;
          *(byte *)(puVar41 + 8) = bVar30;
          *(byte *)((long)puVar41 + 0x1e) = bVar28;
          *(byte *)((long)puVar41 + 0x21) = bVar31;
          *(undefined2 *)((long)puVar41 + 0x22) = local_284;
        }
        else {
          if (0xf < *(ulong *)(lVar37 + 0x80)) goto LAB_00fc3cec;
          *(undefined8 *)(lVar37 + *(ulong *)(lVar37 + 0x80) * 8) = uVar43;
          *(long *)(lVar37 + 0x80) = *(long *)(lVar37 + 0x80) + 1;
          *puVar41 = local_2a8;
          *(byte *)(puVar41 + 1) = bVar2;
          *(byte *)((long)puVar41 + 5) = bVar3;
          *(byte *)((long)puVar41 + 6) = bVar4;
          *(byte *)((long)puVar41 + 7) = bVar5;
          *(byte *)(puVar41 + 2) = bVar6;
          *(byte *)((long)puVar41 + 9) = bVar7;
          *(byte *)((long)puVar41 + 10) = bVar8;
          *(byte *)((long)puVar41 + 0xb) = bVar9;
          *(byte *)(puVar41 + 3) = bVar10;
          *(byte *)((long)puVar41 + 0xd) = bVar11;
          *(byte *)((long)puVar41 + 0xe) = bVar12;
          *(byte *)((long)puVar41 + 0xf) = bVar13;
          *(byte *)(puVar41 + 4) = bVar14;
          *(byte *)((long)puVar41 + 0x11) = bVar15;
          *(byte *)((long)puVar41 + 0x12) = bVar16;
          *(byte *)((long)puVar41 + 0x13) = bVar17;
          *(byte *)(puVar41 + 5) = bVar18;
          *(byte *)((long)puVar41 + 0x15) = bVar19;
          *(byte *)((long)puVar41 + 0x16) = bVar20;
          *(byte *)((long)puVar41 + 0x17) = bVar21;
          *(byte *)(puVar41 + 6) = bVar22;
          *(byte *)((long)puVar41 + 0x19) = bVar23;
          *(byte *)(puVar41 + 7) = bVar26;
          *(byte *)((long)puVar41 + 0x1d) = bVar27;
          *(byte *)((long)puVar41 + 0x1a) = bVar24;
          *(byte *)((long)puVar41 + 0x1b) = bVar25;
          *(byte *)((long)puVar41 + 0x1f) = bVar29;
          *(byte *)(puVar41 + 8) = bVar30;
          *(byte *)((long)puVar41 + 0x21) = bVar31;
          *(byte *)((long)puVar41 + 0x1e) = bVar28;
          *(undefined2 *)((long)puVar41 + 0x22) = local_284;
          *(long *)(lVar37 + 0x80) = *(long *)(lVar37 + 0x80) + -1;
        }
        *(undefined4 **)(param_1 + 0x1058) = puVar41 + 9;
      }
      iVar39 = iVar39 + 1;
    } while (iVar39 != local_330);
  }
  FUN_00db239c(auStack_1f8);
  FUN_00db239c(auStack_238);
  return;
}



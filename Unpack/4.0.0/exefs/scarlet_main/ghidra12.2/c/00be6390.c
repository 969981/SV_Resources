/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00be6390; name: FUN_00be6390
 */


void FUN_00be6390(long *param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ulong *puVar9;
  code *pcVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  long lVar15;
  ulong *puVar16;
  undefined *puVar17;
  undefined4 local_168 [2];
  char *local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  ulong local_138;
  undefined8 local_130;
  long local_128;
  undefined4 local_120;
  undefined1 local_11c [4];
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  byte local_e8;
  undefined7 uStack_e7;
  undefined8 uStack_e0;
  long local_d8;
  undefined1 local_69;
  
  puVar17 = PTR_DAT_047dad58;
  lVar6 = param_2 + *(int *)((long)param_1 + 0x2c);
  uVar1 = (int)((ulong)(param_4 - *(long *)(*(long *)(param_4 + 0x10) + 0x40)) >> 4) * -0x55555555;
  uVar12 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  iVar2 = *(int *)(lVar6 + uVar12);
  iVar4 = *(int *)(param_3 + *(int *)((long)param_1 + 0x2c) + uVar12);
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  if (iVar2 == 0) {
    puVar5 = (ulong *)0x0;
LAB_00be6490:
    puVar16 = (ulong *)0x0;
  }
  else {
    lVar15 = param_1[1];
    puVar5 = (ulong *)FUN_00b7c9fc(lVar15,iVar2);
    switch(*(undefined4 *)(puVar17 + (ulong)*(uint *)((long)puVar5 + 0x3c) * 4)) {
    case 1:
      uVar12 = puVar5[0xb];
      if (uVar12 == 0) {
        if (*(char *)((long)puVar5 + 0x44) == '\0') {
          plVar14 = (long *)(puVar5[10] + 0x30);
        }
        else if (puVar5[0xc] == 0) {
          plVar14 = (long *)(puVar5[6] + 0x88);
        }
        else {
          plVar14 = (long *)(puVar5[0xc] + 0x80);
        }
        iVar3 = (int)((ulong)((long)puVar5 - *plVar14) >> 4) * 0x38e38e39;
LAB_00be7218:
        piVar13 = (int *)(param_1[4] + (long)iVar3 * 4);
        lVar6 = param_2;
      }
      else {
        lVar11 = (long)(uVar12 - *(long *)(*(long *)(uVar12 + 0x10) + 0x40)) >> 4;
        uVar12 = lVar11 * -0x5555555555555555;
        if (*(int *)(lVar6 + (-(uVar12 >> 0x1f & 1) & 0xfffffffc00000000 |
                             lVar11 * -0x5555555555555554 & 0x3fffffffcU)) == (int)puVar5[7]) {
          iVar3 = *(int *)(lVar15 + 0x2c) + (int)uVar12;
          goto LAB_00be7218;
        }
        lVar6 = param_1[3];
        if (*(char *)((long)puVar5 + 0x44) == '\0') {
          plVar14 = (long *)(puVar5[10] + 0x30);
        }
        else if (puVar5[0xc] == 0) {
          plVar14 = (long *)(puVar5[6] + 0x88);
        }
        else {
          plVar14 = (long *)(puVar5[0xc] + 0x80);
        }
        piVar13 = (int *)(param_1[4] +
                         ((long)((ulong)(uint)((int)((ulong)((long)puVar5 - *plVar14) >> 4) *
                                              0x38e38e39) << 0x20) >> 0x1e));
      }
      puVar16 = (ulong *)0x0;
      local_ec = *(undefined4 *)(lVar6 + *piVar13);
      break;
    case 2:
      uVar12 = puVar5[0xb];
      if (uVar12 == 0) {
        if (*(char *)((long)puVar5 + 0x44) == '\0') {
          plVar14 = (long *)(puVar5[10] + 0x30);
        }
        else if (puVar5[0xc] == 0) {
          plVar14 = (long *)(puVar5[6] + 0x88);
        }
        else {
          plVar14 = (long *)(puVar5[0xc] + 0x80);
        }
        iVar3 = (int)((ulong)((long)puVar5 - *plVar14) >> 4) * 0x38e38e39;
LAB_00be7248:
        piVar13 = (int *)(param_1[4] + (long)iVar3 * 4);
        lVar6 = param_2;
      }
      else {
        lVar11 = (long)(uVar12 - *(long *)(*(long *)(uVar12 + 0x10) + 0x40)) >> 4;
        uVar12 = lVar11 * -0x5555555555555555;
        if (*(int *)(lVar6 + (-(uVar12 >> 0x1f & 1) & 0xfffffffc00000000 |
                             lVar11 * -0x5555555555555554 & 0x3fffffffcU)) == (int)puVar5[7]) {
          iVar3 = *(int *)(lVar15 + 0x2c) + (int)uVar12;
          goto LAB_00be7248;
        }
        lVar6 = param_1[3];
        if (*(char *)((long)puVar5 + 0x44) == '\0') {
          plVar14 = (long *)(puVar5[10] + 0x30);
        }
        else if (puVar5[0xc] == 0) {
          plVar14 = (long *)(puVar5[6] + 0x88);
        }
        else {
          plVar14 = (long *)(puVar5[0xc] + 0x80);
        }
        piVar13 = (int *)(param_1[4] +
                         ((long)((ulong)(uint)((int)((ulong)((long)puVar5 - *plVar14) >> 4) *
                                              0x38e38e39) << 0x20) >> 0x1e));
      }
      puVar16 = (ulong *)0x0;
      local_f8 = *(undefined8 *)(lVar6 + *piVar13);
      break;
    case 3:
      uVar12 = puVar5[0xb];
      if (uVar12 == 0) {
        if (*(char *)((long)puVar5 + 0x44) == '\0') {
          plVar14 = (long *)(puVar5[10] + 0x30);
        }
        else if (puVar5[0xc] == 0) {
          plVar14 = (long *)(puVar5[6] + 0x88);
        }
        else {
          plVar14 = (long *)(puVar5[0xc] + 0x80);
        }
        iVar3 = (int)((ulong)((long)puVar5 - *plVar14) >> 4) * 0x38e38e39;
LAB_00be70f8:
        piVar13 = (int *)(param_1[4] + (long)iVar3 * 4);
        lVar6 = param_2;
      }
      else {
        lVar11 = (long)(uVar12 - *(long *)(*(long *)(uVar12 + 0x10) + 0x40)) >> 4;
        uVar12 = lVar11 * -0x5555555555555555;
        if (*(int *)(lVar6 + (-(uVar12 >> 0x1f & 1) & 0xfffffffc00000000 |
                             lVar11 * -0x5555555555555554 & 0x3fffffffcU)) == (int)puVar5[7]) {
          iVar3 = *(int *)(lVar15 + 0x2c) + (int)uVar12;
          goto LAB_00be70f8;
        }
        lVar6 = param_1[3];
        if (*(char *)((long)puVar5 + 0x44) == '\0') {
          plVar14 = (long *)(puVar5[10] + 0x30);
        }
        else if (puVar5[0xc] == 0) {
          plVar14 = (long *)(puVar5[6] + 0x88);
        }
        else {
          plVar14 = (long *)(puVar5[0xc] + 0x80);
        }
        piVar13 = (int *)(param_1[4] +
                         ((long)((ulong)(uint)((int)((ulong)((long)puVar5 - *plVar14) >> 4) *
                                              0x38e38e39) << 0x20) >> 0x1e));
      }
      puVar16 = (ulong *)0x0;
      local_fc = *(undefined4 *)(lVar6 + *piVar13);
      break;
    case 4:
      uVar12 = puVar5[0xb];
      if (uVar12 == 0) {
        if (*(char *)((long)puVar5 + 0x44) == '\0') {
          plVar14 = (long *)(puVar5[10] + 0x30);
        }
        else if (puVar5[0xc] == 0) {
          plVar14 = (long *)(puVar5[6] + 0x88);
        }
        else {
          plVar14 = (long *)(puVar5[0xc] + 0x80);
        }
        iVar3 = (int)((ulong)((long)puVar5 - *plVar14) >> 4) * 0x38e38e39;
LAB_00be7158:
        piVar13 = (int *)(param_1[4] + (long)iVar3 * 4);
        lVar6 = param_2;
      }
      else {
        lVar11 = (long)(uVar12 - *(long *)(*(long *)(uVar12 + 0x10) + 0x40)) >> 4;
        uVar12 = lVar11 * -0x5555555555555555;
        if (*(int *)(lVar6 + (-(uVar12 >> 0x1f & 1) & 0xfffffffc00000000 |
                             lVar11 * -0x5555555555555554 & 0x3fffffffcU)) == (int)puVar5[7]) {
          iVar3 = *(int *)(lVar15 + 0x2c) + (int)uVar12;
          goto LAB_00be7158;
        }
        lVar6 = param_1[3];
        if (*(char *)((long)puVar5 + 0x44) == '\0') {
          plVar14 = (long *)(puVar5[10] + 0x30);
        }
        else if (puVar5[0xc] == 0) {
          plVar14 = (long *)(puVar5[6] + 0x88);
        }
        else {
          plVar14 = (long *)(puVar5[0xc] + 0x80);
        }
        piVar13 = (int *)(param_1[4] +
                         ((long)((ulong)(uint)((int)((ulong)((long)puVar5 - *plVar14) >> 4) *
                                              0x38e38e39) << 0x20) >> 0x1e));
      }
      puVar16 = (ulong *)0x0;
      local_108 = *(undefined8 *)(lVar6 + *piVar13);
      break;
    case 5:
      uVar12 = puVar5[0xb];
      if (uVar12 == 0) {
        if (*(char *)((long)puVar5 + 0x44) == '\0') {
          plVar14 = (long *)(puVar5[10] + 0x30);
        }
        else if (puVar5[0xc] == 0) {
          plVar14 = (long *)(puVar5[6] + 0x88);
        }
        else {
          plVar14 = (long *)(puVar5[0xc] + 0x80);
        }
        iVar3 = (int)((ulong)((long)puVar5 - *plVar14) >> 4) * 0x38e38e39;
LAB_00be7098:
        piVar13 = (int *)(param_1[4] + (long)iVar3 * 4);
        lVar6 = param_2;
      }
      else {
        lVar11 = (long)(uVar12 - *(long *)(*(long *)(uVar12 + 0x10) + 0x40)) >> 4;
        uVar12 = lVar11 * -0x5555555555555555;
        if (*(int *)(lVar6 + (-(uVar12 >> 0x1f & 1) & 0xfffffffc00000000 |
                             lVar11 * -0x5555555555555554 & 0x3fffffffcU)) == (int)puVar5[7]) {
          iVar3 = *(int *)(lVar15 + 0x2c) + (int)uVar12;
          goto LAB_00be7098;
        }
        lVar6 = param_1[3];
        if (*(char *)((long)puVar5 + 0x44) == '\0') {
          plVar14 = (long *)(puVar5[10] + 0x30);
        }
        else if (puVar5[0xc] == 0) {
          plVar14 = (long *)(puVar5[6] + 0x88);
        }
        else {
          plVar14 = (long *)(puVar5[0xc] + 0x80);
        }
        piVar13 = (int *)(param_1[4] +
                         ((long)((ulong)(uint)((int)((ulong)((long)puVar5 - *plVar14) >> 4) *
                                              0x38e38e39) << 0x20) >> 0x1e));
      }
      puVar16 = (ulong *)0x0;
      local_118 = *(undefined8 *)(lVar6 + *piVar13);
      break;
    case 6:
      uVar12 = puVar5[0xb];
      if (uVar12 == 0) {
        if (*(char *)((long)puVar5 + 0x44) == '\0') {
          plVar14 = (long *)(puVar5[10] + 0x30);
        }
        else if (puVar5[0xc] == 0) {
          plVar14 = (long *)(puVar5[6] + 0x88);
        }
        else {
          plVar14 = (long *)(puVar5[0xc] + 0x80);
        }
        iVar3 = (int)((ulong)((long)puVar5 - *plVar14) >> 4) * 0x38e38e39;
LAB_00be7278:
        piVar13 = (int *)(param_1[4] + (long)iVar3 * 4);
        lVar6 = param_2;
      }
      else {
        lVar11 = (long)(uVar12 - *(long *)(*(long *)(uVar12 + 0x10) + 0x40)) >> 4;
        uVar12 = lVar11 * -0x5555555555555555;
        if (*(int *)(lVar6 + (-(uVar12 >> 0x1f & 1) & 0xfffffffc00000000 |
                             lVar11 * -0x5555555555555554 & 0x3fffffffcU)) == (int)puVar5[7]) {
          iVar3 = *(int *)(lVar15 + 0x2c) + (int)uVar12;
          goto LAB_00be7278;
        }
        lVar6 = param_1[3];
        if (*(char *)((long)puVar5 + 0x44) == '\0') {
          plVar14 = (long *)(puVar5[10] + 0x30);
        }
        else if (puVar5[0xc] == 0) {
          plVar14 = (long *)(puVar5[6] + 0x88);
        }
        else {
          plVar14 = (long *)(puVar5[0xc] + 0x80);
        }
        piVar13 = (int *)(param_1[4] +
                         ((long)((ulong)(uint)((int)((ulong)((long)puVar5 - *plVar14) >> 4) *
                                              0x38e38e39) << 0x20) >> 0x1e));
      }
      puVar16 = (ulong *)0x0;
      local_10c = *(undefined4 *)(lVar6 + *piVar13);
      break;
    case 7:
      uVar12 = puVar5[0xb];
      if (uVar12 == 0) {
        if (*(char *)((long)puVar5 + 0x44) == '\0') {
          plVar14 = (long *)(puVar5[10] + 0x30);
        }
        else if (puVar5[0xc] == 0) {
          plVar14 = (long *)(puVar5[6] + 0x88);
        }
        else {
          plVar14 = (long *)(puVar5[0xc] + 0x80);
        }
        iVar3 = (int)((ulong)((long)puVar5 - *plVar14) >> 4) * 0x38e38e39;
LAB_00be72d8:
        piVar13 = (int *)(param_1[4] + (long)iVar3 * 4);
        lVar6 = param_2;
      }
      else {
        lVar11 = (long)(uVar12 - *(long *)(*(long *)(uVar12 + 0x10) + 0x40)) >> 4;
        uVar12 = lVar11 * -0x5555555555555555;
        if (*(int *)(lVar6 + (-(uVar12 >> 0x1f & 1) & 0xfffffffc00000000 |
                             lVar11 * -0x5555555555555554 & 0x3fffffffcU)) == (int)puVar5[7]) {
          iVar3 = *(int *)(lVar15 + 0x2c) + (int)uVar12;
          goto LAB_00be72d8;
        }
        lVar6 = param_1[3];
        if (*(char *)((long)puVar5 + 0x44) == '\0') {
          plVar14 = (long *)(puVar5[10] + 0x30);
        }
        else if (puVar5[0xc] == 0) {
          plVar14 = (long *)(puVar5[6] + 0x88);
        }
        else {
          plVar14 = (long *)(puVar5[0xc] + 0x80);
        }
        piVar13 = (int *)(param_1[4] +
                         ((long)((ulong)(uint)((int)((ulong)((long)puVar5 - *plVar14) >> 4) *
                                              0x38e38e39) << 0x20) >> 0x1e));
      }
      puVar16 = (ulong *)0x0;
      local_11c[0] = *(undefined1 *)(lVar6 + *piVar13);
      break;
    case 8:
      uVar12 = puVar5[0xb];
      if (uVar12 == 0) {
        if (*(char *)((long)puVar5 + 0x44) == '\0') {
          plVar14 = (long *)(puVar5[10] + 0x30);
        }
        else if (puVar5[0xc] == 0) {
          plVar14 = (long *)(puVar5[6] + 0x88);
        }
        else {
          plVar14 = (long *)(puVar5[0xc] + 0x80);
        }
        iVar3 = (int)((ulong)((long)puVar5 - *plVar14) >> 4) * 0x38e38e39;
LAB_00be71b8:
        piVar13 = (int *)(param_1[4] + (long)iVar3 * 4);
        lVar6 = param_2;
      }
      else {
        lVar11 = (long)(uVar12 - *(long *)(*(long *)(uVar12 + 0x10) + 0x40)) >> 4;
        uVar12 = lVar11 * -0x5555555555555555;
        if (*(int *)(lVar6 + (-(uVar12 >> 0x1f & 1) & 0xfffffffc00000000 |
                             lVar11 * -0x5555555555555554 & 0x3fffffffcU)) == (int)puVar5[7]) {
          iVar3 = *(int *)(lVar15 + 0x2c) + (int)uVar12;
          goto LAB_00be71b8;
        }
        lVar6 = param_1[3];
        if (*(char *)((long)puVar5 + 0x44) == '\0') {
          plVar14 = (long *)(puVar5[10] + 0x30);
        }
        else if (puVar5[0xc] == 0) {
          plVar14 = (long *)(puVar5[6] + 0x88);
        }
        else {
          plVar14 = (long *)(puVar5[0xc] + 0x80);
        }
        piVar13 = (int *)(param_1[4] +
                         ((long)((ulong)(uint)((int)((ulong)((long)puVar5 - *plVar14) >> 4) *
                                              0x38e38e39) << 0x20) >> 0x1e));
      }
      puVar16 = (ulong *)0x0;
      local_120 = *(undefined4 *)(lVar6 + *piVar13);
      break;
    case 9:
      (**(code **)(*param_1 + 0xc0))(&local_e8,param_1,param_2,puVar5);
      lVar6 = local_128;
      if (((local_138 & 1) != 0) && (local_128 != 0)) {
        lVar15 = tpidr_el0;
        plVar14 = *(long **)(lVar15 + 0x30);
        if (plVar14 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar14 = DAT_04859430;
          *(long **)(lVar15 + 0x30) = DAT_04859430;
        }
        uVar12 = (**(code **)(*plVar14 + 0xf8))(plVar14);
        if (((uVar12 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
          (**(code **)(*plVar14 + 0x18))(plVar14,lVar6,0,8);
        }
        else {
          FUN_00c48fe8(plVar14,lVar6,0,8);
        }
        puVar17 = PTR_DAT_047dad58;
      }
      local_138 = CONCAT71(uStack_e7,local_e8);
      puVar16 = (ulong *)0x0;
      local_130 = uStack_e0;
      local_128 = local_d8;
      break;
    case 10:
      puVar16 = (ulong *)(**(code **)(*param_1 + 0x148))(param_1,param_2,puVar5,0);
      break;
    default:
      local_140 = 0;
      local_168[0] = 3;
      local_158 = 0x231;
      local_160 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/generated_message_reflection.cc"
      ;
      local_150 = 0;
      uStack_148 = 0;
      std::string::append((char *)&local_150);
      snprintf((char *)&local_e8,0x80,"%d",
               (ulong)*(uint *)(puVar17 + (ulong)*(uint *)((long)puVar5 + 0x3c) * 4));
      local_69 = 0;
      std::string::append((char *)&local_150);
      FUN_00bb0e90(local_168);
      FUN_00bb0d74(local_168);
      goto LAB_00be6490;
    }
  }
  if (iVar4 == 0) {
    (**(code **)(*param_1 + 0x48))(param_1,param_2,param_4);
  }
  else {
    lVar15 = param_1[1];
    lVar6 = FUN_00b7c9fc(lVar15,iVar4);
    switch(*(undefined4 *)(puVar17 + (ulong)*(uint *)(lVar6 + 0x3c) * 4)) {
    case 1:
    case 8:
      lVar11 = *(long *)(lVar6 + 0x58);
      if (lVar11 == 0) {
        if (*(char *)(lVar6 + 0x44) == '\0') {
          plVar14 = (long *)(*(long *)(lVar6 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar6 + 0x60) == 0) {
          plVar14 = (long *)(*(long *)(lVar6 + 0x30) + 0x88);
        }
        else {
          plVar14 = (long *)(*(long *)(lVar6 + 0x60) + 0x80);
        }
        iVar4 = (int)((ulong)(lVar6 - *plVar14) >> 4) * 0x38e38e39;
LAB_00be6ed0:
        piVar13 = (int *)(param_1[4] + (long)iVar4 * 4);
        lVar15 = param_3;
      }
      else {
        lVar11 = lVar11 - *(long *)(*(long *)(lVar11 + 0x10) + 0x40) >> 4;
        uVar12 = lVar11 * -0x5555555555555555;
        if (*(int *)(param_3 + *(int *)((long)param_1 + 0x2c) +
                    (-(uVar12 >> 0x1f & 1) & 0xfffffffc00000000 |
                    lVar11 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(lVar6 + 0x38)) {
          iVar4 = *(int *)(lVar15 + 0x2c) + (int)uVar12;
          goto LAB_00be6ed0;
        }
        lVar15 = param_1[3];
        if (*(char *)(lVar6 + 0x44) == '\0') {
          plVar14 = (long *)(*(long *)(lVar6 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar6 + 0x60) == 0) {
          plVar14 = (long *)(*(long *)(lVar6 + 0x30) + 0x88);
        }
        else {
          plVar14 = (long *)(*(long *)(lVar6 + 0x60) + 0x80);
        }
        piVar13 = (int *)(param_1[4] +
                         ((long)((ulong)(uint)((int)((ulong)(lVar6 - *plVar14) >> 4) * 0x38e38e39)
                                << 0x20) >> 0x1e));
      }
      FUN_00be7a4c(param_1,param_2,lVar6,lVar15 + *piVar13);
      break;
    case 2:
      lVar11 = *(long *)(lVar6 + 0x58);
      if (lVar11 == 0) {
        if (*(char *)(lVar6 + 0x44) == '\0') {
          plVar14 = (long *)(*(long *)(lVar6 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar6 + 0x60) == 0) {
          plVar14 = (long *)(*(long *)(lVar6 + 0x30) + 0x88);
        }
        else {
          plVar14 = (long *)(*(long *)(lVar6 + 0x60) + 0x80);
        }
        iVar4 = (int)((ulong)(lVar6 - *plVar14) >> 4) * 0x38e38e39;
LAB_00be7128:
        piVar13 = (int *)(param_1[4] + (long)iVar4 * 4);
        lVar15 = param_3;
      }
      else {
        lVar11 = lVar11 - *(long *)(*(long *)(lVar11 + 0x10) + 0x40) >> 4;
        uVar12 = lVar11 * -0x5555555555555555;
        if (*(int *)(param_3 + *(int *)((long)param_1 + 0x2c) +
                    (-(uVar12 >> 0x1f & 1) & 0xfffffffc00000000 |
                    lVar11 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(lVar6 + 0x38)) {
          iVar4 = *(int *)(lVar15 + 0x2c) + (int)uVar12;
          goto LAB_00be7128;
        }
        lVar15 = param_1[3];
        if (*(char *)(lVar6 + 0x44) == '\0') {
          plVar14 = (long *)(*(long *)(lVar6 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar6 + 0x60) == 0) {
          plVar14 = (long *)(*(long *)(lVar6 + 0x30) + 0x88);
        }
        else {
          plVar14 = (long *)(*(long *)(lVar6 + 0x60) + 0x80);
        }
        piVar13 = (int *)(param_1[4] +
                         ((long)((ulong)(uint)((int)((ulong)(lVar6 - *plVar14) >> 4) * 0x38e38e39)
                                << 0x20) >> 0x1e));
      }
      FUN_00be7c1c(param_1,param_2,lVar6,lVar15 + *piVar13);
      break;
    case 3:
      lVar11 = *(long *)(lVar6 + 0x58);
      if (lVar11 == 0) {
        if (*(char *)(lVar6 + 0x44) == '\0') {
          plVar14 = (long *)(*(long *)(lVar6 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar6 + 0x60) == 0) {
          plVar14 = (long *)(*(long *)(lVar6 + 0x30) + 0x88);
        }
        else {
          plVar14 = (long *)(*(long *)(lVar6 + 0x60) + 0x80);
        }
        iVar4 = (int)((ulong)(lVar6 - *plVar14) >> 4) * 0x38e38e39;
LAB_00be7188:
        piVar13 = (int *)(param_1[4] + (long)iVar4 * 4);
        lVar15 = param_3;
      }
      else {
        lVar11 = lVar11 - *(long *)(*(long *)(lVar11 + 0x10) + 0x40) >> 4;
        uVar12 = lVar11 * -0x5555555555555555;
        if (*(int *)(param_3 + *(int *)((long)param_1 + 0x2c) +
                    (-(uVar12 >> 0x1f & 1) & 0xfffffffc00000000 |
                    lVar11 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(lVar6 + 0x38)) {
          iVar4 = *(int *)(lVar15 + 0x2c) + (int)uVar12;
          goto LAB_00be7188;
        }
        lVar15 = param_1[3];
        if (*(char *)(lVar6 + 0x44) == '\0') {
          plVar14 = (long *)(*(long *)(lVar6 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar6 + 0x60) == 0) {
          plVar14 = (long *)(*(long *)(lVar6 + 0x30) + 0x88);
        }
        else {
          plVar14 = (long *)(*(long *)(lVar6 + 0x60) + 0x80);
        }
        piVar13 = (int *)(param_1[4] +
                         ((long)((ulong)(uint)((int)((ulong)(lVar6 - *plVar14) >> 4) * 0x38e38e39)
                                << 0x20) >> 0x1e));
      }
      FUN_00be7dec(param_1,param_2,lVar6,lVar15 + *piVar13);
      break;
    case 4:
      lVar11 = *(long *)(lVar6 + 0x58);
      if (lVar11 == 0) {
        if (*(char *)(lVar6 + 0x44) == '\0') {
          plVar14 = (long *)(*(long *)(lVar6 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar6 + 0x60) == 0) {
          plVar14 = (long *)(*(long *)(lVar6 + 0x30) + 0x88);
        }
        else {
          plVar14 = (long *)(*(long *)(lVar6 + 0x60) + 0x80);
        }
        iVar4 = (int)((ulong)(lVar6 - *plVar14) >> 4) * 0x38e38e39;
LAB_00be70c8:
        piVar13 = (int *)(param_1[4] + (long)iVar4 * 4);
        lVar15 = param_3;
      }
      else {
        lVar11 = lVar11 - *(long *)(*(long *)(lVar11 + 0x10) + 0x40) >> 4;
        uVar12 = lVar11 * -0x5555555555555555;
        if (*(int *)(param_3 + *(int *)((long)param_1 + 0x2c) +
                    (-(uVar12 >> 0x1f & 1) & 0xfffffffc00000000 |
                    lVar11 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(lVar6 + 0x38)) {
          iVar4 = *(int *)(lVar15 + 0x2c) + (int)uVar12;
          goto LAB_00be70c8;
        }
        lVar15 = param_1[3];
        if (*(char *)(lVar6 + 0x44) == '\0') {
          plVar14 = (long *)(*(long *)(lVar6 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar6 + 0x60) == 0) {
          plVar14 = (long *)(*(long *)(lVar6 + 0x30) + 0x88);
        }
        else {
          plVar14 = (long *)(*(long *)(lVar6 + 0x60) + 0x80);
        }
        piVar13 = (int *)(param_1[4] +
                         ((long)((ulong)(uint)((int)((ulong)(lVar6 - *plVar14) >> 4) * 0x38e38e39)
                                << 0x20) >> 0x1e));
      }
      FUN_00be7fbc(param_1,param_2,lVar6,lVar15 + *piVar13);
      break;
    case 5:
      lVar11 = *(long *)(lVar6 + 0x58);
      if (lVar11 == 0) {
        if (*(char *)(lVar6 + 0x44) == '\0') {
          plVar14 = (long *)(*(long *)(lVar6 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar6 + 0x60) == 0) {
          plVar14 = (long *)(*(long *)(lVar6 + 0x30) + 0x88);
        }
        else {
          plVar14 = (long *)(*(long *)(lVar6 + 0x60) + 0x80);
        }
        iVar4 = (int)((ulong)(lVar6 - *plVar14) >> 4) * 0x38e38e39;
LAB_00be72a8:
        piVar13 = (int *)(param_1[4] + (long)iVar4 * 4);
        lVar15 = param_3;
      }
      else {
        lVar11 = lVar11 - *(long *)(*(long *)(lVar11 + 0x10) + 0x40) >> 4;
        uVar12 = lVar11 * -0x5555555555555555;
        if (*(int *)(param_3 + *(int *)((long)param_1 + 0x2c) +
                    (-(uVar12 >> 0x1f & 1) & 0xfffffffc00000000 |
                    lVar11 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(lVar6 + 0x38)) {
          iVar4 = *(int *)(lVar15 + 0x2c) + (int)uVar12;
          goto LAB_00be72a8;
        }
        lVar15 = param_1[3];
        if (*(char *)(lVar6 + 0x44) == '\0') {
          plVar14 = (long *)(*(long *)(lVar6 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar6 + 0x60) == 0) {
          plVar14 = (long *)(*(long *)(lVar6 + 0x30) + 0x88);
        }
        else {
          plVar14 = (long *)(*(long *)(lVar6 + 0x60) + 0x80);
        }
        piVar13 = (int *)(param_1[4] +
                         ((long)((ulong)(uint)((int)((ulong)(lVar6 - *plVar14) >> 4) * 0x38e38e39)
                                << 0x20) >> 0x1e));
      }
      FUN_00be835c(param_1,param_2,lVar6,lVar15 + *piVar13);
      break;
    case 6:
      lVar11 = *(long *)(lVar6 + 0x58);
      if (lVar11 == 0) {
        if (*(char *)(lVar6 + 0x44) == '\0') {
          plVar14 = (long *)(*(long *)(lVar6 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar6 + 0x60) == 0) {
          plVar14 = (long *)(*(long *)(lVar6 + 0x30) + 0x88);
        }
        else {
          plVar14 = (long *)(*(long *)(lVar6 + 0x60) + 0x80);
        }
        iVar4 = (int)((ulong)(lVar6 - *plVar14) >> 4) * 0x38e38e39;
LAB_00be7308:
        piVar13 = (int *)(param_1[4] + (long)iVar4 * 4);
        lVar15 = param_3;
      }
      else {
        lVar11 = lVar11 - *(long *)(*(long *)(lVar11 + 0x10) + 0x40) >> 4;
        uVar12 = lVar11 * -0x5555555555555555;
        if (*(int *)(param_3 + *(int *)((long)param_1 + 0x2c) +
                    (-(uVar12 >> 0x1f & 1) & 0xfffffffc00000000 |
                    lVar11 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(lVar6 + 0x38)) {
          iVar4 = *(int *)(lVar15 + 0x2c) + (int)uVar12;
          goto LAB_00be7308;
        }
        lVar15 = param_1[3];
        if (*(char *)(lVar6 + 0x44) == '\0') {
          plVar14 = (long *)(*(long *)(lVar6 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar6 + 0x60) == 0) {
          plVar14 = (long *)(*(long *)(lVar6 + 0x30) + 0x88);
        }
        else {
          plVar14 = (long *)(*(long *)(lVar6 + 0x60) + 0x80);
        }
        piVar13 = (int *)(param_1[4] +
                         ((long)((ulong)(uint)((int)((ulong)(lVar6 - *plVar14) >> 4) * 0x38e38e39)
                                << 0x20) >> 0x1e));
      }
      FUN_00be818c(param_1,param_2,lVar6,lVar15 + *piVar13);
      break;
    case 7:
      lVar11 = *(long *)(lVar6 + 0x58);
      if (lVar11 == 0) {
        if (*(char *)(lVar6 + 0x44) == '\0') {
          plVar14 = (long *)(*(long *)(lVar6 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar6 + 0x60) == 0) {
          plVar14 = (long *)(*(long *)(lVar6 + 0x30) + 0x88);
        }
        else {
          plVar14 = (long *)(*(long *)(lVar6 + 0x60) + 0x80);
        }
        iVar4 = (int)((ulong)(lVar6 - *plVar14) >> 4) * 0x38e38e39;
LAB_00be71e8:
        piVar13 = (int *)(param_1[4] + (long)iVar4 * 4);
        lVar15 = param_3;
      }
      else {
        lVar11 = lVar11 - *(long *)(*(long *)(lVar11 + 0x10) + 0x40) >> 4;
        uVar12 = lVar11 * -0x5555555555555555;
        if (*(int *)(param_3 + *(int *)((long)param_1 + 0x2c) +
                    (-(uVar12 >> 0x1f & 1) & 0xfffffffc00000000 |
                    lVar11 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(lVar6 + 0x38)) {
          iVar4 = *(int *)(lVar15 + 0x2c) + (int)uVar12;
          goto LAB_00be71e8;
        }
        lVar15 = param_1[3];
        if (*(char *)(lVar6 + 0x44) == '\0') {
          plVar14 = (long *)(*(long *)(lVar6 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar6 + 0x60) == 0) {
          plVar14 = (long *)(*(long *)(lVar6 + 0x30) + 0x88);
        }
        else {
          plVar14 = (long *)(*(long *)(lVar6 + 0x60) + 0x80);
        }
        piVar13 = (int *)(param_1[4] +
                         ((long)((ulong)(uint)((int)((ulong)(lVar6 - *plVar14) >> 4) * 0x38e38e39)
                                << 0x20) >> 0x1e));
      }
      FUN_00be852c(param_1,param_2,lVar6,lVar15 + *piVar13);
      break;
    case 9:
      (**(code **)(*param_1 + 0xc0))(&local_e8,param_1,param_3,lVar6);
      (**(code **)(*param_1 + 0x120))(param_1,param_2,lVar6,&local_e8);
      if (((local_e8 & 1) != 0) && (local_d8 != 0)) {
        lVar6 = tpidr_el0;
        plVar14 = *(long **)(lVar6 + 0x30);
        if (plVar14 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar14 = DAT_04859430;
          *(long **)(lVar6 + 0x30) = DAT_04859430;
        }
        uVar12 = (**(code **)(*plVar14 + 0xf8))(plVar14);
        if (((uVar12 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
          uVar7 = 0;
          pcVar10 = *(code **)(*plVar14 + 0x18);
          lVar6 = 8;
          param_2 = local_d8;
          goto LAB_00be6644;
        }
        FUN_00c48fe8(plVar14,local_d8,0,8);
      }
      break;
    case 10:
      uVar7 = (**(code **)(*param_1 + 0x148))(param_1,param_3,lVar6,0);
      pcVar10 = *(code **)(*param_1 + 0x140);
      plVar14 = param_1;
LAB_00be6644:
      (*pcVar10)(plVar14,param_2,uVar7,lVar6);
      break;
    default:
      local_140 = 0;
      local_168[0] = 3;
      local_158 = 0x253;
      local_160 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/generated_message_reflection.cc"
      ;
      local_150 = 0;
      uStack_148 = 0;
      std::string::append((char *)&local_150);
      snprintf((char *)&local_e8,0x80,"%d",
               (ulong)*(uint *)(puVar17 + (ulong)*(uint *)(lVar6 + 0x3c) * 4));
      local_69 = 0;
      std::string::append((char *)&local_150);
      FUN_00bb0e90(local_168);
      FUN_00bb0d74(local_168);
    }
  }
  if (iVar2 == 0) {
    (**(code **)(*param_1 + 0x48))(param_1,param_3,param_4);
    goto LAB_00be7834;
  }
  switch(*(undefined4 *)(puVar17 + (ulong)*(uint *)((long)puVar5 + 0x3c) * 4)) {
  case 1:
    puVar8 = &local_ec;
    goto LAB_00be7740;
  case 2:
    FUN_00be7c1c(param_1,param_3,puVar5,&local_f8);
    break;
  case 3:
    FUN_00be7dec(param_1,param_3,puVar5,&local_fc);
    break;
  case 4:
    FUN_00be7fbc(param_1,param_3,puVar5,&local_108);
    break;
  case 5:
    FUN_00be835c(param_1,param_3,puVar5,&local_118);
    break;
  case 6:
    FUN_00be818c(param_1,param_3,puVar5,&local_10c);
    break;
  case 7:
    FUN_00be852c(param_1,param_3,puVar5,local_11c);
    break;
  case 8:
    puVar8 = &local_120;
LAB_00be7740:
    FUN_00be7a4c(param_1,param_3,puVar5,puVar8);
    break;
  case 9:
    puVar9 = &local_138;
    pcVar10 = *(code **)(*param_1 + 0x120);
    puVar16 = puVar5;
    goto LAB_00be7830;
  case 10:
    pcVar10 = *(code **)(*param_1 + 0x140);
    puVar9 = puVar5;
LAB_00be7830:
    (*pcVar10)(param_1,param_3,puVar16,puVar9);
    break;
  default:
    local_140 = 0;
    local_168[0] = 3;
    local_158 = 0x273;
    local_160 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/generated_message_reflection.cc"
    ;
    local_150 = 0;
    uStack_148 = 0;
    std::string::append((char *)&local_150);
    snprintf((char *)&local_e8,0x80,"%d",
             (ulong)*(uint *)(puVar17 + (ulong)*(uint *)((long)puVar5 + 0x3c) * 4));
    local_69 = 0;
    std::string::append((char *)&local_150);
    FUN_00bb0e90(local_168);
    FUN_00bb0d74(local_168);
  }
LAB_00be7834:
  lVar6 = local_128;
  if (((local_138 & 1) != 0) && (local_128 != 0)) {
    lVar15 = tpidr_el0;
    plVar14 = *(long **)(lVar15 + 0x30);
    if (plVar14 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar14 = DAT_04859430;
      *(long **)(lVar15 + 0x30) = DAT_04859430;
    }
    uVar12 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if (((uVar12 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,lVar6,0,8);
    }
    else {
      FUN_00c48fe8(plVar14,lVar6,0,8);
    }
  }
  return;
}



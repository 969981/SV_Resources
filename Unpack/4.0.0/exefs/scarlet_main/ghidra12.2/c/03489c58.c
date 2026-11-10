/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03489c58; name: FUN_03489c58
 */


undefined8 * FUN_03489c58(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  char *pcVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined2 local_94;
  undefined1 local_92;
  uint uStack_90;
  undefined2 local_6c;
  undefined1 local_6a;
  
  uVar2 = *(uint *)(param_1 + 0x188);
  uVar18 = *(uint *)(param_1 + 0x18c);
  if (uVar18 <= uVar2) {
    iVar1 = uVar18 + (uVar18 >> 1);
    if (uVar18 == 0) {
      iVar1 = 1;
    }
    uVar18 = iVar1 + uVar18;
    if ((ulong)uVar18 * 0x158 < 0x159) {
      lVar13 = param_1 + 0x28;
    }
    else {
      lVar13 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,(ulong)uVar18 * 0x158,1);
      if (lVar13 == 0) {
        return (undefined8 *)0x0;
      }
    }
    puVar7 = PTR_PTR_047e71e0;
    lVar10 = *(long *)(param_1 + 0x180);
    if ((lVar10 != 0) && (lVar10 != lVar13)) {
      if (uVar2 != 0) {
        lVar10 = 0;
        do {
          puVar14 = (undefined8 *)(lVar13 + lVar10);
          puVar14[3] = 0;
          puVar14[10] = 0xffff3f800000;
          puVar14[0xb] = 0x3f800000;
          puVar14[8] = 0;
          puVar14[9] = 0x3f80000000000000;
          *(undefined1 *)((long)puVar14 + 0x74) = 1;
          *(undefined4 *)(puVar14 + 2) = 0;
          puVar14[7] = 0x3f800000;
          *(undefined4 *)(puVar14 + 0xe) = 0;
          *(undefined1 *)(puVar14 + 0x16) = 0;
          *(undefined4 *)(puVar14 + 0x13) = 0;
          *(undefined4 *)(puVar14 + 0x17) = 0;
          *puVar14 = 0;
          puVar14[1] = 0;
          puVar14[5] = 0;
          puVar14[6] = 0x3f800000;
          puVar14[0xc] = 0;
          puVar14[0xd] = 0x3f800000;
          puVar14[0x14] = 0;
          puVar14[0x15] = 0;
          puVar14[0x11] = 0;
          puVar14[0x12] = 0;
          puVar14[0xf] = 0x3f8000003f800000;
          puVar14[0x10] = 0;
          memset(puVar14 + 0x18,0,0x48);
          uVar4 = *(undefined2 *)PTR_DAT_047e7208;
          *(undefined1 *)((long)puVar14 + 0x10a) = 0;
          *(undefined2 *)(puVar14 + 0x21) = uVar4;
          *(undefined4 *)((long)puVar14 + 0x10b) = 0x1010101;
          puVar14[0x22] = 0;
          *(undefined2 *)(puVar14 + 0x23) = uVar4;
          *(undefined1 *)((long)puVar14 + 0x11a) = 0;
          *(undefined4 *)((long)puVar14 + 0x11b) = 0x1010101;
          *(undefined4 *)(puVar14 + 0x24) = 0;
          puVar14[0x25] = 0;
          *(undefined4 *)(puVar14 + 0x26) = 0;
          *(undefined4 *)((long)puVar14 + 0x14c) = 0;
          *(undefined1 *)(puVar14 + 0x2a) = 0;
          puVar14[4] = 0;
          *(undefined1 *)(puVar14 + 0x29) = 0;
          puVar14[0x10] = puVar7;
          puVar14[0x27] = 0;
          puVar14[0x28] = 0;
          FUN_03489adc(puVar14,*(long *)(param_1 + 0x180) + lVar10);
          lVar12 = *(long *)(param_1 + 0x180) + lVar10;
          if (*(long *)(lVar12 + 0x128) != 0) {
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
          }
          *(undefined8 *)(lVar12 + 0x128) = 0;
          *(undefined4 *)(lVar12 + 0x130) = 0;
          *(undefined8 *)(lVar12 + 0x138) = 0;
          *(undefined8 *)(lVar12 + 0x140) = 0;
          if (*(long *)(lVar12 + 0xc0) != 0) {
            (**(code **)(*(long *)puVar7 + 0x18))(puVar7);
            *(undefined8 *)(lVar12 + 0xc0) = 0;
            *(undefined4 *)(lVar12 + 200) = 0;
          }
          if (*(long *)(lVar12 + 0xd0) != 0) {
            (**(code **)(*(long *)puVar7 + 0x18))(puVar7);
            *(undefined8 *)(lVar12 + 0xd0) = 0;
            *(undefined4 *)(lVar12 + 0xd8) = 0;
          }
          if (*(long *)(lVar12 + 0xe0) != 0) {
            (**(code **)(*(long *)puVar7 + 0x18))(puVar7);
            *(undefined8 *)(lVar12 + 0xe0) = 0;
            *(undefined4 *)(lVar12 + 0xe8) = 0;
          }
          if (*(long *)(lVar12 + 0xf0) != 0) {
            (**(code **)(*(long *)puVar7 + 0x18))(puVar7);
            *(undefined8 *)(lVar12 + 0xf0) = 0;
            *(undefined4 *)(lVar12 + 0xf8) = 0;
          }
          if (*(long *)(lVar12 + 0x88) != 0) {
            *(undefined4 *)(lVar12 + 0x90) = 0;
            (**(code **)(**(long **)(lVar12 + 0x80) + 0x18))();
            *(undefined8 *)(lVar12 + 0x88) = 0;
            *(undefined4 *)(lVar12 + 0x94) = 0;
          }
          if ((*(long *)(lVar12 + 0xa8) != 0) && (*(char *)(lVar12 + 0xb0) != '\0')) {
            (**(code **)(**(long **)(lVar12 + 0xa0) + 0x18))();
            *(undefined1 *)(lVar12 + 0xb0) = 0;
          }
          lVar10 = lVar10 + 0x158;
          *(undefined8 *)(lVar12 + 0xa8) = 0;
        } while ((ulong)uVar2 * 0x158 != lVar10);
        lVar10 = *(long *)(param_1 + 0x180);
      }
      if (param_1 + 0x28 != lVar10) {
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
      }
    }
    *(long *)(param_1 + 0x180) = lVar13;
    *(uint *)(param_1 + 0x18c) = uVar18;
  }
  if (uVar2 < uVar18) {
    uVar15 = (ulong)*(uint *)(param_1 + 0x188);
    lVar13 = *(long *)(param_1 + 0x180);
    *(uint *)(param_1 + 0x188) = *(uint *)(param_1 + 0x188) + 1;
    if (lVar13 != 0) {
      lVar10 = lVar13 + uVar15 * 0x158;
      puVar14 = (undefined8 *)(lVar13 + uVar15 * 0x158);
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(undefined4 *)(puVar14 + 2) = 0;
      *puVar14 = 0;
      puVar14[1] = 0;
      *(undefined8 *)(lVar10 + 0x50) = 0xffff3f800000;
      *(undefined8 *)(lVar10 + 0x28) = 0;
      *(undefined8 *)(lVar10 + 0x40) = 0;
      *(undefined8 *)(lVar10 + 0x48) = 0x3f80000000000000;
      *(undefined8 *)(lVar10 + 0x30) = 0x3f800000;
      *(undefined8 *)(lVar10 + 0x38) = 0x3f800000;
      *(undefined8 *)(lVar10 + 0x58) = 0x3f800000;
      *(undefined8 *)(lVar10 + 0x60) = 0;
      *(undefined8 *)(lVar10 + 0x68) = 0x3f800000;
      *(undefined4 *)(lVar10 + 0x70) = 0;
      *(undefined1 *)(lVar10 + 0x74) = 1;
      *(undefined8 *)(lVar10 + 0x78) = 0x3f8000003f800000;
      *(undefined1 *)(lVar10 + 0xb0) = 0;
      *(undefined8 *)(lVar10 + 0xa8) = 0;
      puVar17 = (undefined8 *)(lVar10 + 0xa0);
      *puVar17 = 0;
      puVar19 = (undefined8 *)(lVar10 + 0x80);
      *puVar19 = 0;
      *(undefined4 *)(lVar10 + 0x98) = 0;
      *(undefined8 *)(lVar10 + 0x88) = 0;
      *(undefined8 *)(lVar10 + 0x90) = 0;
      *(undefined4 *)(lVar10 + 0xb8) = 0;
      memset((void *)(lVar10 + 0xc0),0,0x48);
      puVar8 = PTR_DAT_047e7208;
      uVar4 = *(undefined2 *)PTR_DAT_047e7208;
      *(undefined1 *)(lVar10 + 0x10a) = 0;
      *(undefined4 *)(lVar10 + 0x10b) = 0x1010101;
      *(undefined8 *)(lVar10 + 0x110) = 0;
      *(undefined2 *)(lVar10 + 0x108) = uVar4;
      *(undefined2 *)(lVar10 + 0x118) = uVar4;
      *(undefined1 *)(lVar10 + 0x11a) = 0;
      *(undefined4 *)(lVar10 + 0x11b) = 0x1010101;
      *(undefined4 *)(lVar10 + 0x120) = 0;
      *(undefined8 *)(lVar10 + 0x128) = 0;
      *(undefined4 *)(lVar10 + 0x130) = 0;
      *(undefined4 *)(lVar10 + 0x14c) = 0;
      *(undefined1 *)(lVar10 + 0x150) = 0;
      puVar7 = PTR_PTR_047e71e0;
      *(undefined8 *)(lVar10 + 0x20) = 0;
      *(undefined1 *)(lVar10 + 0x148) = 0;
      *(undefined8 *)(lVar10 + 0x138) = 0;
      *(undefined8 *)(lVar10 + 0x140) = 0;
      *puVar19 = puVar7;
      puVar9 = PTR_DAT_047e7210;
      uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x198) + 0x158);
      do {
        lVar12 = *(long *)puVar9;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar9,0x10);
        if (bVar6) {
          *(ulong *)puVar9 = lVar12 + 1U;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      uVar4 = *(undefined2 *)puVar8;
      *puVar14 = param_2;
      lVar11 = lVar13 + uVar15 * 0x158;
      *(ulong *)(lVar11 + 8) = lVar12 + 1U & 0xffffffffffffff;
      *(undefined4 *)(lVar11 + 0x10) = param_3;
      *(undefined8 *)(lVar10 + 0x20) = 0;
      *(undefined8 *)(lVar10 + 0x28) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(undefined4 *)(lVar10 + 0x30) = 0x3f800000;
      *(undefined4 *)(lVar10 + 0x34) = 0;
      *(undefined4 *)(lVar10 + 0x38) = 0x3f800000;
      *(undefined8 *)(lVar10 + 0x3c) = 0;
      *(undefined8 *)(lVar10 + 0x44) = 0;
      *(undefined4 *)(lVar10 + 0x4c) = 0x3f800000;
      *(undefined4 *)(lVar10 + 0x50) = 0x3f800000;
      *(undefined4 *)(lVar10 + 0x54) = 0xffff;
      *(undefined4 *)(lVar10 + 0x58) = 0x3f800000;
      *(undefined4 *)(lVar10 + 0x5c) = 0;
      *(undefined4 *)(lVar10 + 0x60) = 0;
      *(undefined4 *)(lVar10 + 100) = 0;
      *(undefined4 *)(lVar10 + 0x68) = 0x3f800000;
      *(undefined4 *)(lVar10 + 0x6c) = 0;
      *(undefined4 *)(lVar10 + 0x70) = 0;
      *(undefined1 *)(lVar10 + 0x74) = 1;
      *(undefined2 *)(lVar11 + 0x75) = local_6c;
      *(undefined1 *)(lVar11 + 0x77) = local_6a;
      *(undefined4 *)(lVar10 + 0x78) = 0x3f800000;
      *(undefined4 *)(lVar10 + 0x7c) = 0x3f800000;
      *puVar19 = puVar7;
      *(undefined4 *)(lVar11 + 0x98) = 0;
      *(undefined8 *)(lVar11 + 0x88) = 0;
      *(undefined8 *)(lVar11 + 0x90) = 0;
      if ((*(long *)(lVar11 + 0xa8) != 0) &&
         (pcVar16 = (char *)(lVar13 + uVar15 * 0x158 + 0xb0), *pcVar16 != '\0')) {
        (**(code **)(*(long *)*puVar17 + 0x18))();
        *pcVar16 = '\0';
      }
      lVar13 = lVar13 + uVar15 * 0x158;
      *puVar17 = 0;
      *(undefined8 *)(lVar10 + 0xa8) = 0;
      *(undefined4 *)(lVar10 + 0xb8) = uVar3;
      *(undefined8 *)(lVar13 + 0xc0) = 0;
      *(undefined4 *)(lVar13 + 0xf8) = 0;
      *(undefined8 *)(lVar13 + 0xe8) = 0;
      *(undefined8 *)(lVar13 + 0xf0) = 0;
      *(undefined8 *)(lVar13 + 0xd8) = 0;
      *(undefined8 *)(lVar13 + 0xe0) = 0;
      *(undefined8 *)(lVar13 + 200) = 0;
      *(undefined8 *)(lVar13 + 0xd0) = 0;
      *(undefined4 *)(lVar13 + 0x104) = 0;
      *(undefined8 *)(lVar13 + 0xfc) = 0;
      *(undefined2 *)(lVar10 + 0x108) = uVar4;
      *(undefined1 *)(lVar10 + 0x10a) = 0;
      *(undefined4 *)(lVar10 + 0x10b) = 0x1010101;
      *(undefined4 *)(lVar10 + 0x110) = 0;
      *(undefined4 *)(lVar10 + 0x114) = 0;
      *(undefined2 *)(lVar10 + 0x118) = uVar4;
      *(undefined1 *)(lVar10 + 0x11a) = 0;
      *(undefined4 *)(lVar10 + 0x11b) = 0x1010101;
      *(undefined4 *)(lVar10 + 0x120) = 0;
      *(undefined8 *)(lVar10 + 0x128) = 0;
      *(undefined4 *)(lVar10 + 0x130) = 0;
      *(undefined8 *)((long)puVar14 + 0x141) = 0;
      *(ulong *)((long)puVar14 + 0x134) = (ulong)uStack_90;
      *(undefined8 *)((long)puVar14 + 0x13c) = 0;
      *(undefined1 *)(lVar13 + 0x14b) = local_92;
      *(undefined2 *)(lVar13 + 0x149) = local_94;
      *(undefined4 *)(lVar10 + 0x14c) = 0;
      *(undefined1 *)(lVar10 + 0x150) = 0;
      return puVar14;
    }
  }
  return (undefined8 *)0x0;
}



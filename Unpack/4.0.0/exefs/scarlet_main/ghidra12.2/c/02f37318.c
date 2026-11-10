/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f37318; name: FUN_02f37318
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_02f37318(long param_1,short *param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *__s;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  short sVar8;
  char cVar9;
  long lVar10;
  undefined1 auVar11 [16];
  uint uVar12;
  bool bVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  long *plVar17;
  int iVar18;
  long lVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 local_e0;
  uint local_d8;
  undefined1 auStack_d0 [112];
  
  puVar1 = (uint *)(param_1 + 0x16c);
  if ((~*(uint *)(param_1 + 0x16c) & 0xffffff) == 0) {
    FUN_02f1da40(param_1 + 0x6f0,param_1,param_1 + 0x140);
  }
  uVar7 = *puVar1;
  do {
    while( true ) {
      uVar12 = uVar7 & 0xffffff;
      if (uVar12 == 0xffffff) {
        return 0x7fffffff;
      }
      uVar15 = (ulong)uVar12;
      uVar4 = *puVar1;
      if (uVar4 == uVar7) break;
      ClearExclusiveLocal();
      uVar7 = uVar4;
    }
    cVar9 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar13) {
      *puVar1 = uVar7 + 0x1000000 & 0xff000000 |
                *(uint *)(*(long *)(param_1 + 0x150) + uVar15 * 0x80) & 0xffffff;
      cVar9 = ExclusiveMonitorsStatus();
    }
    uVar7 = uVar4;
  } while (cVar9 != '\0');
  piVar2 = (int *)(param_1 + 0x170);
  do {
    cVar9 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar13) {
      *piVar2 = *piVar2 + 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  uVar7 = *(uint *)(param_1 + 0x174);
  if (uVar7 + 1 <= uVar12) {
    puVar1 = (uint *)(param_1 + 0x174);
    uVar4 = uVar7;
    if (uVar7 + 1 <= uVar12 + 1) {
      uVar4 = uVar12;
    }
    do {
      if (*puVar1 != uVar7) {
        do {
          ClearExclusiveLocal();
          uVar4 = *puVar1;
          uVar7 = uVar4;
          if (uVar4 + 1 <= uVar12 + 1) {
            uVar7 = uVar12;
          }
          while (*puVar1 == uVar4) {
            cVar9 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar13) {
              *puVar1 = uVar7;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 == '\0') goto LAB_02f37460;
          }
        } while( true );
      }
      cVar9 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = uVar4;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
LAB_02f37460:
  __s = (undefined8 *)(*(long *)(param_1 + 0x150) + uVar15 * 0x80);
  memset(__s,0,0x80);
  uVar5 = *(undefined8 *)(param_2 + 0x14);
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  __s[2] = *(undefined8 *)(param_2 + 0x10);
  __s[3] = uVar5;
  __s[4] = uVar6;
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  __s[1] = *(undefined8 *)(param_2 + 0x24);
  *__s = uVar5;
  uVar6 = *(undefined8 *)(param_2 + 0xc);
  uVar5 = *(undefined8 *)(param_2 + 8);
  fVar21 = *(float *)(param_2 + 2);
  *(undefined4 *)((long)__s + 0x5a) = 0x5f800000;
  __s[8] = CONCAT26((short)((uint)(fVar21 * 1.0039062) >> 0x10),
                    CONCAT24((short)((uint)((float)uVar6 * 1.0039062) >> 0x10),
                             CONCAT22((short)((uint)((float)((ulong)uVar5 >> 0x20) * 1.0039062) >>
                                             0x10),(short)((uint)((float)uVar5 * 1.0039062) >> 0x10)
                                     )));
  uVar6 = _UNK_03cabdd8;
  uVar5 = _DAT_03cabdd0;
  sVar8 = *param_2;
  if (sVar8 == -1) {
    sVar8 = 1;
  }
  *(short *)(__s + 0xb) = sVar8;
  __s[0xd] = uVar6;
  __s[0xc] = uVar5;
  __s[0xf] = uVar6;
  __s[0xe] = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  __s[0xd] = CONCAT44(0x5f7ffff0,(int)*(undefined8 *)(param_2 + 0x2c));
  __s[0xc] = uVar5;
  uVar6 = *(undefined8 *)(param_2 + 0x34);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  __s[9] = 0x7fffffff00ffffff;
  *(undefined2 *)((long)__s + 0x5e) = 0x1ff;
  __s[0xf] = CONCAT44(0x5f7ffff0,(int)uVar6);
  __s[0xe] = uVar5;
  uVar5 = _DAT_03caa9e0;
  if (*(long *)(param_1 + 0x698) != 0) {
    uVar20 = (undefined4)_UNK_03caa9e8;
    uVar22 = (undefined4)((ulong)_UNK_03caa9e8 >> 0x20);
    puVar3 = (undefined4 *)(*(long *)(*(long *)(param_1 + 0x698) + 0x388) + uVar15 * 0x20);
    auVar24._8_4_ = uVar20;
    auVar24._0_8_ = _DAT_03caa9e0;
    auVar24._12_4_ = uVar22;
    auVar23._0_8_ = NEON_sqxtn(0x5f7ffff0,auVar24,4);
    auVar23._8_8_ = 0;
    sVar8 = param_2[1];
    *(byte *)((long)puVar3 + 10) = (byte)uVar12 & 3;
    *(undefined1 *)((long)puVar3 + 0xb) = 0;
    *puVar3 = 0;
    auVar11._8_4_ = uVar20;
    auVar11._0_8_ = uVar5;
    auVar11._12_4_ = uVar22;
    auVar24 = NEON_sqxtn2(auVar23,auVar11,4);
    uVar5 = NEON_sqxtun(uVar5,auVar24,2);
    *(bool *)((long)puVar3 + 0xe) = (char)sVar8 == '\0';
    puVar3[4] = 0xffffffff;
    puVar3[1] = (int)uVar5;
  }
  lVar10 = tpidr_el0;
  if (*(long *)(param_1 + 0x800) == 0) {
    plVar17 = (long *)0x0;
    iVar18 = -1;
    bVar13 = false;
  }
  else {
    lVar19 = (long)DAT_0486b380;
    lVar14 = *(long *)(lVar10 + 0x1000b8);
    if (lVar14 == 0) {
      lVar14 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar14;
      iVar16 = DAT_0486b380;
      iVar18 = (int)*(undefined8 *)(lVar14 + lVar19 * 8 + 1000);
      if (lVar14 == 0) {
        lVar14 = FUN_00e5d3b4();
        *(long *)(lVar10 + 0x1000b8) = lVar14;
      }
    }
    else {
      iVar18 = (int)*(undefined8 *)(lVar14 + lVar19 * 8 + 1000);
      iVar16 = DAT_0486b380;
    }
    *(long *)(lVar14 + (long)iVar16 * 8 + 1000) = (long)(iVar18 + 1);
    plVar17 = *(long **)(param_1 + 0x800);
    bVar13 = iVar18 == 0;
  }
  bVar13 = (bool)(bVar13 & plVar17 != (long *)0x0);
  if ((*(char *)(param_1 + 0x999) != '\0') || (bVar13)) {
    local_e0 = 0x3b02000080;
    local_d8 = uVar12;
    memcpy(auStack_d0,param_2,0x70);
    if (bVar13) {
      (**(code **)(*plVar17 + 0x20))(plVar17,&local_e0);
    }
  }
  FUN_02f376e4(param_1 + 0x708,param_1,param_2,uVar15);
  if (iVar18 != -1) {
    lVar19 = (long)DAT_0486b380;
    lVar14 = *(long *)(lVar10 + 0x1000b8);
    if (lVar14 == 0) {
      lVar14 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar14;
    }
    *(long *)(lVar14 + lVar19 * 8 + 1000) = (long)iVar18;
  }
  return uVar15;
}



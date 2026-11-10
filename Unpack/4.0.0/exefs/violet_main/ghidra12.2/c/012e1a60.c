/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012e1a60; name: FUN_012e1a60
 */


void FUN_012e1a60(long *param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  FUN_012e2c0c(*(undefined8 *)(*(long *)PTR_DAT_047d3f70 + 8));
  (**(code **)(*param_1 + 0x40))(param_1);
  plVar8 = (long *)FUN_0156ea10();
  param_1[6] = (long)plVar8;
  lVar22 = param_1[3];
  param_1[0x43] = ((long *)plVar8[1])[1] + *(long *)plVar8[1];
  puVar4 = PTR_DAT_047d4e20;
  lVar18 = *plVar8;
  lVar20 = *(long *)(lVar18 + 0x18);
  lVar19 = *(long *)(lVar18 + 0x20);
  lVar23 = *(long *)(lVar18 + 8);
  lVar14 = *(long *)(lVar18 + 0x10);
  lVar24 = *(long *)(lVar18 + 0x48);
  lVar15 = *(long *)(lVar18 + 0x28);
  lVar2 = *(long *)(lVar18 + 0x30);
  lVar1 = *(long *)(lVar18 + 0x38);
  lVar18 = *(long *)(lVar18 + 0x40);
  if (lVar24 == 0) {
    uVar17 = (**(code **)(**(long **)(*(long *)PTR_DAT_047d4e20 + 0x28) + 0x80))();
    uVar9 = lVar22 + lVar23 + lVar14 + lVar20 + lVar19 + lVar15 + lVar2 + lVar1 + lVar18 + 0x2000000
    ;
    plVar8 = (long *)param_1[6];
    lVar24 = 0;
    if (uVar9 <= uVar17) {
      lVar24 = uVar17 - uVar9;
    }
  }
  cVar3 = *(char *)((long)plVar8 + 0x54);
  uVar9 = FUN_012e29a0();
  if (cVar3 == '\0') {
    if ((uVar9 & 1) == 0) {
      FUN_01760108(*(undefined8 *)PTR_DAT_047d3f70,"TrinityHeapType::JobScheduler",1,lVar22,
                   *(undefined8 *)(*(long *)puVar4 + 0x28));
    }
    else {
      FUN_0175d5e4();
    }
    uVar9 = FUN_012e29a0();
    if ((uVar9 & 1) == 0) {
      FUN_012e3664(*(undefined8 *)PTR_DAT_047d3f70,"TrinityHeapType::Gfx2",2,lVar23,
                   *(undefined8 *)(*(long *)puVar4 + 0x28));
    }
    else {
      FUN_028afd88();
    }
    uVar9 = FUN_012e29a0();
    if ((uVar9 & 1) == 0) {
      FUN_012e3664(*(undefined8 *)PTR_DAT_047d3f70,"TrinityHeapType::Vfx2",3,lVar14,
                   *(undefined8 *)(*(long *)puVar4 + 0x28));
    }
    else {
      FUN_028afd88();
    }
    uVar9 = FUN_012e29a0();
    if ((uVar9 & 1) == 0) {
      FUN_012e3664(*(undefined8 *)PTR_DAT_047d3f70,"TrinityHeapType::Physics",4,lVar20,
                   *(undefined8 *)(*(long *)puVar4 + 0x28));
    }
    else {
      FUN_028afd88();
    }
    uVar9 = FUN_012e29a0();
    if ((uVar9 & 1) == 0) {
      FUN_012e3664(*(undefined8 *)PTR_DAT_047d3f70,"TrinityHeapType::Ui2d",5,lVar19,
                   *(undefined8 *)(*(long *)puVar4 + 0x28));
    }
    else {
      FUN_028afd88();
    }
    uVar9 = FUN_012e29a0();
    if ((uVar9 & 1) == 0) {
      FUN_012e3664(*(undefined8 *)PTR_DAT_047d3f70,"TrinityHeapType::Fs",6,lVar15,
                   *(undefined8 *)(*(long *)puVar4 + 0x28));
    }
    else {
      FUN_028afd88();
    }
    uVar9 = FUN_012e29a0();
    if ((uVar9 & 1) == 0) {
      FUN_012e3664(*(undefined8 *)PTR_DAT_047d3f70,"TrinityHeapType::Lua",7,lVar2,
                   *(undefined8 *)(*(long *)puVar4 + 0x28));
    }
    else {
      FUN_028afd88();
    }
    uVar9 = FUN_012e29a0();
    if ((uVar9 & 1) == 0) {
      FUN_012e3664(*(undefined8 *)PTR_DAT_047d3f70,"TrinityHeapType::Sound",8,lVar1,
                   *(undefined8 *)(*(long *)puVar4 + 0x28));
    }
    else {
      FUN_028afd88();
    }
    uVar9 = FUN_012e29a0();
    if ((uVar9 & 1) == 0) {
      FUN_012e3664(*(undefined8 *)PTR_DAT_047d3f70,"TrinityHeapType::EventSystem",9,lVar18,
                   *(undefined8 *)(*(long *)puVar4 + 0x28));
    }
    else {
      FUN_028afd88();
    }
    uVar9 = FUN_012e29a0();
    if ((uVar9 & 1) == 0) {
      FUN_012e3664(*(undefined8 *)PTR_DAT_047d3f70,"TrinityHeapType::Object",10,lVar24,
                   *(undefined8 *)(*(long *)puVar4 + 0x28));
    }
    else {
      FUN_028afd88();
    }
    plVar8 = (long *)PTR_DAT_047d3f70;
  }
  else {
    if ((uVar9 & 1) == 0) {
      FUN_01760108(*(undefined8 *)PTR_DAT_047d3f70,"TrinityHeapType::JobScheduler",1,lVar22,
                   *(undefined8 *)(*(long *)puVar4 + 0x28));
    }
    else {
      FUN_0175d5e4();
    }
    uVar9 = FUN_012e29a0();
    puVar5 = PTR_DAT_047dda10;
    lVar22 = *(long *)PTR_DAT_047d3f70;
    plVar8 = *(long **)(*(long *)puVar4 + 0x28);
    if ((uVar9 & 1) == 0) {
      FUN_012e3664(lVar22,"TrinityHeapType::Gfx2",2,lVar23,plVar8);
    }
    else {
      *(long **)(lVar22 + 0x50) = plVar8;
      *(undefined8 *)(lVar22 + 0x60) = 0x58;
      plVar10 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x58,8);
      *(long **)(lVar22 + 0x58) = plVar10;
      if (plVar10 == (long *)0x0) {
        (**(code **)(**(long **)(lVar22 + 0x50) + 0xe8))();
      }
      else {
        *(undefined2 *)(plVar10 + 3) = 0;
        *plVar10 = (long)(puVar5 + 0x10);
        plVar10[1] = (long)(puVar5 + 0x130);
        plVar10[2] = 0;
        plVar13 = plVar8 + 1;
        plVar11 = (long *)(**(code **)*plVar13)(plVar13);
        lVar12 = FUN_012e29ac();
        for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
          if (plVar11 == (long *)lVar12) {
            plVar11 = plVar8;
            goto LAB_012e1bdc;
          }
        }
        plVar11 = (long *)0x0;
LAB_012e1bdc:
        plVar10[4] = (long)plVar11;
        plVar10[5] = lVar23;
        *(undefined4 *)(plVar10 + 6) = 0;
        plVar10[9] = 0;
        *(undefined1 *)(plVar10 + 10) = 0;
        plVar10[7] = 0;
        plVar10[8] = 0;
        uVar9 = (**(code **)(*plVar8 + 0xb8))(plVar8);
        if ((uVar9 & 1) == 0) {
          (**(code **)*plVar13)(plVar13);
          bVar6 = FUN_012e2a88();
        }
        else {
          bVar6 = 1;
        }
        *(byte *)(plVar10 + 10) = bVar6 & 1;
        *(long **)(lVar22 + 0x48) = plVar10;
        (**(code **)(*plVar10 + 0xe0))(plVar10,"TrinityHeapType::Gfx2");
      }
    }
    plVar8 = (long *)PTR_DAT_047d3f70;
    uVar9 = FUN_012e29a0();
    lVar23 = *plVar8;
    plVar10 = *(long **)(*(long *)puVar4 + 0x28);
    if ((uVar9 & 1) == 0) {
      FUN_012e3664(lVar23,"TrinityHeapType::Vfx2",3,lVar14,plVar10);
    }
    else {
      *(long **)(lVar23 + 0x70) = plVar10;
      *(undefined8 *)(lVar23 + 0x80) = 0x58;
      plVar11 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x58,8);
      *(long **)(lVar23 + 0x78) = plVar11;
      if (plVar11 == (long *)0x0) {
        (**(code **)(**(long **)(lVar23 + 0x70) + 0xe8))();
      }
      else {
        *(undefined2 *)(plVar11 + 3) = 0;
        *plVar11 = (long)(puVar5 + 0x10);
        plVar11[1] = (long)(puVar5 + 0x130);
        plVar11[2] = 0;
        plVar21 = plVar10 + 1;
        plVar13 = (long *)(**(code **)*plVar21)(plVar21);
        lVar22 = FUN_012e29ac();
        for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
          if (plVar13 == (long *)lVar22) {
            plVar13 = plVar10;
            goto LAB_012e1cc8;
          }
        }
        plVar13 = (long *)0x0;
LAB_012e1cc8:
        plVar11[4] = (long)plVar13;
        plVar11[5] = lVar14;
        *(undefined4 *)(plVar11 + 6) = 0;
        plVar11[9] = 0;
        *(undefined1 *)(plVar11 + 10) = 0;
        plVar11[7] = 0;
        plVar11[8] = 0;
        uVar9 = (**(code **)(*plVar10 + 0xb8))(plVar10);
        if ((uVar9 & 1) == 0) {
          (**(code **)*plVar21)(plVar21);
          bVar6 = FUN_012e2a88();
        }
        else {
          bVar6 = 1;
        }
        *(byte *)(plVar11 + 10) = bVar6 & 1;
        *(long **)(lVar23 + 0x68) = plVar11;
        (**(code **)(*plVar11 + 0xe0))(plVar11,"TrinityHeapType::Vfx2");
      }
    }
    uVar9 = FUN_012e29a0();
    lVar23 = *plVar8;
    plVar10 = *(long **)(*(long *)puVar4 + 0x28);
    if ((uVar9 & 1) == 0) {
      FUN_012e3664(lVar23,"TrinityHeapType::Physics",4,lVar20,plVar10);
    }
    else {
      *(long **)(lVar23 + 0x90) = plVar10;
      *(undefined8 *)(lVar23 + 0xa0) = 0x58;
      plVar11 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x58,8);
      *(long **)(lVar23 + 0x98) = plVar11;
      if (plVar11 == (long *)0x0) {
        (**(code **)(**(long **)(lVar23 + 0x90) + 0xe8))();
      }
      else {
        *(undefined2 *)(plVar11 + 3) = 0;
        *plVar11 = (long)(puVar5 + 0x10);
        plVar11[1] = (long)(puVar5 + 0x130);
        plVar11[2] = 0;
        plVar21 = plVar10 + 1;
        plVar13 = (long *)(**(code **)*plVar21)(plVar21);
        lVar14 = FUN_012e29ac();
        for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
          if (plVar13 == (long *)lVar14) {
            plVar13 = plVar10;
            goto LAB_012e1da8;
          }
        }
        plVar13 = (long *)0x0;
LAB_012e1da8:
        plVar11[4] = (long)plVar13;
        *(undefined4 *)(plVar11 + 6) = 0;
        plVar11[9] = 0;
        *(undefined1 *)(plVar11 + 10) = 0;
        plVar11[5] = lVar20;
        plVar11[7] = 0;
        plVar11[8] = 0;
        uVar9 = (**(code **)(*plVar10 + 0xb8))(plVar10);
        if ((uVar9 & 1) == 0) {
          (**(code **)*plVar21)(plVar21);
          bVar6 = FUN_012e2a88();
        }
        else {
          bVar6 = 1;
        }
        *(byte *)(plVar11 + 10) = bVar6 & 1;
        *(long **)(lVar23 + 0x88) = plVar11;
        (**(code **)(*plVar11 + 0xe0))(plVar11,"TrinityHeapType::Physics");
      }
    }
    uVar9 = FUN_012e29a0();
    lVar23 = *plVar8;
    plVar10 = *(long **)(*(long *)puVar4 + 0x28);
    if ((uVar9 & 1) == 0) {
      FUN_012e3664(lVar23,"TrinityHeapType::Ui2d",5,lVar19,plVar10);
    }
    else {
      *(long **)(lVar23 + 0xb0) = plVar10;
      *(undefined8 *)(lVar23 + 0xc0) = 0x58;
      plVar11 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x58,8);
      *(long **)(lVar23 + 0xb8) = plVar11;
      if (plVar11 == (long *)0x0) {
        (**(code **)(**(long **)(lVar23 + 0xb0) + 0xe8))();
      }
      else {
        *(undefined2 *)(plVar11 + 3) = 0;
        *plVar11 = (long)(puVar5 + 0x10);
        plVar11[1] = (long)(puVar5 + 0x130);
        plVar11[2] = 0;
        plVar21 = plVar10 + 1;
        plVar13 = (long *)(**(code **)*plVar21)(plVar21);
        lVar14 = FUN_012e29ac();
        for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
          if (plVar13 == (long *)lVar14) {
            plVar13 = plVar10;
            goto LAB_012e1e90;
          }
        }
        plVar13 = (long *)0x0;
LAB_012e1e90:
        plVar11[4] = (long)plVar13;
        *(undefined4 *)(plVar11 + 6) = 0;
        plVar11[9] = 0;
        *(undefined1 *)(plVar11 + 10) = 0;
        plVar11[5] = lVar19;
        plVar11[7] = 0;
        plVar11[8] = 0;
        uVar9 = (**(code **)(*plVar10 + 0xb8))(plVar10);
        if ((uVar9 & 1) == 0) {
          (**(code **)*plVar21)(plVar21);
          bVar6 = FUN_012e2a88();
        }
        else {
          bVar6 = 1;
        }
        *(byte *)(plVar11 + 10) = bVar6 & 1;
        *(long **)(lVar23 + 0xa8) = plVar11;
        (**(code **)(*plVar11 + 0xe0))(plVar11,"TrinityHeapType::Ui2d");
      }
    }
    uVar9 = FUN_012e29a0();
    lVar23 = *plVar8;
    plVar10 = *(long **)(*(long *)puVar4 + 0x28);
    if ((uVar9 & 1) == 0) {
      FUN_012e3664(lVar23,"TrinityHeapType::Fs",6,lVar15,plVar10);
    }
    else {
      *(long **)(lVar23 + 0xd0) = plVar10;
      *(undefined8 *)(lVar23 + 0xe0) = 0x58;
      plVar11 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x58,8);
      *(long **)(lVar23 + 0xd8) = plVar11;
      if (plVar11 == (long *)0x0) {
        (**(code **)(**(long **)(lVar23 + 0xd0) + 0xe8))();
      }
      else {
        *(undefined2 *)(plVar11 + 3) = 0;
        *plVar11 = (long)(puVar5 + 0x10);
        plVar11[1] = (long)(puVar5 + 0x130);
        plVar11[2] = 0;
        plVar21 = plVar10 + 1;
        plVar13 = (long *)(**(code **)*plVar21)(plVar21);
        lVar14 = FUN_012e29ac();
        for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
          if (plVar13 == (long *)lVar14) {
            plVar13 = plVar10;
            goto LAB_012e1f78;
          }
        }
        plVar13 = (long *)0x0;
LAB_012e1f78:
        plVar11[4] = (long)plVar13;
        *(undefined4 *)(plVar11 + 6) = 0;
        plVar11[9] = 0;
        *(undefined1 *)(plVar11 + 10) = 0;
        plVar11[5] = lVar15;
        plVar11[7] = 0;
        plVar11[8] = 0;
        uVar9 = (**(code **)(*plVar10 + 0xb8))(plVar10);
        if ((uVar9 & 1) == 0) {
          (**(code **)*plVar21)(plVar21);
          bVar6 = FUN_012e2a88();
        }
        else {
          bVar6 = 1;
        }
        *(byte *)(plVar11 + 10) = bVar6 & 1;
        *(long **)(lVar23 + 200) = plVar11;
        (**(code **)(*plVar11 + 0xe0))(plVar11,"TrinityHeapType::Fs");
      }
    }
    uVar9 = FUN_012e29a0();
    lVar23 = *plVar8;
    plVar10 = *(long **)(*(long *)puVar4 + 0x28);
    if ((uVar9 & 1) == 0) {
      FUN_012e3664(lVar23,"TrinityHeapType::Lua",7,lVar2,plVar10);
    }
    else {
      *(long **)(lVar23 + 0xf0) = plVar10;
      *(undefined8 *)(lVar23 + 0x100) = 0x58;
      plVar11 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x58,8);
      *(long **)(lVar23 + 0xf8) = plVar11;
      if (plVar11 == (long *)0x0) {
        (**(code **)(**(long **)(lVar23 + 0xf0) + 0xe8))();
      }
      else {
        *(undefined2 *)(plVar11 + 3) = 0;
        *plVar11 = (long)(puVar5 + 0x10);
        plVar11[1] = (long)(puVar5 + 0x130);
        plVar11[2] = 0;
        plVar21 = plVar10 + 1;
        plVar13 = (long *)(**(code **)*plVar21)(plVar21);
        lVar15 = FUN_012e29ac();
        for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
          if (plVar13 == (long *)lVar15) {
            plVar13 = plVar10;
            goto LAB_012e2060;
          }
        }
        plVar13 = (long *)0x0;
LAB_012e2060:
        plVar11[4] = (long)plVar13;
        *(undefined4 *)(plVar11 + 6) = 0;
        plVar11[9] = 0;
        *(undefined1 *)(plVar11 + 10) = 0;
        plVar11[5] = lVar2;
        plVar11[7] = 0;
        plVar11[8] = 0;
        uVar9 = (**(code **)(*plVar10 + 0xb8))(plVar10);
        if ((uVar9 & 1) == 0) {
          (**(code **)*plVar21)(plVar21);
          bVar6 = FUN_012e2a88();
        }
        else {
          bVar6 = 1;
        }
        *(byte *)(plVar11 + 10) = bVar6 & 1;
        *(long **)(lVar23 + 0xe8) = plVar11;
        (**(code **)(*plVar11 + 0xe0))(plVar11,"TrinityHeapType::Lua");
      }
    }
    uVar9 = FUN_012e29a0();
    lVar23 = *plVar8;
    plVar10 = *(long **)(*(long *)puVar4 + 0x28);
    if ((uVar9 & 1) == 0) {
      FUN_012e3664(lVar23,"TrinityHeapType::Sound",8,lVar1,plVar10);
    }
    else {
      *(long **)(lVar23 + 0x110) = plVar10;
      *(undefined8 *)(lVar23 + 0x120) = 0x58;
      plVar11 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x58,8);
      *(long **)(lVar23 + 0x118) = plVar11;
      if (plVar11 == (long *)0x0) {
        (**(code **)(**(long **)(lVar23 + 0x110) + 0xe8))();
      }
      else {
        *(undefined2 *)(plVar11 + 3) = 0;
        *plVar11 = (long)(puVar5 + 0x10);
        plVar11[1] = (long)(puVar5 + 0x130);
        plVar11[2] = 0;
        plVar21 = plVar10 + 1;
        plVar13 = (long *)(**(code **)*plVar21)(plVar21);
        lVar15 = FUN_012e29ac();
        for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
          if (plVar13 == (long *)lVar15) {
            plVar13 = plVar10;
            goto LAB_012e2148;
          }
        }
        plVar13 = (long *)0x0;
LAB_012e2148:
        plVar11[4] = (long)plVar13;
        *(undefined4 *)(plVar11 + 6) = 0;
        plVar11[9] = 0;
        *(undefined1 *)(plVar11 + 10) = 0;
        plVar11[5] = lVar1;
        plVar11[7] = 0;
        plVar11[8] = 0;
        uVar9 = (**(code **)(*plVar10 + 0xb8))(plVar10);
        if ((uVar9 & 1) == 0) {
          (**(code **)*plVar21)(plVar21);
          bVar6 = FUN_012e2a88();
        }
        else {
          bVar6 = 1;
        }
        *(byte *)(plVar11 + 10) = bVar6 & 1;
        *(long **)(lVar23 + 0x108) = plVar11;
        (**(code **)(*plVar11 + 0xe0))(plVar11,"TrinityHeapType::Sound");
      }
    }
    uVar9 = FUN_012e29a0();
    lVar23 = *plVar8;
    plVar10 = *(long **)(*(long *)puVar4 + 0x28);
    if ((uVar9 & 1) == 0) {
      FUN_012e3664(lVar23,"TrinityHeapType::EventSystem",9,lVar18,plVar10);
    }
    else {
      *(long **)(lVar23 + 0x130) = plVar10;
      *(undefined8 *)(lVar23 + 0x140) = 0x58;
      plVar11 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x58,8);
      *(long **)(lVar23 + 0x138) = plVar11;
      if (plVar11 == (long *)0x0) {
        (**(code **)(**(long **)(lVar23 + 0x130) + 0xe8))();
      }
      else {
        *(undefined2 *)(plVar11 + 3) = 0;
        *plVar11 = (long)(puVar5 + 0x10);
        plVar11[1] = (long)(puVar5 + 0x130);
        plVar11[2] = 0;
        plVar21 = plVar10 + 1;
        plVar13 = (long *)(**(code **)*plVar21)(plVar21);
        lVar15 = FUN_012e29ac();
        for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
          if (plVar13 == (long *)lVar15) {
            plVar13 = plVar10;
            goto LAB_012e2230;
          }
        }
        plVar13 = (long *)0x0;
LAB_012e2230:
        plVar11[4] = (long)plVar13;
        *(undefined4 *)(plVar11 + 6) = 0;
        plVar11[9] = 0;
        *(undefined1 *)(plVar11 + 10) = 0;
        plVar11[5] = lVar18;
        plVar11[7] = 0;
        plVar11[8] = 0;
        uVar9 = (**(code **)(*plVar10 + 0xb8))(plVar10);
        if ((uVar9 & 1) == 0) {
          (**(code **)*plVar21)(plVar21);
          bVar6 = FUN_012e2a88();
        }
        else {
          bVar6 = 1;
        }
        *(byte *)(plVar11 + 10) = bVar6 & 1;
        *(long **)(lVar23 + 0x128) = plVar11;
        (**(code **)(*plVar11 + 0xe0))(plVar11,"TrinityHeapType::EventSystem");
      }
    }
    uVar9 = FUN_012e29a0();
    lVar23 = *plVar8;
    plVar10 = *(long **)(*(long *)puVar4 + 0x28);
    if ((uVar9 & 1) == 0) {
      FUN_012e3664(lVar23,"TrinityHeapType::Object",10,lVar24,plVar10);
    }
    else {
      *(long **)(lVar23 + 0x150) = plVar10;
      *(undefined8 *)(lVar23 + 0x160) = 0x58;
      plVar11 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x58,8);
      *(long **)(lVar23 + 0x158) = plVar11;
      if (plVar11 == (long *)0x0) {
        (**(code **)(**(long **)(lVar23 + 0x150) + 0xe8))();
      }
      else {
        *(undefined2 *)(plVar11 + 3) = 0;
        *plVar11 = (long)(puVar5 + 0x10);
        plVar11[1] = (long)(puVar5 + 0x130);
        plVar11[2] = 0;
        plVar21 = plVar10 + 1;
        plVar13 = (long *)(**(code **)*plVar21)(plVar21);
        lVar15 = FUN_012e29ac();
        for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
          if (plVar13 == (long *)lVar15) {
            plVar13 = plVar10;
            goto LAB_012e2318;
          }
        }
        plVar13 = (long *)0x0;
LAB_012e2318:
        plVar11[4] = (long)plVar13;
        *(undefined4 *)(plVar11 + 6) = 0;
        plVar11[9] = 0;
        *(undefined1 *)(plVar11 + 10) = 0;
        plVar11[5] = lVar24;
        plVar11[7] = 0;
        plVar11[8] = 0;
        uVar9 = (**(code **)(*plVar10 + 0xb8))(plVar10);
        if ((uVar9 & 1) == 0) {
          (**(code **)*plVar21)(plVar21);
          bVar6 = FUN_012e2a88();
        }
        else {
          bVar6 = 1;
        }
        *(byte *)(plVar11 + 10) = bVar6 & 1;
        *(long **)(lVar23 + 0x148) = plVar11;
        (**(code **)(*plVar11 + 0xe0))(plVar11,"TrinityHeapType::Object");
      }
    }
  }
  uStack_70 = 0x4000000;
  local_78 = **(undefined8 **)(param_1[6] + 0x38);
  local_68 = *(undefined8 *)(*plVar8 + 200);
  if (((*PTR_DAT_047d8c40 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c40);
  }
  uVar16 = *(undefined8 *)PTR_DAT_047d8c48;
  *(undefined8 *)PTR_DAT_047d8c50 = uVar16;
  FUN_012e3fcc(uVar16,&local_78);
  local_80 = *(undefined8 *)(*plVar8 + 8);
  FUN_012e2b28(local_80,&local_80);
  return;
}



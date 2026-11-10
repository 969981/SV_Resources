/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01461224; name: FUN_01461224
 */


void FUN_01461224(long param_1,undefined1 *param_2,uint *param_3)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  long **pplVar12;
  long *plVar13;
  undefined8 uVar14;
  byte bVar15;
  long lVar16;
  long **local_148;
  undefined1 auStack_140 [8];
  undefined *local_138;
  undefined8 local_130;
  long local_128;
  undefined2 local_120;
  char local_11e;
  long *local_118 [11];
  undefined2 auStack_c0 [11];
  undefined2 auStack_aa [11];
  undefined1 auStack_94 [12];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined2 local_70;
  
  *param_2 = 0;
  uVar10 = *param_3;
  plVar13 = *(long **)(param_3 + 2);
  if (uVar10 == 8) {
    cVar2 = FUN_014616dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x70));
    cVar3 = FUN_014616e4(*(undefined8 *)(param_1 + 8));
    if (cVar2 == cVar3) {
      return;
    }
  }
  lVar16 = *(long *)(param_1 + 0x20);
  if (plVar13 == (long *)0x0) {
    uVar7 = FUN_01461ad8(lVar16,uVar10);
  }
  else {
    uVar6 = (**(code **)(*plVar13 + 0x98))(plVar13);
    uVar7 = FUN_014616f0(*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0x10) + 0x70),uVar10,
                         uVar6);
    FUN_0129aff0(*(undefined8 *)(lVar16 + 0x18),0x33,uVar6,uVar10 & 0xff);
  }
  if ((uVar7 & 1) != 0) {
    FUN_0124beb0(*(undefined8 *)(param_1 + 0x20),*param_3);
    if (*(long **)(param_3 + 2) == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)(**(long **)(param_3 + 2) + 0x98))();
    }
    FUN_01461c58(param_1,uVar6,*param_3);
    uVar10 = *param_3;
    if (uVar10 == 5) {
      FUN_02980d90(param_1);
      uVar10 = *param_3;
    }
    if (uVar10 == 8) {
      FUN_02980e44(param_1);
      uVar10 = *param_3;
    }
    if (uVar10 == 9) {
      memset(local_118,0,0x8f);
      local_78 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_138 = PTR_DAT_047e2580 + 0x10;
      local_70 = 0;
      local_130 = *(undefined8 *)(param_1 + 8);
      local_128 = *(long *)(param_1 + 0x10);
      local_120 = 0;
      local_11e = '\x01';
      FUN_01247774(&local_138);
      lVar16 = local_128;
      if (local_11e == '\0') {
        uVar7 = (ulong)(byte)local_120;
        lVar11 = 0;
        if ((byte)local_120 < 5) {
          lVar11 = *(long *)(local_128 + 0x30) + uVar7 * 0x38 + 0x28;
        }
        if (local_120._1_1_ < *(byte *)(lVar11 + 0x30)) {
          plVar13 = *(long **)(lVar11 + (ulong)local_120._1_1_ * 8);
        }
        else {
          plVar13 = (long *)0x0;
        }
        bVar15 = local_120._1_1_ + 1;
        local_120 = CONCAT11(bVar15,(byte)local_120);
        if ((byte)local_120 < 5) {
          do {
            lVar11 = *(long *)(*(long *)(lVar16 + 0x290) + 8);
            bVar4 = FUN_010f9128(*(undefined4 *)(lVar11 + 0x36c),*(undefined1 *)(lVar11 + 0x370),
                                 uVar7 & 0xffffffff);
            for (; bVar15 < bVar4; bVar15 = bVar15 + 1) {
              if (((bVar15 < *(byte *)(*(long *)(lVar16 + 0x30) + uVar7 * 0x38 + 0x58)) &&
                  (plVar8 = *(long **)(*(long *)(lVar16 + 0x30) + uVar7 * 0x38 + (ulong)bVar15 * 8 +
                                      0x28), plVar8 != (long *)0x0)) &&
                 (uVar9 = (**(code **)(*plVar8 + 0x200))(), (uVar9 & 1) == 0)) {
                bVar1 = false;
                local_120 = CONCAT11(bVar15,(char)uVar7);
                goto LAB_014614a0;
              }
            }
            uVar7 = uVar7 + 1;
            bVar15 = 0;
          } while (uVar7 != 5);
          bVar15 = 0;
          local_120 = 5;
        }
        bVar1 = true;
        local_11e = '\x01';
LAB_014614a0:
        bVar4 = 0;
LAB_014614ac:
        if ((plVar13 != (long *)0x0) && (bVar4 < 0xb)) {
          if (bVar4 != 0) {
            pplVar12 = local_118;
            uVar9 = (ulong)bVar4;
            do {
              if (*pplVar12 == plVar13) goto LAB_0146150c;
              uVar9 = uVar9 - 1;
              pplVar12 = pplVar12 + 1;
            } while (uVar9 != 0);
          }
          local_118[bVar4] = plVar13;
          auStack_94[local_78 >> 0x30 & 0xff] = 0;
          auStack_c0[local_78 >> 0x30 & 0xff] = 0;
          auStack_aa[local_78 >> 0x30 & 0xff] = 0;
          bVar4 = local_78._6_1_ + 1;
          local_78._0_7_ = CONCAT16(bVar4,(undefined6)local_78);
          if (local_78._7_1_ < bVar4) {
            local_78 = CONCAT17(bVar4,(undefined7)local_78);
          }
        }
LAB_0146150c:
        if (!bVar1) {
          uVar10 = (uint)uVar7 & 0xff;
          lVar11 = 0;
          if (uVar10 < 5) {
            lVar11 = *(long *)(lVar16 + 0x30) + (uVar7 & 0xff) * 0x38 + 0x28;
          }
          if (bVar15 < *(byte *)(lVar11 + 0x30)) {
            plVar13 = *(long **)(lVar11 + (ulong)bVar15 * 8);
          }
          else {
            plVar13 = (long *)0x0;
          }
          bVar15 = bVar15 + 1;
          bVar1 = true;
          if (uVar10 < 5) {
            uVar7 = uVar7 & 0xff;
            do {
              lVar11 = *(long *)(*(long *)(lVar16 + 0x290) + 8);
              bVar5 = FUN_010f9128(*(undefined4 *)(lVar11 + 0x36c),*(undefined1 *)(lVar11 + 0x370),
                                   uVar7 & 0xffffffff);
              for (; bVar15 < bVar5; bVar15 = bVar15 + 1) {
                if (((bVar15 < *(byte *)(*(long *)(lVar16 + 0x30) + uVar7 * 0x38 + 0x58)) &&
                    (plVar8 = *(long **)(*(long *)(lVar16 + 0x30) + uVar7 * 0x38 + (ulong)bVar15 * 8
                                        + 0x28), plVar8 != (long *)0x0)) &&
                   (uVar9 = (**(code **)(*plVar8 + 0x200))(), (uVar9 & 1) == 0)) {
                  bVar1 = false;
                  goto LAB_014614ac;
                }
              }
              uVar7 = uVar7 + 1;
              bVar15 = 0;
            } while (uVar7 != 5);
            bVar1 = true;
            uVar7 = 5;
          }
          goto LAB_014614ac;
        }
        local_120 = CONCAT11(bVar15,(char)uVar7);
        local_11e = bVar1;
      }
      local_148 = local_118;
      FUN_01243e3c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x17e0),auStack_140,&local_148);
      if (local_78._6_1_ != '\0') {
        local_70 = CONCAT11((char)((ushort)local_70 >> 8),1);
        plVar13 = local_118[0];
        while (plVar13 != (long *)0x0) {
          uVar7 = (**(code **)(*plVar13 + 0x4d0))(plVar13,0x1d);
          if ((uVar7 & 1) == 0) {
            uVar14 = *(undefined8 *)(param_1 + 0x38);
            uVar6 = (**(code **)(*plVar13 + 0x98))(plVar13);
            FUN_0292f9d4(uVar14,uVar6);
          }
          else {
            (**(code **)(*plVar13 + 0x4e0))(plVar13,0x1d);
          }
          uVar7 = (ulong)(byte)local_70;
          if (local_78._6_1_ <= (byte)local_70) break;
          local_70 = CONCAT11(local_70._1_1_,(byte)local_70 + 1);
          plVar13 = local_118[uVar7];
        }
      }
    }
    *param_2 = 1;
  }
  return;
}



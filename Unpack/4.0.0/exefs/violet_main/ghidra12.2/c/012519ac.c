/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012519ac; name: FUN_012519ac
 */


void FUN_012519ac(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  int *piVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 local_148;
  undefined4 local_140;
  uint local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined2 local_108;
  undefined1 local_106;
  undefined2 local_104;
  undefined1 auStack_100 [8];
  undefined4 local_f8;
  undefined2 uStack_f4;
  undefined2 uStack_f2;
  undefined1 local_f0;
  undefined1 uStack_ef;
  undefined1 local_ee;
  undefined1 uStack_ed;
  undefined2 local_ec;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  undefined2 uStack_c6;
  undefined1 uStack_c4;
  undefined1 uStack_c3;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 local_74;
  undefined1 local_70;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49c) >> 1 & 1) != 0) {
    plVar10 = (long *)FUN_010a0028(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),0,0);
    if (plVar10 != (long *)0x0) {
      uVar15 = *(undefined8 *)(param_1 + 0x48);
      uVar6 = (**(code **)(*plVar10 + 0x98))();
      FUN_01248894(uVar15,uVar6);
    }
    plVar10 = (long *)FUN_010a0028(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),1,0);
    if (plVar10 != (long *)0x0) {
      uVar15 = *(undefined8 *)(param_1 + 0x48);
      uVar6 = (**(code **)(*plVar10 + 0x98))();
      FUN_01248894(uVar15,uVar6);
    }
    plVar10 = (long *)FUN_010a0028(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),2,0);
    if (plVar10 != (long *)0x0) {
      uVar15 = *(undefined8 *)(param_1 + 0x48);
      uVar6 = (**(code **)(*plVar10 + 0x98))();
      FUN_01248894(uVar15,uVar6);
    }
    uVar3 = *(uint *)(*(long *)(*(long *)(param_1 + 0x10) + 0x210) + 0x28);
    if ((int)uVar3 < 2) {
      plVar10 = (long *)FUN_010a0028(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),1,0);
      uStack_c6 = 0;
      uStack_c4 = 0;
      uStack_c3 = 0;
      local_f8 = 0;
      uStack_f4 = 0x31;
      uStack_f2 = 0;
      local_f0 = 0;
      uStack_ef = 0;
      local_ee = 0;
      uStack_ed = 0;
      local_ec = 0;
      uStack_ea = 0;
      uStack_e9 = 0;
      uStack_c8 = 0;
      local_a0 = 0;
      uStack_e8 = 0;
      uStack_e6 = 0;
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      local_d8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      local_cc = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_f8 = (**(code **)(*plVar10 + 0x98))();
      uStack_c8 = 1;
      uVar6 = (**(code **)(*plVar10 + 0x98))(plVar10);
      uStack_f4 = 0x32;
      uStack_f2 = 0;
      local_f0 = (undefined1)uVar6;
      uStack_ef = (undefined1)((uint)uVar6 >> 8);
      local_ee = (undefined1)((uint)uVar6 >> 0x10);
      uStack_ed = (undefined1)((uint)uVar6 >> 0x18);
      uStack_c3 = 1;
      FUN_018cdf14(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0xae0),&local_148,&local_f8);
    }
    lVar16 = *(long *)(param_1 + 0x20);
    uVar2 = uVar3 & 0xff;
    FUN_02e1dafc(*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0x10) + 0x330),uVar2);
    FUN_0129aff0(*(undefined8 *)(lVar16 + 0x18),0x87,2,uVar2);
    if ((int)uVar3 < 2) {
      plVar10 = (long *)FUN_010a0028(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),0,0);
      uVar11 = (**(code **)(*plVar10 + 0x588))();
      if ((uVar11 & 1) != 0) {
        local_f8 = SUB84(plVar10,0);
        uStack_f4 = (undefined2)((ulong)plVar10 >> 0x20);
        uStack_f2 = (undefined2)((ulong)plVar10 >> 0x30);
        local_f0 = 0;
        FUN_029426a8(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1480),&local_148,&local_f8);
      }
      FUN_0129aff0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xc6,2,uVar2);
      plVar10 = (long *)FUN_010a0028(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),0,0);
      puVar12 = (undefined8 *)(**(code **)plVar10[5])(plVar10 + 5);
      if (((*PTR_DAT_047d3f00 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar9 != 0)) {
        uVar15 = FUN_01b07aa4();
        *(undefined8 *)PTR_DAT_047d3f08 = uVar15;
        __cxa_guard_release(PTR_DAT_047d3f00);
      }
      if (puVar12 != (undefined8 *)0x0) {
LAB_01251bf4:
        if (puVar12 != (undefined8 *)PTR_DAT_047d3f08) goto code_r0x01251bfc;
        lVar16 = 0;
        do {
          uVar11 = (**(code **)(*plVar10 + 0x90))
                             (plVar10,(&DAT_03d6a52c)[lVar16 * 3],(&DAT_03d6a52e)[lVar16 * 3]);
          if ((uVar11 & 1) != 0) {
            local_148 = (long *)0x0;
            local_140 = CONCAT13(local_140._3_1_,0x100);
            local_11c = 0;
            local_12c = 0;
            uStack_124 = 0;
            local_13c = 0;
            uStack_138 = 0;
            uStack_134 = 0;
            local_130 = 0;
            uVar6 = (**(code **)(*plVar10 + 0x98))(plVar10);
            local_148 = (long *)CONCAT17(local_148._7_1_,0x1000000000000);
            local_148._0_6_ = CONCAT24((&DAT_03d6a530)[lVar16 * 3],uVar6);
            FUN_019079dc(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0xc20),&local_110,&local_148);
            lVar17 = plVar10[9];
            puVar12 = (undefined8 *)(lVar17 + 0x28);
            puVar12 = (undefined8 *)(**(code **)*puVar12)(puVar12);
            if (((*PTR_DAT_047dcd50 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047dcd50), iVar9 != 0)) {
              uVar15 = FUN_01af5520();
              *(undefined8 *)PTR_DAT_047dcd58 = uVar15;
              __cxa_guard_release(PTR_DAT_047dcd50);
            }
            for (; puVar12 != (undefined8 *)0x0; puVar12 = (undefined8 *)*puVar12) {
              if (puVar12 == (undefined8 *)PTR_DAT_047dcd58) {
                lVar17 = *(long *)(lVar17 + 0x48);
                if (lVar17 != 0) {
                  local_f0 = 0;
                  uStack_ef = 0;
                  local_ee = 0;
                  uStack_ed = 0;
                  local_ec = 0;
                  local_f8 = 0;
                  uStack_f4 = 0;
                  uStack_f2 = 0;
                  uStack_ea = 1;
                  uStack_c8 = 0;
                  uStack_c7 = 0;
                  uStack_c6 = 0;
                  local_d8 = 0;
                  uStack_d4 = 0;
                  uStack_d0 = 0;
                  local_cc = 0;
                  uStack_e9 = 0;
                  uStack_e8 = 0;
                  uStack_e6 = 0;
                  uStack_e4 = 0;
                  uStack_e0 = 0;
                  uStack_dc = 0;
                  local_f8 = (**(code **)(*plVar10 + 0x98))(plVar10);
                  uVar5 = FUN_0113b8a0(*(undefined8 *)(lVar17 + 0x70));
                  if (0x136 < uVar5) {
                    uVar6 = FUN_00cf44f4(*(undefined8 *)(lVar17 + 0x70));
                    uVar7 = FUN_00cf41a8(*(undefined8 *)(lVar17 + 0x70));
                    uVar8 = FUN_00e99784(lVar17);
                    uVar5 = FUN_0143b78c(uVar6,uVar7,uVar8);
                  }
                  local_f0 = (undefined1)uVar5;
                  uStack_ef = (undefined1)(uVar5 >> 8);
                  uVar6 = (**(code **)(*plVar10 + 0x98))(plVar10);
                  uStack_f4 = (undefined2)uVar6;
                  uStack_f2 = (undefined2)((uint)uVar6 >> 0x10);
                  local_ee = 0;
                  uStack_ea = 0;
                  FUN_0293ff0c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0xa60),auStack_100,
                               &local_f8);
                }
                break;
              }
            }
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 != 5);
      }
LAB_01251c04:
      if (uVar3 == 0) {
        plVar10 = (long *)FUN_010a0028(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),1,0);
        plVar13 = (long *)FUN_010a0028(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),2,0);
        if ((plVar13 != (long *)0x0) &&
           (uVar11 = (**(code **)(*plVar13 + 0x200))(), (uVar11 & 1) == 0)) {
          uVar4 = *(undefined1 *)
                   (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x330) + 0x10) + 0x18);
          memset(&local_f8,0,0x8c);
          local_70 = 5;
          uStack_f4 = 1;
          uStack_f2 = 0;
          local_74 = 0x5400000;
          uStack_e8 = (**(code **)(*plVar10 + 0x730))(plVar10,uVar4);
          uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x290);
          uVar6 = (**(code **)(*plVar13 + 0x98))(plVar13);
          local_f0 = FUN_010e161c(uVar15,uVar6);
          uVar6 = (**(code **)(*plVar13 + 0x98))(plVar13);
          local_ec = (undefined2)uVar6;
          uStack_ea = (undefined1)((uint)uVar6 >> 0x10);
          uStack_e9 = (undefined1)((uint)uVar6 >> 0x18);
          local_f8 = (**(code **)(*plVar10 + 0x98))(plVar10);
          uVar6 = (**(code **)(*plVar10 + 0x98))(plVar10);
          piVar14 = (int *)FUN_011e2dd4(*(undefined8 *)
                                         (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8
                                                   ) + 0x50),uVar6);
          if (piVar14 == (int *)0x0) {
            local_70 = 0;
          }
          else {
            iVar9 = *piVar14;
            if (4 < iVar9) {
              iVar9 = 0;
            }
            local_70 = (undefined1)iVar9;
          }
          FUN_01248470(*(undefined8 *)(param_1 + 0x20),plVar10,0x1b);
          local_148 = (long *)&local_f8;
          FUN_012522cc(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x680),&local_110,&local_148);
          FUN_0298dac0(*(undefined8 *)(param_1 + 0x20),plVar10,0x1b);
          uVar11 = (**(code **)(*plVar13 + 0x200))(plVar13);
          if ((uVar11 & 1) == 0) {
            uStack_138 = 0;
            uStack_134 = 0;
            local_148 = plVar13;
            local_140 = (**(code **)(*plVar10 + 0x98))(plVar10);
            local_13c = local_13c & 0xffffff00;
            local_130 = CONCAT31(local_130._1_3_,1);
            FUN_02983948(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1300),auStack_100,&local_148)
            ;
            local_108 = 0;
            local_106 = 0;
            local_104 = 0;
            local_110 = 3;
            uVar6 = (**(code **)(*plVar13 + 0x98))(plVar13);
            local_110 = CONCAT44(uVar6,(undefined4)local_110);
            local_118[0] = 0;
            FUN_0131bdb0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1d40),local_118,&local_110);
          }
        }
      }
    }
    else {
      FUN_0129aff0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xc6,2,uVar2);
    }
    uVar3 = *(uint *)(*(long *)(*(long *)(param_1 + 0x10) + 0x210) + 0x28);
    if ((int)uVar3 < 4) {
      lVar16 = *(long *)(param_1 + 0x20);
      uVar2 = uVar3 & 0xff;
      FUN_02e1dfe4(*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0x10) + 0x330),uVar2);
      FUN_0129aff0(*(undefined8 *)(lVar16 + 0x18),0x87,3,uVar2);
      if ((((uVar3 == 2) &&
           (*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x330) + 0x10) + 0x20) != 0))
          && (lVar16 = *(long *)(*(long *)(param_1 + 0x10) + 0x30), *(char *)(lVar16 + 200) != '\0')
          ) && ((plVar10 = *(long **)(lVar16 + 0x98), plVar10 != (long *)0x0 &&
                (uVar11 = (**(code **)(*plVar10 + 0x200))(plVar10), (uVar11 & 1) == 0)))) {
        local_148 = (long *)CONCAT53(local_148._3_5_,2);
        FUN_0124e268(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x13e0),&local_f8,&local_148);
        lVar16 = *(long *)(param_1 + 0x20);
        uVar6 = (**(code **)(*plVar10 + 0x98))(plVar10);
        FUN_0129aff0(*(undefined8 *)(lVar16 + 0x18),0xb7,uVar6,2);
        FUN_0129aff0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xb8);
        local_ec = 0;
        uStack_ea = 0;
        uStack_e9 = 0;
        uStack_e8 = 0;
        uStack_e6 = 0;
        uStack_e4 = 0;
        uStack_e0 = 0;
        puVar1 = PTR_DAT_047e2f30 + 0x10;
        local_f8 = SUB84(puVar1,0);
        uStack_f4 = (undefined2)((ulong)puVar1 >> 0x20);
        uStack_f2 = (undefined2)((ulong)puVar1 >> 0x30);
        uStack_dc = 0;
        local_d8 = 0;
        uStack_d4 = 0;
        uStack_d0 = 0;
        local_cc = 0;
        uStack_c8 = 0;
        uStack_c7 = 0;
        uStack_c6 = 0;
        local_f0 = 0;
        uVar6 = (**(code **)(*plVar10 + 0x98))(plVar10);
        local_ec = (undefined2)uVar6;
        uStack_ea = (undefined1)((uint)uVar6 >> 0x10);
        uStack_e9 = (undefined1)((uint)uVar6 >> 0x18);
        local_f0 = 1;
        local_148 = (long *)&local_f8;
        FUN_0124673c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0xa0),&local_110,&local_148);
      }
      FUN_0129aff0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xc6,3,uVar2);
    }
  }
  return;
code_r0x01251bfc:
  puVar12 = (undefined8 *)*puVar12;
  if (puVar12 == (undefined8 *)0x0) goto LAB_01251c04;
  goto LAB_01251bf4;
}



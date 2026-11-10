/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00897bf0; name: FUN_00897bf0
 */


undefined8
FUN_00897bf0(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
            long param_6,long param_7)

{
  void *pvVar1;
  int iVar2;
  long lVar3;
  void *__s;
  undefined8 uVar4;
  size_t __n;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined8 local_1e0;
  long local_1d8;
  long *plStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  long *local_1b8;
  undefined8 uStack_1b0;
  long *local_1a8;
  undefined8 local_1a0;
  undefined1 *local_198;
  undefined8 local_190;
  undefined2 local_188;
  undefined2 local_184;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined8 local_130;
  long *local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  long local_108;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined1 local_ef;
  undefined1 local_ee;
  undefined1 local_ed;
  undefined1 local_ec;
  undefined1 local_eb;
  undefined1 local_ea;
  undefined1 local_e9;
  undefined4 local_e8;
  undefined4 local_e0;
  long local_d8;
  long local_d0;
  int local_c8;
  undefined4 local_c4;
  long local_c0;
  long local_b8;
  int local_b0;
  undefined1 auStack_a8 [72];
  
  param_1[8] = param_5;
  memset(auStack_208,0,0x160);
  if (param_7 == 0) {
    local_1c8 = 0x3f8000003f800000;
    local_190 = 0;
  }
  else {
    local_1c8 = *(undefined8 *)(param_7 + 0x28);
    local_190 = *(undefined8 *)(param_7 + 0x20);
  }
  local_1b8 = *(long **)(param_6 + 0x10);
  uStack_1b0 = *(undefined8 *)(param_6 + 0x18);
  local_1a0 = *(undefined8 *)(param_6 + 0x28);
  local_f8 = *(undefined1 *)(param_6 + 0xd0);
  local_f7 = *(undefined1 *)(param_6 + 0xd1);
  local_f6 = *(undefined1 *)(param_6 + 0xd2);
  local_178 = *(undefined8 *)(param_6 + 0x50);
  uStack_170 = *(undefined8 *)(param_6 + 0x58);
  local_168 = *(undefined8 *)(param_6 + 0x60);
  uStack_160 = *(undefined8 *)(param_6 + 0x68);
  local_158 = *(undefined8 *)(param_6 + 0x70);
  uStack_150 = *(undefined8 *)(param_6 + 0x78);
  local_148 = *(undefined8 *)(param_6 + 0x80);
  uStack_140 = *(undefined8 *)(param_6 + 0x88);
  local_138 = *(undefined4 *)(param_6 + 0x90);
  uStack_134 = *(undefined4 *)(param_6 + 0x94);
  local_118 = *(undefined8 *)(param_6 + 0xb0);
  uStack_110 = *(undefined8 *)(param_6 + 0xb8);
  local_128 = *(long **)(param_6 + 0xa0);
  local_120 = *(undefined1 *)(param_6 + 0xa8);
  local_f0 = *(undefined1 *)(param_6 + 0xd8);
  local_ef = *(undefined1 *)(param_6 + 0xd9);
  local_ee = *(undefined1 *)(param_6 + 0xda);
  local_ed = *(undefined1 *)(param_6 + 0xdb);
  local_ec = *(undefined1 *)(param_6 + 0xdc);
  local_eb = *(undefined1 *)(param_6 + 0xdd);
  local_ea = *(undefined1 *)(param_6 + 0xde);
  local_e9 = *(undefined1 *)(param_6 + 0xdf);
  local_e8 = *(undefined4 *)(param_6 + 0xe0);
  local_188 = 0;
  local_184 = 0;
  local_130 = 0;
  local_1c0 = 0;
  local_f4 = *(undefined4 *)(param_4 + 8);
  local_198 = auStack_208;
  *(int *)(local_128 + 1) = (int)local_128[1] + 1;
  lVar6 = local_128[4];
  if (lVar6 != 0) {
    plVar8 = (long *)(*(long *)(lVar6 + 0x20) + (long)*(int *)(lVar6 + 0x28) * 0x68);
    *(int *)(lVar6 + 0x28) = *(int *)(lVar6 + 0x28) + 1;
    *(int *)(local_128 + 3) = (int)local_128[3] + 1;
    lVar6 = local_128[4];
    plVar8[5] = param_7;
    plVar8[6] = lVar6;
    *(undefined4 *)(plVar8 + 9) = 0;
    *(undefined4 *)(plVar8 + 0xc) = 0;
    plVar8[2] = (long)param_1;
    plVar7 = (long *)local_128[2];
    lVar6 = *plVar8;
    *plVar8 = *plVar7;
    *(long **)(lVar6 + 8) = plVar7;
    *(long **)(*plVar7 + 8) = plVar8;
    *plVar7 = lVar6;
    *(long **)(*local_128 + (long)(int)local_128[1] * 8 + -8) = plVar8;
  }
  local_d8 = param_4 + (ulong)*(ushort *)(param_4 + 6);
  local_1d8 = param_5;
  plStack_1d0 = param_1;
  local_1a8 = param_1;
  FUN_00897480(auStack_208,param_4);
  if (local_c8 < 0x316e6170) goto LAB_00897eb4;
  do {
    lVar6 = local_d8;
    if (local_c8 < 0x31747063) {
      if (local_c8 < 0x31726373) {
        if (local_c8 == 0x316e6170) goto LAB_00898020;
        if (local_c8 == 0x31707267) {
          lVar9 = param_1[4];
          if (lVar9 == 0) {
            lVar6 = (**(code **)PTR_DAT_047d2258)(0x10,4,*(undefined8 *)PTR_DAT_047d2268);
            if (lVar6 != 0) {
              *(long *)lVar6 = lVar6;
              *(long *)(lVar6 + 8) = lVar6;
            }
            param_1[4] = lVar6;
          }
          else if (local_b0 == 1) {
            lVar5 = param_1[3];
            lVar3 = (**(code **)PTR_DAT_047d2258)(0x38,4,*(undefined8 *)PTR_DAT_047d2268);
            if (lVar3 != 0) {
              FUN_008947f4(lVar3,lVar6,lVar5);
            }
            FUN_00894b98(lVar9,lVar3);
          }
        }
      }
      else {
        if (local_c8 == 0x31726373) goto LAB_00898020;
        if ((local_c8 == 0x31746e63) && (local_1b8 != (long *)0x0)) {
          FUN_00892d60(auStack_a8,local_d8,local_d0);
          (**(code **)(*local_1b8 + 0x10))(local_1b8,param_3,param_1,auStack_a8);
        }
      }
    }
    else if (local_c8 < 0x31747874) {
      if (local_c8 == 0x31747063) goto LAB_00898020;
      if (local_c8 == 0x31747270) goto LAB_00898020;
    }
    else {
      if (local_c8 == 0x31747874) goto LAB_00898020;
      if (local_c8 == 0x3174796c) {
        *(undefined4 *)(param_1 + 5) = *(undefined4 *)(local_d8 + 0xc);
        *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(local_d8 + 0x10);
        param_1[6] = local_d8 + 0x1c;
        param_1[7] = local_d0;
      }
    }
LAB_00898054:
    while( true ) {
      if (local_c0 == 0) {
        if (local_128[4] != 0) {
          iVar2 = (int)local_128[1];
          uVar4 = 0;
          if ((0 < iVar2) && (iVar2 <= *(int *)PTR_DAT_047d2288)) {
            uVar4 = *(undefined8 *)(*local_128 + (long)(iVar2 + -1) * 8);
          }
          FUN_008983e0(param_1,uVar4);
        }
        iVar2 = (int)local_128[1] + -1;
        if ((int)local_128[1] < 1) {
          iVar2 = 0;
        }
        *(int *)(local_128 + 1) = iVar2;
        return 1;
      }
      local_d8 = local_c0;
      local_e0 = local_c4;
      FUN_00897480(auStack_208,param_4);
      if (0x316e616f < local_c8) break;
LAB_00897eb4:
      plVar7 = local_128;
      if (local_c8 < 0x31696c61) goto LAB_00897f1c;
      if (local_c8 < 0x316c7463) {
        if (local_c8 == 0x31696c61) goto LAB_00898020;
        if (local_c8 == 0x316c6776) goto LAB_00898084;
      }
      else if (local_c8 == 0x316c7463) {
LAB_00898084:
        if (local_128[4] == 0) {
          __s = (void *)local_128[5];
          iVar2 = *(int *)PTR_DAT_047d2288;
          *(int *)((long)local_128 + 0xc) = iVar2;
          __n = (long)iVar2 * 8;
          *local_128 = (long)__s;
          pvVar1 = (void *)((long)__s + __n);
          memset(__s,0,__n);
          *(void **)pvVar1 = pvVar1;
          *(void **)((long)pvVar1 + 8) = pvVar1;
          plVar7[2] = (long)pvVar1;
          FUN_00899d28((long)pvVar1 + 0x10,(long)pvVar1 + 0x40);
          plVar7[4] = (long)pvVar1 + 0x10;
          lVar6 = local_128[4];
          if (lVar6 != 0) {
            plVar8 = (long *)(*(long *)(lVar6 + 0x20) + (long)*(int *)(lVar6 + 0x28) * 0x68);
            *(int *)(lVar6 + 0x28) = *(int *)(lVar6 + 0x28) + 1;
            *(int *)(local_128 + 3) = (int)local_128[3] + 1;
            lVar6 = local_128[4];
            plVar8[5] = param_7;
            plVar8[6] = lVar6;
            *(undefined4 *)(plVar8 + 9) = 0;
            *(undefined4 *)(plVar8 + 0xc) = 0;
            plVar8[2] = (long)param_1;
            plVar7 = (long *)local_128[2];
            lVar6 = *plVar8;
            *plVar8 = *plVar7;
            *(long **)(lVar6 + 8) = plVar7;
            *(long **)(*plVar7 + 8) = plVar8;
            *plVar7 = lVar6;
            *(long **)(*local_128 + (long)(int)local_128[1] * 8 + -8) = plVar8;
          }
        }
        if (local_c8 == 0x316c7463) {
          *(undefined8 *)(*(long *)(*local_128 + (long)(int)local_128[1] * 8 + -8) + 0x18) =
               local_1e8;
          *(undefined1 *)(*(long *)(*local_128 + (long)(int)local_128[1] * 8 + -8) + 100) =
               *(undefined1 *)(param_6 + 0xd9);
          *(undefined1 *)(*(long *)(*local_128 + (long)(int)local_128[1] * 8 + -8) + 0x65) =
               *(undefined1 *)(param_6 + 0xdb);
        }
        if (local_c8 == 0x316c6776) {
          *(undefined8 *)(*(long *)(*local_128 + (long)(int)local_128[1] * 8 + -8) + 0x20) =
               local_1e0;
        }
      }
      else if (local_c8 == 0x316d7473) {
        FUN_00897864(param_1,auStack_208,param_3,param_7);
      }
    }
  } while( true );
LAB_00897f1c:
  if (((local_c8 == 0x31636970) || (local_c8 == 0x31646e62)) || (local_c8 == 0x31646e77)) {
LAB_00898020:
    local_108 = local_d0;
    lVar6 = (**(code **)(*param_1 + 0x78))
                      (param_1,param_2,param_3,local_d8,param_7,&local_1c8,auStack_208);
    if (lVar6 != 0) {
      local_b8 = lVar6;
    }
  }
  goto LAB_00898054;
}



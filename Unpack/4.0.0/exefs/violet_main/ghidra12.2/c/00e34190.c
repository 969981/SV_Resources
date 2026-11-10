/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e34190; name: FUN_00e34190
 */


void FUN_00e34190(undefined1 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 local_230;
  char *pcStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  long *local_210;
  code *local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  undefined1 *apuStack_1f0 [12];
  long *local_190;
  code *local_188;
  undefined1 *local_180;
  long *local_178;
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *apuStack_150 [12];
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [112];
  
  plVar11 = *(long **)(param_1 + 8);
  plVar8 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0xb0,8);
  if (plVar8 == (long *)0x0) {
    plVar11 = (long *)0x0;
    uVar15 = 0;
    uVar16 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar11;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    FUN_00e34ca0(plVar8,plVar11,param_3,param_2,param_4);
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    uVar16 = 0xb0;
    uVar15 = 8;
  }
  puVar12 = *(undefined8 **)(param_1 + 0x68);
  *(long **)(param_1 + 0x68) = plVar8;
  if (puVar12 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    (**(code **)*puVar12)(puVar12);
    plVar8 = *(long **)(param_1 + 0x70);
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    uVar13 = *(undefined8 *)(param_1 + 0x80);
    uVar10 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar10 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,puVar12,uVar3,uVar13);
    }
    else {
      FUN_00c48fe8(plVar8,puVar12,uVar3,uVar13);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar8 = (long *)FUN_00c4e600();
      if (plVar8[600] != 0) {
        local_210 = plVar8 + plVar8[600] * 3;
        local_190 = plVar8;
        FUN_00c4ea30(&local_190,&local_210);
        plVar14 = (long *)*plVar8;
        plVar2 = plVar8;
        if (plVar8[600] != 0) {
          plVar2 = plVar8 + plVar8[600] * 3;
        }
        if (plVar2 == plVar8) {
          uVar17 = 0;
          uVar10 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar8 + 0xd0))();
          if ((long *)*plVar8 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar8,plVar8);
            plVar14 = (long *)*plVar8;
          }
          plVar1 = plVar8 + 3;
          if (plVar2 == plVar1) {
            uVar17 = 0;
            uVar10 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar6 = (long *)*plVar1 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar8,plVar8 + 3);
              plVar14 = (long *)plVar8[3];
            }
            uVar17 = (ulong)bVar6;
            plVar1 = plVar8 + 6;
            if (plVar2 == plVar1) {
              uVar10 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar8 + uVar17 * 3,plVar8 + 6);
                plVar14 = (long *)plVar8[6];
                uVar17 = 2;
              }
              plVar1 = plVar8 + 9;
              if (plVar2 == plVar1) {
                uVar10 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar8 + uVar17 * 3,plVar8 + 9);
                  plVar14 = (long *)plVar8[9];
                  uVar17 = 3;
                }
                plVar1 = plVar8 + 0xc;
                if (plVar2 == plVar1) {
                  uVar10 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar8 + uVar17 * 3,plVar8 + 0xc);
                    plVar14 = (long *)plVar8[0xc];
                    uVar17 = 4;
                  }
                  plVar1 = plVar8 + 0xf;
                  if (plVar2 == plVar1) {
                    uVar10 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar8 + uVar17 * 3,plVar8 + 0xf);
                      plVar14 = (long *)plVar8[0xf];
                      uVar17 = 5;
                    }
                    uVar10 = 6;
                    for (plVar1 = plVar8 + 0x12; plVar2 != plVar1; plVar1 = plVar1 + 3) {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar8 + uVar17 * 3,plVar1);
                        plVar14 = (long *)*plVar1;
                        uVar17 = uVar10;
                      }
                      uVar10 = uVar10 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar8 + uVar17 * 3,plVar8 + uVar10 * 3);
        plVar8[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
    plVar8 = *(long **)(param_1 + 0x68);
  }
  *(long **)(param_1 + 0x70) = plVar11;
  *(undefined8 *)(param_1 + 0x78) = uVar16;
  *(undefined8 *)(param_1 + 0x80) = uVar15;
  (**(code **)(*plVar8 + 0x10))(plVar8,param_1 + 0x90);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x18))(*(long **)(param_1 + 0x68),param_1 + 200);
  lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x30) + 0x170);
  plVar8 = (long *)(lVar9 + 0x20);
  plVar11 = (long *)0x0;
  if (lVar9 != 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    plVar11 = plVar8;
  }
  plVar8 = *(long **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))();
  }
  *(long **)(param_1 + 0x88) = plVar11;
  local_190 = (long *)0x7d3de69efb5b8a5f;
  local_188 = (code *)0x3bf7948;
  local_210 = (long *)&LAB_019aaecc;
  local_208 = FUN_02e5d504;
  local_200 = &LAB_02e5d508;
  local_160 = &LAB_02e5d508;
  local_1f8 = &LAB_02e5d514;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  local_180 = (undefined1 *)0x16;
  local_178 = (long *)0x0;
  local_158 = &LAB_02e5d514;
  local_170 = &LAB_019aaecc;
  local_168 = FUN_02e5d504;
  apuStack_1f0[0] = param_1;
  apuStack_150[0] = param_1;
  FUN_01133070(param_1,&local_190);
  pcVar5 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar5)(auStack_d0);
  }
  pcVar5 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    local_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar5)(apuStack_150);
  }
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  pcVar5 = local_208;
  if (local_208 != (code *)0x0) {
    local_200 = (undefined1 *)0x0;
    local_1f8 = (undefined1 *)0x0;
    local_210 = (long *)0x0;
    local_208 = (code *)0x0;
    (*pcVar5)(apuStack_1f0);
  }
  local_e0 = 0;
  uStack_d8 = 0;
  local_190 = (long *)0xf22d452d01989c12;
  local_188 = (code *)0x3c28db3;
  local_210 = (long *)&LAB_029d7e90;
  local_208 = FUN_02e5d520;
  local_200 = &LAB_02e5d524;
  local_160 = &LAB_02e5d524;
  local_1f8 = &LAB_02e5d530;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  local_180 = (undefined1 *)0x18;
  local_178 = (long *)0x0;
  local_158 = &LAB_02e5d530;
  local_170 = &LAB_029d7e90;
  local_168 = FUN_02e5d520;
  apuStack_1f0[0] = param_1;
  apuStack_150[0] = param_1;
  FUN_01133070(param_1,&local_190);
  pcVar5 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar5)(auStack_d0);
  }
  pcVar5 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    local_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar5)(apuStack_150);
  }
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  pcVar5 = local_208;
  if (local_208 != (code *)0x0) {
    local_200 = (undefined1 *)0x0;
    local_1f8 = (undefined1 *)0x0;
    local_210 = (long *)0x0;
    local_208 = (code *)0x0;
    (*pcVar5)(apuStack_1f0);
  }
  local_e0 = 0;
  uStack_d8 = 0;
  local_190 = (long *)0x3f0fd053702f7122;
  local_188 = (code *)0x3c28dcc;
  local_210 = (long *)&LAB_017b6710;
  local_208 = FUN_02e5d53c;
  local_200 = &LAB_02e5d540;
  local_160 = &LAB_02e5d540;
  local_1f8 = &LAB_02e5d54c;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  local_180 = (undefined1 *)0x17;
  local_178 = (long *)0x0;
  local_158 = &LAB_02e5d54c;
  local_170 = &LAB_017b6710;
  local_168 = FUN_02e5d53c;
  apuStack_1f0[0] = param_1;
  apuStack_150[0] = param_1;
  FUN_01133070(param_1,&local_190);
  pcVar5 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar5)(auStack_d0);
  }
  pcVar5 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    local_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar5)(apuStack_150);
  }
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  pcVar5 = local_208;
  if (local_208 != (code *)0x0) {
    local_200 = (undefined1 *)0x0;
    local_1f8 = (undefined1 *)0x0;
    local_210 = (long *)0x0;
    local_208 = (code *)0x0;
    (*pcVar5)(apuStack_1f0);
  }
  local_230 = 0xab1c861cdb465f6f;
  pcStack_228 = "System/SetBoolParameterRange";
  local_220 = 0x1c;
  uStack_218 = 0;
  local_190 = (long *)&LAB_02e5d558;
  local_188 = FUN_02e5d89c;
  local_180 = &LAB_02e5d8a0;
  local_178 = (long *)&LAB_02e5d8ac;
  local_210 = (long *)&LAB_02e5d8b8;
  local_208 = FUN_02e5dbfc;
  local_200 = &LAB_02e5dc00;
  local_1f8 = &LAB_02e5dc0c;
  apuStack_1f0[0] = param_1;
  local_170 = param_1;
  FUN_00e34b38(param_1,&local_230,&local_190,&local_210);
  pcVar5 = local_208;
  if (local_208 != (code *)0x0) {
    local_200 = (undefined1 *)0x0;
    local_1f8 = (undefined1 *)0x0;
    local_210 = (long *)0x0;
    local_208 = (code *)0x0;
    (*pcVar5)(apuStack_1f0);
  }
  pcVar5 = local_188;
  if (local_188 != (code *)0x0) {
    local_180 = (undefined1 *)0x0;
    local_178 = (long *)0x0;
    local_190 = (long *)0x0;
    local_188 = (code *)0x0;
    (*pcVar5)(&local_170);
  }
  local_e0 = 0;
  uStack_d8 = 0;
  local_190 = (long *)0x93196bfbac332444;
  local_188 = (code *)0x3c92ca0;
  local_210 = (long *)&LAB_02e5dc18;
  local_208 = FUN_02e5de24;
  local_200 = &LAB_02e5de28;
  local_160 = &LAB_02e5de28;
  local_1f8 = &LAB_02e5de34;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  local_180 = (undefined1 *)0x1a;
  local_178 = (long *)0x0;
  local_158 = &LAB_02e5de34;
  local_170 = &LAB_02e5dc18;
  local_168 = FUN_02e5de24;
  apuStack_1f0[0] = param_1;
  apuStack_150[0] = param_1;
  FUN_01133070(param_1,&local_190);
  pcVar5 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar5)(auStack_d0);
  }
  pcVar5 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    local_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar5)(apuStack_150);
  }
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  pcVar5 = local_208;
  if (local_208 != (code *)0x0) {
    local_200 = (undefined1 *)0x0;
    local_1f8 = (undefined1 *)0x0;
    local_210 = (long *)0x0;
    local_208 = (code *)0x0;
    (*pcVar5)(apuStack_1f0);
  }
  return;
}



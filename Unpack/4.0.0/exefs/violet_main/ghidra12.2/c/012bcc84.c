/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012bcc84; name: FUN_012bcc84
 */


void FUN_012bcc84(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  ulong uVar17;
  int local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  long *local_70;
  long *local_68;
  
  FUN_012bdb64(*(undefined8 *)(*(long *)PTR_DAT_047d3f70 + 8));
  FUN_012bdc2c(param_1[0x3e]);
  FUN_012e1a60(param_1);
  FUN_012bd738(param_1);
  FUN_012bd600(param_1[0x3e]);
  (**(code **)(*param_1 + 0x38))(param_1);
  FUN_012c0e90(param_1);
  (**(code **)(*param_1 + 0x68))(param_1);
  (**(code **)(*param_1 + 0x50))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_012bd610();
  plVar14 = (long *)param_1[0x3e];
  if (((*PTR_DAT_047e23d8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047e23d8), iVar9 != 0))
  {
    FUN_00100190(&LAB_02c7b8bc,PTR_DAT_047e23e0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e23d8);
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar14;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  lVar11 = (**(code **)(*plVar14 + 0x10))(plVar14,0xd8,8);
  if (lVar11 == 0) {
    (**(code **)(*plVar14 + 0xe8))(plVar14);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_012d1b78();
  *(undefined4 *)(lVar11 + 0x18) = 0x800d8;
  *(long **)(lVar11 + 8) = plVar14;
  *(long *)(lVar11 + 0x10) = lVar11;
  puVar7 = PTR_DAT_047e23e0;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  puVar16 = *(undefined8 **)puVar7;
  *(long *)puVar7 = lVar11;
  if (puVar16 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar16[1];
    uVar3 = puVar16[2];
    uVar5 = *(undefined2 *)(puVar16 + 3);
    uVar6 = *(undefined2 *)((long)puVar16 + 0x1a);
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar4 = *(int *)(lVar10 + 0x12c8);
    iVar9 = iVar4 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar9;
    if (*(int *)(lVar10 + 0x12cc) <= iVar4) {
      *(int *)(lVar10 + 0x12cc) = iVar9;
    }
    (**(code **)*puVar16)(puVar16);
    uVar12 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if (((uVar12 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,uVar3,uVar5,uVar6);
    }
    else {
      FUN_00c48fe8(plVar14,uVar3,uVar5,uVar6);
    }
    lVar10 = FUN_00c4e600();
    iVar9 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar9;
    if (iVar9 == 0) {
      plVar14 = (long *)FUN_00c4e600();
      if (plVar14[600] != 0) {
        local_68 = plVar14 + plVar14[600] * 3;
        local_88 = (int)plVar14;
        uStack_84 = (undefined4)((ulong)plVar14 >> 0x20);
        FUN_00c4ea30(&local_88,&local_68);
        plVar15 = (long *)*plVar14;
        plVar2 = plVar14;
        if (plVar14[600] != 0) {
          plVar2 = plVar14 + plVar14[600] * 3;
        }
        if (plVar2 == plVar14) {
          uVar17 = 0;
          uVar12 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar14 + 0xd0))();
          if ((long *)*plVar14 != plVar15) {
            (**(code **)(*plVar15 + 0x100))(plVar15,plVar14,plVar14);
            plVar15 = (long *)*plVar14;
          }
          plVar1 = plVar14 + 3;
          if (plVar2 == plVar1) {
            uVar17 = 0;
            uVar12 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar8 = (long *)*plVar1 != plVar15;
            if (bVar8) {
              (**(code **)(*plVar15 + 0x100))(plVar15,plVar14,plVar14 + 3);
              plVar15 = (long *)plVar14[3];
            }
            uVar17 = (ulong)bVar8;
            plVar1 = plVar14 + 6;
            if (plVar2 == plVar1) {
              uVar12 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar15) {
                (**(code **)(*plVar15 + 0x100))(plVar15,plVar14 + uVar17 * 3,plVar14 + 6);
                plVar15 = (long *)plVar14[6];
                uVar17 = 2;
              }
              plVar1 = plVar14 + 9;
              if (plVar2 == plVar1) {
                uVar12 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar15) {
                  (**(code **)(*plVar15 + 0x100))(plVar15,plVar14 + uVar17 * 3,plVar14 + 9);
                  plVar15 = (long *)plVar14[9];
                  uVar17 = 3;
                }
                plVar1 = plVar14 + 0xc;
                if (plVar2 == plVar1) {
                  uVar12 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar15) {
                    (**(code **)(*plVar15 + 0x100))(plVar15,plVar14 + uVar17 * 3,plVar14 + 0xc);
                    plVar15 = (long *)plVar14[0xc];
                    uVar17 = 4;
                  }
                  plVar1 = plVar14 + 0xf;
                  if (plVar2 == plVar1) {
                    uVar12 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar15) {
                      (**(code **)(*plVar15 + 0x100))(plVar15,plVar14 + uVar17 * 3,plVar14 + 0xf);
                      plVar15 = (long *)plVar14[0xf];
                      uVar17 = 5;
                    }
                    uVar12 = 6;
                    for (plVar1 = plVar14 + 0x12; plVar2 != plVar1; plVar1 = plVar1 + 3) {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar15) {
                        (**(code **)(*plVar15 + 0x100))(plVar15,plVar14 + uVar17 * 3,plVar1);
                        plVar15 = (long *)*plVar1;
                        uVar17 = uVar12;
                      }
                      uVar12 = uVar12 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar15 + 0x100))(plVar15,plVar14 + uVar17 * 3,plVar14 + uVar12 * 3);
        plVar14[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
    lVar11 = *(long *)puVar7;
  }
  uVar12 = (ulong)DAT_04865a18;
  if (0x3ff < DAT_04865a18) {
                    /* WARNING: Subroutine does not return */
    FUN_01dace90();
  }
  DAT_04865a18 = DAT_04865a18 + 1;
  lVar10 = 0;
  if (lVar11 != 0) {
    lVar10 = lVar11 + 0x20;
  }
  *(long *)(&DAT_04863a18 + uVar12 * 8) = lVar10;
  FUN_012c1d8c();
  FUN_012bd784(param_1);
  FUN_012bd9c8();
  FUN_012bf23c(param_1);
  FUN_012bfdf8();
  (**(code **)(*param_1 + 0x58))(param_1);
  (**(code **)(*param_1 + 0x60))(param_1);
  FUN_012bda50();
  FUN_012be0dc();
  FUN_012bd6c4(param_1);
  (**(code **)(*param_1 + 0x70))(param_1);
  FUN_012fbef8();
  FUN_012bdcf4(param_1[0x3e]);
  FUN_012bd6f4();
  pcVar13 = *(char **)(param_1[6] + 0x28);
  uStack_84 = *(undefined4 *)(pcVar13 + 4);
  local_88 = (int)*pcVar13;
  uStack_80 = *(undefined4 *)(pcVar13 + 8);
  local_7c = *(undefined4 *)(pcVar13 + 0xc);
  uStack_78 = *(undefined4 *)(pcVar13 + 0x10);
  FUN_012be278(param_1[0x3e],&local_88);
  local_88 = 0x131d8c62;
  uStack_84 = 0x52eeec08;
  uStack_80 = 0x3c93a38;
  local_7c = 0;
  uStack_78 = 0x10;
  uStack_74 = 0;
  local_70 = (long *)0x0;
  FUN_012bd7d4(&local_88,&LAB_02c7aed8,0x200);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  local_88 = 0x1b25a19;
  uStack_84 = 0x51c03cc5;
  uStack_80 = 0x3c93a49;
  local_7c = 0;
  uStack_78 = 0x16;
  uStack_74 = 0;
  local_70 = (long *)0x0;
  FUN_01766f10(&local_88,&LAB_02c7aee8);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  local_88 = 0x67dd1bb1;
  uStack_84 = 0xbb767a71;
  uStack_80 = 0x3c6bae0;
  local_7c = 0;
  uStack_78 = 0x16;
  uStack_74 = 0;
  local_70 = (long *)0x0;
  FUN_01766f10(&local_88,&LAB_02c7af74);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  local_88 = -0x42aaacd9;
  uStack_84 = 0xcfb053e2;
  uStack_80 = 0x3c9a4ec;
  local_7c = 0;
  uStack_78 = 0x14;
  uStack_74 = 0;
  local_70 = (long *)0x0;
  FUN_012bd61c(&local_88,&LAB_02c7b000);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  local_88 = -0x766cfda9;
  uStack_84 = 0x5cb4914a;
  uStack_80 = 0x3c5eaad;
  local_7c = 0;
  uStack_78 = 0x18;
  uStack_74 = 0;
  local_70 = (long *)0x0;
  FUN_012bd61c(&local_88,&LAB_02c7b064);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  local_88 = 0x2587adf9;
  uStack_84 = 0x2ddac3cd;
  uStack_80 = 0x3bfe6de;
  local_7c = 0;
  uStack_78 = 0x18;
  uStack_74 = 0;
  local_70 = (long *)0x0;
  FUN_012bd61c(&local_88,&LAB_02c7b08c);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  local_88 = 0x337beef8;
  uStack_84 = 0x8fbba7b6;
  uStack_80 = 0x3c3d1ab;
  local_7c = 0;
  uStack_78 = 0x19;
  uStack_74 = 0;
  local_70 = (long *)0x0;
  FUN_012bd61c(&local_88,&LAB_02c7b0b4);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  local_88 = 0x168d7e45;
  uStack_84 = 0x75080e43;
  uStack_80 = 0x3c44498;
  local_7c = 0;
  uStack_78 = 0x1a;
  uStack_74 = 0;
  local_70 = (long *)0x0;
  FUN_012bd61c(&local_88,&LAB_02c7b0dc);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  local_88 = 0x1db1fe12;
  uStack_84 = 0x7a4963ce;
  uStack_80 = 0x3c9a507;
  local_7c = 0;
  uStack_78 = 0xc;
  uStack_74 = 0;
  local_70 = (long *)0x0;
  FUN_012bd7d4(&local_88,&LAB_02c7b104,0x400);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017bc954; name: FUN_017bc954
 */


void FUN_017bc954(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *local_138;
  long *local_110;
  long *local_108;
  long lStack_100;
  long local_f8;
  long lStack_f0;
  long *local_e8;
  undefined4 local_e0;
  long *local_d8;
  long *local_d0 [4];
  long *local_b0;
  long *local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long *local_80;
  undefined4 local_78;
  long *local_70 [2];
  
  plVar4 = *(long **)(param_2 + 0x138);
  plVar5 = *(long **)(param_2 + 0x140);
  if (plVar4 != plVar5) {
    do {
      *param_1 = 0;
      param_1[1] = (long)&DAT_cbf29ce484222645;
      param_1[2] = (long)&DAT_03c886bc;
      *(undefined4 *)(param_1 + 5) = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      lVar14 = *plVar4;
      lVar7 = *param_3;
      plVar9 = (long *)param_3[3];
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
      plVar10 = *(long **)(lVar14 + 0x170);
      if (plVar10 == (long *)0x0) {
        plVar11 = (long *)0x0;
        plVar13 = (long *)0x0;
      }
      else {
        plVar11 = (long *)0x0;
        plVar13 = (long *)0x0;
        local_138 = (long *)0x0;
        plVar12 = (long *)0x0;
        do {
          lVar8 = plVar10[6];
          plVar15 = *(long **)(lVar14 + 0x1a8);
          if (plVar15 != (long *)0x0) {
            (**(code **)(*plVar15 + 0x18))(plVar15);
          }
          plVar1 = (long *)PTR_DAT_047d8b70;
          if (*(long *)(lVar8 + 8) != 0) {
            plVar1 = (long *)(*(long *)(lVar8 + 8) + 0x30);
          }
          if (*plVar1 == lVar7) {
            lVar2 = lVar8 + 0x138;
            if (*(long *)(lVar8 + 0x180) != 0) {
              lVar2 = lVar8 + 0x178;
            }
            if (*(long *)(lVar2 + 8) == 0) {
              puVar6 = (undefined8 *)FUN_00da5204();
            }
            else {
              puVar6 = (undefined8 *)(*(long *)(lVar2 + 8) + 0x40);
            }
            plVar11 = (long *)*puVar6;
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 0x18))(plVar11);
            }
            *param_1 = (long)plVar11;
            if (local_138 != (long *)0x0) {
              (**(code **)(*local_138 + 0x20))(local_138);
            }
            param_1[1] = puVar6[1];
            param_1[2] = puVar6[2];
            param_1[3] = puVar6[3];
            plVar13 = (long *)puVar6[4];
            if (plVar13 != (long *)0x0) {
              (**(code **)(*plVar13 + 0x18))(plVar13);
            }
            param_1[4] = (long)plVar13;
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x20))();
            }
            *(undefined4 *)(param_1 + 5) = *(undefined4 *)(puVar6 + 5);
            plVar12 = plVar13;
            if ((((plVar11 == (long *)0x0) || (*(char *)plVar11[7] == '\0')) &&
                (*(long *)(lVar8 + 0x128) != 0)) &&
               (FUN_0118b400(local_70,*(undefined8 *)(lVar8 + 0x18)), local_70[0] != (long *)0x0)) {
              if (*(char *)local_70[0][7] != '\0') {
                if (*(long *)(param_2 + 0x3e0) == 0) {
                  plVar11 = (long *)FUN_00da5204();
                }
                else {
                  plVar11 = (long *)(*(long *)(param_2 + 0x3e0) + 0x40);
                }
                local_a0 = (long *)*plVar11;
                if (local_a0 != (long *)0x0) {
                  (**(code **)(*local_a0 + 0x18))();
                }
                local_98 = plVar11[1];
                lStack_90 = plVar11[2];
                local_88 = plVar11[3];
                local_80 = (long *)plVar11[4];
                if (local_80 != (long *)0x0) {
                  (**(code **)(*local_80 + 0x18))();
                }
                local_78 = (undefined4)plVar11[5];
                if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                   (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
                  FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3e28);
                }
                FUN_00f2b7b8(local_d0,&local_a0,PTR_DAT_047d3e30,&DAT_03c886bc);
                FUN_017bd010(&local_d8,local_70[0]);
                FUN_017bcefc(&local_110,local_70,&local_d8);
                FUN_01467264(&local_108,&local_a0,&local_110,&DAT_03c886bc);
                plVar11 = (long *)*param_1;
                *param_1 = 0;
                if (plVar11 != (long *)0x0) {
                  (**(code **)(*plVar11 + 0x20))();
                }
                plVar11 = local_108;
                local_108 = (long *)0x0;
                *param_1 = (long)plVar11;
                param_1[1] = lStack_100;
                plVar13 = (long *)param_1[4];
                param_1[2] = local_f8;
                param_1[3] = lStack_f0;
                param_1[4] = 0;
                if (plVar13 != (long *)0x0) {
                  (**(code **)(*plVar13 + 0x20))(plVar13);
                }
                plVar13 = local_e8;
                local_e8 = (long *)0x0;
                param_1[4] = (long)plVar13;
                *(undefined4 *)(param_1 + 5) = local_e0;
                if (local_108 != (long *)0x0) {
                  (**(code **)(*local_108 + 0x20))();
                }
                if (local_110 != (long *)0x0) {
                  (**(code **)(*local_110 + 0x20))();
                }
                if (local_d8 != (long *)0x0) {
                  (**(code **)(*local_d8 + 0x20))();
                }
                if (local_b0 != (long *)0x0) {
                  (**(code **)(*local_b0 + 0x20))();
                }
                if (local_d0[0] != (long *)0x0) {
                  (**(code **)(*local_d0[0] + 0x20))();
                }
                if (local_80 != (long *)0x0) {
                  (**(code **)(*local_80 + 0x20))();
                }
                if (local_a0 != (long *)0x0) {
                  (**(code **)(*local_a0 + 0x20))();
                }
                plVar12 = plVar13;
                if (local_70[0] == (long *)0x0) goto LAB_017bcb1c;
              }
              (**(code **)(*local_70[0] + 0x20))();
              plVar12 = plVar13;
            }
LAB_017bcb1c:
            plVar13 = plVar12;
            local_138 = plVar11;
          }
          if (plVar15 != (long *)0x0) {
            (**(code **)(*plVar15 + 0x20))(plVar15);
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))();
      }
      if ((plVar11 != (long *)0x0) && (*(char *)plVar11[7] != '\0')) {
        return;
      }
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar5);
  }
  plVar4 = (long *)FUN_00da5204();
  plVar5 = (long *)*plVar4;
  *param_1 = (long)plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  param_1[1] = plVar4[1];
  param_1[2] = plVar4[2];
  param_1[3] = plVar4[3];
  plVar5 = (long *)plVar4[4];
  param_1[4] = (long)plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  *(int *)(param_1 + 5) = (int)plVar4[5];
  return;
}



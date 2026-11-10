/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b64b44; name: FUN_00b64b44
 */


void FUN_00b64b44(long param_1,byte param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  void *__s;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  long local_b0;
  long *local_a0;
  long *local_88 [2];
  long *local_78 [2];
  byte local_64 [4];
  
  if ((((*(char *)(param_1 + 0x60) != '\0') ||
       ((*(long *)(param_1 + 0x48) != 0 && (*(short *)(*(long *)(param_1 + 0x48) + 0x1a) != 0)))) &&
      (plVar7 = *(long **)(param_1 + 0x58), plVar7 != (long *)0x0)) &&
     ((local_64[0] = param_2, lVar8 = (**(code **)(*plVar7 + 0x30))(plVar7,local_64), lVar8 != 0 &&
      (*(long *)PTR_DAT_047d0a08 != 0)))) {
    bVar5 = *(byte *)(param_1 + 0x68);
    iVar6 = FUN_00f21480();
    if (iVar6 == 1) {
      uVar1 = bVar5 + 4;
      if ((((uVar1 & 0xff) < 8) && (*(long *)PTR_DAT_047d0860 != 0)) &&
         (lVar9 = FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,(&DAT_0485ea48)[(ulong)uVar1 & 0xff]
                               ,0x81), lVar9 != 0)) {
        *(byte *)(param_1 + 0x69) = local_64[0];
        *(long *)(param_1 + 0xb0 + (ulong)local_64[0] * 0x30 + 0x20) = lVar8;
        FUN_00c43ef0(param_1 + 0x70,param_3);
        uVar13 = *(undefined8 *)(param_3 + 0x10);
        *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_3 + 0x18);
        *(undefined8 *)(param_1 + 0x80) = uVar13;
        if (*(long *)(param_1 + 0xb0 + (ulong)local_64[0] * 0x30) == 0) {
          plVar7 = *(long **)(param_1 + 0x40);
          uVar13 = 0xff008;
          __s = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,0xff008,4);
          if (__s == (void *)0x0) {
            plVar7 = (long *)0x0;
            uVar13 = 0;
            uVar17 = 0;
          }
          else {
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar10 = nn::os::GetTlsValue(DAT_04865a30);
            if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar7;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
            memset(__s,0,0xff008);
            uVar17 = 4;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
          }
          uVar14 = (ulong)local_64[0];
          lVar10 = param_1 + uVar14 * 0x30;
          lVar15 = *(long *)(lVar10 + 0xb0);
          *(void **)(lVar10 + 0xb0) = __s;
          if (lVar15 != 0) {
            FUN_00c4e600();
            FUN_00c4e600();
            lVar10 = FUN_00c4e600();
            iVar4 = *(int *)(lVar10 + 0x12c8);
            iVar6 = iVar4 + 1;
            *(int *)(lVar10 + 0x12c8) = iVar6;
            if (*(int *)(lVar10 + 0x12cc) <= iVar4) {
              *(int *)(lVar10 + 0x12cc) = iVar6;
            }
            lVar10 = param_1 + uVar14 * 0x30;
            uVar16 = *(undefined8 *)(lVar10 + 200);
            plVar12 = *(long **)(lVar10 + 0xb8);
            uVar3 = *(undefined8 *)(lVar10 + 0xc0);
            uVar11 = (**(code **)(*plVar12 + 0xf8))(plVar12);
            if (((uVar11 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
              (**(code **)(*plVar12 + 0x18))(plVar12,lVar15,uVar3,uVar16);
            }
            else {
              FUN_00c48fe8(plVar12,lVar15,uVar3,uVar16);
            }
            lVar10 = FUN_00c4e600();
            iVar6 = *(int *)(lVar10 + 0x12c8) + -1;
            *(int *)(lVar10 + 0x12c8) = iVar6;
            if (iVar6 == 0) {
              plVar12 = (long *)FUN_00c4e600();
              if (plVar12[600] != 0) {
                local_88[0] = plVar12 + plVar12[600] * 3;
                local_78[0] = plVar12;
                FUN_00c4ea30(local_78,local_88);
                local_a0 = (long *)*plVar12;
                plVar2 = plVar12;
                if (plVar12[600] != 0) {
                  plVar2 = plVar12 + plVar12[600] * 3;
                }
                if (plVar2 == plVar12) {
                  lVar15 = 0;
                  local_b0 = 0;
                }
                else {
                  lVar15 = 0;
                  local_b0 = 0;
                  plVar18 = plVar12;
                  do {
                    (**(code **)(*(long *)*plVar18 + 0xd0))();
                    if ((long *)*plVar18 != local_a0) {
                      (**(code **)(*local_a0 + 0x100))(local_a0,plVar12 + local_b0 * 3,plVar18);
                      local_a0 = (long *)*plVar18;
                      local_b0 = lVar15;
                    }
                    plVar18 = plVar18 + 3;
                    lVar15 = lVar15 + 1;
                  } while (plVar2 != plVar18);
                }
                (**(code **)(*local_a0 + 0x100))
                          (local_a0,plVar12 + local_b0 * 3,plVar12 + lVar15 * 3);
                plVar12[600] = 0;
              }
              *(undefined4 *)(lVar10 + 0x12cc) = 0;
            }
          }
          lVar10 = param_1 + uVar14 * 0x30;
          *(undefined8 *)(lVar10 + 200) = uVar17;
          *(long **)(lVar10 + 0xb8) = plVar7;
          *(undefined8 *)(lVar10 + 0xc0) = uVar13;
        }
        FUN_00f222d4(local_78,lVar9,lVar8);
        if ((int)local_78[0] == 0) {
          FUN_00f22458(local_88,lVar9,lVar8,
                       *(undefined8 *)(param_1 + (ulong)local_64[0] * 0x30 + 0xb0),0xff008,uVar1);
          FUN_018ff39c(local_78,local_88);
        }
      }
    }
  }
  return;
}



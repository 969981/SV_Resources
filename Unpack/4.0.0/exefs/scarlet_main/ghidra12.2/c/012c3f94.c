/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012c3f94; name: FUN_012c3f94
 */


void FUN_012c3f94(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long *plStack_68;
  
  lVar5 = *param_1;
  if ((ulong)(param_1[2] - lVar5 >> 3) < 1000) {
    plVar1 = param_1 + 3;
    lVar7 = param_1[1];
    local_70 = 0;
    plStack_68 = plVar1;
    local_88 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],8000,8);
    if (local_88 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
    puVar2 = PTR_LAB_047d3900;
    local_80 = local_88 + (lVar7 - lVar5 >> 3) * 8;
    local_70 = local_88 + 8000;
    lVar5 = *param_1;
    lVar7 = param_1[1];
    local_78 = local_80;
    if (lVar7 == lVar5) {
      lVar7 = lVar5;
    }
    else {
      do {
        lVar8 = local_80;
        lVar9 = *plVar1;
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar2,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar4 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar4 == 0) {
          uVar6 = *(undefined8 *)(lVar7 + -8);
          *(undefined8 *)(lVar7 + -8) = 0;
          *(undefined8 *)(lVar8 + -8) = uVar6;
        }
        else {
          if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar9;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          uVar6 = *(undefined8 *)(lVar7 + -8);
          *(undefined8 *)(lVar7 + -8) = 0;
          *(undefined8 *)(lVar8 + -8) = uVar6;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        }
        lVar7 = lVar7 + -8;
        local_80 = local_80 + -8;
      } while (lVar5 != lVar7);
      lVar5 = *param_1;
      lVar7 = param_1[1];
    }
    *param_1 = local_80;
    param_1[1] = local_78;
    lVar8 = param_1[2];
    param_1[2] = local_70;
    local_88 = lVar5;
    local_80 = lVar5;
    local_78 = lVar7;
    local_70 = lVar8;
    FUN_00d05410(&local_88);
  }
  return;
}



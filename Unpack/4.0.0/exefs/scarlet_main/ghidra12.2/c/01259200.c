/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01259200; name: FUN_01259200
 */


void FUN_01259200(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *param_1;
  lVar5 = param_1[1];
  if (lVar5 == lVar7) {
    lVar8 = param_2[1];
  }
  else {
    lVar8 = param_2[1];
    do {
      lVar6 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar3 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar3 != 0) {
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar6;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      }
      plVar4 = *(long **)(lVar5 + -0x18);
      *(long **)(lVar8 + -0x18) = plVar4;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))();
      }
      plVar4 = *(long **)(lVar5 + -0x10);
      *(long **)(lVar8 + -0x10) = plVar4;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))();
      }
      puVar1 = (undefined4 *)(lVar5 + -8);
      lVar5 = lVar5 + -0x18;
      *(undefined4 *)(lVar8 + -8) = *puVar1;
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      }
      lVar8 = param_2[1] + -0x18;
      param_2[1] = lVar8;
    } while (lVar7 != lVar5);
    lVar7 = *param_1;
  }
  *param_1 = lVar8;
  param_2[1] = lVar7;
  lVar7 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar7;
  lVar7 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar7;
  *param_2 = param_2[1];
  return;
}



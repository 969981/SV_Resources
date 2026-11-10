/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ca966c; name: FUN_00ca966c
 */


void FUN_00ca966c(undefined8 *param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  if (param_3 != param_2) {
    lVar6 = *param_4;
    lVar8 = 0;
    do {
      uVar7 = *param_1;
      if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar5 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar5 != 0) {
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar7;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      }
      lVar1 = param_3 + lVar8;
      *(undefined8 *)(lVar6 + -0x48) = 0;
      *(undefined8 *)(lVar6 + -0x40) = 0;
      *(undefined8 *)(lVar6 + -0x38) = 0;
      uVar7 = *(undefined8 *)(lVar1 + -0x30);
      uVar2 = *(undefined8 *)(lVar1 + -0x28);
      uVar3 = *(undefined8 *)(lVar1 + -0x18);
      *(undefined8 *)(lVar6 + -0x20) = *(undefined8 *)(lVar1 + -0x20);
      *(undefined8 *)(lVar6 + -0x18) = uVar3;
      *(undefined8 *)(lVar6 + -0x30) = uVar7;
      *(undefined8 *)(lVar6 + -0x28) = uVar2;
      *(undefined8 *)(lVar6 + -0x48) = *(undefined8 *)(lVar1 + -0x48);
      *(undefined8 *)(lVar6 + -0x40) = *(undefined8 *)(lVar1 + -0x40);
      *(undefined8 *)(lVar6 + -0x38) = *(undefined8 *)(lVar1 + -0x38);
      uVar7 = *(undefined8 *)(lVar1 + -0x10);
      *(undefined8 *)(lVar1 + -0x40) = 0;
      *(undefined8 *)(lVar1 + -0x38) = 0;
      *(undefined8 *)(lVar1 + -0x48) = 0;
      *(undefined8 *)(lVar1 + -0x10) = 0;
      *(undefined8 *)(lVar6 + -0x10) = uVar7;
      *(undefined8 *)(lVar6 + -8) = *(undefined8 *)(lVar1 + -8);
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      }
      lVar8 = lVar8 + -0x48;
      lVar6 = *param_4 + -0x48;
      *param_4 = lVar6;
    } while (param_2 - param_3 != lVar8);
  }
  return;
}



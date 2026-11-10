/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02178bec; name: FUN_02178bec
 */


void FUN_02178bec(undefined8 *param_1,long param_2,long param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  if (param_3 != param_2) {
    lVar6 = *param_4;
    do {
      uVar4 = *param_1;
      puVar5 = (undefined8 *)(lVar6 + -0x28);
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar7 = param_3 + -0x28;
      lVar2 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar2 == 0) {
        *puVar5 = 0;
        *(undefined8 *)(lVar6 + -0x20) = 0;
        FUN_00dd9f00(puVar5,lVar7);
        uVar4 = *(undefined8 *)(param_3 + -0x18);
        uVar3 = *(undefined8 *)(param_3 + -8);
        *(undefined8 *)(lVar6 + -0x10) = *(undefined8 *)(param_3 + -0x10);
        *(undefined8 *)(lVar6 + -8) = uVar3;
        *(undefined8 *)(lVar6 + -0x18) = uVar4;
      }
      else {
        if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar4;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        *puVar5 = 0;
        *(undefined8 *)(lVar6 + -0x20) = 0;
        FUN_00dd9f00(puVar5,lVar7);
        uVar4 = *(undefined8 *)(param_3 + -0x18);
        uVar3 = *(undefined8 *)(param_3 + -8);
        *(undefined8 *)(lVar6 + -0x10) = *(undefined8 *)(param_3 + -0x10);
        *(undefined8 *)(lVar6 + -8) = uVar3;
        *(undefined8 *)(lVar6 + -0x18) = uVar4;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      }
      lVar6 = *param_4 + -0x28;
      *param_4 = lVar6;
      param_3 = lVar7;
    } while (param_2 != lVar7);
  }
  return;
}



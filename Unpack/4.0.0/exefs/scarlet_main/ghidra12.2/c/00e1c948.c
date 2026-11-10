/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e1c948; name: FUN_00e1c948
 */


void FUN_00e1c948(undefined8 *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar8 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 != 0) {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar8;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  }
  *param_2 = (long)(PTR_DAT_047e31c0 + 0x10);
  param_2[1] = *(long *)(param_3 + 8);
  FUN_029c4bf0(param_2 + 2,param_3 + 0x10);
  puVar1 = PTR_DAT_047e3230 + 0x10;
  *(undefined4 *)(param_2 + 9) = *(undefined4 *)(param_3 + 0x48);
  *param_2 = (long)puVar1;
  param_2[10] = *(long *)(param_3 + 0x50);
  param_2[0xc] = 0;
  param_2[0xb] = 0;
  FUN_00c43ef0(param_2 + 0xb,param_3 + 0x58);
  lVar7 = *(long *)(param_3 + 0x68);
  uVar4 = *(undefined4 *)(param_3 + 0x70);
  param_2[0xf] = 0;
  param_2[0xd] = lVar7;
  *(undefined4 *)(param_2 + 0xe) = uVar4;
  param_2[0x10] = 0;
  FUN_00c43ef0(param_2 + 0xf,param_3 + 0x78);
  lVar7 = *(long *)(param_3 + 0x88);
  *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(param_3 + 0x90);
  param_2[0x11] = lVar7;
  lVar7 = *(long *)(param_3 + 0x98);
  lVar2 = *(long *)(param_3 + 0xa0);
  lVar3 = *(long *)(param_3 + 0xb0);
  param_2[0x15] = *(long *)(param_3 + 0xa8);
  param_2[0x16] = lVar3;
  param_2[0x13] = lVar7;
  param_2[0x14] = lVar2;
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  return;
}



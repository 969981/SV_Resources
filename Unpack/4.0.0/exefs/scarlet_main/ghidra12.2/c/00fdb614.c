/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fdb614; name: FUN_00fdb614
 */


void FUN_00fdb614(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar6 = *(undefined8 **)(param_1 + 8);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
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
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[4] = *param_2;
  puVar6[6] = 0;
  puVar6[5] = 0;
  FUN_00fd9730(puVar6 + 5,param_2 + 1);
  puVar3 = PTR_LAB_047dc3e0;
  puVar2 = PTR_LAB_047dc3d8;
  puVar1 = PTR_LAB_047dc3d0;
  *puVar6 = PTR_LAB_047dc3c8;
  puVar6[1] = puVar1;
  puVar6[2] = puVar2;
  puVar6[3] = puVar3;
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  *(undefined8 **)(param_1 + 8) = puVar6 + 0x10;
  return;
}



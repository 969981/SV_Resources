/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b89294; name: FUN_02b89294
 */


void FUN_02b89294(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar2 != 0) {
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar4;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  uVar4 = param_3[1];
  param_2[4] = *param_3;
  param_2[5] = uVar4;
  param_2[6] = param_3[2];
  memcpy(param_2 + 7,param_3 + 3,0x28);
  uVar4 = param_3[8];
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xc] = uVar4;
  FUN_00c96b7c(param_2 + 0xd,param_3 + 9);
  param_2[0xf] = param_3[0xb];
  param_2[0x10] = param_3[0xc];
  param_2[0x11] = param_3[0xd];
  plVar3 = (long *)param_3[0xe];
  param_2[0x12] = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  uVar4 = param_3[0x10];
  param_2[0x13] = param_3[0xf];
  param_2[0x14] = uVar4;
  *param_2 = &LAB_02b8940c;
  param_2[1] = &LAB_02b8968c;
  param_2[2] = &LAB_02b8c654;
  param_2[3] = &LAB_02b8c6f4;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e19fb0; name: FUN_00e19fb0
 */


void FUN_00e19fb0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  
  *(undefined4 *)(param_1 + 6) = 0;
  puVar2 = PTR_DAT_047e31d0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[9] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  lVar1 = tpidr_el0;
  if ((((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
      (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) &&
     (lVar4 = *(long *)(lVar1 + 0x30), lVar4 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar4 = DAT_04859430;
    *(long *)(lVar1 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xb] = 0x555555555555555;
  param_1[0xc] = 0;
  param_1[10] = lVar4;
  param_1[0xe] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
      (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) &&
     (lVar4 = *(long *)(lVar1 + 0x30), lVar4 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar4 = DAT_04859430;
    *(long *)(lVar1 + 0x30) = DAT_04859430;
  }
  param_1[0xf] = lVar4;
  param_1[0x10] = 0x555555555555555;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  FUN_00e1a23c(param_1 + 0x15);
  param_1[0x22] = 0;
  return;
}



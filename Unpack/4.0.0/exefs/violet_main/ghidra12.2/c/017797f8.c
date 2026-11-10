/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017797f8; name: FUN_017797f8
 */


void FUN_017797f8(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  FUN_01779a78();
  *param_1 = &PTR_LAB_04580578;
  param_1[4] = &PTR_LAB_045805a8;
  memset(param_1 + 5,0,0x48);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  lVar1 = tpidr_el0;
  if ((((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
      (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) &&
     (lVar3 = *(long *)(lVar1 + 0x30), lVar3 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar3 = DAT_04859430;
    *(long *)(lVar1 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xe] = lVar3;
  param_1[0x12] = 0;
  param_1[0xf] = 0xfffffffffffffff;
  param_1[0x10] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
      (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) &&
     (lVar3 = *(long *)(lVar1 + 0x30), lVar3 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar3 = DAT_04859430;
    *(long *)(lVar1 + 0x30) = DAT_04859430;
  }
  param_1[0x13] = lVar3;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x14] = 0xfffffffffffffff;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  FUN_01779f70(param_1,param_1[1]);
  return;
}



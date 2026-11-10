/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0160646c; name: FUN_0160646c
 */


void FUN_0160646c(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  FUN_01606754();
  *param_1 = &PTR_FUN_045802f8;
  param_1[4] = &PTR_LAB_04580328;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[6] = &PTR_FUN_04580348;
  param_1[7] = 0;
  FUN_01606714(param_1 + 0xe);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
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
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1d] = lVar3;
  param_1[0x1e] = 0x1745d1745d1745d;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
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
  param_1[0x22] = lVar3;
  param_1[0x23] = 0x1745d1745d1745d;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x29),true,0);
  return;
}



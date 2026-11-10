/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01595618; name: FUN_01595618
 */


void FUN_01595618(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  FUN_00d1a240(param_1,0x8009809b);
  *(undefined4 *)(param_1 + 0x25) = 0;
  *param_1 = (long)&PTR_FUN_0459e1d8;
  param_1[4] = (long)&PTR_LAB_0459e358;
  param_1[5] = (long)&DAT_0459e480;
  param_1[6] = (long)&PTR_LAB_0459e4d8;
  param_1[7] = (long)&PTR_LAB_0459e500;
  param_1[0x24] = (long)&PTR_LAB_0459e538;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  lVar3 = tpidr_el0;
  if ((((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
      (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) &&
     (lVar2 = *(long *)(lVar3 + 0x30), lVar2 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar2 = DAT_04859430;
    *(long *)(lVar3 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2a] = lVar2;
  param_1[0x30] = 0;
  param_1[0x2b] = 0x1fffffffffffffff;
  param_1[0x2c] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
      (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) &&
     (lVar2 = *(long *)(lVar3 + 0x30), lVar2 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar2 = DAT_04859430;
    *(long *)(lVar3 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x31] = lVar2;
  param_1[0x37] = 0;
  param_1[0x32] = 0x1fffffffffffffff;
  param_1[0x33] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
      (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) &&
     (lVar2 = *(long *)(lVar3 + 0x30), lVar2 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar2 = DAT_04859430;
    *(long *)(lVar3 + 0x30) = DAT_04859430;
  }
  param_1[0x39] = 0x1fffffffffffffff;
  param_1[0x3a] = 0;
  param_1[0x38] = lVar2;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = (long)&DAT_cbf29ce484222645;
  param_1[0x3d] = (long)&DAT_03c886bc;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
      (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) &&
     (lVar2 = *(long *)(lVar3 + 0x30), lVar2 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar2 = DAT_04859430;
    *(long *)(lVar3 + 0x30) = DAT_04859430;
  }
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = lVar2;
  param_1[0x44] = 0x3fffffffffffffff;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = *param_2;
  param_1[0x4a] = param_2[2];
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  if ((code *)param_2[6] != (code *)0x0) {
    (*(code *)param_2[6])(param_2 + 8,param_1 + 0x50);
    lVar3 = param_2[7];
    param_1[0x4d] = param_2[5];
    param_1[0x4f] = lVar3;
    lVar3 = param_2[4];
    param_1[0x4e] = param_2[6];
    param_1[0x4c] = lVar3;
  }
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  if ((code *)param_2[0x16] != (code *)0x0) {
    (*(code *)param_2[0x16])(param_2 + 0x18,param_1 + 0x60);
    lVar3 = param_2[0x17];
    param_1[0x5d] = param_2[0x15];
    param_1[0x5f] = lVar3;
    lVar3 = param_2[0x14];
    param_1[0x5e] = param_2[0x16];
    param_1[0x5c] = lVar3;
  }
  *(undefined1 *)(param_1 + 0x6d) = 1;
  param_1[0x6c] = 0;
  (**(code **)(*param_1 + 0x70))(param_1,0);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01451ec0; name: FUN_01451ec0
 */


void FUN_01451ec0(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x3a0,0x10);
  if (puVar3 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    FUN_00e76b9c(puVar3,param_3);
    puVar3[0x40] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    *puVar3 = &DAT_045a2940;
    puVar3[0x41] = 0;
    puVar3[0x42] = 0;
    puVar3[0x43] = 0;
    puVar3[0x53] = 0;
    puVar3[0x52] = 0;
    puVar3[0x51] = 0;
    puVar3[0x50] = 0;
    puVar3[0x62] = 0;
    puVar3[0x61] = 0;
    puVar3[0x60] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x20] = 0;
    puVar3[0x21] = 0;
    puVar3[0x22] = 0;
    puVar3[0x23] = 0;
    puVar3[0x30] = 0;
    puVar3[0x31] = 0;
    puVar3[0x32] = 0;
    puVar3[0x33] = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    lVar1 = tpidr_el0;
    if ((((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
        (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) &&
       (lVar5 = *(long *)(lVar1 + 0x30), lVar5 == 0)) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar5 = DAT_04859430;
      *(long *)(lVar1 + 0x30) = DAT_04859430;
    }
    puVar3[99] = lVar5;
    puVar3[0x65] = 0;
    *(undefined4 *)(puVar3 + 0x66) = 0;
    puVar3[100] = 0x1fffffffffffffff;
    puVar3[0x67] = 0;
    puVar3[0x68] = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if ((((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
        (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) &&
       (lVar5 = *(long *)(lVar1 + 0x30), lVar5 == 0)) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar5 = DAT_04859430;
      *(long *)(lVar1 + 0x30) = DAT_04859430;
    }
    puVar3[0x69] = lVar5;
    puVar3[0x6b] = 0;
    *(undefined4 *)(puVar3 + 0x6c) = 0;
    puVar3[0x6a] = 0xfffffffffffffff;
    puVar3[0x6d] = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if ((((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
        (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) &&
       (lVar5 = *(long *)(lVar1 + 0x30), lVar5 == 0)) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar5 = DAT_04859430;
      *(long *)(lVar1 + 0x30) = DAT_04859430;
    }
    puVar3[0x6e] = lVar5;
    puVar3[0x6f] = 0xfffffffffffffff;
    *(undefined4 *)(puVar3 + 0x73) = 0x3f800000;
    puVar3[0x70] = 0;
    *(undefined4 *)(puVar3 + 0x71) = 0;
    puVar3[0x72] = 0;
    *param_1 = puVar3;
    param_1[1] = param_2;
    param_1[2] = 0x3a0;
    param_1[3] = 0x10;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}



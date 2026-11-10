/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cfa714; name: FUN_00cfa714
 */


ulong FUN_00cfa714(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x88);
  }
  if (lVar2 == param_1) {
    uVar4 = 0xffffffff00000000;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x460);
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(lVar3 + 0x88);
    }
    if (lVar3 == lVar2) {
      uVar4 = 0;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x468);
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar3 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(long *)(lVar3 + 0x88);
      }
      if (lVar3 != lVar2) {
        lVar2 = *(long *)(param_1 + 0x470);
        if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar3 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = *(long *)(lVar3 + 0x88);
        }
        uVar5 = (ulong)(lVar3 == lVar2);
        uVar4 = uVar5 << 0x21;
        goto LAB_00cfa784;
      }
      uVar4 = 0x100000000;
    }
  }
  uVar5 = 1;
LAB_00cfa784:
  return uVar4 | uVar5;
}



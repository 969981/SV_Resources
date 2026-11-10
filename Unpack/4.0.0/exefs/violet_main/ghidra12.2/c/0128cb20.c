/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0128cb20; name: FUN_0128cb20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0128cb20(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  if (lVar6 == 0) {
    memset(param_2 + 8,0,0x150);
    *(undefined1 *)(param_2 + 0xe) = 0;
    *param_2 = &DAT_cbf29ce484222645;
    param_2[1] = &DAT_03c886bc;
    param_2[4] = &DAT_cbf29ce484222645;
    param_2[5] = &DAT_03c886bc;
    uVar4 = _UNK_03cabe58;
    uVar3 = _DAT_03cabe50;
    uVar2 = _UNK_03caa988;
    uVar8 = _DAT_03caa980;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[9] = uVar2;
    param_2[8] = uVar8;
    param_2[0xb] = uVar4;
    param_2[10] = uVar3;
    FUN_0128cef4(param_2 + 0x10);
    FUN_0128cef4(param_2 + 0x17);
    param_2[0x1f] = 0;
    param_2[0x20] = 0;
    param_2[0x1e] = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
       (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) {
      lVar7 = tpidr_el0;
      lVar6 = *(long *)(lVar7 + 0x30);
      if (lVar6 == 0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        lVar6 = DAT_04859430;
        *(long *)(lVar7 + 0x30) = DAT_04859430;
      }
    }
    *(undefined4 *)(param_2 + 0x24) = 0;
    param_2[0x21] = lVar6;
    param_2[0x22] = 0x7ffffffffffffff;
    param_2[0x23] = 0;
    FUN_0128d030(param_2 + 0x25);
    return;
  }
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar8;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  memset(param_2 + 8,0,0x150);
  *(undefined1 *)(param_2 + 0xe) = 0;
  *param_2 = &DAT_cbf29ce484222645;
  param_2[1] = &DAT_03c886bc;
  param_2[4] = &DAT_cbf29ce484222645;
  param_2[5] = &DAT_03c886bc;
  uVar4 = _UNK_03cabe58;
  uVar3 = _DAT_03cabe50;
  uVar2 = _UNK_03caa988;
  uVar8 = _DAT_03caa980;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[9] = uVar2;
  param_2[8] = uVar8;
  param_2[0xb] = uVar4;
  param_2[10] = uVar3;
  FUN_0128cef4(param_2 + 0x10);
  FUN_0128cef4(param_2 + 0x17);
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x1e] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
     (lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8), lVar7 == 0)) {
    lVar1 = tpidr_el0;
    lVar7 = *(long *)(lVar1 + 0x30);
    if (lVar7 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar7 = DAT_04859430;
      *(long *)(lVar1 + 0x30) = DAT_04859430;
    }
  }
  *(undefined4 *)(param_2 + 0x24) = 0;
  param_2[0x21] = lVar7;
  param_2[0x22] = 0x7ffffffffffffff;
  param_2[0x23] = 0;
  FUN_0128d030(param_2 + 0x25);
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  return;
}



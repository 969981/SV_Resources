/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016c7bbc; name: FUN_016c7bbc
 */


void FUN_016c7bbc(undefined8 *param_1)

{
  undefined2 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
  FUN_00d1a240(param_1,0x80008080);
  *param_1 = &DAT_0460a2e0;
  param_1[4] = &PTR_LAB_0460a428;
  param_1[5] = &DAT_0460a550;
  param_1[6] = &PTR_LAB_0460a5a8;
  plVar5 = param_1 + 7;
  *plVar5 = (long)&PTR_LAB_0460a5d0;
  param_1[0x26] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
     (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) {
    lVar2 = tpidr_el0;
    lVar4 = *(long *)(lVar2 + 0x30);
    if (lVar4 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar4 = DAT_04859430;
      *(long *)(lVar2 + 0x30) = DAT_04859430;
    }
  }
  param_1[0x27] = lVar4;
  param_1[0x28] = 0x1fffffffffffffff;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if ((*(char *)(param_1 + 0xb) == -0x7e) && (*(char *)((long)param_1 + 0x59) == -0x7e)) {
    return;
  }
  uVar1 = *(undefined2 *)(param_1 + 0xb);
  *(undefined2 *)(param_1 + 0xb) = 0x8282;
  if (param_1[9] != 0) {
    FUN_00c6a584(param_1[9],plVar5);
  }
  (**(code **)(*plVar5 + 0x20))(plVar5,uVar1);
  return;
}



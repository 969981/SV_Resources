/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c77208; name: FUN_00c77208
 */


void FUN_00c77208(long *param_1,undefined8 param_2,uint *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar6 = tpidr_el0;
    lVar3 = *(long *)(lVar6 + 0x30);
    if (lVar3 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar3 = DAT_04859430;
      *(long *)(lVar6 + 0x30) = DAT_04859430;
    }
  }
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = lVar3;
  param_1[4] = 0x1fffffffffffffff;
  param_1[5] = 0;
  uVar4 = (ulong)*param_3;
  lVar3 = *param_1;
  lVar6 = param_1[1];
  uVar5 = lVar6 - lVar3 >> 3;
  if (uVar5 < uVar4) {
    FUN_00c79338(param_1,uVar4 - uVar5);
    lVar3 = *param_1;
    lVar6 = param_1[1];
  }
  else if (uVar5 != uVar4) {
    lVar6 = lVar3 + uVar4 * 8;
    param_1[1] = lVar6;
  }
  puVar1 = PTR_DAT_047e19e0;
  if (((lVar3 != lVar6) && ((**(code **)PTR_DAT_047e19e0)(lVar3), lVar3 + 8 != lVar6)) &&
     (((**(code **)puVar1)(), lVar3 + 0x10 != lVar6 &&
      ((**(code **)puVar1)(), lVar3 + 0x18 != lVar6)))) {
    (**(code **)puVar1)();
    for (lVar3 = lVar3 + 0x20; lVar3 != lVar6; lVar3 = lVar3 + 8) {
      (**(code **)puVar1)(lVar3);
    }
  }
  *(undefined1 *)((long)param_1 + 0x39) = 1;
  return;
}



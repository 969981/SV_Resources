/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c769fc; name: FUN_00c769fc
 */


void FUN_00c769fc(long *param_1,undefined8 param_2,uint *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
     (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) {
    lVar8 = tpidr_el0;
    lVar4 = *(long *)(lVar8 + 0x30);
    if (lVar4 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar4 = DAT_04859430;
      *(long *)(lVar8 + 0x30) = DAT_04859430;
    }
  }
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = lVar4;
  param_1[4] = 0x3fffffffffffffff;
  param_1[5] = 0;
  uVar5 = (ulong)*param_3;
  lVar4 = *param_1;
  lVar8 = param_1[1];
  uVar7 = lVar8 - lVar4 >> 2;
  if (uVar7 < uVar5) {
    FUN_00c7907c(param_1,uVar5 - uVar7);
    lVar4 = *param_1;
    lVar8 = param_1[1];
    puVar1 = PTR_DAT_047e19b8;
  }
  else {
    puVar1 = PTR_DAT_047e19b8;
    if (uVar7 != uVar5) {
      lVar8 = lVar4 + uVar5 * 4;
      param_1[1] = lVar8;
      puVar1 = PTR_DAT_047e19b8;
    }
  }
  for (; puVar2 = PTR_DAT_047e19b8, lVar4 != lVar8; lVar4 = lVar4 + 4) {
    pcVar6 = *(code **)PTR_DAT_047e19b8;
    PTR_DAT_047e19b8 = puVar1;
    (*pcVar6)(lVar4);
    puVar1 = PTR_DAT_047e19b8;
    PTR_DAT_047e19b8 = puVar2;
  }
  PTR_DAT_047e19b8 = puVar1;
  *(undefined1 *)((long)param_1 + 0x39) = 1;
  return;
}



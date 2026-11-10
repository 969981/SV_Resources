/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013e0ab0; name: FUN_013e0ab0
 */


void FUN_013e0ab0(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  
  FUN_00d5a934();
  puVar3 = PTR_DAT_047db450;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
     (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) {
    lVar2 = tpidr_el0;
    lVar5 = *(long *)(lVar2 + 0x30);
    if (lVar5 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar5 = DAT_04859430;
      *(long *)(lVar2 + 0x30) = DAT_04859430;
    }
  }
  param_1[0x20] = lVar5;
  *param_1 = (long)&PTR_LAB_0460b1d0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x21] = 0x1fffffffffffffff;
  param_1[0x22] = 0;
  param_1[0x24] = -1;
  FUN_00d5ae1c(param_1 + 0x1d,8);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  puVar6 = (undefined8 *)param_1[0x1d];
  puVar1 = (undefined8 *)param_1[0x1e];
  if (((puVar6 != puVar1) &&
      ((**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,1), puVar6 + 1 != puVar1)) &&
     ((**(code **)(*(long *)puVar6[1] + 0x30))((long *)puVar6[1],1), puVar6 + 2 != puVar1)) {
    (**(code **)(*(long *)puVar6[2] + 0x30))((long *)puVar6[2],1);
    for (puVar6 = puVar6 + 3; puVar6 != puVar1; puVar6 = puVar6 + 1) {
      (**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,1);
    }
  }
  return;
}



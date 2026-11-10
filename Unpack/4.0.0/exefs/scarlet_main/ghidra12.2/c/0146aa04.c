/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0146aa04; name: FUN_0146aa04
 */


void FUN_0146aa04(locale *param_1,byte param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  
  lVar2 = tpidr_el0;
  plVar5 = *(long **)(lVar2 + 0x30);
  if (plVar5 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar5 = DAT_04859430;
    *(long **)(lVar2 + 0x30) = DAT_04859430;
  }
  puVar4 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x30,8);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
  *puVar4 = &PTR_LAB_045e62e0;
  puVar4[1] = uVar6;
  std::locale::locale((locale *)(puVar4 + 2),param_1);
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(byte *)(puVar4 + 5) = param_2 & 1;
  puVar4[3] = uVar6;
  puVar4[4] = uVar1;
  *(undefined8 **)(*(long *)(param_1 + 0x38) + 8) = puVar4;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
  return;
}



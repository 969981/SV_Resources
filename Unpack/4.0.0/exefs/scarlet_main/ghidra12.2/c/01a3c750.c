/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a3c750; name: FUN_01a3c750
 */


void FUN_01a3c750(undefined8 *param_1)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  FUN_00d1a22c(param_1,9);
  *param_1 = &DAT_045dc840;
  param_1[4] = &PTR_LAB_045dc990;
  param_1[5] = &DAT_045dcab8;
  param_1[6] = &PTR_LAB_045dcb10;
  param_1[7] = &PTR_LAB_045dcb38;
  *(undefined2 *)((long)param_1 + 0x11e) = 0x100;
  *(undefined1 *)(param_1 + 0x24) = 1;
  puVar2 = PTR_DAT_047d3e28;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar2 = PTR_DAT_047d3e30;
  uVar5 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
  param_1[0x27] = *(undefined8 *)PTR_DAT_047d3e30;
  param_1[0x28] = uVar5;
  plVar1 = *(long **)(puVar2 + 0x18);
  param_1[0x29] = *(undefined8 *)(puVar2 + 0x10);
  param_1[0x2a] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2b] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
     (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) {
    lVar4 = FUN_01060ed0();
  }
  param_1[0x2e] = lVar4;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x2f] = 0x7ffffffffffffff;
  param_1[0x30] = 0;
  FUN_015a2f9c(param_1 + 0x32);
  *(undefined1 *)(param_1 + 0x3f) = 0;
  memset(param_1 + 0x41,0,0xa20);
  *(undefined4 *)(param_1 + 0x185) = 0x200;
  param_1[0x186] = 0;
  *(undefined4 *)((long)param_1 + 0xc44) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x187,0,1);
  *(undefined4 *)(param_1 + 0x189) = 0x3f800000;
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  param_1[0x18c] = 0;
  return;
}



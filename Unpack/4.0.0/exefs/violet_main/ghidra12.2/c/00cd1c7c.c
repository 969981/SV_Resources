/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cd1c7c; name: FUN_00cd1c7c
 */


void FUN_00cd1c7c(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_LAB_045d1320;
  param_1[2] = 0;
  param_1[3] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      uVar3 = *(undefined8 *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = &PTR_LAB_045d12b8;
  param_1[1] = uVar3;
  param_1[4] = &PTR_LAB_045d12f0;
  return;
}



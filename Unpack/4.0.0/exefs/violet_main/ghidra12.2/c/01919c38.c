/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01919c38; name: FUN_01919c38
 */


void FUN_01919c38(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  
  FUN_00e86a58();
  param_1[0x3e] = 0;
  *param_1 = &DAT_045df260;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[4] = &PTR_LAB_045df2f8;
  param_1[5] = &DAT_045df348;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
     (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) {
    lVar2 = FUN_01060ed0();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x45] = lVar2;
  param_1[0x46] = 0x1e1e1e1e1e1e1e1;
  param_1[0x47] = 0;
  return;
}



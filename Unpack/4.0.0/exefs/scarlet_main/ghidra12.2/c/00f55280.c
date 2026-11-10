/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f55280; name: FUN_00f55280
 */


void FUN_00f55280(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&DAT_045de3e0;
  param_1[1] = lVar4;
  param_1[4] = (long)&PTR_LAB_045de418;
  *(undefined4 *)((long)param_1 + 0x4c) = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  nn::os::InitializeLightEvent(param_1 + 8,0,1);
  lVar3 = param_1[1];
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xe] = 0x492492492492492;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = lVar3;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = lVar3;
  param_1[0x1c] = 0;
  param_1[0x1d] = lVar3;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0x1fffffffffffffff;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0x492492492492492;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)((long)param_1 + 300) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x24,0,1);
  param_1[0x34] = 0;
  param_1[0x2e] = (long)&DAT_cbf29ce484222645;
  param_1[0x2f] = (long)&DAT_03c886bc;
  param_1[0x32] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)((long)param_1 + 0x1cc) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x38,0,1);
  *(undefined1 *)(param_1 + 0x3a) = 1;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = param_1[1];
  *(undefined4 *)(param_1 + 0x42) = 0x1000001;
  param_1[0x3f] = 0xfffffffffffffff;
  param_1[0x40] = 0;
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b373b0; name: FUN_01b373b0
 */


float FUN_01b373b0(void)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  if (((DAT_0483b1e0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0483b1e0), iVar3 != 0)) {
    FUN_00100190(&LAB_02a42184,&DAT_0483b1d0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483b1e0);
  }
  lVar2 = DAT_0483b1d0;
  DAT_0483b1e8 = DAT_0483b1d0;
  nn::os::GetSystemTick();
  lVar4 = nn::os::ConvertToTimeSpan();
  uVar5 = lVar4 - *(long *)(lVar2 + 0x38);
  uVar1 = ((long)uVar5 >> 0x20) * 0x26d694b3 + ((uVar5 & 0xffffffff) * 0x26d694b3 >> 0x20);
  return (float)((int)(*(float *)(lVar2 + 0x28) +
                      (float)(((long)(((long)uVar5 >> 0x20) * 0x112e0be8 + ((long)uVar1 >> 0x20) +
                                     ((uVar5 & 0xffffffff) * 0x112e0be8 + (uVar1 & 0xffffffff) >>
                                     0x20)) >> 0x1a) - ((long)uVar5 >> 0x3f))) % 0x15180);
}



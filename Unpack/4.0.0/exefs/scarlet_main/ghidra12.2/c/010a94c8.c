/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a94c8; name: FUN_010a94c8
 */


void FUN_010a94c8(long param_1,int param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_2 < 3) {
    lVar2 = param_1 + (long)param_2 * 0x28;
    plVar3 = (long *)(lVar2 + 0x30);
    *plVar3 = 0;
    plVar4 = (long *)(lVar2 + 0x38);
    *plVar4 = 0;
    *(long *)(lVar2 + 0x40) = 0;
    *(ulong *)(lVar2 + 0x50) = (ulong)param_3;
    *(undefined1 *)(lVar2 + 0x48) = 0;
    nn::os::GetSystemTick();
    lVar1 = nn::os::ConvertToTimeSpan();
    *plVar3 = lVar1;
    *(undefined1 *)(lVar2 + 0x48) = 1;
    if ((*(char *)(lVar2 + 0x49) == '\0') &&
       (*(char *)(param_1 + (long)param_2 * 0x28 + 0x4a) == '\0')) {
      nn::os::GetSystemTick();
      lVar1 = nn::os::ConvertToTimeSpan();
      *(long *)(lVar2 + 0x40) = lVar1;
      *plVar4 = (lVar1 - *plVar3) + *plVar4;
      *plVar3 = 0;
    }
    *(char *)(lVar2 + 0x49) = '\x01';
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019c9a68; name: FUN_019c9a68
 */


void FUN_019c9a68(long *param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  
  if ((*(char *)((long)param_1 + 0x19) == '\0') && (*(char *)((long)param_1 + 0x1a) == '\0')) {
    nn::os::GetSystemTick();
    lVar2 = nn::os::ConvertToTimeSpan();
    lVar1 = *param_1;
    *param_1 = 0;
    param_1[1] = (lVar2 - lVar1) + param_1[1];
    param_1[2] = lVar2;
  }
  *(undefined1 *)((long)param_1 + (ulong)param_2 + 0x19) = 1;
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01070a58; name: FUN_01070a58
 */


void FUN_01070a58(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[4] = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  nn::os::GetSystemTick();
  lVar1 = nn::os::ConvertToTimeSpan();
  *param_1 = lVar1;
  *(undefined1 *)(param_1 + 3) = 1;
  if ((*(char *)((long)param_1 + 0x19) == '\0') && (*(char *)((long)param_1 + 0x1a) == '\0')) {
    nn::os::GetSystemTick();
    lVar2 = nn::os::ConvertToTimeSpan();
    lVar1 = *param_1;
    *param_1 = 0;
    param_1[1] = (lVar2 - lVar1) + param_1[1];
    param_1[2] = lVar2;
  }
  *(undefined1 *)((long)param_1 + 0x19) = 1;
  return;
}



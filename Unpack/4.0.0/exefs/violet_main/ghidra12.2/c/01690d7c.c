/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01690d7c; name: FUN_01690d7c
 */


void FUN_01690d7c(long param_1,int param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 < 3) {
    lVar4 = (long)param_2;
    if ((*(char *)(param_1 + (long)param_2 * 0x28 + 0x49) == '\0') &&
       (*(char *)(param_1 + lVar4 * 0x28 + 0x4a) == '\0')) {
      nn::os::GetSystemTick();
      lVar2 = nn::os::ConvertToTimeSpan();
      lVar3 = param_1 + lVar4 * 0x28;
      lVar1 = *(long *)(lVar3 + 0x30);
      *(undefined8 *)(lVar3 + 0x30) = 0;
      *(long *)(lVar3 + 0x38) = (lVar2 - lVar1) + *(long *)(lVar3 + 0x38);
      *(long *)(lVar3 + 0x40) = lVar2;
    }
    *(undefined1 *)(param_1 + lVar4 * 0x28 + (ulong)param_3 + 0x49) = 1;
  }
  return;
}



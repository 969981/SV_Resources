/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0173cc1c; name: FUN_0173cc1c
 */


void FUN_0173cc1c(long param_1,int param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  char *pcVar4;
  
  if (param_2 < 3) {
    lVar3 = param_1 + (long)param_2 * 0x28;
    pcVar4 = (char *)(lVar3 + 0x48);
    puVar2 = (undefined8 *)(lVar3 + 0x30);
    if (*pcVar4 == '\0') {
      nn::os::GetSystemTick();
      uVar1 = nn::os::ConvertToTimeSpan();
      *puVar2 = uVar1;
      *pcVar4 = '\x01';
    }
    else if ((*(char *)(param_1 + (long)param_2 * 0x28 + 0x49) != '\0') ||
            (*(char *)(param_1 + (long)param_2 * 0x28 + 0x4a) != '\0')) {
      FUN_00f63ac4(puVar2,param_3);
      return;
    }
  }
  return;
}



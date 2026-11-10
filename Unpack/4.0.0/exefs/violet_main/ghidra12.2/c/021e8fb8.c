/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021e8fb8; name: FUN_021e8fb8
 */


void FUN_021e8fb8(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 local_70;
  code *local_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [32];
  undefined4 *local_30;
  undefined4 local_24;
  
  FUN_021e90ac(&local_70);
  if (*(char *)(param_1 + 0x19) == '\0') {
    uVar2 = FUN_021dacf8(param_1 + 0x38);
    if ((uVar2 & 1) == 0) {
      local_30 = &local_24;
      local_24 = 0;
      FUN_021e9734(param_1 + 0x38,&local_30);
    }
  }
  FUN_021dad44(param_1 + 0x38);
  pcVar1 = local_68;
  if (local_68 != (code *)0x0) {
    local_70 = 0;
    local_68 = (code *)0x0;
    uStack_60 = 0;
    (*pcVar1)(auStack_50);
  }
  return;
}



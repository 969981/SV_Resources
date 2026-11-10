/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f02dc; name: FUN_001f02dc
 */


ulong FUN_001f02dc(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 == 0) {
    pcVar6 = "RST_STREAM: stream_id == 0";
  }
  else {
    if ((uVar1 & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0')) {
      iVar2 = *(int *)(param_1 + 0x934);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x938);
    }
    if ((int)uVar1 <= iVar2) {
      lVar5 = FUN_001edb18(param_1);
      if (lVar5 != 0) {
        FUN_001f9648(lVar5,1);
      }
      if ((*(code **)(param_1 + 0x7e8) == (code *)0x0) ||
         (iVar2 = (**(code **)(param_1 + 0x7e8))(param_1,param_2,*(undefined8 *)(param_1 + 0x8b8)),
         iVar2 == 0)) {
        uVar3 = FUN_001eea24(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
        uVar1 = 0;
        if ((int)uVar3 < -900) {
          uVar1 = uVar3;
        }
        uVar4 = (ulong)uVar1;
      }
      else {
        uVar4 = 0xfffffc7a;
      }
      return uVar4;
    }
    pcVar6 = "RST_STREAM: stream in idle";
  }
  uVar4 = FUN_001f0268(param_1,param_2,0xfffffe07,pcVar6);
  return uVar4;
}



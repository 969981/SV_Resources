/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ead0c; name: FUN_007ead0c
 */


void FUN_007ead0c(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = param_1[1];
  *param_1 = 0;
  if (lVar2 != 0) {
    uVar1 = FUN_007bfae0(lVar2);
    if (0x64f < uVar1) {
      uVar4 = 0;
      lVar3 = lVar2;
      do {
        FUN_007971bc(lVar3);
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x650;
      } while (uVar4 < uVar1 / 0x650);
    }
    FUN_007bfaa0(lVar2);
    param_1[1] = 0;
  }
  *(undefined2 *)((long)param_1 + 0x12) = 0;
  return;
}



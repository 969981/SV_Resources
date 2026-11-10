/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a34eb8; name: FUN_01a34eb8
 */


undefined8 FUN_01a34eb8(undefined8 param_1,uint *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((param_2 != (uint *)0x0) && (*param_2 != 0)) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      uVar1 = FUN_01a34f40((long)param_2 + lVar2 + (ulong)param_2[uVar3 + 1] + 4,param_1);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 4;
    } while (uVar3 < *param_2);
  }
  return 1;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019a5bf0; name: FUN_019a5bf0
 */


undefined8 FUN_019a5bf0(short *param_1,uint param_2)

{
  short *psVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  short *local_18;
  
  uVar3 = 0;
  psVar1 = param_1;
  do {
    if (*psVar1 == 0) {
      if (uVar3 == 0) {
        return 0;
      }
      break;
    }
    if (*psVar1 == 0x10) {
      lVar4 = (ulong)(ushort)psVar1[1] + 2;
      psVar1 = psVar1 + lVar4;
    }
    else {
      psVar1 = psVar1 + 1;
      lVar4 = 1;
    }
    uVar3 = (int)lVar4 + uVar3;
  } while (uVar3 < 0x800);
  local_18 = param_1;
  uVar2 = FUN_019a5c60(&local_18,param_2 & 1);
  return uVar2;
}



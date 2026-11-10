/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003198f0; name: FUN_003198f0
 */


undefined8 FUN_003198f0(long *param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1[2] != 0) {
    uVar3 = 0;
    uVar4 = param_1[2];
    do {
      while( true ) {
        uVar1 = uVar3 + (uVar4 - uVar3 >> 1);
        uVar2 = *(uint *)(*param_1 + uVar1 * 4);
        if (uVar2 < param_2) break;
        if (uVar2 <= param_2) {
          if (param_1[1] == 0) {
            return 0;
          }
          return *(undefined8 *)(param_1[1] + uVar1 * 8);
        }
        uVar4 = uVar1;
        if (uVar1 <= uVar3) {
          return 0;
        }
      }
      uVar3 = uVar1 + 1;
    } while (uVar3 < uVar4);
  }
  return 0;
}



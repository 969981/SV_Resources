/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e5244; name: FUN_001e5244
 */


undefined8 FUN_001e5244(long param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  *param_2 = 0;
  if (*(char *)(param_1 + 0x3fa) == '\0' || (*(uint *)(param_1 + 0x3fc) & 0x1000) == 0) {
    if ((*(uint *)(param_1 + 0x3fc) >> 0xc & 1) == 0) {
      uVar1 = FUN_001d15a8(param_1,0);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (((*(int *)(param_1 + 0x178) != 2) || (*(char *)(param_1 + 0x3f8) != '\0')) &&
         ((((*(uint *)(param_1 + 0x3fc) ^ 0xffffffff) & 0x4020) != 0 ||
          (uVar2 = FUN_001d21c8(param_1), (uVar2 & 1) == 0)))) {
        pcVar3 = *(code **)(*(long *)(param_1 + 0x420) + 0x28);
        if (pcVar3 == (code *)0x0) {
          *param_2 = 1;
        }
        else {
          uVar1 = (*pcVar3)(param_1,param_2);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
        }
        *(uint *)(param_1 + 0x3fc) = *(uint *)(param_1 + 0x3fc) | 0x1000;
        return 0;
      }
    }
  }
  else if (*(long *)(*(long *)(param_1 + 0x420) + 0x30) == 0) {
    *param_2 = 1;
    return 0;
  }
  return 0;
}



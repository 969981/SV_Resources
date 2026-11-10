/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290b720; name: FUN_0290b720
 */


uint FUN_0290b720(long param_1)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1a0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  cVar1 = *(char *)(param_1 + 0xb8);
  if ((uVar3 & 1) == 0) {
    if ((((cVar1 == '\a') || (cVar1 == '\r')) || (*(char *)(param_1 + 0xb9) == '\r')) ||
       (*(char *)(param_1 + 0xb9) == '\a')) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x27);
      return uVar2 & 1;
    }
  }
  else if (((cVar1 == '\a') || (cVar1 == '\r')) ||
          ((*(char *)(param_1 + 0xb9) == '\r' || (*(char *)(param_1 + 0xb9) == '\a')))) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
    uVar2 = 2;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0216363c; name: FUN_0216363c
 */


undefined8 FUN_0216363c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
  if (**(char **)(param_1 + 0xd8) == '\0') {
    if (*(long *)(param_1 + 0xa8) == 0) {
      return 0;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = (*(long *)(param_1 + 0xa8) + *(long *)(param_1 + 0xa0)) - 1;
    lVar2 = *(long *)(*(long *)(param_1 + 0x68) + (uVar3 >> 4 & 0xffffffffffffff8)) +
            (uVar3 & 0x7f) * 0x20;
  }
  else {
    lVar2 = param_1 + 0xd0;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
  }
  FUN_0192d7f4(uVar1,lVar2);
  return 1;
}



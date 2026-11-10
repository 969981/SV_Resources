/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0291331c; name: FUN_0291331c
 */


uint FUN_0291331c(long param_1)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if (((cVar1 == '\0') ||
      (cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                          *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90)),
      cVar1 == '\x03')) ||
     ((*(char *)(param_1 + 0xb8) != '\n' && (*(char *)(param_1 + 0xb9) != '\n')))) {
    uVar4 = 0;
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d);
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    uVar4 = 1;
    if ((uVar2 & 1) != 0) {
      uVar4 = 2;
    }
    if ((uVar3 & 1) == 0) {
      uVar4 = uVar2 & 1;
    }
  }
  return uVar4;
}



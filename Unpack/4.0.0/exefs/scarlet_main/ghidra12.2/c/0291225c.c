/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0291225c; name: FUN_0291225c
 */


uint FUN_0291225c(long param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  cVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if ((cVar2 != '\0') &&
     (cVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                         *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90)),
     cVar2 != '\x03')) {
    cVar2 = *(char *)(param_1 + 0xb8);
    cVar1 = *(char *)(param_1 + 0xb9);
    if (cVar2 != '\v') {
      if (cVar2 == '\f') {
        return 0;
      }
      if (cVar1 != '\x06' &&
          (cVar2 != '\x06' && (cVar1 != '\x01' && (cVar2 != '\x01' && cVar1 != '\v')))) {
        return 0;
      }
    }
    if ((((cVar1 != '\b') && (cVar2 != '\b')) && (cVar1 != '\x05')) &&
       ((cVar2 != '\x05' && (cVar1 != '\f')))) {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d);
      uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
      uVar5 = 1;
      if ((uVar3 & 1) != 0) {
        uVar5 = 2;
      }
      if ((uVar4 & 1) == 0) {
        uVar5 = uVar3 & 1;
      }
      return uVar5;
    }
  }
  return 0;
}



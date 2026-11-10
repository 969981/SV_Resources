/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02911c08; name: FUN_02911c08
 */


uint FUN_02911c08(long param_1)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if ((cVar1 == '\0') ||
     (cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                         *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90)),
     cVar1 == '\x03')) {
    uVar4 = 0;
  }
  else {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x8a325887e63573f0
                      );
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x36);
      uVar4 = 2;
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
      }
    }
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0);
    if ((uVar3 & 1) != 0) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
      return uVar4 | uVar2 & 1;
    }
  }
  return uVar4;
}



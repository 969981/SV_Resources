/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02913b38; name: FUN_02913b38
 */


undefined4 FUN_02913b38(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if ((cVar1 != '\0') &&
     (cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                         *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90)),
     cVar1 != '\x03')) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x318))(*(long **)(param_1 + 0x30),uVar2);
    if (cVar1 == '\x01') {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x3a);
      uVar2 = 2;
      if ((uVar3 & 1) == 0) {
        uVar2 = 0;
      }
      return uVar2;
    }
  }
  return 0;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0157d948; name: FUN_0157d948
 */


undefined8 FUN_0157d948(long param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (((0x1d < iVar2) &&
      (iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), 4 < iVar2))
     || (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e)
        , (uVar4 & 1) == 0)) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x318))(*(long **)(param_1 + 0x30),uVar3);
    if ((cVar1 == '\x01') &&
       (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32),
       (uVar4 & 1) != 0)) {
      return 2;
    }
  }
  return 0;
}



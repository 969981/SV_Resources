/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02914c18; name: FUN_02914c18
 */


uint FUN_02914c18(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x20);
  if (((((uVar2 & 1) == 0) &&
       (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x84),
       (uVar2 & 1) == 0)) &&
      (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x25),
      (uVar2 & 1) == 0)) &&
     (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0xa2),
     (uVar2 & 1) == 0)) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0xd6);
    uVar1 = uVar1 & 1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



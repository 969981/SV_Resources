/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029103d4; name: FUN_029103d4
 */


uint FUN_029103d4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),1);
  if (((((uVar2 & 1) == 0) &&
       (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0),
       (uVar2 & 1) == 0)) &&
      (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),2),
      (uVar2 & 1) == 0)) &&
     (((uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),3),
       (uVar2 & 1) == 0 &&
       (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),6),
       (uVar2 & 1) == 0)) &&
      ((uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),7),
       (uVar2 & 1) == 0 &&
       (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),8),
       (uVar2 & 1) == 0)))))) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d);
    uVar1 = uVar1 & 1;
  }
  return uVar1;
}



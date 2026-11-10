/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0290dcf4; name: FUN_0290dcf4
 */


uint FUN_0290dcf4(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),
                     *(undefined4 *)(param_1 + 0x98));
  plVar4 = *(long **)(param_1 + 0x30);
  if ((uVar3 & 1) == 0) {
    iVar1 = (**(code **)(*plVar4 + 0xa0))(plVar4,*(undefined4 *)(param_1 + 0x98));
    if ((iVar1 < 0x32) &&
       (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e),
       (uVar3 & 1) != 0)) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x1f);
      uVar2 = uVar2 & 1;
    }
  }
  else {
    uVar3 = (**(code **)(*plVar4 + 0x4c0))(plVar4,0x5a);
    uVar2 = 2;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



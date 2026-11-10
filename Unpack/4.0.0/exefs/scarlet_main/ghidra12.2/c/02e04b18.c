/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e04b18; name: FUN_02e04b18
 */


undefined8 FUN_02e04b18(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
  plVar2 = *(long **)(param_1 + 0x30);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plVar2 + 0xf0))(plVar2,*(undefined4 *)(param_1 + 0x98));
    if ((1 < iVar1) &&
       (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x27),
       (uVar3 & 1) != 0)) {
      return 2;
    }
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0x4c8))(plVar2,0x46);
    if ((uVar3 & 1) != 0) {
      return 0xffffffff;
    }
  }
  return 0;
}



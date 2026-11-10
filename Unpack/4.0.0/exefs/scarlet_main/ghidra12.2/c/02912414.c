/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02912414; name: FUN_02912414
 */


uint FUN_02912414(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3d8))(*(long **)(param_1 + 0x30),1);
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d);
    uVar5 = 0xfffffffe;
    if ((uVar3 & 1) == 0) {
      uVar5 = 0;
    }
  }
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x498))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  plVar4 = *(long **)(param_1 + 0x30);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*plVar4 + 0x4c0))(plVar4,0x4e);
    uVar5 = uVar5 - (uVar2 & 1);
  }
  else {
    uVar2 = (**(code **)(*plVar4 + 0x4c0))(plVar4,0x32);
    uVar5 = uVar5 | uVar2 & 1;
  }
  return uVar5;
}



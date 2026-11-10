/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0290ee40; name: FUN_0290ee40
 */


uint FUN_0290ee40(long param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  plVar3 = *(long **)(param_1 + 0x30);
  if (iVar1 < 0x1e) {
    uVar4 = (**(code **)(*plVar3 + 0x4c0))(plVar3,0x4e);
    uVar2 = 0xfffffffe;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
  }
  else {
    iVar1 = (**(code **)(*plVar3 + 0xa0))(plVar3,*(undefined4 *)(param_1 + 0x98));
    plVar3 = *(long **)(param_1 + 0x30);
    if (iVar1 < 0x47) {
      uVar4 = (**(code **)(*plVar3 + 0x90))(plVar3,*(undefined4 *)(param_1 + 0x98));
      if ((uVar4 & 1) == 0) {
        uVar5 = 0x14;
      }
      else {
        uVar5 = 0x55;
      }
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),uVar5);
    }
    else {
      uVar2 = (**(code **)(*plVar3 + 0x4c0))(plVar3,0x32);
    }
    uVar2 = uVar2 & 1;
  }
  return uVar2;
}



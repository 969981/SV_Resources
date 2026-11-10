/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029587f0; name: FUN_029587f0
 */


undefined4 FUN_029587f0(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  undefined4 uVar5;
  
  plVar4 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  uVar2 = (**(code **)(*plVar4 + 0xb8))(plVar4,8);
  uVar3 = (**(code **)(*plVar4 + 0xb8))(plVar4,9);
  uVar5 = 1;
  if (uVar2 < uVar3) {
    uVar5 = 2;
  }
  if (uVar2 >= uVar3) {
    uVar3 = uVar2;
  }
  uVar2 = (**(code **)(*plVar4 + 0xb8))(plVar4,10);
  uVar1 = 3;
  if (uVar2 <= uVar3) {
    uVar1 = uVar5;
  }
  if (uVar2 <= uVar3) {
    uVar2 = uVar3;
  }
  uVar3 = (**(code **)(*plVar4 + 0xb8))(plVar4,0xb);
  uVar5 = 4;
  if (uVar3 <= uVar2) {
    uVar5 = uVar1;
  }
  if (uVar3 <= uVar2) {
    uVar3 = uVar2;
  }
  uVar2 = (**(code **)(*plVar4 + 0xb8))(plVar4,0xc);
  uVar1 = 5;
  if (uVar2 <= uVar3) {
    uVar1 = uVar5;
  }
  return uVar1;
}



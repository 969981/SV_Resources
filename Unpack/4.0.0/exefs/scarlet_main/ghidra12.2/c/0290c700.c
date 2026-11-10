/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0290c700; name: FUN_0290c700
 */


void FUN_0290c700(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3d0))(*(long **)(param_1 + 0x30),2);
  uVar3 = 0x11;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3d0))(*(long **)(param_1 + 0x30),1);
  uVar1 = 0xb;
  if ((uVar2 & 1) == 0) {
    uVar1 = uVar3;
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3d0))(*(long **)(param_1 + 0x30),3);
  uVar3 = 0xc;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar1;
  }
  FUN_02914fb8(param_1,uVar3);
  return;
}



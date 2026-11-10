/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c5a0d0; name: FUN_01c5a0d0
 */


undefined8 FUN_01c5a0d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_18 [4];
  undefined2 local_14 [2];
  
  uVar5 = FUN_019a41b0(param_1,1);
  uVar3 = FUN_00c92df0(param_1,2,0);
  uVar2 = FUN_00c92df0(param_1,3,0);
  if ((DAT_048137e8 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(&DAT_048137e8);
    if (iVar4 != 0) {
      DAT_04815a50 = '\x01';
      DAT_04815a58 = 1;
      __cxa_guard_release(&DAT_048137e8);
    }
  }
  uVar1 = 0x70;
  if (DAT_04815a50 == '\0') {
    uVar1 = 0;
  }
  local_18[0] = uVar2;
  local_14[0] = uVar3;
  FUN_01c5a1bc(uVar5,uVar1,DAT_04815a58,local_14,local_18);
  return 0;
}



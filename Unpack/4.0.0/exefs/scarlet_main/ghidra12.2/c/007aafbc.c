/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007aafbc; name: FUN_007aafbc
 */


undefined8 FUN_007aafbc(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  
  plVar3 = *(long **)(*(long *)(param_1 + 0xf8) + 0x120);
  uVar1 = *(ushort *)(*(long *)(param_1 + 0xf8) + 0x114e);
  FUN_00796584(auStack_50);
  (**(code **)(*plVar3 + 0x58))(plVar3,auStack_50);
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar4 = 0;
    uVar5 = 0;
    do {
      FUN_00796584(auStack_70);
      uVar2 = (**(code **)(*plVar3 + 0x48))(plVar3,uVar4,auStack_70);
      if ((((uVar2 & 1) != 0) && (uVar2 = FUN_00796784(auStack_70), (uVar2 & 1) != 0)) &&
         (uVar2 = FUN_007967e8(auStack_70,auStack_50), (uVar2 & 1) == 0)) {
        (**(code **)(*plVar3 + 0x78))(plVar3,auStack_70);
        uVar5 = 1;
      }
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffff) <= (uint)uVar1 && (uint)uVar1 != (uVar4 & 0xffff));
  }
  return uVar5;
}



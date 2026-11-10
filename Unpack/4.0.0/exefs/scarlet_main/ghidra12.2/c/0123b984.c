/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0123b984; name: FUN_0123b984
 */


undefined8 FUN_0123b984(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x68) == 1) {
    uVar3 = *(undefined8 *)(param_1 + 0x2b8);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18);
    uVar1 = FUN_00f63380(uVar2,uVar3,0);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    uVar1 = FUN_00f63380(uVar2,uVar3,1);
    if (((((uVar1 & 1) != 0) && (uVar1 = FUN_00f63380(uVar2,uVar3,2), (uVar1 & 1) != 0)) &&
        (uVar1 = FUN_00f63380(uVar2,uVar3,3), (uVar1 & 1) != 0)) &&
       (uVar1 = FUN_00f63380(uVar2,uVar3,4), (uVar1 & 1) != 0)) {
      FUN_00f7d36c(param_1);
      return 2;
    }
  }
  else {
    if (*(int *)(param_1 + 0x68) != 0) {
      return 2;
    }
    FUN_0123ba5c(param_1);
    FUN_01497d74(param_1);
  }
  return 0;
}



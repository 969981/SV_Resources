/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297f3d4; name: FUN_0297f3d4
 */


void FUN_0297f3d4(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  float fVar4;
  
  iVar1 = FUN_0136b004(*(undefined8 *)(param_1 + 8));
  if ((((iVar1 != 0) &&
       (uVar3 = FUN_01242e68(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2),
       (uVar3 & 1) != 0)) &&
      ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x499) >> 2 & 1) != 0)) &&
     (uVar3 = FUN_0297f478(param_1,param_2), (uVar3 & 1) == 0)) {
    uVar2 = FUN_0136b004(*(undefined8 *)(param_1 + 8));
    fVar4 = (float)FUN_0297f508(param_1);
    iVar1 = (int)(fVar4 * (float)uVar2 * 0.125);
    if (iVar1 != 0) {
      FUN_0297f844(*(undefined8 *)(param_1 + 0x20),-iVar1);
      return;
    }
  }
  return;
}



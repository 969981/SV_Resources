/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e5690; name: FUN_003e5690
 */


void FUN_003e5690(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_2 + 0x10);
  uVar3 = 5;
  if ((uVar5 & 8) != 0) {
    uVar3 = 0xffffffff;
  }
  FUN_0043b710(param_2);
  uVar1 = FUN_0045bc10();
  if (param_1 != (undefined8 *)0x0) {
    uVar4 = (uint)uVar5;
    if (((uVar4 >> 3 & 1) == 0) && (param_1[1] == 0)) {
      lVar2 = FUN_003e50d0();
      param_1[1] = lVar2;
      if (lVar2 == 0) {
        return;
      }
    }
    FUN_003dffa0(*param_1);
    *param_1 = uVar1;
    if ((uVar4 >> 3 & 1) == 0) {
      FUN_003de3c0(param_1[1],uVar3,0);
      return;
    }
    FUN_003e50e0(param_1[1]);
    param_1[1] = 0;
  }
  return;
}



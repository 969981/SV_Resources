/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0030a8c8; name: FUN_0030a8c8
 */


void FUN_0030a8c8(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_28 [8];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x780);
  uVar1 = param_2;
  if (4 < param_2) {
    uVar1 = FUN_00350fb0(param_2,param_2,param_2);
  }
  FUN_0035351c(auStack_28,uVar3,uVar1);
  lVar2 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(lVar2 + 0x780) = 0;
  if (4 < *(ulong *)(lVar2 + 0x8e0)) {
    FUN_00350fd0();
  }
  if (param_2 < 5) {
    lVar2 = *(long *)(param_1 + 0x18);
    *(ulong *)(lVar2 + 0x8e0) = param_2;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    uVar3 = FUN_00350fb0(param_2);
    lVar2 = *(long *)(param_1 + 0x18);
    *(undefined8 *)(lVar2 + 0x8e0) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    param_2 = FUN_00350fb0(param_2);
  }
  FUN_00308f80(uVar3,lVar2,param_2);
  return;
}



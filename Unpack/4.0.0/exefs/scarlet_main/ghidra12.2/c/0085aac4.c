/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0085aac4; name: FUN_0085aac4
 */


long FUN_0085aac4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [512];
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (*(char *)(lVar3 + 0x1fc) == '\0') {
    FUN_032260f8(auStack_240,auStack_230,0x200);
    uVar2 = FUN_0322b1e0(auStack_240,"No mass properties available (");
    uVar2 = FUN_0322b2c8(uVar2,*(undefined4 *)(lVar3 + 0x1f8));
    FUN_0322b1e0(uVar2,
                 ") hkgpConvexHull::buildMassProperties need to be called before this operation.");
    iVar1 = FUN_03226f50(0x79f9d887,auStack_230,
                         "../..\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                         ,0x191);
    if (iVar1 != 0) {
      CallSupervisor(0x26);
    }
    FUN_032261b0(auStack_240);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  return lVar3 + 400;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00853d28; name: FUN_00853d28
 */


undefined4 FUN_00853d28(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [512];
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (*(char *)(lVar3 + 0x1fe) == '\0') {
    FUN_032260f8(auStack_240,auStack_230,0x200);
    uVar2 = FUN_0322b1e0(auStack_240,"No index available (");
    uVar2 = FUN_0322b2c8(uVar2,*(undefined4 *)(lVar3 + 0x1f8));
    FUN_0322b1e0(uVar2,") hkgpConvexHull::buildIndices need to be called before this operation.");
    iVar1 = FUN_03226f50(0x79f9d886,auStack_230,
                         "../..\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                         ,0x189);
    if (iVar1 != 0) {
      CallSupervisor(0x26);
    }
    FUN_032261b0(auStack_240);
  }
  return *(undefined4 *)(param_2 + 0x58);
}



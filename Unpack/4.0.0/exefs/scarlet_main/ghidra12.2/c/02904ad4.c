/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02904ad4; name: FUN_02904ad4
 */


undefined8 FUN_02904ad4(long param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  
  piVar4 = (int *)FUN_011e2dd4(*(undefined8 *)
                                (*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 0x290) + 8) + 0x50)
                              );
  if (piVar4 == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *piVar4;
    if (4 < iVar6) {
      iVar6 = 0;
    }
  }
  lVar5 = FUN_00f7e3c8(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x30),iVar6);
  if (lVar5 != 0) {
    bVar2 = FUN_019a7b1c(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x290),iVar6);
    bVar1 = *(byte *)(lVar5 + 0x30);
    if (bVar2 < bVar1) {
      uVar7 = (uint)bVar2;
      do {
        sVar3 = (**(code **)(**(long **)(lVar5 + (ulong)(uVar7 & 0xff) * 8) + 0x230))();
        if (sVar3 != 0) {
          return 1;
        }
        uVar7 = uVar7 + 1;
      } while (bVar1 != uVar7);
    }
  }
  return 0;
}



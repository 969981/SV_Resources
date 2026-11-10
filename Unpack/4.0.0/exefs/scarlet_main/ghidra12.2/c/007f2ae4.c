/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f2ae4; name: FUN_007f2ae4
 */


undefined8 FUN_007f2ae4(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  puVar2 = PTR_DAT_047d0860;
  if (*(short *)(*(long *)PTR_DAT_047d0860 + 0x50) != 0) {
    uVar6 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x48))(param_1,uVar6);
      if (lVar3 != 0) {
        lVar3 = (**(code **)(*param_1 + 0x48))(param_1,uVar6);
        uVar4 = (uint)*(ushort *)(lVar3 + 0x1a);
        if (*(ushort *)(lVar3 + 0x1a) != 0) {
          uVar5 = *(uint *)(lVar3 + 0x14);
          do {
            uVar1 = 0;
            if (*(ushort *)(lVar3 + 0x10) <= uVar5) {
              uVar1 = (uint)*(ushort *)(lVar3 + 0x10);
            }
            if (*(char *)(*(long *)(lVar3 + 8) + (ulong)(uVar5 - uVar1) * 0x5b8) == '\0') break;
            if (*(char *)(*(long *)(lVar3 + 8) + (ulong)(uVar5 - uVar1) * 0x5b8 + 1) != '\0') {
              return 1;
            }
            uVar5 = uVar5 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(*(long *)puVar2 + 0x50));
  }
  return 0;
}



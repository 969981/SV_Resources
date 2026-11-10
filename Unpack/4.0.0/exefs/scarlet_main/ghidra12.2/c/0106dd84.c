/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0106dd84; name: FUN_0106dd84
 */


byte FUN_0106dd84(long param_1,long param_2)

{
  short sVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  if (3 < *(uint *)(param_1 + 0x7c)) {
    return 0;
  }
  uVar5 = FUN_0106f87c();
  uVar5 = uVar5 & 1;
  if ((param_2 != 0) && (*(char *)(*(long *)(*(long *)(param_1 + 8) + 0x310) + 0x8d) == '\0')) {
    lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x290);
    sVar1 = *(short *)(*(long *)(lVar8 + 0x10) + 0x8a);
    if (sVar1 != 0) {
      lVar6 = FUN_01091070(param_2,sVar1,
                           (long)*(short *)(*(long *)(*(long *)(lVar8 + 8) + 0x1b0) + 8));
      uVar7 = (ulong)*(ushort *)(*(long *)(lVar8 + 0x10) + 0x8a);
      uVar2 = 0;
      if (uVar7 != 0) {
        uVar2 = (uint)((ulong)(lVar6 * 100) / uVar7);
      }
      if (10 < uVar2) goto LAB_0106de04;
    }
    uVar5 = 1;
    if (*(uint *)(param_1 + 0x7c) < 4) {
      lVar8 = param_1 + (ulong)*(uint *)(param_1 + 0x7c) * 8;
      *(undefined1 *)(lVar8 + 0x5c) = 3;
      *(undefined4 *)(lVar8 + 0x60) = 1;
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
    }
  }
LAB_0106de04:
  bVar3 = FUN_0106fa5c(param_1,param_2);
  bVar4 = FUN_0106de7c(param_1,param_2);
  return (bVar4 | bVar3 | uVar5 != 0) & 1;
}



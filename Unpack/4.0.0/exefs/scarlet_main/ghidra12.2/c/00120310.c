/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00120310; name: FUN_00120310
 */


void FUN_00120310(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar8 = param_2 + 0x1fU & 0xffffffffffffffe0;
  if (param_1 == 0) {
    FUN_0011f570(uVar8);
    return;
  }
  lVar2 = FUN_0011f570(*(long *)(param_1 + 0x20) + uVar8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if ((lVar2 != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    lVar6 = *(long *)(param_1 + 0x18);
    lVar3 = 0;
    uVar4 = 0;
    lVar5 = lVar2 + uVar8;
    do {
      if ((*(byte *)(lVar6 + lVar3) & 1) == 0) {
        plVar7 = *(long **)(*(long *)(param_1 + 8) + lVar3);
      }
      else {
        plVar7 = (long *)(lVar2 + *(long *)(*(long *)(param_1 + 8) + lVar3));
      }
      *plVar7 = lVar5;
      lVar6 = *(long *)(param_1 + 0x18);
      uVar4 = uVar4 + 1;
      puVar1 = (ulong *)(lVar6 + lVar3);
      lVar3 = lVar3 + 8;
      lVar5 = lVar5 + (*puVar1 & 0xfffffffffffffffe);
    } while (uVar4 < *(uint *)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



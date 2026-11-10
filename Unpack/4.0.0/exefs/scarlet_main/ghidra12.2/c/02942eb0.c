/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02942eb0; name: FUN_02942eb0
 */


void FUN_02942eb0(long param_1,undefined4 param_2)

{
  char cVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  
  plVar2 = (long *)FUN_01079790(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  uVar3 = (**(code **)(*plVar2 + 0x308))();
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x18);
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined1 *)(lVar4 + 0xc);
    }
    uVar3 = FUN_0128ab58(*(undefined8 *)(*(long *)(param_1 + 8) + 0x290),uVar5,param_2);
    if ((uVar3 & 1) == 0) {
      lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x98);
      if (lVar4 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(lVar4 + 0xc);
      }
      cVar1 = FUN_021fad50(uVar6);
      if ((((cVar1 == '\v') && (uVar3 = FUN_021fb6dc(uVar6), (uVar3 & 1) != 0)) &&
          (lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x130), lVar4 != 0)) &&
         (*(byte *)(lVar4 + 10) < 2)) {
        *(undefined4 *)(lVar4 + 0xc) = 0x19;
        if (*(byte *)(lVar4 + 10) == 1) {
          *(undefined1 *)(lVar4 + 10) = 2;
        }
        FUN_02942fb0(param_1,param_2,uVar5);
        return;
      }
    }
  }
  return;
}



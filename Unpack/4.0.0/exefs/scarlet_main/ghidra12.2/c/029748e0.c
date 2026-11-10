/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029748e0; name: FUN_029748e0
 */


void FUN_029748e0(long param_1,int param_2)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x78);
  lVar6 = *(long *)(lVar4 + 0x20);
  iVar5 = 0;
  if (lVar6 != 0) {
    iVar5 = *(int *)(lVar6 + 0xc);
  }
  if (iVar5 == param_2) {
    lVar4 = *(long *)(lVar4 + 0x28);
    if (lVar4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(lVar4 + 0xc);
    }
    plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),uVar1);
    uVar3 = (**(code **)(*plVar2 + 0x300))(plVar2,7);
    if (((((uVar3 & 1) != 0) &&
         (lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x240), lVar4 != 0)) &&
        (*(byte *)(lVar4 + 10) < 2)) &&
       (*(undefined4 *)(lVar4 + 0xc) = 1, *(byte *)(lVar4 + 10) == 1)) {
      *(undefined1 *)(lVar4 + 10) = 2;
    }
  }
  return;
}



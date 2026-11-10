/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a1500; name: FUN_003a1500
 */


void FUN_003a1500(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0xb0);
  if ((*(long *)(lVar4 + 0x1f8) == 0) && (*(long *)(lVar4 + 0x200) == 0)) {
    if (*(code **)(lVar4 + 0x210) == (code *)0x0) {
      *(undefined4 *)(lVar4 + 0x208) = 1000000;
    }
    else {
      uVar2 = (**(code **)(lVar4 + 0x210))(param_1,0);
      lVar4 = *(long *)(param_1 + 0xb0);
      *(undefined4 *)(lVar4 + 0x208) = uVar2;
    }
  }
  FUN_0049e3f0(lVar4 + 0x1f8);
  lVar5 = *(long *)(param_1 + 0xb0);
  lVar4 = *(long *)(lVar5 + 0x1f8) + (ulong)(*(uint *)(lVar5 + 0x208) / 1000000);
  lVar1 = *(long *)(lVar5 + 0x200) + (ulong)(*(uint *)(lVar5 + 0x208) % 1000000);
  *(long *)(lVar5 + 0x1f8) = lVar4;
  *(long *)(lVar5 + 0x200) = lVar1;
  if (999999 < lVar1) {
    *(long *)(lVar5 + 0x1f8) = lVar4 + 1;
    *(long *)(lVar5 + 0x200) = lVar1 + -1000000;
  }
  uVar3 = FUN_003b35d0(param_1);
  FUN_003e9560(uVar3,0x2d,0,*(long *)(param_1 + 0xb0) + 0x1f8);
  return;
}



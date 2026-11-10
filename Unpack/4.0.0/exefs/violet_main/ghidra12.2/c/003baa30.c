/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003baa30; name: FUN_003baa30
 */


undefined8
FUN_003baa30(long param_1,uint param_2,long param_3,undefined8 param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x550) + 0x1e0);
  if (lVar2 != -0x1c) {
    uVar4 = 0;
    do {
      uVar1 = FUN_003ba8c0(param_1,uVar4 & 0xffffffff,param_2,param_3,param_4,param_5);
      if ((int)uVar1 == 0) {
        return uVar1;
      }
      uVar4 = uVar4 + 1;
    } while (lVar2 + 0x1cU != uVar4);
  }
  if (param_6 != 0) {
    lVar2 = 0x10;
    ppuVar3 = &PTR_FUN_044a0e08;
    do {
      if ((((code *)*ppuVar3 != (code *)0x0) && ((*(uint *)((long)ppuVar3 + -0x2c) & param_2) != 0))
         && (uVar1 = (*(code *)*ppuVar3)(param_1,param_2,*(undefined4 *)(param_3 + lVar2)),
            (int)uVar1 == 0)) {
        return uVar1;
      }
      lVar2 = lVar2 + 0x28;
      ppuVar3 = ppuVar3 + 7;
    } while (lVar2 != 0x470);
  }
  return 1;
}



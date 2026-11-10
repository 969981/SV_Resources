/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014f5e54; name: FUN_014f5e54
 */


undefined8 FUN_014f5e54(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_014f5f08();
  uVar3 = FUN_014f5f40(*(undefined8 *)(*(long *)(param_1 + 0x40) + 8),*(undefined4 *)(lVar2 + 0x36c)
                      );
  if ((uVar3 & 1) != 0) {
    lVar2 = FUN_014f5f00(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18));
    if (lVar2 == 0) {
      return 0;
    }
    FUN_014f5ef8();
    uVar3 = FUN_014f5f14();
    if ((uVar3 & 1) != 0) {
      uVar4 = FUN_014f5ef8(lVar2);
      uVar3 = FUN_014f5f24(uVar4,0);
      if ((uVar3 & 1) == 0) {
        FUN_014f5f08(param_1);
        uVar4 = FUN_00f7e284();
        lVar2 = FUN_015b5634(uVar4,*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x95))
        ;
        if ((lVar2 == 0) || (bVar1 = FUN_00f7e454(), 1 < bVar1)) {
          return 1;
        }
      }
    }
  }
  return 0;
}



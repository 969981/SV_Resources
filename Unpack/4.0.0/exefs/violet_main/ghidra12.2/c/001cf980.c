/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001cf980; name: FUN_001cf980
 */


void FUN_001cf980(long param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  if (*(long *)(param_1 + 0xb0) == 0) {
    uVar5 = 0xffffffffffffffff;
  }
  else {
    auVar6 = FUN_001e0dfc();
    lVar2 = auVar6._0_8_;
    lVar3 = FUN_001e05e8(0,0,*(undefined8 *)(param_1 + 0xb0));
    *(long *)(param_1 + 0xb0) = lVar3;
    lVar4 = *(long *)(lVar3 + 0x20);
    uVar5 = 0;
    if (lVar2 <= lVar4) {
      if ((lVar2 < lVar4) || (auVar6._8_4_ < *(int *)(lVar3 + 0x28))) {
        uVar1 = FUN_001e0e28(lVar4,*(undefined8 *)(lVar3 + 0x28),lVar2,auVar6._8_8_);
        if ((int)uVar1 < 2) {
          uVar1 = 1;
        }
        uVar5 = (ulong)uVar1;
      }
      else {
        uVar5 = 0;
      }
    }
  }
  *param_2 = uVar5;
  return;
}



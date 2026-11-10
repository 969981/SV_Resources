/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f7e7c; name: FUN_021f7e7c
 */


void FUN_021f7e7c(long param_1,short param_2,undefined8 param_3)

{
  short sVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  sVar1 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  if (sVar1 == 0x379) {
    if (param_2 == 0) {
      uVar2 = 0x30e;
      uVar4 = 0x1ba;
LAB_021f7ef4:
      FUN_021f7ca8(param_1,uVar2,uVar4,param_3);
      return;
    }
    if (param_2 == 1) {
      uVar2 = FUN_00e974e0(*(undefined8 *)(param_1 + 0x70));
      uVar3 = FUN_00cf4c64(uVar2,0x47);
      if ((uVar3 & 1) != 0) {
        uVar2 = 0x1ba;
        uVar4 = 0x30e;
        goto LAB_021f7ef4;
      }
    }
  }
  return;
}



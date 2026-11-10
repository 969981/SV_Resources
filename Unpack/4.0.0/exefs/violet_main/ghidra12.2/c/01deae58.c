/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01deae58; name: FUN_01deae58
 */


void FUN_01deae58(long param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((param_2 & 0xff) < 6) {
    if ((param_3 & 0xff) < 3) {
      uVar2 = FUN_01400f2c(*(undefined8 *)(param_1 + 0x70));
      uVar1 = FUN_021f11c0(uVar2,param_2,param_3);
      FUN_021f11e4(*(undefined8 *)(param_1 + 0x70),uVar1);
      return;
    }
  }
  return;
}



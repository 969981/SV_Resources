/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f4184; name: FUN_021f4184
 */


/* WARNING: Removing unreachable block (ram,0x021f4174) */

void FUN_021f4184(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  uVar2 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
  uVar1 = FUN_0143b78c(uVar1,uVar2,2);
  FUN_00ef67a8(*(undefined8 *)(param_1 + 0x70),0);
  FUN_00ef6b04(*(undefined8 *)(param_1 + 0x70),0);
  FUN_00ef6e68(*(undefined8 *)(param_1 + 0x70),1);
  FUN_00ef2550(*(undefined8 *)(param_1 + 0x70),uVar1);
  return;
}



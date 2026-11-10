/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d8d140; name: FUN_00d8d140
 */


void FUN_00d8d140(long param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 8);
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      uVar1 = *(undefined4 *)(param_2 + 4);
      goto LAB_00d8d178;
    }
  }
  uVar1 = FUN_008f13a8(param_3);
LAB_00d8d178:
                    /* WARNING: Could not recover jumptable at 0x00d8d194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047d2840)(*(undefined8 *)(param_1 + 0xb0),uVar2,uVar1);
  return;
}



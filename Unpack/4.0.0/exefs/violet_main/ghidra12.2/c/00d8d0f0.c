/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d8d0f0; name: FUN_00d8d0f0
 */


void FUN_00d8d0f0(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  uVar1 = FUN_008f1388(param_2);
                    /* WARNING: Could not recover jumptable at 0x00d8d13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047d2790)(uVar2,uVar1,param_4,param_3);
  return;
}



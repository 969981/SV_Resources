/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008f0ab0; name: FUN_008f0ab0
 */


void FUN_008f0ab0(long param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  uVar1 = FUN_008f1388(param_2);
  uVar2 = FUN_008f13dc(param_3);
  uVar3 = FUN_008f13fc(*param_4,param_4[1]);
                    /* WARNING: Could not recover jumptable at 0x008f0b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047d27a8)(uVar4,uVar1,uVar2,param_5,uVar3,param_6,param_8,param_7);
  return;
}



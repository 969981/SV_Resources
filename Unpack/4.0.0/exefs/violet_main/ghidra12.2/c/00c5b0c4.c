/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c5b0c4; name: FUN_00c5b0c4
 */


void FUN_00c5b0c4(long param_1,long param_2)

{
  undefined *puVar1;
  
  (**(code **)PTR_DAT_047d2808)(*(undefined8 *)(param_1 + 0xb0));
  (**(code **)PTR_DAT_047d2810)(*(undefined8 *)(param_1 + 0xb0),3,*(undefined4 *)(param_2 + 8));
  (**(code **)PTR_DAT_047d2818)(*(undefined8 *)(param_1 + 0xb0),3,*(undefined4 *)(param_2 + 0xc));
  puVar1 = PTR_DAT_047d2820;
  (**(code **)PTR_DAT_047d2820)(*(undefined8 *)(param_1 + 0xb0),2,*(undefined4 *)(param_2 + 0x10));
  (**(code **)puVar1)(*(undefined8 *)(param_1 + 0xb0),1,*(undefined4 *)(param_2 + 0x14));
  if ((*(byte *)(param_2 + 0x1a) >> 3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00c5b188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)PTR_DAT_047d2828)(0,0x3f800000,*(undefined8 *)(param_1 + 0xb0),0);
    return;
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ccc290; name: FUN_00ccc290
 */


void FUN_00ccc290(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  puVar1 = PTR_DAT_047e1970;
  (**(code **)PTR_DAT_047e1970)(param_2,0x52,param_1);
  (**(code **)puVar1)(param_2,0x55,param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00ccc304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)puVar1)(param_2,0x5c,param_1 + 8);
  return;
}



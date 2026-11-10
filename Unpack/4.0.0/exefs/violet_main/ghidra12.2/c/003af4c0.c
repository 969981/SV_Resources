/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003af4c0; name: FUN_003af4c0
 */


void FUN_003af4c0(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x003af4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x140) + 0x1e8))
            (0,param_1,param_2,param_3,param_4,param_5,
             *(undefined8 *)(*(long *)(param_1 + 0x140) + 0x1f8));
  return;
}



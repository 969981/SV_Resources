/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021d1194; name: FUN_021d1194
 */


void FUN_021d1194(undefined8 *param_1,long param_2,ulong param_3,uint param_4)

{
                    /* WARNING: Could not recover jumptable at 0x021d11dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1[4])
            (*(undefined8 *)param_1[5],
             (param_3 & 0xffffffff) << 0x10 | param_2 << 0x20 | (ulong)param_4 |
             (ulong)((uint)*(byte *)*param_1 - *(int *)param_1[1]) << 0x34 |
             (ulong)((uint)*(byte *)param_1[2] - *(int *)param_1[3]) << 0x30);
  return;
}



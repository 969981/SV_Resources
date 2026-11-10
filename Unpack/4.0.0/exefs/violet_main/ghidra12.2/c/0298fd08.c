/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298fd08; name: FUN_0298fd08
 */


void FUN_0298fd08(long *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0298fd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))
            (param_1,*(undefined4 *)(*(long *)(*param_2 + 0x40) + 0x20),
             *(undefined1 *)(*(long *)(*param_2 + 0x40) + 0x24));
  return;
}



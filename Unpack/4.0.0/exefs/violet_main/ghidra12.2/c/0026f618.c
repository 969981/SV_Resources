/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0026f618; name: FUN_0026f618
 */


void FUN_0026f618(long param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_0026f618(param_1,*param_2);
  FUN_0026f618(param_1,param_2[1]);
  FUN_0026f618(param_2 + 8,param_2[9]);
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    (**(code **)(*(long *)param_2[7] + 0x18))
              ((long *)param_2[7],param_2[6],param_2[4] & 0xfffffffffffffffe,1);
  }
                    /* WARNING: Could not recover jumptable at 0x0026f690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),param_2,0x60,8);
  return;
}



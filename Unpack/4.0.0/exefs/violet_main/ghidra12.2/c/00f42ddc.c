/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f42ddc; name: FUN_00f42ddc
 */


void FUN_00f42ddc(undefined8 param_1,long param_2,undefined1 *param_3,long param_4)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (param_3 == (undefined1 *)0x0) {
    local_28[0] = 0x10407;
  }
  else {
    if (*(char *)(param_2 + 0xc0) != '\0') {
      if (param_4 == 0) {
        *param_3 = 0xfd;
        local_28[0] = 0;
        goto LAB_00f42e34;
      }
      if (*(long **)(param_2 + 0x60) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f42e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_2 + 0x60) + 0x90))(param_1);
        return;
      }
    }
    local_28[0] = 0x10408;
  }
LAB_00f42e34:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}



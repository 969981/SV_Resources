/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f55a0; name: FUN_017f55a0
 */


void FUN_017f55a0(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long *local_30;
  undefined4 local_28;
  
  *param_1 = 1;
  local_48 = *param_2;
  uStack_40 = param_2[1];
  local_38 = param_2[2];
  local_30 = (long *)param_2[3];
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x18))();
  }
  local_28 = *(undefined4 *)(param_2 + 4);
  FUN_017f58a4(param_1 + 8,&local_48);
  if (local_30 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x017f5624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*local_30 + 0x20))();
  return;
}



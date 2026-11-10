/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004f89ac; name: FUN_004f89ac
 */


void FUN_004f89ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  long *plVar2;
  long local_50;
  undefined *puStack_48;
  undefined **local_40;
  undefined1 *puStack_38;
  undefined ***local_28;
  
  puVar1 = *(ulong **)(param_4 + 0x30);
  if (puVar1 != (ulong *)0x0) {
    puStack_48 = PTR_LAB_047cd728;
    local_50 = param_4;
    if (*puVar1 != 0xffffffffffffffff) {
      local_40 = &puStack_48;
      local_28 = &local_40;
      puStack_38 = (undefined1 *)&local_50;
      std::__call_once(puVar1,&local_28,(_func_void_void_ptr *)&LAB_004f9a40);
    }
  }
  if (*(int *)(param_4 + 0x38) == 0xb) {
    FUN_004a64c0(param_4);
  }
  FUN_004f8ac0(param_1,param_3,param_4);
                    /* try { // try from 004f8a34 to 004f8a53 has its CatchHandler @ 004f8a68 */
  plVar2 = (long *)FUN_004f0ba4(param_2,param_3,param_4);
  (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
  return;
}



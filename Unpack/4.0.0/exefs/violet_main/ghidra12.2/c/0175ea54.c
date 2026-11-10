/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0175ea54; name: FUN_0175ea54
 */


void FUN_0175ea54(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 local_2c [4];
  long local_28;
  undefined1 auStack_8 [4];
  undefined1 local_4 [4];
  
  plVar1 = (long *)(param_1 + 0xb0b0);
  if (*plVar1 == 0) {
    local_4[0] = 1;
    local_2c[0] = 0;
    FUN_0175ead0(&local_28,auStack_8,*(undefined8 *)(param_1 + 8),param_2,local_4,local_2c);
    plVar2 = (long *)*plVar1;
    *plVar1 = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x60))();
    }
    *plVar1 = local_28;
  }
  return;
}



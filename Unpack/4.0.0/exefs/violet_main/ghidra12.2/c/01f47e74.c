/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f47e74; name: FUN_01f47e74
 */


void FUN_01f47e74(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  long *local_28;
  
  lVar2 = *(long *)(*param_1 + 0x40);
  if (((lVar2 != 0) && (param_1[1] != 0)) && (lVar1 = *(long *)(param_1[1] + 0x10), lVar1 != 0)) {
    FUN_01f47ee0(auStack_40,lVar1 + -0x28);
    FUN_01986988(lVar2,local_38);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}



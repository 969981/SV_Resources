/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bb8f60; name: FUN_01bb8f60
 */


undefined8 FUN_01bb8f60(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  char local_30 [8];
  long *local_28;
  
  uVar2 = FUN_01bb9020(param_1,1);
  if ((DAT_0480cd88 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0480cd88);
    if (iVar1 != 0) {
      DAT_0480ef38 = 1;
      __cxa_guard_release(&DAT_0480cd88);
    }
  }
  FUN_01bb90ac(local_30,uVar2);
  FUN_01bb9140(param_1,local_30);
  if ((local_30[0] == '\x01') && (local_28 != (long *)0x0)) {
    (**(code **)(*local_28 + 0x18))();
  }
  return 1;
}



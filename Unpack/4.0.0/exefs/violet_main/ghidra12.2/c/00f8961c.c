/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f8961c; name: FUN_00f8961c
 */


void FUN_00f8961c(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *local_28;
  
  if (*(long *)(param_1 + 0xe8) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 0xe8) + 0x48);
  }
  plVar2 = (long *)(*(code *)**(undefined8 **)(lVar4 + 0x28))((undefined8 *)(lVar4 + 0x28));
  if (((*PTR_DAT_047d6520 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar1 != 0))
  {
    uVar3 = FUN_0151c130();
    *(undefined8 *)PTR_DAT_047d6528 = uVar3;
    __cxa_guard_release(PTR_DAT_047d6520);
  }
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return;
    }
    if (plVar2 == (long *)PTR_DAT_047d6528) break;
    plVar2 = (long *)*plVar2;
  }
  FUN_00d2bee4(&local_28,lVar4);
  FUN_00f89714(param_1,local_28);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x18))();
  }
  FUN_00dbcb28(lVar4,param_1 + 0x120);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01be5740; name: FUN_01be5740
 */


undefined8 FUN_01be5740(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((DAT_0480e8f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0480e8f0), iVar1 != 0)) {
    DAT_0480ef18 = 1;
    __cxa_guard_release(&DAT_0480e8f0);
  }
  uVar2 = FUN_01be2a80(param_1,1);
  uVar3 = FUN_00c646d0(param_1,2,0);
  FUN_01be57c8(uVar2,uVar3);
  return 0;
}



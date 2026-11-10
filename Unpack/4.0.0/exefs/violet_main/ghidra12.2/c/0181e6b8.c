/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0181e6b8; name: FUN_0181e6b8
 */


void FUN_0181e6b8(int param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *local_a0 [4];
  long *local_80;
  long *local_70 [4];
  long *local_50;
  undefined8 local_28;
  
  FUN_02169b78(local_70,DAT_04836760,param_1);
  local_28 = param_2;
  FUN_00e52f24(local_a0,&local_28);
  plVar1 = (long *)PTR_DAT_047d8b70;
  if (local_a0[0] != (long *)0x0) {
    plVar1 = local_a0[0] + 6;
  }
  lVar2 = *plVar1;
  plVar1 = (long *)PTR_DAT_047d8b70;
  if (local_70[0] != (long *)0x0) {
    plVar1 = local_70[0] + 6;
  }
  lVar3 = *plVar1;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))(local_80);
  }
  if (local_a0[0] != (long *)0x0) {
    (**(code **)(*local_a0[0] + 0x20))();
  }
  if (lVar2 != lVar3) {
    if ((ulong)(long)param_1 <
        (ulong)(*(long *)(DAT_04836760 + 0x2a8) - *(long *)(DAT_04836760 + 0x2a0) >> 3)) {
      FUN_014acdd4(*(undefined8 *)(*(long *)(DAT_04836760 + 0x2a0) + (long)param_1 * 8));
    }
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70[0] != (long *)0x0) {
    (**(code **)(*local_70[0] + 0x20))(local_70[0]);
  }
  return;
}



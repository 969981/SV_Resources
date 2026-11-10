/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007cd88c; name: FUN_007cd88c
 */


void FUN_007cd88c(undefined8 param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  int local_40 [4];
  int local_30 [4];
  undefined4 local_18 [2];
  
  piVar2 = local_40;
  plVar1 = *(long **)(param_2 + 0x28);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
    FUN_007e510c(*(undefined8 *)(param_2 + 0x28));
  }
  FUN_007ecc70(*(long *)PTR_DAT_047d0860 + 0x10);
  FUN_0078f57c(*(undefined8 *)PTR_DAT_047d0900);
  *(undefined4 *)(param_2 + 0x118) = 0;
  (**(code **)(**(long **)(param_2 + 0x28) + 0x10))(*(long **)(param_2 + 0x28),1);
  FUN_007e4c44(local_30,*(undefined8 *)(param_2 + 0x28));
  if (local_30[0] == 0) {
    FUN_0078cd58(*(undefined8 *)(param_2 + 0x28),0);
    local_40[0] = 0;
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
  }
  else {
    piVar2 = local_30;
  }
  FUN_00cbd7c0(param_1,piVar2);
  return;
}



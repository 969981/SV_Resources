/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc1b80; name: FUN_01dc1b80
 */


uint FUN_01dc1b80(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long *local_60 [4];
  long *local_40;
  
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (*param_2 != 0) {
    puVar1 = (undefined8 *)(*param_2 + 0x38);
  }
  FUN_0181e6b8(param_1,*puVar1);
  lVar2 = DAT_04836760;
  FUN_011a6b30(local_60,param_2);
  lVar4 = *(long *)(lVar2 + 0x2a0);
  if ((ulong)(long)(int)param_1 < (ulong)(*(long *)(lVar2 + 0x2a8) - lVar4 >> 3)) {
    uVar3 = FUN_010614bc(*(undefined8 *)(lVar4 + (long)(int)param_1 * 8),local_60,0);
  }
  else {
    uVar3 = 0;
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60[0] != (long *)0x0) {
    (**(code **)(*local_60[0] + 0x20))();
  }
  return uVar3 & 1;
}



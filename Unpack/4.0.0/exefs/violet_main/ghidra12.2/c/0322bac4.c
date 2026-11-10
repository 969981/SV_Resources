/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0322bac4; name: FUN_0322bac4
 */


undefined8 FUN_0322bac4(undefined8 *param_1,double *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  char *local_b8;
  ulong local_b0;
  char acStack_a8 [128];
  undefined4 local_28;
  
  iVar2 = FUN_0322b9b0();
  if (iVar2 == -1) {
    uVar3 = 0x80040200;
  }
  else if (iVar2 == 5) {
    local_b8 = acStack_a8;
    local_b0 = 0x8000008000000000;
    local_28 = 1;
    FUN_031c6afc(&local_b8,*param_1,*(int *)(param_1 + 1) - (int)*param_1);
    dVar4 = strtod(local_b8,(char **)0x0);
    uVar1 = local_b0;
    *param_2 = dVar4;
    local_b0 = local_b0 & 0xffffffff00000000;
    if ((-1 < (long)uVar1) && (local_b8 != (char *)0x0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    *param_2 = *(double *)(&DAT_03d79258 + (long)iVar2 * 8);
  }
  return uVar3;
}



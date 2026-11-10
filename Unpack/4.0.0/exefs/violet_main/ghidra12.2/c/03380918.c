/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03380918; name: FUN_03380918
 */


void FUN_03380918(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_047aea68;
  puVar1 = PTR_DAT_047d1a08;
  lVar3 = param_1[0x1d];
  if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar3,0);
    param_1[0x1d] = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x1e) = 0;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xe4)) && (param_1[0x1b] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x1b],(ulong)*(uint *)((long)param_1 + 0xe4) << 4);
  }
  param_1[0x1b] = 0;
  puVar2 = PTR_DAT_047e5b60;
  *(undefined4 *)((long)param_1 + 0xe4) = 0x80000000;
  param_1[0x12] = puVar2 + 0x10;
  FUN_031d98b8();
  FUN_033754a4(param_1);
                    /* WARNING: Could not recover jumptable at 0x033809e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar1 + 8))(0,param_1,0);
  return;
}



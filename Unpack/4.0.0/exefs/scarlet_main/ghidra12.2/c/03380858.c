/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03380858; name: FUN_03380858
 */


void FUN_03380858(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = param_1[0x1d];
  *param_1 = &PTR_FUN_047aea68;
  if ((lVar2 != 0) && (*(int *)(lVar2 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar2,0);
    param_1[0x1d] = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x1e) = 0;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xe4)) && (param_1[0x1b] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x1b],(ulong)*(uint *)((long)param_1 + 0xe4) << 4);
  }
  param_1[0x1b] = 0;
  puVar1 = PTR_DAT_047e5b60;
  *(undefined4 *)((long)param_1 + 0xe4) = 0x80000000;
  param_1[0x12] = puVar1 + 0x10;
  FUN_031d98b8();
  FUN_033754a4(param_1);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02944b90; name: FUN_02944b90
 */


void FUN_02944b90(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  uint local_30 [4];
  
  uVar1 = FUN_02944360(param_1,4);
  uVar2 = FUN_02944800(param_1,uVar1);
  if (((uVar2 & 1) != 0) &&
     ((uVar2 = FUN_02944c10(param_1,uVar1,2), (uVar2 & 1) != 0 ||
      (uVar2 = FUN_02944c10(param_1,uVar1,0xe), (uVar2 & 1) != 0)))) {
    local_30[2] = 0;
    local_30[3] = 0;
    local_30[1] = 0x10;
    local_30[0] = uVar1;
    FUN_0193f070(param_1,local_30);
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0080a8b0; name: FUN_0080a8b0
 */


void FUN_0080a8b0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  undefined8 uVar7;
  byte *pbVar8;
  
  uVar3 = FUN_00561734(param_2);
  puVar2 = PTR_DAT_047d15d8;
  uVar4 = thunk_FUN_00799c50(*(undefined8 *)PTR_DAT_047d15d8);
  lVar5 = FUN_0080c004(uVar4,uVar3);
  if (lVar5 != 0) {
    pbVar6 = (byte *)FUN_0056173c(param_2);
    pbVar8 = *(byte **)(pbVar6 + 0x10);
    if ((*pbVar6 & 1) == 0) {
      pbVar8 = pbVar6 + 1;
    }
    pbVar6 = (byte *)FUN_0056173c(param_2);
    uVar1 = (uint)(*pbVar6 >> 1);
    if ((*pbVar6 & 1) != 0) {
      uVar1 = *(uint *)(pbVar6 + 8);
    }
    uVar4 = *(undefined8 *)(lVar5 + 8);
    uVar1 = uVar1 - 1;
    if (pbVar8[uVar1] == 1) {
      uVar7 = thunk_FUN_00799c50(*(undefined8 *)puVar2);
      FUN_007fef2c(uVar7,pbVar8,uVar1,uVar4);
      return;
    }
    if (pbVar8[uVar1] == 0) {
      uVar7 = thunk_FUN_00799c50(*(undefined8 *)puVar2);
      FUN_007fede8(uVar7,pbVar8,uVar1,uVar4);
      return;
    }
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004d31a0; name: FUN_004d31a0
 */


void FUN_004d31a0(long *param_1,long *param_2)

{
  undefined *puVar1;
  long extraout_x1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_1 == param_2) {
    return;
  }
  FUN_00523908(param_1 + 2);
  uVar3 = (ulong)*(uint *)(param_1 + 6);
  if (0 < (int)*(uint *)(param_1 + 6)) {
    puVar2 = (undefined8 *)param_1[7];
    do {
      puVar2 = puVar2 + 1;
      FUN_004e22f4(*puVar2);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if ((param_1[1] & 1U) != 0) {
    uVar3 = param_1[1] & 0xfffffffffffffffe;
    if (*(long *)(uVar3 + 8) != *(long *)(uVar3 + 0x10)) {
      FUN_00514600();
    }
  }
  if (*(int *)PTR_DAT_047cd848 != 0) {
    FUN_0052b230(PTR_DAT_047cd848);
  }
  puVar1 = PTR_DAT_047cd738;
  FUN_004f9370(PTR_DAT_047cd738,0);
  lVar4 = *(long *)(*(long *)(puVar1 + 0x58) + 0x58);
  (**(code **)(*param_2 + 0x98))(param_2);
  if (lVar4 == extraout_x1) {
    FUN_004cf010(param_1,param_2);
    return;
  }
  FUN_00505148(param_2,param_1);
  return;
}



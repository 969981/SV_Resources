/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02980d90; name: FUN_02980d90
 */


void FUN_02980d90(undefined8 param_1)

{
  ulong uVar1;
  long *plVar2;
  long *local_e0 [18];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined2 local_38;
  
  memset(local_e0,0,0x8f);
  local_40 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_38 = 0;
  FUN_02980ea4(param_1,local_e0);
  if (local_40._6_1_ != '\0') {
    local_38 = CONCAT11((char)((ushort)local_38 >> 8),1);
    plVar2 = local_e0[0];
    while (plVar2 != (long *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0x208))(plVar2);
      if ((uVar1 & 1) != 0) {
        FUN_02980ed4(param_1,plVar2);
      }
      uVar1 = (ulong)(byte)local_38;
      if (local_40._6_1_ <= (byte)local_38) {
        return;
      }
      local_38 = CONCAT11(local_38._1_1_,(byte)local_38 + 1);
      plVar2 = local_e0[uVar1];
    }
  }
  return;
}



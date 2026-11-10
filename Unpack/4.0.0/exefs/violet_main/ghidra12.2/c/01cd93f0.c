/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cd93f0; name: FUN_01cd93f0
 */


void FUN_01cd93f0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = *(long *)(param_2 + 0x1d8);
  if (lVar1 == 0) {
    local_58 = *(undefined8 *)(param_2 + 8);
    FUN_01590140(&local_50,local_58,&local_58);
    lVar1 = local_50;
    local_50 = 0;
    lVar2 = *(long *)(param_2 + 0x1d8);
    *(long *)(param_2 + 0x1d8) = lVar1;
    if (lVar2 == 0) {
      *(undefined8 *)(param_2 + 0x1e8) = local_40;
      *(undefined8 *)(param_2 + 0x1f0) = local_38;
      *(undefined8 *)(param_2 + 0x1e0) = local_48;
      local_50 = 0;
    }
    else {
      FUN_01cd3534(param_2 + 0x1e0);
      lVar1 = local_50;
      *(undefined8 *)(param_2 + 0x1e0) = local_48;
      *(undefined8 *)(param_2 + 0x1e8) = local_40;
      *(undefined8 *)(param_2 + 0x1f0) = local_38;
      local_50 = 0;
      if (lVar1 != 0) {
        FUN_01cd3534(&local_48);
      }
    }
    lVar1 = *(long *)(param_2 + 0x1d8);
  }
  local_48 = FUN_01cd951c(param_1,lVar1,param_3);
  local_50 = 2;
  FUN_01cd3f10(param_2 + 0xe8,&local_50);
  return;
}



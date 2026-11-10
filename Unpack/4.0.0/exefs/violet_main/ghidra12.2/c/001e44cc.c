/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e44cc; name: FUN_001e44cc
 */


undefined8 FUN_001e44cc(undefined8 param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  ulong local_28;
  undefined8 local_8;
  
  local_8 = 0;
  if ((param_3 < 0) ||
     (iVar1 = FUN_001e4544(param_1,param_2,param_3,&local_8,&local_28,0), iVar1 != 0)) {
    local_8 = 0;
  }
  else if (param_4 != (undefined4 *)0x0) {
    if (local_28 >> 0x1f == 0) {
      uVar2 = FUN_001ec184();
      *param_4 = uVar2;
    }
    else {
      FUN_001ec308(local_8);
      local_8 = 0;
    }
  }
  return local_8;
}



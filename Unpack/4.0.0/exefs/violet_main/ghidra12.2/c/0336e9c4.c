/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0336e9c4; name: FUN_0336e9c4
 */


undefined8 FUN_0336e9c4(long param_1,ulong *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
  undefined1 *local_b8;
  ulong local_b0;
  undefined1 local_a8 [128];
  undefined4 local_28;
  
  local_a8[0] = 0;
  local_b8 = local_a8;
  local_b0 = 0x8000008000000001;
  local_28 = 1;
  FUN_031e12d8(param_2,&local_b8,0,0);
  puStack_c0 = local_b8 + (long)(int)local_b0 + -1;
  local_c8 = local_b8;
  do {
    uVar3 = *param_2;
    if (((uint)uVar3 >> 4 & 1) != 0) {
      uVar2 = (undefined4)param_2[(ulong)(byte)POPCOUNT((byte)uVar3 & 0xf) + 2];
      goto LAB_0336ea6c;
    }
  } while (((uVar3 & 9) == 0) && (param_2 = (ulong *)param_2[1], param_2 != (ulong *)0x0));
  uVar2 = 0;
LAB_0336ea6c:
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 8))(*(long **)(param_1 + 8),&local_c8,uVar2);
  uVar3 = local_b0;
  local_b0 = local_b0 & 0xffffffff00000000;
  if ((-1 < (long)uVar3) && (local_b8 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  return uVar1;
}



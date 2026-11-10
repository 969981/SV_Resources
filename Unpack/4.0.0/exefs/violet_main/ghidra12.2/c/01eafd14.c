/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eafd14; name: FUN_01eafd14
 */


void FUN_01eafd14(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if (0x153 < *(ulong *)(param_1 + 0x40)) {
    plVar3 = *(long **)(param_1 + 0x50);
    uVar2 = **(undefined8 **)(param_1 + 8);
    uVar1 = FUN_00c4e564(plVar3);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,uVar2,0xff0,8);
    }
    else {
      FUN_00c48fe8(plVar3,uVar2,0xff0,8);
    }
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -0xaa;
  }
  return;
}



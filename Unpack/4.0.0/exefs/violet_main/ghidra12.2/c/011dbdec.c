/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011dbdec; name: FUN_011dbdec
 */


void FUN_011dbdec(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if (*(ulong *)(param_1 + 0x40) < 0xcc) {
    return;
  }
  plVar4 = *(long **)(param_1 + 0x50);
  uVar3 = **(undefined8 **)(param_1 + 8);
  uVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4);
  if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
    (**(code **)(*plVar4 + 0x18))(plVar4,uVar3,0xff0,4);
  }
  else {
    FUN_00c48fe8(plVar4,uVar3,0xff0,4);
  }
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -0x66;
  return;
}



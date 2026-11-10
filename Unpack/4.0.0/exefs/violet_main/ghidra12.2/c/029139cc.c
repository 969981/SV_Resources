/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029139cc; name: FUN_029139cc
 */


undefined8 FUN_029139cc(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x318))(*(long **)(param_1 + 0x30),uVar2);
  if (((cVar1 == '\x01') &&
      (iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), 0x50 < iVar3)
      ) && (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                              (*(long **)(param_1 + 0x30),0x32), (uVar4 & 1) != 0)) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



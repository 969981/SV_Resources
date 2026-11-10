/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02912968; name: FUN_02912968
 */


uint FUN_02912968(long param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  
  iVar1 = FUN_02915dc0();
  plVar3 = *(long **)(param_1 + 0x30);
  if (iVar1 == 1) {
    uVar2 = (**(code **)(*plVar3 + 0x4c8))(plVar3,0x1e);
    uVar2 = uVar2 & 1;
  }
  else {
    uVar4 = (**(code **)(*plVar3 + 0x4c8))(plVar3,0x5a);
    uVar2 = 0xfffffffe;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



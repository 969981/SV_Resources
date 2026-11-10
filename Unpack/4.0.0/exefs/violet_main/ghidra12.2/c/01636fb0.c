/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01636fb0; name: FUN_01636fb0
 */


bool FUN_01636fb0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
  puVar4 = (uint *)FUN_011e2dd4(*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x290) + 8) + 0x50),
                                uVar3);
  if (puVar4 == (uint *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar4;
    if (4 < (int)uVar5) {
      uVar5 = 0;
    }
  }
  return uVar5 == *(byte *)(lVar1 + 0x95);
}



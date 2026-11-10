/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02995f18; name: FUN_02995f18
 */


uint FUN_02995f18(long param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = FUN_0159fe8c(*(undefined8 *)(param_1 + 0x40));
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x50) + 0x80))(*(long **)(param_1 + 0x50),0);
    uVar2 = uVar2 & 1;
  }
  cVar1 = FUN_0159fe8c(*(undefined8 *)(param_1 + 0x40));
  if (cVar1 != '\x01') {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x50) + 0x80))(*(long **)(param_1 + 0x50),1);
    uVar2 = uVar2 + (uVar3 & 1);
  }
  cVar1 = FUN_0159fe8c(*(undefined8 *)(param_1 + 0x40));
  if (cVar1 != '\x02') {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x50) + 0x80))(*(long **)(param_1 + 0x50),2);
    uVar2 = uVar2 + (uVar3 & 1);
  }
  cVar1 = FUN_0159fe8c(*(undefined8 *)(param_1 + 0x40));
  if (cVar1 != '\x03') {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x50) + 0x80))(*(long **)(param_1 + 0x50),3);
    uVar2 = uVar2 + (uVar3 & 1);
  }
  cVar1 = FUN_0159fe8c(*(undefined8 *)(param_1 + 0x40));
  if (cVar1 != '\x04') {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x50) + 0x80))(*(long **)(param_1 + 0x50),4);
    uVar2 = uVar2 + (uVar3 & 1);
  }
  return uVar2;
}



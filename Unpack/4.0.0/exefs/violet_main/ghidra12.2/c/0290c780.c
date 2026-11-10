/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290c780; name: FUN_0290c780
 */


undefined8 FUN_0290c780(long param_1)

{
  short sVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  cVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if (cVar2 == '\0') {
    uVar4 = 0xfffffff9;
  }
  else {
    cVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                       *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
    if ((cVar2 == '\x03') &&
       (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a),
       (uVar3 & 1) != 0)) {
      uVar4 = 0xfffffffc;
    }
    else {
      sVar1 = *(short *)(param_1 + 0xb6);
      uVar4 = 0xfffffff9;
      if ((sVar1 != 10) && ((sVar1 != 0x1f && (sVar1 != 0x4e)))) {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}



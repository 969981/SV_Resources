/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6496c; name: FUN_01f6496c
 */


undefined2 FUN_01f6496c(long param_1,void *param_2,uint param_3)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  undefined2 uVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x15c);
  bVar2 = false;
  bVar3 = true;
  if (uVar1 < 0x81) {
    bVar3 = param_3 <= uVar1;
    bVar2 = uVar1 == param_3;
  }
  if (!bVar3 || bVar2) {
    memcpy(param_2,(void *)(param_1 + 0xdc),(ulong)uVar1);
    uVar4 = *(undefined2 *)(param_1 + 0x15c);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



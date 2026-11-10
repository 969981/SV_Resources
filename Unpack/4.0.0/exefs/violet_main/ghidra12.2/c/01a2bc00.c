/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a2bc00; name: FUN_01a2bc00
 */


undefined4 FUN_01a2bc00(ulong param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130 [64];
  
  memset(local_130,0xff,0x100);
  uVar3 = 0;
  iVar4 = 0;
  do {
    if ((param_1 >> (uVar3 & 0x3f) & 1) != 0) {
      local_130[iVar4] = (int)uVar3;
      iVar4 = iVar4 + 1;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x40);
  local_138 = 0;
  local_148 = 0xf4b17a579f18960;
  local_140 = 0x82a2b175229d6a5b;
  FUN_00d1af18(&local_148);
  uVar1 = (int)local_140 + (int)local_148 & 0x7fffffff;
  iVar2 = 0;
  if (iVar4 != 0) {
    iVar2 = (int)uVar1 / iVar4;
  }
  return local_130[uVar1 - iVar2 * iVar4];
}



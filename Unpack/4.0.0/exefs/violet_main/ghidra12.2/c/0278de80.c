/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278de80; name: FUN_0278de80
 */


void FUN_0278de80(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = 0;
  uVar3 = 0x8000;
  uVar4 = 1;
  uVar5 = 1;
  do {
    uVar2 = (uint)uVar3;
    uVar5 = uVar5 | uVar2;
    uVar3 = uVar3 >> 1;
    if (uVar4 != (uVar1 & uVar5 & 0xffff) && uVar2 != (uVar1 & uVar5 & 0xffff)) {
      uVar5 = 0;
    }
    uVar1 = uVar5 ^ uVar1;
    uVar5 = uVar4 << 1;
    uVar4 = uVar5 & 0xfffe;
  } while (uVar4 < (uint)uVar3);
  FUN_027b6ee8(uVar1,param_1,param_2);
  return;
}



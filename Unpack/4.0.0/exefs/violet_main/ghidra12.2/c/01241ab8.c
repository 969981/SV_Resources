/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01241ab8; name: FUN_01241ab8
 */


void FUN_01241ab8(long param_1,undefined8 *param_2,long param_3)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  
  bVar1 = FUN_00f7e274(param_2);
  if (bVar1 != 0) {
    uVar3 = (ulong)bVar1;
    puVar4 = (undefined1 *)(param_3 + 9);
    do {
      uVar2 = (**(code **)(*(long *)*param_2 + 0x98))();
      FUN_0129aff0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xa0,uVar2,
                   *(undefined4 *)(puVar4 + -9),puVar4[-5],puVar4[-4],puVar4[-3],puVar4[-1],*puVar4,
                   puVar4[-2]);
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 0x10;
      param_2 = param_2 + 1;
    } while (uVar3 != 0);
  }
  return;
}



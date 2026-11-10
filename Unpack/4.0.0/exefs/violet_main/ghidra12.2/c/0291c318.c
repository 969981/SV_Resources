/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0291c318; name: FUN_0291c318
 */


void FUN_0291c318(long param_1,uint param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ushort *puVar3;
  
  if (-1 < (int)param_2) {
    *(uint *)(param_1 + 0x10) = param_2;
    puVar3 = (ushort *)(param_1 + (ulong)param_2 * 0x12 + 0x30);
    if (1 < *puVar3) {
      uVar2 = FUN_012440e8(*(undefined8 *)(param_1 + 8));
      uVar1 = FUN_012440f0(uVar2,*puVar3);
      *(undefined4 *)(param_1 + 0x14) = uVar1;
    }
  }
  return;
}



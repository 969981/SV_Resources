/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b8fb0; name: FUN_028b8fb0
 */


bool FUN_028b8fb0(undefined8 *param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong *puVar3;
  
  if (*(int *)((long)param_1 + 0xc) == 0x1a) {
    bVar1 = *(byte *)(param_1 + 1);
    puVar3 = (ulong *)*param_1;
    if (bVar1 < 4) {
      if (bVar1 < 2) {
        uVar2 = (ulong)(byte)*puVar3;
      }
      else {
        uVar2 = (ulong)(ushort)*puVar3;
      }
    }
    else if (bVar1 < 8) {
      uVar2 = (ulong)(uint)*puVar3;
    }
    else {
      uVar2 = *puVar3;
    }
  }
  else {
    uVar2 = FUN_028b9134();
  }
  return uVar2 != 0;
}



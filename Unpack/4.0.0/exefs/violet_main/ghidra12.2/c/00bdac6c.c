/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bdac6c; name: FUN_00bdac6c
 */


void FUN_00bdac6c(long param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if ((*(uint *)(param_1 + 0x10) & 0x7e) != 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (((*(uint *)(param_1 + 0x10) >> 1 & 1) != 0) &&
       (pbVar1 = *(byte **)(param_1 + 0x30), pbVar1 != *(byte **)PTR_DAT_047dabb0)) {
      if ((*pbVar1 & 1) == 0) {
        pbVar1[0] = 0;
        pbVar1[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar1 + 0x10) = 0;
        pbVar1[8] = 0;
        pbVar1[9] = 0;
        pbVar1[10] = 0;
        pbVar1[0xb] = 0;
        pbVar1[0xc] = 0;
        pbVar1[0xd] = 0;
        pbVar1[0xe] = 0;
        pbVar1[0xf] = 0;
      }
    }
    if (((*(byte *)(param_1 + 0x10) >> 5 & 1) != 0) &&
       (pbVar1 = *(byte **)(param_1 + 0x50), pbVar1 != *(byte **)PTR_DAT_047dabb0)) {
      if ((*pbVar1 & 1) == 0) {
        pbVar1[0] = 0;
        pbVar1[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar1 + 0x10) = 0;
        pbVar1[8] = 0;
        pbVar1[9] = 0;
        pbVar1[10] = 0;
        pbVar1[0xb] = 0;
        pbVar1[0xc] = 0;
        pbVar1[0xd] = 0;
        pbVar1[0xe] = 0;
        pbVar1[0xf] = 0;
      }
    }
    if (((*(byte *)(param_1 + 0x10) >> 6 & 1) != 0) &&
       (pbVar1 = *(byte **)(param_1 + 0x58), pbVar1 != *(byte **)PTR_DAT_047dabb0)) {
      if ((*pbVar1 & 1) == 0) {
        pbVar1[0] = 0;
        pbVar1[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar1 + 0x10) = 0;
        pbVar1[8] = 0;
        pbVar1[9] = 0;
        pbVar1[10] = 0;
        pbVar1[0xb] = 0;
        pbVar1[0xc] = 0;
        pbVar1[0xd] = 0;
        pbVar1[0xe] = 0;
        pbVar1[0xf] = 0;
      }
    }
  }
  uVar3 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    puVar2 = *(undefined8 **)(param_1 + 0x28);
    do {
      puVar2 = puVar2 + 1;
      (**(code **)(*(long *)*puVar2 + 0x38))();
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    if (*(long *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) != 0) {
      FUN_00bfee44();
      return;
    }
  }
  return;
}



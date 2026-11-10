/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004fe180; name: FUN_004fe180
 */


void FUN_004fe180(long *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  long *local_58;
  long lStack_50;
  ulong local_48;
  long *local_40;
  long lStack_38;
  ulong local_30;
  
  puVar1 = PTR_LAB_047cba48;
  lStack_50 = param_1[2];
  local_48 = *(ulong *)(lStack_50 + 0x18);
  if (local_48 < *(ulong *)(lStack_50 + 8)) {
    do {
      local_58 = *(long **)(*(long *)(lStack_50 + 0x20) + local_48 * 8);
      if (local_58 != (long *)0x0) {
        if (local_58 == *(long **)(*(long *)(lStack_50 + 0x20) + (local_48 ^ 1) * 8)) {
          local_58 = *(long **)(*local_58 + 0x20);
        }
        while (local_58 != (long *)0x0) {
          pbVar2 = (byte *)local_58[1];
          local_40 = local_58;
          lStack_38 = lStack_50;
          local_30 = local_48;
          FUN_005008d4(&local_58);
          FUN_0050171c(param_1[2],&local_40);
          if ((pbVar2 != (byte *)0x0) && (*param_1 == 0)) {
            if ((*(int *)(pbVar2 + 0x18) == 9) && ((*pbVar2 & 1) != 0)) {
              FUN_0049e790(puVar1,*(undefined8 *)(pbVar2 + 0x10));
            }
            FUN_0049e790(puVar1,pbVar2);
          }
        }
        return;
      }
      local_48 = local_48 + 1;
    } while (*(ulong *)(lStack_50 + 8) != local_48);
  }
  return;
}



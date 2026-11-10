/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005e0830; name: FUN_005e0830
 */


void FUN_005e0830(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  undefined8 local_48;
  byte *local_40;
  long *local_38;
  long lStack_30;
  ulong local_28;
  
  param_1[1] = 0;
  uVar1 = FUN_01cf7e20();
  param_1[2] = uVar1;
  param_1[3] = 0;
  *param_1 = param_1 + 1;
  lStack_30 = *(long *)(param_2 + 0x20);
  local_28 = *(ulong *)(lStack_30 + 0x18);
  if (local_28 < *(ulong *)(lStack_30 + 8)) {
    do {
      local_38 = *(long **)(*(long *)(lStack_30 + 0x20) + local_28 * 8);
      if (local_38 != (long *)0x0) {
        if (local_38 == *(long **)(*(long *)(lStack_30 + 0x20) + (local_28 ^ 1) * 8)) {
          local_38 = *(long **)(*local_38 + 0x20);
        }
        while (local_38 != (long *)0x0) {
          pbVar2 = (byte *)local_38[1];
          if ((*pbVar2 & 1) == 0) {
            local_40 = pbVar2 + 1;
          }
          else {
            local_40 = *(byte **)(pbVar2 + 0x10);
          }
          local_48 = FUN_0025da40(pbVar2 + 0x18);
                    /* try { // try from 005e08f4 to 005e0903 has its CatchHandler @ 005e0940 */
          FUN_005e0ff8(param_1,&local_40,&local_48);
                    /* try { // try from 005e0904 to 005e090b has its CatchHandler @ 005e093c */
          FUN_005e0c70(&local_38);
        }
        return;
      }
      local_28 = local_28 + 1;
    } while (*(ulong *)(lStack_30 + 8) != local_28);
  }
  return;
}



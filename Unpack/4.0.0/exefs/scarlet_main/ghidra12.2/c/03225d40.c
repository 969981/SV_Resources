/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03225d40; name: FUN_03225d40
 */


uint FUN_03225d40(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  char *pcVar2;
  byte *pbVar3;
  char *local_30;
  ulong uStack_28;
  
  local_30 = (char *)0x0;
  (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
            ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_30);
  uVar1 = 0;
  if (local_30 != (char *)0x0) {
    pbVar3 = (byte *)param_1[1];
    do {
      if ((*pbVar3 & 1) != 0) {
        if ((pbVar3 != (byte *)0x0) && (((uint)*(undefined8 *)(pbVar3 + 0x10) >> 9 & 1) != 0)) {
          pcVar2 = (char *)strtoll(local_30,(char **)0x0,0);
          local_30 = (char *)-(long)pcVar2;
          if (-1 < (long)pcVar2) {
            local_30 = pcVar2;
          }
          uStack_28 = (ulong)pcVar2 >> 0x3f;
          goto LAB_03225dc8;
        }
        break;
      }
      pbVar3 = *(byte **)(pbVar3 + 8);
    } while (pbVar3 != (byte *)0x0);
    local_30 = (char *)strtoull(local_30,(char **)0x0,0);
    uStack_28 = 0;
LAB_03225dc8:
    uVar1 = (**(code **)(*(long *)(param_1[2] & 0xfffffffffffffffe) + 0x30))
                      ((long *)(param_1[2] & 0xfffffffffffffffe),*param_1,param_1[1],&local_30);
    uVar1 = ~uVar1 >> 0x1f;
  }
  return uVar1;
}



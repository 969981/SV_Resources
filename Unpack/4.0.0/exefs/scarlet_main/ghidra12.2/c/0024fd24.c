/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0024fd24; name: FUN_0024fd24
 */


void FUN_0024fd24(undefined8 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)*param_1;
  if (pbVar2 == (byte *)0x0) {
    return;
  }
  if ((byte *)param_1[1] == pbVar2) {
    pbVar1 = pbVar2;
  }
  else {
    pbVar1 = (byte *)param_1[1];
    do {
      pbVar3 = pbVar1 + -0x20;
      if ((*pbVar3 & 1) != 0) {
        (**(code **)(**(long **)(pbVar1 + -8) + 0x18))
                  (*(long **)(pbVar1 + -8),*(undefined8 *)(pbVar1 + -0x10),
                   *(ulong *)(pbVar1 + -0x20) & 0xfffffffffffffffe,1);
      }
      pbVar1 = pbVar3;
    } while (pbVar2 != pbVar3);
    pbVar1 = (byte *)*param_1;
  }
  param_1[1] = pbVar2;
                    /* WARNING: Could not recover jumptable at 0x0024fdb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],pbVar1,param_1[2] - (long)pbVar1,8);
  return;
}



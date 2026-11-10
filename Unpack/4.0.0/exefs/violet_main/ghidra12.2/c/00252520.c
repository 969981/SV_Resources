/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00252520; name: FUN_00252520
 */


void FUN_00252520(undefined8 *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x002525b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],pbVar1,param_1[2] - (long)pbVar1,8);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027df04c; name: FUN_027df04c
 */


void FUN_027df04c(long param_1,byte *param_2)

{
  byte *pbVar2;
  byte *pbVar1;
  
  if (*(byte **)(param_1 + 8) != param_2) {
    pbVar2 = *(byte **)(param_1 + 8);
    do {
      pbVar1 = pbVar2 + -0x20;
      if ((*pbVar1 & 1) != 0) {
        (**(code **)(**(long **)(pbVar2 + -8) + 0x18))
                  (*(long **)(pbVar2 + -8),*(undefined8 *)(pbVar2 + -0x10),
                   *(ulong *)(pbVar2 + -0x20) & 0xfffffffffffffffe,1);
      }
      pbVar2 = pbVar1;
    } while (param_2 != pbVar1);
  }
  *(byte **)(param_1 + 8) = param_2;
  return;
}



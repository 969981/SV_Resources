/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0025be60; name: FUN_0025be60
 */


void FUN_0025be60(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = *(byte **)(param_1 + 0x20);
  if (pbVar2 != (byte *)0x0) {
    if (*(byte **)(param_1 + 0x28) == pbVar2) {
      pbVar1 = pbVar2;
    }
    else {
      pbVar1 = *(byte **)(param_1 + 0x28);
      do {
        pbVar3 = pbVar1 + -0x20;
        if ((*pbVar3 & 1) != 0) {
          (**(code **)(**(long **)(pbVar1 + -8) + 0x18))
                    (*(long **)(pbVar1 + -8),*(undefined8 *)(pbVar1 + -0x10),
                     *(ulong *)(pbVar1 + -0x20) & 0xfffffffffffffffe,1);
        }
        pbVar1 = pbVar3;
      } while (pbVar2 != pbVar3);
      pbVar1 = *(byte **)(param_1 + 0x20);
    }
    *(byte **)(param_1 + 0x28) = pbVar2;
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
              (*(long **)(param_1 + 0x38),pbVar1,*(long *)(param_1 + 0x30) - (long)pbVar1,8);
  }
  FUN_01cfa44c(param_1,*(undefined8 *)(param_1 + 8));
  return;
}



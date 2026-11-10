/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00539428; name: FUN_00539428
 */


void FUN_00539428(long param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  if (puVar3 != (undefined8 *)0x0) {
    if (*(undefined8 **)(param_1 + 0x30) == puVar3) {
      puVar2 = puVar3;
    }
    else {
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      do {
        puVar4 = puVar2 + -4;
        pbVar5 = (byte *)*puVar4;
        if (pbVar5 != (byte *)0x0) {
          if ((byte *)puVar2[-3] == pbVar5) {
            pbVar1 = pbVar5;
          }
          else {
            pbVar1 = (byte *)puVar2[-3];
            do {
              pbVar6 = pbVar1 + -0x20;
              if ((*pbVar6 & 1) != 0) {
                (**(code **)(**(long **)(pbVar1 + -8) + 0x18))
                          (*(long **)(pbVar1 + -8),*(undefined8 *)(pbVar1 + -0x10),
                           *(ulong *)(pbVar1 + -0x20) & 0xfffffffffffffffe,1);
              }
              pbVar1 = pbVar6;
            } while (pbVar5 != pbVar6);
            pbVar1 = (byte *)*puVar4;
          }
          puVar2[-3] = pbVar5;
          (**(code **)(*(long *)puVar2[-1] + 0x18))
                    ((long *)puVar2[-1],pbVar1,puVar2[-2] - (long)pbVar1,8);
        }
        puVar2 = puVar4;
      } while (puVar4 != puVar3);
      puVar2 = *(undefined8 **)(param_1 + 0x28);
    }
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
              (*(long **)(param_1 + 0x40),puVar2,*(long *)(param_1 + 0x38) - (long)puVar2,8);
  }
  pbVar5 = *(byte **)(param_1 + 8);
  if (pbVar5 == (byte *)0x0) {
    return;
  }
  if (*(byte **)(param_1 + 0x10) == pbVar5) {
    pbVar1 = pbVar5;
  }
  else {
    pbVar1 = *(byte **)(param_1 + 0x10);
    do {
      pbVar6 = pbVar1 + -0x20;
      if ((*pbVar6 & 1) != 0) {
        (**(code **)(**(long **)(pbVar1 + -8) + 0x18))
                  (*(long **)(pbVar1 + -8),*(undefined8 *)(pbVar1 + -0x10),
                   *(ulong *)(pbVar1 + -0x20) & 0xfffffffffffffffe,1);
      }
      pbVar1 = pbVar6;
    } while (pbVar5 != pbVar6);
    pbVar1 = *(byte **)(param_1 + 8);
  }
  *(byte **)(param_1 + 0x10) = pbVar5;
                    /* WARNING: Could not recover jumptable at 0x0053959c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
            (*(long **)(param_1 + 0x20),pbVar1,*(long *)(param_1 + 0x18) - (long)pbVar1,8);
  return;
}



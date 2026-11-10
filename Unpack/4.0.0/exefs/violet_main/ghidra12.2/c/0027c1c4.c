/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0027c1c4; name: FUN_0027c1c4
 */


void FUN_0027c1c4(undefined8 *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = (byte *)param_1[5];
  *param_1 = &PTR_FUN_0448cc50;
  puVar1 = PTR_LAB_047cba48;
  if (pbVar3 != (byte *)0x0) {
    if ((byte *)param_1[6] == pbVar3) {
      pbVar2 = pbVar3;
    }
    else {
      pbVar2 = (byte *)param_1[6];
      do {
        pbVar4 = pbVar2 + -0x18;
        if ((*pbVar4 & 1) != 0) {
          FUN_0049e790(puVar1,*(undefined8 *)(pbVar2 + -8));
        }
        pbVar2 = pbVar4;
      } while (pbVar3 != pbVar4);
      pbVar2 = (byte *)param_1[5];
    }
    param_1[6] = pbVar3;
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
  }
  FUN_0027c308(param_1 + 2,param_1[3]);
  return;
}



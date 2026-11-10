/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1d420; name: FUN_01e1d420
 */


undefined1 * FUN_01e1d420(long *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  puVar3 = (undefined1 *)param_1[1];
  puVar4 = param_2;
  if (param_2 + 0x18 != puVar3) {
    lVar1 = *param_1;
    puVar2 = param_2 + 0x18;
    *param_2 = *puVar2;
    FUN_00d0a34c(lVar1 + ((long)param_2 - lVar1 >> 3) * 8 + 8,param_2 + 0x20);
    puVar4 = puVar2;
    if (param_2 + 0x30 != puVar3) {
      puVar4 = param_2 + 0x30;
      *puVar2 = param_2[0x30];
      FUN_00d0a34c(param_2 + 0x20,param_2 + 0x38);
      if (param_2 + 0x48 != puVar3) {
        *puVar4 = param_2[0x48];
        FUN_00d0a34c(param_2 + 0x38,param_2 + 0x50);
        puVar4 = param_2 + 0x48;
        if (param_2 + 0x60 != puVar3) {
          puVar4 = param_2 + 0x60;
          param_2[0x48] = param_2[0x60];
          FUN_00d0a34c(param_2 + 0x50,param_2 + 0x68);
          if (param_2 + 0x78 != puVar3) {
            puVar2 = param_2;
            do {
              puVar4 = puVar2;
              puVar4[0x60] = puVar4[0x78];
              FUN_00d0a34c(puVar4 + 0x68,puVar4 + 0x80);
              puVar2 = puVar4 + 0x18;
            } while (puVar3 + -0x78 != puVar4 + 0x18);
            puVar4 = puVar4 + 0x78;
          }
        }
      }
    }
  }
  FUN_017f97a0(param_1,puVar4);
  return param_2;
}



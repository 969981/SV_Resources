/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0026338c; name: FUN_0026338c
 */


void FUN_0026338c(ulong *param_1)

{
  byte bVar1;
  ulong *puVar2;
  code *pcVar3;
  
  puVar2 = (ulong *)param_1[0x1a];
  if (puVar2 != (ulong *)0x0) {
    if (puVar2 == param_1 + 0x16) {
      pcVar3 = *(code **)(*puVar2 + 0x10);
    }
    else {
      pcVar3 = *(code **)(*puVar2 + 0x18);
    }
    (*pcVar3)();
  }
  if ((param_1[0x10] & 1) == 0) {
    bVar1 = (byte)param_1[0xc];
  }
  else {
    (**(code **)(*(long *)param_1[0x13] + 0x18))
              ((long *)param_1[0x13],param_1[0x12],param_1[0x10] & 0xfffffffffffffffe,1);
    bVar1 = (byte)param_1[0xc];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = (byte)param_1[8];
  }
  else {
    (**(code **)(*(long *)param_1[0xf] + 0x18))
              ((long *)param_1[0xf],param_1[0xe],param_1[0xc] & 0xfffffffffffffffe,1);
    bVar1 = (byte)param_1[8];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = (byte)param_1[4];
  }
  else {
    (**(code **)(*(long *)param_1[0xb] + 0x18))
              ((long *)param_1[0xb],param_1[10],param_1[8] & 0xfffffffffffffffe,1);
    bVar1 = (byte)param_1[4];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = (byte)*param_1;
  }
  else {
    (**(code **)(*(long *)param_1[7] + 0x18))
              ((long *)param_1[7],param_1[6],param_1[4] & 0xfffffffffffffffe,1);
    bVar1 = (byte)*param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00263498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))
            ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
  return;
}



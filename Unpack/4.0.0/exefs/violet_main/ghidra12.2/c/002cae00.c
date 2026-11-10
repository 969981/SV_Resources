/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002cae00; name: FUN_002cae00
 */


void FUN_002cae00(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_4 != 0) {
    puVar1 = (undefined8 *)*param_3;
    lVar2 = 0;
    param_2 = param_2 + 0x18;
    do {
      uVar4 = puVar1[1];
      uVar3 = *puVar1;
      *(undefined8 *)(param_2 + -8) = puVar1[2];
      *(undefined8 *)(param_2 + -0x10) = uVar4;
      *(undefined8 *)(param_2 + -0x18) = uVar3;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
                    /* try { // try from 002cae40 to 002cae47 has its CatchHandler @ 002cae74 */
      FUN_0028f3c0(param_2,puVar1 + 3);
      lVar2 = lVar2 + 1;
      puVar1 = (undefined8 *)(*param_3 + 0x68);
      param_2 = param_2 + 0x68;
      *param_3 = (long)puVar1;
    } while (param_4 != lVar2);
  }
  return;
}



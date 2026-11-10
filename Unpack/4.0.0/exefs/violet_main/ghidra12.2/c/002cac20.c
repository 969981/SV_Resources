/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002cac20; name: FUN_002cac20
 */


void FUN_002cac20(undefined8 param_1,long param_2,long *param_3,long param_4)

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
                    /* try { // try from 002cac64 to 002cac6b has its CatchHandler @ 002cac98 */
      FUN_002cacfc(param_2,puVar1 + 3);
      lVar2 = lVar2 + 1;
      puVar1 = (undefined8 *)(*param_3 + 0x88);
      param_2 = param_2 + 0x88;
      *param_3 = (long)puVar1;
    } while (param_4 != lVar2);
  }
  return;
}



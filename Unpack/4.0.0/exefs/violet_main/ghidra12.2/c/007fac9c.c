/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fac9c; name: FUN_007fac9c
 */


void FUN_007fac9c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  if (puVar2 != (undefined8 *)0x0) {
    if ((undefined8 *)puVar2[1] != puVar2) {
      puVar1 = (undefined8 *)puVar2[1];
      do {
        puVar4 = (undefined8 *)puVar1[1];
        *puVar1 = 0;
        puVar1[1] = 0;
        FUN_0078fa04(puVar2 + 3,puVar2 + 3,(long)*(int *)((long)puVar2 + 0x2c) + (long)puVar1);
        puVar1 = puVar4;
      } while (puVar4 != puVar2);
    }
    FUN_0078f9d4(puVar2);
  }
  FUN_007ec474(param_1);
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_007bfaa0();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar3 != 0) {
    FUN_007bfae0(lVar3);
    FUN_007bfaa0(lVar3);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return;
}



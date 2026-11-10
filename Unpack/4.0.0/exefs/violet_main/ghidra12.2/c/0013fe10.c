/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013fe10; name: FUN_0013fe10
 */


undefined8 FUN_0013fe10(long *param_1,double *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  double dVar4;
  double local_30;
  char local_28;
  
  if (*(byte *)(param_1 + 1) == 3) {
    dVar4 = (double)*param_1;
LAB_0013feb8:
    *param_2 = dVar4;
    return 1;
  }
  if ((*(byte *)(param_1 + 1) & 0xf) == 4) {
    lVar1 = FUN_0012dc70(*param_1 + 0x18,&local_30);
    lVar2 = *param_1;
    if (*(char *)(lVar2 + 8) == '\x04') {
      uVar3 = (ulong)*(byte *)(lVar2 + 0xb);
    }
    else {
      uVar3 = *(ulong *)(lVar2 + 0x10);
    }
    if (lVar1 == uVar3 + 1) {
      dVar4 = (double)(long)local_30;
      if (local_28 != '\x03') {
        dVar4 = local_30;
      }
      goto LAB_0013feb8;
    }
  }
  return 0;
}



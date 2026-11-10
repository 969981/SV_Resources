/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0350e21c; name: FUN_0350e21c
 */


void FUN_0350e21c(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_047e7170 + 0x10;
  *param_1 = (long)(PTR_DAT_047e7498 + 0x10);
  param_1[7] = (long)puVar1;
  FUN_03480ed4();
  lVar2 = param_1[4];
  param_1[2] = (long)(PTR_DAT_047e74a0 + 0x10);
  puVar1 = PTR_DAT_047e70e8;
  if (lVar2 != 0) {
    if (*(uint *)(param_1 + 5) != 0) {
      lVar3 = (ulong)*(uint *)(param_1 + 5) << 5;
      plVar4 = (long *)(lVar2 + 0x18);
      do {
        if ((plVar4[-2] != 0) && (*(int *)((long)plVar4 + -4) != -1)) {
          FUN_03468ed8(*(undefined8 *)puVar1);
          if (*plVar4 != 0) {
            FUN_0346034c(*plVar4,0);
          }
        }
        lVar3 = lVar3 + -0x20;
        plVar4 = plVar4 + 4;
      } while (lVar3 != 0);
      lVar2 = param_1[4];
    }
    *(undefined4 *)(param_1 + 5) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,lVar2);
    param_1[4] = 0;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  }
  return;
}



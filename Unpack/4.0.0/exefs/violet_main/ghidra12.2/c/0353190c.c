/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0353190c; name: FUN_0353190c
 */


void FUN_0353190c(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)param_1[0x10];
  *param_1 = &PTR_LAB_047c9098;
  param_1[3] = &PTR_LAB_047c91e8;
  param_1[5] = &PTR_FUN_047c9210;
  puVar2 = PTR_DAT_047e2fd0;
  if (plVar3 != (long *)0x0) {
    do {
      if (*plVar3 == 0) {
        param_1[0xf] = 0;
        param_1[0x10] = 0;
      }
      else {
        param_1[0x10] = *plVar3;
      }
      plVar4 = (long *)plVar3[3];
      plVar3[2] = 0;
      if (plVar4 != (long *)0x0) {
        iVar1 = (int)plVar4[9] + -1;
        *(int *)(plVar4 + 9) = iVar1;
        if (iVar1 == 0) {
          if (plVar4[2] == 0) {
            FUN_03518540(plVar4);
          }
          else {
            FUN_0351c44c(plVar4[2],plVar4);
            plVar4[2] = 0;
          }
          (**(code **)(*plVar4 + 0x50))(plVar4);
          (**(code **)(puVar2 + 0x30))(0,plVar4);
        }
        plVar3[3] = 0;
      }
      (**(code **)(puVar2 + 0x30))(0,plVar3);
      plVar3 = (long *)param_1[0x10];
    } while (plVar3 != (long *)0x0);
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_0351bd94(param_1);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03531dd4; name: FUN_03531dd4
 */


void FUN_03531dd4(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  puVar2 = PTR_DAT_047e2fd0;
  lVar4 = param_1[0x10];
  if (lVar4 != 0) {
    do {
      (**(code **)(*param_1 + 0x138))(param_1,lVar4);
      FUN_0351d5e4(lVar4);
      if ((long *)param_1[0x10] != (long *)0x0) {
        lVar3 = *(long *)param_1[0x10];
        if (lVar3 == 0) {
          param_1[0xf] = 0;
          param_1[0x10] = 0;
        }
        else {
          param_1[0x10] = lVar3;
        }
      }
      plVar5 = *(long **)(lVar4 + 0x18);
      *(undefined8 *)(lVar4 + 0x10) = 0;
      if (plVar5 != (long *)0x0) {
        iVar1 = (int)plVar5[9] + -1;
        *(int *)(plVar5 + 9) = iVar1;
        if (iVar1 == 0) {
          if (plVar5[2] == 0) {
            FUN_03518540(plVar5);
          }
          else {
            FUN_0351c44c(plVar5[2],plVar5);
            plVar5[2] = 0;
          }
          (**(code **)(*plVar5 + 0x50))(plVar5);
          (**(code **)(puVar2 + 0x30))(0,plVar5);
        }
        *(undefined8 *)(lVar4 + 0x18) = 0;
      }
      (**(code **)(puVar2 + 0x30))(0,lVar4);
      lVar4 = param_1[0x10];
    } while (lVar4 != 0);
  }
  return;
}



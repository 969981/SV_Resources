/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007cd284; name: FUN_007cd284
 */


void FUN_007cd284(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  
  *param_1 = (long)(PTR_DAT_047d1198 + 0x10);
  puVar2 = PTR_DAT_047d0860;
  plVar3 = (long *)FUN_007f738c(*(undefined8 *)PTR_DAT_047d0860);
  puVar5 = (undefined8 *)param_1[0xb];
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    FUN_007bfaa0(puVar5);
    param_1[0xb] = 0;
  }
  if (param_1[3] != 0) {
    param_1[3] = 0;
  }
  lVar6 = param_1[0x22];
  if (lVar6 != 0) {
    if (param_1[0x20] != 0) {
      plVar1 = param_1 + 0x1a;
      if ((long *)param_1[0x1b] != plVar1) {
        plVar4 = (long *)param_1[0x1b];
        do {
          plVar7 = (long *)plVar4[1];
          *plVar4 = 0;
          plVar4[1] = 0;
          FUN_0078fa04(param_1 + 0x1d,param_1 + 0x1d,
                       (long)*(int *)((long)param_1 + 0xfc) + (long)plVar4);
          plVar4 = plVar7;
        } while (plVar7 != plVar1);
      }
      FUN_0078f9d4(plVar1);
      lVar6 = param_1[0x22];
    }
    if (lVar6 != 0) {
      FUN_007bfae0(lVar6);
      FUN_007bfaa0(lVar6);
    }
    param_1[0x22] = 0;
  }
  puVar5 = (undefined8 *)param_1[6];
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    FUN_007bfaa0(puVar5);
    param_1[6] = 0;
  }
  puVar5 = (undefined8 *)param_1[7];
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    FUN_007bfaa0(puVar5);
    param_1[7] = 0;
  }
  puVar5 = (undefined8 *)param_1[8];
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    FUN_007bfaa0(puVar5);
    param_1[8] = 0;
  }
  puVar5 = (undefined8 *)param_1[9];
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    FUN_007bfaa0(puVar5);
    param_1[9] = 0;
  }
  puVar5 = (undefined8 *)param_1[10];
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    FUN_007bfaa0(puVar5);
    param_1[10] = 0;
  }
  puVar5 = (undefined8 *)param_1[5];
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    FUN_007bfaa0(puVar5);
    param_1[5] = 0;
  }
  if (*(long *)PTR_DAT_047d11a0 != 0) {
    FUN_007e0130();
  }
  if (param_1[2] != 0) {
    FUN_007d363c();
    param_1[2] = 0;
  }
  if (*(int *)((long)param_1 + 0xc) != 0) {
    if (*(long *)puVar2 != 0) {
      FUN_01913dc4(*(long *)puVar2 + 0x10);
    }
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  if (param_1[0xc] != 0) {
    (**(code **)(*plVar3 + 0xf0))(plVar3);
    param_1[0xc] = 0;
  }
  lVar6 = param_1[0x15];
  if (lVar6 != 0) {
    FUN_0078cb10(lVar6);
    FUN_007bfaa0(lVar6);
    param_1[0x15] = 0;
  }
  FUN_018dd490(param_1 + 0x78);
  FUN_018dd490(param_1 + 0x65);
  FUN_018dd490(param_1 + 0x52);
  FUN_018dd490(param_1 + 0x3f);
  FUN_007e51d0(param_1 + 0x37);
  FUN_007e51d0(param_1 + 0x2f);
  FUN_0284e3d4(param_1 + 0x27);
  return;
}



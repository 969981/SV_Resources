/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0352729c; name: FUN_0352729c
 */


/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_0352729c(long *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  plVar11 = param_1 + 0x13;
  puVar5 = (undefined8 *)*plVar11;
  if (puVar5 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    puVar6 = puVar5;
    puVar10 = (undefined8 *)0x0;
    puVar12 = (undefined8 *)0x0;
    while( true ) {
      puVar7 = puVar6;
      puVar9 = (undefined8 *)*puVar5;
      param_1[0x13] = (long)puVar9;
      if ((undefined8 *)param_1[0x12] == puVar7) {
        param_1[0x12] = 0;
      }
      *puVar7 = 0;
      puVar13 = puVar5;
      if (puVar12 != (undefined8 *)0x0) {
        *puVar10 = puVar7;
        puVar13 = puVar12;
      }
      if (puVar9 == (undefined8 *)0x0) break;
      puVar5 = puVar9;
      puVar6 = (undefined8 *)*plVar11;
      puVar10 = puVar7;
      puVar12 = puVar13;
      if ((undefined8 *)*plVar11 != puVar9) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe;
  if ((param_2 & 1) == 0) {
    uVar2 = FUN_03527670(param_1);
  }
  else {
    uVar2 = 0;
  }
  lVar4 = FUN_03527714(param_1,uVar2);
  puVar1 = PTR_DAT_047e2fd0;
  if ((lVar4 != 0) &&
     (puVar5 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x58),
     puVar5 != (undefined8 *)0x0)) {
    *puVar5 = 0;
    puVar5[1] = lVar4;
    *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
    puVar5[8] = 0x400000000;
    puVar5[2] = 0;
    *(undefined1 *)(puVar5 + 3) = 0;
    *(undefined1 *)(puVar5 + 9) = 0;
    *puVar5 = 0;
    *(byte *)(puVar5 + 10) = *(byte *)(puVar5 + 10) & 0xf8;
    if (*plVar11 == 0) {
      *plVar11 = (long)puVar5;
      puVar6 = puVar5;
    }
    else {
      *(undefined8 **)param_1[0x12] = puVar5;
      puVar6 = (undefined8 *)param_1[0x13];
    }
    param_1[0x12] = (long)puVar5;
    param_1[0x14] = (long)puVar6;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    iVar3 = (**(code **)(*param_1 + 0xb0))(param_1,0,0,&local_50,auStack_24,auStack_28,0,0);
    if (iVar3 != 0) {
      while (puVar13 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)*puVar13;
        *(byte *)(puVar13 + 10) = *(byte *)(puVar13 + 10) & 0xfc;
        (**(code **)(*(long *)puVar13[1] + 0x10))((long *)puVar13[1],0);
        plVar11 = (long *)puVar13[1];
        puVar13[1] = 0;
        if (plVar11 != (long *)0x0) {
          iVar3 = (int)plVar11[9] + -1;
          *(int *)(plVar11 + 9) = iVar3;
          if (iVar3 == 0) {
            if (plVar11[2] == 0) {
              FUN_03518540(plVar11);
            }
            else {
              FUN_0351c44c(plVar11[2],plVar11);
              plVar11[2] = 0;
            }
            (**(code **)(*plVar11 + 0x50))(plVar11);
            (**(code **)(puVar1 + 0x30))(0,plVar11);
          }
          plVar11 = (long *)puVar13[1];
          if (plVar11 != (long *)0x0) {
            iVar3 = (int)plVar11[9] + -1;
            *(int *)(plVar11 + 9) = iVar3;
            if (iVar3 == 0) {
              if (plVar11[2] == 0) {
                FUN_03518540(plVar11);
              }
              else {
                FUN_0351c44c(plVar11[2],plVar11);
                plVar11[2] = 0;
              }
              (**(code **)(*plVar11 + 0x50))(plVar11);
              (**(code **)(puVar1 + 0x30))(0,plVar11);
            }
            puVar13[1] = 0;
          }
        }
        (**(code **)(puVar1 + 0x30))(0,puVar13);
        puVar13 = puVar5;
      }
      return 1;
    }
  }
  while (puVar13 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar13;
    *puVar13 = 0;
    plVar8 = plVar11;
    if (*plVar11 != 0) {
      plVar8 = (long *)param_1[0x12];
    }
    *plVar8 = (long)puVar13;
    param_1[0x12] = (long)puVar13;
    puVar13 = puVar5;
  }
  return 2;
}



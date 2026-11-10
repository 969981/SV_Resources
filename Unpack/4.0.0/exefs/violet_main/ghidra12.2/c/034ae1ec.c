/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ae1ec; name: FUN_034ae1ec
 */


undefined8 FUN_034ae1ec(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int *piVar8;
  
  bVar4 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  uVar1 = 0;
  if ((bVar4 & 1) != 0) {
    uVar1 = 0x18000200000;
  }
  param_1[0x17] = uVar1 | param_1[0x17] & 0xfffffe7fffdfffffU;
  (**(code **)(*param_1 + 0x180))(param_1,0,0);
  *(uint *)((long)param_1 + 0xda) =
       *(uint *)((long)param_1 + 0xda) & 0xfff80000 |
       *(uint *)((long)param_1 + 0xda) & 0x3ffff | (bVar4 >> 1 & 1) << 0x12;
  uVar1 = 0;
  if ((bVar4 & 4) != 0) {
    uVar1 = 0x7f83c00000;
  }
  param_1[0x17] = param_1[0x17] & 0xffffff807c3fffffU | uVar1;
  (**(code **)(*param_1 + 0x180))(param_1,0,0);
  param_1[0x17] =
       param_1[0x17] & 0xffffffff80000000U |
       param_1[0x17] & 0x3fffffffU | ((ulong)((bVar4 & 0x3f) >> 4) & 1) << 0x1e;
  (**(code **)(*param_1 + 0x180))(param_1,0,0);
  if ((bVar4 >> 3 & 1) == 0) {
    if ((undefined4 *)param_1[0x15] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[0x15] = 0;
      (**(code **)(*param_1 + 0x180))(param_1,0,0);
      if (param_1[0x15] != 0) {
        *(undefined4 *)(param_1[0x15] + 4) = 0;
        (**(code **)(*param_1 + 0x180))(param_1,0,0);
        if (param_1[0x15] == 0) goto LAB_034ae4d4;
        *(undefined4 *)(param_1[0x15] + 8) = 0;
        (**(code **)(*param_1 + 0x180))(param_1,0,0);
        if (param_1[0x15] == 0) goto LAB_034ae4d4;
        *(undefined4 *)(param_1[0x15] + 0xc) = 0;
        goto LAB_034ae4bc;
      }
    }
  }
  else {
    piVar8 = (int *)*param_2 + 1;
    iVar2 = *(int *)*param_2;
    *param_2 = piVar8;
    piVar5 = (int *)param_1[0x15];
    if ((iVar2 != 0) && (piVar5 == (int *)0x0)) {
      piVar5 = (int *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x10);
      if (piVar5 != (int *)0x0) {
        piVar5[0] = 0;
        piVar5[1] = 0;
        piVar5[2] = 0;
        piVar5[3] = 0;
        param_1[0x15] = (long)piVar5;
LAB_034ae38c:
        *piVar5 = iVar2;
        (**(code **)(*param_1 + 0x180))(param_1,0,0);
        piVar8 = (int *)*param_2;
        goto LAB_034ae3ac;
      }
LAB_034ae4a8:
      uVar7 = 0x34;
      param_1[0x15] = 0;
      goto LAB_034ae4d8;
    }
    if (piVar5 != (int *)0x0) goto LAB_034ae38c;
LAB_034ae3ac:
    piVar5 = piVar8 + 1;
    iVar2 = *piVar8;
    *param_2 = piVar5;
    puVar6 = (undefined8 *)param_1[0x15];
    if ((iVar2 == 0) || (puVar6 != (undefined8 *)0x0)) {
      if (puVar6 != (undefined8 *)0x0) goto LAB_034ae3ec;
    }
    else {
      puVar6 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x10);
      if (puVar6 == (undefined8 *)0x0) goto LAB_034ae4a8;
      *puVar6 = 0;
      puVar6[1] = 0;
      param_1[0x15] = (long)puVar6;
LAB_034ae3ec:
      *(int *)((long)puVar6 + 4) = iVar2;
      (**(code **)(*param_1 + 0x180))(param_1,0,0);
      piVar5 = (int *)*param_2;
    }
    piVar8 = piVar5 + 1;
    iVar2 = *piVar5;
    *param_2 = piVar8;
    puVar6 = (undefined8 *)param_1[0x15];
    if ((iVar2 == 0) || (puVar6 != (undefined8 *)0x0)) {
      if (puVar6 != (undefined8 *)0x0) goto LAB_034ae44c;
    }
    else {
      puVar6 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x10);
      if (puVar6 == (undefined8 *)0x0) goto LAB_034ae4a8;
      *puVar6 = 0;
      puVar6[1] = 0;
      param_1[0x15] = (long)puVar6;
LAB_034ae44c:
      *(int *)(puVar6 + 1) = iVar2;
      (**(code **)(*param_1 + 0x180))(param_1,0,0);
      piVar8 = (int *)*param_2;
    }
    iVar2 = *piVar8;
    *param_2 = piVar8 + 1;
    puVar6 = (undefined8 *)param_1[0x15];
    if ((iVar2 == 0) || (puVar6 != (undefined8 *)0x0)) {
      if (puVar6 == (undefined8 *)0x0) goto LAB_034ae4d4;
    }
    else {
      puVar6 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x10);
      if (puVar6 == (undefined8 *)0x0) goto LAB_034ae4a8;
      *puVar6 = 0;
      puVar6[1] = 0;
      param_1[0x15] = (long)puVar6;
    }
    *(int *)((long)puVar6 + 0xc) = iVar2;
LAB_034ae4bc:
    (**(code **)(*param_1 + 0x180))(param_1,0,0);
  }
LAB_034ae4d4:
  uVar7 = 1;
LAB_034ae4d8:
  uVar3 = *(undefined4 *)*param_2;
  *param_2 = (undefined4 *)*param_2 + 1;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  return uVar7;
}



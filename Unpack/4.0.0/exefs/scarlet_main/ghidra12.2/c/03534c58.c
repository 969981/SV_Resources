/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03534c58; name: FUN_03534c58
 */


undefined8
FUN_03534c58(long *param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined4 *param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  double dVar10;
  double dVar11;
  int local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 auStack_44 [4];
  
  *param_5 = 0;
  puVar3 = PTR_DAT_047e2fd0;
  plVar9 = (long *)param_1[0x12];
  if (((param_4 < (int)plVar9[0x28] - *(int *)(plVar9[0x26] + 4)) && ((int)plVar9[0x27] != 0)) &&
     (plVar5 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0xa0), plVar5 != (long *)0x0)) {
    *(undefined4 *)(plVar5 + 4) = 0;
    plVar5[7] = 0;
    plVar5[8] = 0;
    *(undefined2 *)(plVar5 + 0xb) = 0;
    plVar5[9] = 0;
    plVar5[10] = -0xc0800000;
    puVar1 = PTR_DAT_047e7578;
    *(byte *)((long)plVar5 + 0x5a) = *(byte *)((long)plVar5 + 0x5a) & 0xe0;
    *plVar5 = (long)(puVar1 + 0x10);
    plVar5[2] = (long)param_1;
    plVar5[3] = (long)(puVar1 + 0xa0);
    plVar5[5] = (long)(puVar1 + 200);
    plVar5[6] = 0;
    puVar1 = PTR_DAT_047e7580 + 0x10;
    plVar5[0xe] = 0;
    plVar5[0xf] = (long)plVar9;
    plVar5[0x10] = 0;
    plVar5[0x11] = 0;
    *(undefined8 *)((long)plVar5 + 0x8d) = 0;
    plVar5[0xc] = (long)puVar1;
    plVar5[0xd] = 0;
    (**(code **)(*plVar9 + 0x28))(plVar9);
    *(int *)(plVar5 + 9) = (int)plVar5[9] + 1;
    lVar8 = plVar5[2];
    if (lVar8 != 0) {
      if (*(long *)(lVar8 + 0x30) == 0) {
        *(long **)(lVar8 + 0x30) = plVar5;
        plVar5[1] = 0;
      }
      else {
        plVar5[1] = *(long *)(lVar8 + 0x30);
        *(long **)(lVar8 + 0x30) = plVar5;
      }
      *(int *)(lVar8 + 0x48) = *(int *)(lVar8 + 0x48) + 1;
    }
    FUN_03532e8c(plVar5);
    puVar6 = (undefined8 *)(**(code **)(puVar3 + 0x10))(0,0x48);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = plVar5;
      *(int *)(plVar5 + 9) = (int)plVar5[9] + 1;
      *(undefined4 *)((long)puVar6 + 0x3c) = 4;
      *(undefined8 *)((long)puVar6 + 0x24) = 0;
      *(undefined8 *)((long)puVar6 + 0x34) = 0;
      *(undefined1 *)(puVar6 + 8) = 0;
      *(byte *)((long)puVar6 + 0x44) = *(byte *)((long)puVar6 + 0x44) & 0xf8;
      uVar7 = 0;
      if (puVar6[3] != 0) {
        *(undefined8 **)(puVar6[3] + 0x80) = puVar6;
        uVar7 = *(undefined4 *)(*(long *)(puVar6[3] + 0x78) + 0x18);
      }
      *(undefined4 *)(puVar6 + 4) = uVar7;
      *puVar6 = 0;
      plVar9 = param_1 + 0x10;
      if (*plVar9 != 0) {
        plVar9 = (long *)param_1[0xf];
      }
      *plVar9 = (long)puVar6;
      param_1[0xf] = (long)puVar6;
    }
    iVar4 = (int)plVar5[9] + -1;
    *(int *)(plVar5 + 9) = iVar4;
    if (iVar4 == 0) {
      if (plVar5[2] == 0) {
        FUN_03518540(plVar5);
      }
      else {
        FUN_0351c44c(plVar5[2],plVar5);
        plVar5[2] = 0;
      }
      (**(code **)(*plVar5 + 0x50))(plVar5);
      (**(code **)(puVar3 + 0x30))(0,plVar5);
    }
    if (puVar6 != (undefined8 *)0x0) {
      param_1[0xd] = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      local_58 = param_4;
      iVar4 = (**(code **)(*param_1 + 0xb0))(param_1,0,0,&local_58,param_5,auStack_44,0,0);
      if (iVar4 != 0) {
        iVar4 = *(int *)(param_1[0x12] + 0x140);
        iVar2 = *(int *)(*(long *)(param_1[0x12] + 0x130) + 4);
        *(undefined4 *)(puVar6 + 7) = 0;
        iVar4 = iVar4 - iVar2;
        iVar2 = *(int *)((long)puVar6 + 0x24);
        if (iVar4 < iVar2) {
          dVar11 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_047e6fa0);
          dVar11 = ((double)(iVar4 - iVar2) * 1000.0) / dVar11;
          dVar10 = 0.5;
          if (dVar11 <= 0.0) {
            dVar10 = -0.5;
          }
          *(int *)(puVar6 + 7) = (int)(dVar10 + dVar11);
          iVar4 = iVar2;
        }
        *(undefined4 *)((long)puVar6 + 0x3c) = 4;
        *(int *)((long)puVar6 + 0x34) = iVar4;
        *(byte *)((long)puVar6 + 0x44) = *(byte *)((long)puVar6 + 0x44) | 2;
        lVar8 = *(long *)(param_1[0x12] + 0x130);
        iVar2 = *(int *)(lVar8 + (ulong)*(uint *)(param_1[0x12] + 0x138) * 0x10 + -0xc);
        iVar4 = *(int *)(lVar8 + 4);
        puVar6 = (undefined8 *)(**(code **)(puVar3 + 0x10))(0,0x48);
        if (puVar6 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar6 + 5) = 0;
          *(undefined8 *)((long)puVar6 + 0x34) = 0;
          *(undefined4 *)((long)puVar6 + 0x3c) = 4;
          puVar6[2] = 0;
          puVar6[3] = 0;
          *(undefined1 *)(puVar6 + 8) = 0;
          puVar6[4] = 0;
          *(byte *)((long)puVar6 + 0x44) = *(byte *)((long)puVar6 + 0x44) & 0xf8;
          *puVar6 = 0;
          puVar6[1] = (ulong)(uint)(iVar2 - iVar4);
          plVar9 = param_1 + 0x10;
          if (*plVar9 != 0) {
            plVar9 = (long *)param_1[0xf];
          }
          *plVar9 = (long)puVar6;
          param_1[0xf] = (long)puVar6;
          return 1;
        }
      }
    }
  }
  return 2;
}



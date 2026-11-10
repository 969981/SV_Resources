/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fae614; name: FUN_02fae614
 */


void FUN_02fae614(undefined8 *param_1,uint param_2,uint param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 local_58;
  
  if ((undefined1 *)*param_1 == (undefined1 *)0x0) {
    if (param_2 != 0x7fffffff) {
      bVar1 = *(byte *)(param_4 + 0x20);
      *(byte *)(param_4 + 0x20) = bVar1 | 1;
      puVar5 = (undefined1 *)(param_1[3] + (ulong)param_2 * 0x38);
      *(undefined1 *)(param_4 + 0x2a) = *puVar5;
      if (param_3 == param_2) {
        *(uint *)(param_1 + 2) = param_2;
        *param_1 = puVar5;
      }
      else {
        *(byte *)(param_4 + 0x20) = bVar1 | 3;
      }
      goto LAB_02fae6d0;
    }
    if (*(int *)((long)param_1 + 0x14) == 0x7fffffff) goto LAB_02fae8d4;
    *(undefined4 *)((long)param_1 + 0x14) = 0x7fffffff;
  }
  else {
    *(undefined1 *)(param_4 + 0x2a) = *(undefined1 *)*param_1;
    if (param_2 != param_3) {
      *(byte *)(param_4 + 0x20) = *(byte *)(param_4 + 0x20) | 2;
      *param_1 = 0;
      *(undefined4 *)(param_1 + 2) = 0x7fffffff;
    }
LAB_02fae6d0:
    if (*(uint *)((long)param_1 + 0x14) == param_2) goto LAB_02fae8d4;
    *(uint *)((long)param_1 + 0x14) = param_2;
    if (param_2 != 0x7fffffff) {
      lVar8 = param_1[3];
      uVar9 = (ulong)param_2;
      pbVar7 = (byte *)(lVar8 + uVar9 * 0x38);
      param_1[1] = 0;
      bVar1 = pbVar7[0x20];
      *(byte *)((long)param_1 + 0x2c) = bVar1;
      if ((bVar1 != 0) && (*(short *)(param_4 + 0x28) == -1)) {
        param_1[1] = pbVar7;
        puVar2 = PTR_DAT_047d1a08;
        puVar10 = (undefined8 *)(lVar8 + uVar9 * 0x38 + 0x28);
        puVar6 = (undefined8 *)*puVar10;
        if (puVar6 == (undefined8 *)0x0) {
          local_58 = 0x1c0;
          puVar6 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_58,0);
          if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
            (**(code **)(puVar2 + 0x10))(puVar6,"SolverSetupData");
          }
          puVar6[7] = 0;
          puVar6[9] = 0;
          *puVar6 = &PTR_FUN_04611b08;
          puVar6[1] = 0;
          puVar6[0x2f] = 0x3f0000003089705f;
          *(undefined4 *)((long)puVar6 + 0x10c) = 0x80000000;
          *(undefined4 *)(puVar6 + 0x30) = 0x3f000000;
          *(undefined4 *)(puVar6 + 4) = 0;
          *(undefined4 *)((long)puVar6 + 0x24) = 0x80000000;
          *(undefined4 *)(puVar6 + 8) = 0;
          *(undefined4 *)((long)puVar6 + 0x44) = 0x80000000;
          *(undefined4 *)(puVar6 + 10) = 0;
          *(undefined4 *)((long)puVar6 + 0x54) = 0x80000000;
          *(undefined4 *)(puVar6 + 0xc) = 0;
          *(undefined4 *)((long)puVar6 + 100) = 0x80000000;
          *(undefined4 *)(puVar6 + 0xe) = 0;
          *(undefined4 *)((long)puVar6 + 0x74) = 0x80000000;
          *(undefined4 *)(puVar6 + 0x12) = 0;
          *(undefined4 *)((long)puVar6 + 0x94) = 0x80000000;
          *(undefined4 *)(puVar6 + 0x10) = 0;
          *(undefined4 *)((long)puVar6 + 0x84) = 0x80000000;
          *(undefined2 *)(puVar6 + 0x24) = 1;
          puVar6[0xb] = 0;
          puVar6[0xd] = 0;
          puVar6[0xf] = 0;
          puVar6[0x11] = 0;
          puVar6[0x20] = 0;
          *(undefined2 *)((long)puVar6 + 0x174) = 0;
          *(undefined1 *)((long)puVar6 + 0x176) = 0;
          *(undefined4 *)(puVar6 + 0x21) = 0;
          *(undefined4 *)((long)puVar6 + 0x184) = 0;
          *(undefined1 *)((long)puVar6 + 0x122) = 0;
          puVar6[0x31] = 0;
          puVar6[0x22] = 0x7fffffffffffffff;
          puVar6[0x23] = 0;
          puVar6[2] = 0x8000000000000000;
          puVar6[3] = 0;
          *(undefined4 *)(puVar6 + 2) = 0;
          puVar6[5] = 0;
          puVar6[6] = 0;
          puVar6[0x13] = 0;
          puVar6[0x14] = 0x8000000000000000;
          puVar6[0x15] = 0;
          puVar6[0x16] = 0x8000000000000000;
          puVar6[0x17] = 0;
          puVar6[0x18] = 0x8000000000000000;
          puVar6[0x19] = 0;
          puVar6[0x1a] = 0x8000000000000000;
          puVar6[0x1c] = 0;
          puVar6[0x1d] = 0x8000000000000000;
          puVar6[0x1e] = 0;
          puVar6[0x1f] = 0;
          puVar6[0x27] = 0;
          puVar6[0x28] = 0x8000000000000000;
          puVar6[0x29] = 0;
          puVar6[0x2a] = 0x8000000000000000;
          *(undefined8 *)((long)puVar6 + 300) = 0x5f7ffff05f7ffff0;
          *(undefined8 *)((long)puVar6 + 0x124) = 0x5f7ffff05f7ffff0;
          *(undefined1 *)(puVar6 + 0x35) = 0;
          *(undefined4 *)(puVar6 + 0x2e) = 0;
          *(undefined1 *)((long)puVar6 + 0x1bc) = 0;
          *(undefined8 *)((long)puVar6 + 0x1b4) = 0;
          *(undefined8 *)((long)puVar6 + 0x1ac) = 0xffffffff;
          lVar3 = lVar8 + uVar9 * 0x38;
          puVar6[0x2b] = 0;
          puVar6[0x1b] = 0;
          puVar6[0x2c] = 0;
          puVar6[0x2d] = 0;
          uVar4 = *(undefined8 *)(lVar3 + 0xc);
          *(undefined8 *)((long)puVar6 + 0x174) = *(undefined8 *)(lVar3 + 4);
          *(undefined8 *)((long)puVar6 + 0x17c) = uVar4;
          *puVar10 = puVar6;
        }
        lVar8 = lVar8 + uVar9 * 0x38;
        puVar6[0x23] = pbVar7;
        uVar4 = *(undefined8 *)(lVar8 + 0xc);
        *(undefined8 *)((long)puVar6 + 0x174) = *(undefined8 *)(lVar8 + 4);
        *(undefined8 *)((long)puVar6 + 0x17c) = uVar4;
        FUN_02fb3fb4(puVar6);
        *(uint *)(puVar6 + 0x2e) = (uint)*pbVar7;
        *(byte *)(param_4 + 0x20) = *(byte *)(param_4 + 0x20) | 4;
        *(undefined8 **)(param_4 + 0x28) = puVar6;
      }
      goto LAB_02fae8d4;
    }
  }
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
LAB_02fae8d4:
  if ((*(char *)((long)param_1 + 0x2c) != '\0') && ((*(byte *)(param_4 + 0x20) >> 1 & 1) != 0)) {
    *(byte *)(param_4 + 0x20) = *(byte *)(param_4 + 0x20) | 4;
    *(undefined8 *)(param_4 + 0x28) = *(undefined8 *)(param_1[1] + 0x28);
  }
  return;
}



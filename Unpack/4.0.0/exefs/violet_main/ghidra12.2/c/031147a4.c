/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031147a4; name: FUN_031147a4
 */


void FUN_031147a4(long *param_1,undefined8 *param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint local_10f4;
  undefined8 local_10f0;
  undefined *puStack_10e8;
  uint *local_10e0;
  undefined1 *local_10d8;
  undefined8 uStack_10d0;
  undefined1 local_10c8;
  undefined4 local_1048;
  undefined1 local_1040 [4096];
  
  local_10d8 = local_1040;
  local_10f4 = param_4;
  if ((int)param_4 < 0) {
    local_10e0 = &local_10f4;
    local_1040[0] = 0;
    local_10f0 = 1;
    puStack_10e8 = &DAT_044e9048;
    local_1048 = 1;
    local_10c8 = 0;
    uStack_10d0 = 0x8000100000000001;
    FUN_031c8aac(&local_10d8,"Invalid requestedCapacity {}",&local_10f0);
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x159079fc,
                 "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x14,local_10d8);
  }
  if ((param_3 == (undefined4 *)0x0) || (uVar1 = *(uint *)(param_2 + 1), (int)param_4 <= (int)uVar1)
     ) {
    uVar1 = param_4;
    if ((int)*(uint *)((long)param_2 + 0xc) <= (int)param_4) {
      uVar1 = *(uint *)((long)param_2 + 0xc);
    }
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x18))(param_1,(ulong)param_4 << 4);
    puVar3 = (undefined4 *)*param_2;
    if (0 < (int)uVar1) {
      puVar4 = puVar2;
      if (uVar1 != 1) {
        iVar5 = -(uVar1 & 0xfffffffe);
        do {
          *puVar4 = *puVar3;
          *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(puVar3 + 2);
          *(undefined8 *)(puVar3 + 2) = 0;
          puVar4[4] = puVar3[4];
          *(undefined8 *)(puVar4 + 6) = *(undefined8 *)(puVar3 + 6);
          *(undefined8 *)(puVar3 + 6) = 0;
          puVar4 = puVar4 + 8;
          puVar3 = puVar3 + 8;
          iVar5 = iVar5 + 2;
        } while (iVar5 != 0);
      }
      if ((uVar1 & 1) != 0) {
        *puVar4 = *puVar3;
        *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(puVar3 + 2);
        *(undefined8 *)(puVar3 + 2) = 0;
      }
      puVar3 = (undefined4 *)*param_2;
    }
    (**(code **)(*param_1 + 0x20))(param_1,puVar3,(long)*(int *)((long)param_2 + 0xc) << 4);
    if (0x7ffffffe < param_4) {
      param_4 = 0x7fffffff;
    }
    *param_2 = puVar2;
  }
  else {
    puVar3 = (undefined4 *)*param_2;
    if (0 < (int)uVar1) {
      puVar2 = param_3;
      if (uVar1 != 1) {
        iVar5 = -(uVar1 & 0xfffffffe);
        do {
          *puVar2 = *puVar3;
          *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar3 + 2);
          *(undefined8 *)(puVar3 + 2) = 0;
          puVar2[4] = puVar3[4];
          *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(puVar3 + 6);
          *(undefined8 *)(puVar3 + 6) = 0;
          puVar2 = puVar2 + 8;
          puVar3 = puVar3 + 8;
          iVar5 = iVar5 + 2;
        } while (iVar5 != 0);
      }
      if ((uVar1 & 1) != 0) {
        *puVar2 = *puVar3;
        *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar3 + 2);
        *(undefined8 *)(puVar3 + 2) = 0;
      }
      puVar3 = (undefined4 *)*param_2;
    }
    (**(code **)(*param_1 + 0x20))
              (param_1,puVar3,((ulong)*(uint *)((long)param_2 + 0xc) & 0x7fffffff) << 4);
    *param_2 = param_3;
    param_4 = param_4 | 0x80000000;
  }
  *(uint *)((long)param_2 + 0xc) = param_4;
  return;
}



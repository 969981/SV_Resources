/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f71044; name: FUN_02f71044
 */


void FUN_02f71044(uint *param_1,uint param_2,long *param_3,int param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  ulong uVar11;
  undefined1 auStack_2990 [448];
  undefined *local_27d0;
  undefined8 uStack_27c8;
  undefined8 local_27c0;
  undefined8 uStack_27b8;
  undefined1 *local_27b0;
  undefined8 uStack_27a8;
  undefined8 local_27a0;
  undefined1 local_2798;
  char acStack_2790 [10032];
  
  uVar3 = (**(code **)(*param_3 + 0x10))(param_3);
  if (uVar3 != 0) {
    if (param_4 == 0) {
      uVar11 = 0;
      puVar10 = param_1 + 2;
      puVar1 = PTR_DAT_047e34b8 + 0x10;
      do {
        if ((uVar3 & 1) != 0) {
          puVar9 = param_1 + uVar11 * 0x42 + 1;
          uVar7 = *puVar9;
          if (0xf < (int)uVar7) {
            uStack_27c8 = 0xffffffff;
            local_27c0 = 1;
            uStack_27b8 = 0;
            local_2798 = 0;
            uStack_27a8 = 0;
            local_27a0 = 0x1bf;
            local_27d0 = puVar1;
            local_27b0 = auStack_2990;
            memset(auStack_2990,0,0x1c0);
            FUN_0322bd4c(&local_27d0,"Too many modifiers registered to callback ",0x2a);
            FUN_031c68c0(acStack_2790,0x2728,0x2728,&DAT_03c596d4,uVar11 & 0xffffffff);
            sVar6 = strlen(acStack_2790);
            (**(code **)(local_27d0 + 0x28))(&local_27d0,acStack_2790,(long)(int)sVar6);
            iVar5 = FUN_03226f50(0xf06edfe1,auStack_2990,
                                 "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Physics/Physics/Dynamics/World/ModifierManager/hknpModifierManager.cpp"
                                 ,0x38);
            if (iVar5 != 0) {
              CallSupervisor(0x26);
            }
            uVar7 = *puVar9;
          }
          *puVar9 = uVar7 + 1;
          if (0 < (int)uVar7) {
            lVar8 = (ulong)uVar7 + 1;
            puVar9 = puVar10 + (ulong)uVar7 * 4;
            do {
              uVar7 = uVar7 - 1;
              lVar8 = lVar8 + -1;
              uVar2 = *(undefined8 *)(param_1 + uVar11 * 0x42 + (ulong)uVar7 * 4 + 4);
              *(undefined8 *)puVar9 =
                   *(undefined8 *)(param_1 + uVar11 * 0x42 + (ulong)uVar7 * 4 + 2);
              *(undefined8 *)(puVar9 + 2) = uVar2;
              puVar9 = puVar9 + -4;
            } while (1 < lVar8);
          }
          puVar9 = param_1 + uVar11 * 0x42;
          *puVar9 = *puVar9 | param_2;
          puVar9[(long)(int)uVar7 * 4 + 2] = param_2;
          *(long **)(puVar9 + (long)(int)uVar7 * 4 + 4) = param_3;
        }
        uVar3 = uVar3 >> 1;
        uVar11 = uVar11 + 1;
        puVar10 = puVar10 + 0x42;
      } while (uVar3 != 0);
    }
    else {
      iVar5 = 0;
      puVar1 = PTR_DAT_047e34b8 + 0x10;
      do {
        if ((uVar3 & 1) != 0) {
          uVar7 = param_1[1];
          if (0xf < (int)uVar7) {
            uStack_27c8 = 0xffffffff;
            local_27c0 = 1;
            uStack_27b8 = 0;
            local_2798 = 0;
            uStack_27a8 = 0;
            local_27a0 = 0x1bf;
            local_27d0 = puVar1;
            local_27b0 = auStack_2990;
            memset(auStack_2990,0,0x1c0);
            FUN_0322bd4c(&local_27d0,"Too many modifiers registered to callback ",0x2a);
            FUN_031c68c0(acStack_2790,0x2728,0x2728,&DAT_03c596d4,iVar5);
            sVar6 = strlen(acStack_2790);
            (**(code **)(local_27d0 + 0x28))(&local_27d0,acStack_2790,(long)(int)sVar6);
            iVar4 = FUN_03226f50(0xf06edfe1,auStack_2990,
                                 "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Physics/Physics/Dynamics/World/ModifierManager/hknpModifierManager.cpp"
                                 ,0x38);
            if (iVar4 != 0) {
              CallSupervisor(0x26);
            }
            uVar7 = param_1[1];
          }
          *param_1 = *param_1 | param_2;
          param_1[1] = uVar7 + 1;
          param_1[(long)(int)uVar7 * 4 + 2] = param_2;
          *(long **)(param_1 + (long)(int)uVar7 * 4 + 4) = param_3;
        }
        uVar3 = uVar3 >> 1;
        param_1 = param_1 + 0x42;
        iVar5 = iVar5 + 1;
      } while (uVar3 != 0);
    }
  }
  return;
}



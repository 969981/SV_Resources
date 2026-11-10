/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031cf3b4; name: FUN_031cf3b4
 */


ulong FUN_031cf3b4(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long local_48;
  
  if (*(ulong *)(param_1 + 0x28) < *param_2 + 0x40U) {
    *(int *)(*(long *)(param_1 + 0x30) + 0x20) = *(int *)(*(long *)(param_1 + 0x30) + 0x20) + 1;
    local_48 = *param_2 + 0x44;
    lVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(*(long **)(param_1 + 0x10),&local_48);
    uVar5 = lVar1 + 0x40U & 0xffffffffffffffc0;
    *(int *)(uVar5 - 4) = (int)uVar5 - (int)lVar1;
    if (lVar1 == 0) {
LAB_031cf558:
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0xdeadf00d,
                   "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Memory/hkDefaultMemoryImpl.cpp"
                   ,0x21,"Out of memory");
    }
    *param_2 = local_48 + -0x44;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x50);
    if (lVar1 == 0) {
      *(int *)(*(long *)(param_1 + 0x30) + 0x20) = *(int *)(*(long *)(param_1 + 0x30) + 0x20) + 1;
      lVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
      if (lVar1 == 0) goto LAB_031cf558;
    }
    else {
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    plVar6 = *(long **)(param_1 + 0x30);
    uVar5 = lVar1 + 0x3fU & 0xffffffffffffffc0;
    if ((int)plVar6[3] != 0) {
      iVar2 = (int)plVar6[1];
      lVar3 = (long)iVar2;
      if ((int)(*(uint *)((long)plVar6 + 0xc) & 0x7fffffff) <= iVar2) {
        FUN_031cfc9c(plVar6,*(undefined8 *)(param_1 + 0x20),lVar3 + 1);
        iVar2 = (int)plVar6[1];
      }
      puVar4 = (undefined8 *)(*plVar6 + (long)iVar2 * 0x18);
      *(int *)(plVar6 + 1) = (int)(lVar3 + 1);
      puVar4[1] = uVar5;
      *puVar4 = *(undefined8 *)(param_1 + 0x38);
      *(int *)(puVar4 + 2) = *(int *)(*(long *)(param_1 + 0x30) + 0x18) + -1;
      plVar6 = *(long **)(param_1 + 0x30);
      *(ulong *)(param_1 + 0x48) = uVar5;
    }
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x28) + lVar1;
    *(ulong *)(param_1 + 0x38) = *param_2 + uVar5;
    iVar2 = (int)plVar6[3];
    lVar3 = (long)iVar2;
    if ((int)(*(uint *)((long)plVar6 + 0x1c) & 0x7fffffff) <= iVar2) {
      FUN_031cfdc8(plVar6 + 2,*(undefined8 *)(param_1 + 0x20),lVar3 + 1);
      iVar2 = (int)plVar6[3];
    }
    *(long *)(plVar6[2] + (long)iVar2 * 8) = lVar1;
    *(int *)(plVar6 + 3) = (int)(lVar3 + 1);
  }
  return uVar5;
}



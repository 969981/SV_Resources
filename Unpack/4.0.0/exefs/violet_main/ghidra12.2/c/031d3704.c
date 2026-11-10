/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d3704; name: FUN_031d3704
 */


int FUN_031d3704(undefined8 param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined *puVar2;
  char cVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_240 [448];
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  
  puVar2 = PTR_DAT_047e4ed8;
  if ((((*(long *)(param_2 + 0x14) == 0) && (*(long *)(param_2 + 0x16) == 0)) ||
      ((*(long *)(param_3 + 0x14) == 0 && (*(long *)(param_3 + 0x16) == 0)))) &&
     ((plVar4 = *(long **)PTR_DAT_047e4ed8, plVar4 == (long *)0x0 ||
      (cVar3 = (**(code **)(*plVar4 + 0x30))(plVar4,0), cVar3 != '\0')))) {
    local_70 = 1;
    uStack_68 = 0;
    uStack_58 = 0;
    local_80 = PTR_DAT_047e34b8 + 0x10;
    uStack_78 = 0xffffffff;
    local_50 = 0x1bf;
    local_48 = 0;
    local_60 = auStack_240;
    memset(auStack_240,0,0x1c0);
    FUN_0322bd4c(&local_80,
                 "The time of allocations was not captured, sorting by allocation number only",0x4b)
    ;
    FUN_03226c50(0,auStack_240,
                 "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Memory/hkMemorySnapshot.cpp"
                 ,0x7eb);
    plVar4 = *(long **)puVar2;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0,0);
    }
  }
  iVar5 = 0;
  if (*(long *)(param_2 + 0x14) != 0) {
    if (*(long *)(param_3 + 0x14) == 0) {
      iVar5 = 0;
    }
    else {
      uVar6 = *(ulong *)(*(long *)(param_2 + 0x14) + 0x18);
      uVar7 = *(ulong *)(*(long *)(param_3 + 0x14) + 0x18);
      iVar5 = 1;
      if (uVar6 <= uVar7) {
        iVar5 = -(uint)(uVar6 < uVar7);
      }
    }
  }
  iVar1 = *param_2 - *param_3;
  if (iVar5 != 0) {
    iVar1 = iVar5;
  }
  return iVar1;
}



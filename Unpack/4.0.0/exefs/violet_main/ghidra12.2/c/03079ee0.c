/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03079ee0; name: FUN_03079ee0
 */


void FUN_03079ee0(long param_1,int *param_2,int param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_220 [448];
  undefined *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 local_28;
  
  local_40 = auStack_220;
  cVar2 = *(char *)(param_1 + 0x18);
  if (cVar2 == '\x02') {
    lVar1 = *(long *)(param_1 + 0x38) + (long)*param_2 * 0x100;
    *(int *)(lVar1 + 0x24) = *(int *)(lVar1 + 0x24) + param_3;
  }
  else if (cVar2 == '\x01') {
    local_50 = 1;
    uStack_48 = 0;
    uStack_38 = 0;
    local_60 = PTR_DAT_047e34b8 + 0x10;
    uStack_58 = 0xffffffff;
    local_30 = 0x1bf;
    local_28 = 0;
    memset(auStack_220,0,0x1c0);
    FUN_0322bd4c(&local_60,"Cannot unload instances in a temporary streaming collection.",0x3c);
    iVar3 = FUN_03226f50(0x66cece4c,auStack_220,
                         "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Ai/Pathfinding/NavMesh/Streaming/hkaiStreamingCollection.cpp"
                         ,0x127);
    if (iVar3 != 0) {
      CallSupervisor(0x26);
    }
  }
  else if (cVar2 == '\0') {
    lVar1 = *(long *)(param_1 + 0x38) + (long)*param_2 * 0x100;
    *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + param_3;
    lVar1 = *(long *)(param_1 + 0x38) + (long)*param_2 * 0x100;
    if (*(int *)(lVar1 + 0x20) == 0) {
      *(undefined4 *)(lVar1 + 0x1c) = 0xffffffff;
    }
  }
  return;
}



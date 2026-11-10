/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008b1f4c; name: FUN_008b1f4c
 */


void FUN_008b1f4c(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [48];
  long local_58;
  undefined8 local_30;
  byte local_28;
  
  FUN_008a729c();
  if (((*(short *)((long)param_1 + 0x112) == 0) || (param_1[0x1e] == 0)) || (param_1[0x28] == 0)) {
    *(byte *)((long)param_1 + 0x5c) = *(byte *)((long)param_1 + 0x5c) & 0xef;
  }
  else {
    uVar1 = FUN_008a8660(param_1);
    if ((uVar1 & 1) == 0) {
      FUN_0088474c(param_1[0x29],*(undefined8 *)(param_2 + 0xd0));
      FUN_008a15fc(param_1[0x28],param_2);
      if ((*(ushort *)((long)param_1 + 0x114) >> 2 & 1) == 0) {
        FUN_008b1c34(param_1,param_2,0);
        return;
      }
      *(ushort *)((long)param_1 + 0x114) = *(ushort *)((long)param_1 + 0x114) & 0xfffb;
      if (*(char *)((long)param_1 + 0x117) == '\0') {
        FUN_0088b138(auStack_88);
        local_28 = *(byte *)((long)param_1 + 0x115) & 1;
        (**(code **)(*param_1 + 0x148))(param_1,auStack_88);
        local_58 = param_1[0x29];
        FUN_008845b8(auStack_88);
        puVar2 = (undefined8 *)param_1[0x27];
        if (puVar2 == (undefined8 *)0x0) {
          FUN_010496e4(auStack_88,param_1[0x1b],*(undefined2 *)((long)param_1 + 0x112));
        }
        else {
          FUN_0088b9ac(auStack_88,param_1[0x1b],*(undefined2 *)((long)param_1 + 0x112),0x10,
                       puVar2[1],*puVar2);
        }
        FUN_008845c4(auStack_88);
        if (*(char *)((long)param_1 + 0x114) < '\0') {
          FUN_008b2494(param_1,local_30);
        }
        thunk_FUN_00884284(auStack_88);
      }
      else {
        FUN_00889974(auStack_88);
        local_28 = *(byte *)((long)param_1 + 0x115) & 1;
        (**(code **)(*param_1 + 0x150))(param_1,auStack_88);
        local_58 = param_1[0x29];
        FUN_008845b8(auStack_88);
        puVar2 = (undefined8 *)param_1[0x27];
        if (puVar2 == (undefined8 *)0x0) {
          FUN_0088a228(auStack_88,param_1[0x1b],*(undefined2 *)((long)param_1 + 0x112));
        }
        else {
          FUN_0088a2b8(auStack_88,param_1[0x1b],*(undefined2 *)((long)param_1 + 0x112),0x10,
                       puVar2[1],*puVar2);
        }
        FUN_008845c4(auStack_88);
        if (*(char *)((long)param_1 + 0x114) < '\0') {
          FUN_008b212c(param_1,local_30);
        }
        thunk_FUN_00884284(auStack_88);
      }
      FUN_008b1c34(param_1,param_2,1);
      return;
    }
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016b7fb0; name: FUN_016b7fb0
 */


ulong FUN_016b7fb0(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar3 = DAT_048af950;
  if (DAT_048af950 != 0) {
    uVar7 = 0;
    do {
      if (*(long *)(DAT_048af948 + uVar7 * 8) == 0) goto LAB_016b8084;
      uVar1 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar1;
    } while (DAT_048af950 != uVar1);
  }
  if (DAT_048af954 <= DAT_048af950) {
    iVar4 = DAT_048af954 + (DAT_048af954 >> 1);
    if (DAT_048af954 == 0) {
      iVar4 = 1;
    }
    uVar1 = iVar4 + DAT_048af954;
    lVar5 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(7,DAT_048af948,(ulong)uVar1 << 3);
    if (lVar5 == 0) {
      return 0xffffffff;
    }
    DAT_048af948 = lVar5;
    DAT_048af954 = uVar1;
  }
  if (uVar3 < DAT_048af954) {
    uVar7 = (ulong)DAT_048af950;
    DAT_048af950 = DAT_048af950 + 1;
    if (DAT_048af948 != 0) {
      *(undefined8 *)(DAT_048af948 + uVar7 * 8) = 0;
      uVar7 = (ulong)(DAT_048af950 - 1);
      *(undefined8 *)(DAT_048af948 + (ulong)DAT_048af950 * 8 + -8) = 0;
LAB_016b8084:
      if ((*(uint *)(param_1 + 0x18) & 1) == 0) {
        if ((*(uint *)(param_1 + 0x18) >> 1 & 1) == 0) {
          return 0xffffffff;
        }
        plVar6 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(7,0x650);
        puVar2 = PTR_DAT_047e6eb8;
        if (plVar6 == (long *)0x0) {
          return 0xffffffff;
        }
        plVar6[0x3a] = 0;
        *(undefined4 *)(plVar6 + 0x3c) = 0;
        *plVar6 = (long)(puVar2 + 0x10);
        nn::os::InitializeMutex((MutexType *)(plVar6 + 0x3d),true,0);
        nn::os::InitializeConditionVariable((ConditionVariableType *)(plVar6 + 0x41));
        *(undefined4 *)((long)plVar6 + 0x21c) = 0;
        plVar6[0x42] = 0;
        *(undefined1 *)(plVar6 + 0x43) = 0;
        nn::os::InitializeMutex((MutexType *)(plVar6 + 0x44),true,0);
        nn::os::InitializeConditionVariable((ConditionVariableType *)(plVar6 + 0x48));
        puVar2 = PTR_DAT_047e6ec0;
        *(undefined1 *)(plVar6 + 10) = 0;
        plVar6[0x4f] = 0;
        *plVar6 = (long)(puVar2 + 0x10);
        plVar6[0x50] = 0;
        nn::os::InitializeMutex((MutexType *)(plVar6 + 0x51),true,0);
        FUN_03440104(plVar6 + 0x55);
        plVar6[0xc2] = param_2;
        *(undefined8 *)((long)plVar6 + 0x624) = 0xffffffff;
        puVar2 = PTR_DAT_047e6ec8;
        *(undefined4 *)(plVar6 + 0xc6) = 0;
        plVar6[199] = 0;
        plVar6[200] = 0;
        plVar6[0xc9] = 0;
        *plVar6 = (long)(puVar2 + 0x10);
        iVar4 = FUN_034416b4(plVar6,param_1,uVar7);
      }
      else {
        plVar6 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(7,0x648);
        puVar2 = PTR_DAT_047e6eb8;
        if (plVar6 == (long *)0x0) {
          return 0xffffffff;
        }
        plVar6[0x3a] = 0;
        *(undefined4 *)(plVar6 + 0x3c) = 0;
        *plVar6 = (long)(puVar2 + 0x10);
        nn::os::InitializeMutex((MutexType *)(plVar6 + 0x3d),true,0);
        nn::os::InitializeConditionVariable((ConditionVariableType *)(plVar6 + 0x41));
        *(undefined4 *)((long)plVar6 + 0x21c) = 0;
        plVar6[0x42] = 0;
        *(undefined1 *)(plVar6 + 0x43) = 0;
        nn::os::InitializeMutex((MutexType *)(plVar6 + 0x44),true,0);
        nn::os::InitializeConditionVariable((ConditionVariableType *)(plVar6 + 0x48));
        puVar2 = PTR_DAT_047e6ec0;
        *(undefined1 *)(plVar6 + 10) = 0;
        plVar6[0x4f] = 0;
        *plVar6 = (long)(puVar2 + 0x10);
        plVar6[0x50] = 0;
        nn::os::InitializeMutex((MutexType *)(plVar6 + 0x51),true,0);
        FUN_03440104(plVar6 + 0x55);
        plVar6[0xc2] = param_2;
        puVar2 = PTR_DAT_047e6ed0;
        *(undefined8 *)((long)plVar6 + 0x624) = 0xffffffff;
        *plVar6 = (long)(puVar2 + 0x10);
        iVar4 = thunk_FUN_0343c2bc(plVar6,param_1,uVar7);
      }
      if (iVar4 == 1) {
        *(long **)(DAT_048af948 + uVar7 * 8) = plVar6;
        return uVar7;
      }
      (**(code **)(*plVar6 + 0x30))(plVar6);
    }
  }
  return 0xffffffff;
}



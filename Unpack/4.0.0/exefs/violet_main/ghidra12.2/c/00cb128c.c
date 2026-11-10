/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cb128c; name: FUN_00cb128c
 */


void FUN_00cb128c(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined2 uVar7;
  size_t sVar8;
  void *__dest;
  long *plVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  char *__s;
  ulong local_c0;
  long *local_b8;
  undefined1 uStack_a7;
  undefined4 local_a6;
  undefined2 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined1 local_90;
  undefined2 local_8e;
  undefined2 local_86;
  undefined4 local_64;
  
  puVar11 = PTR_DAT_047d1a08;
  plVar9 = (long *)(*param_3 + 0x20);
  lVar10 = *plVar9;
  iVar3 = *(int *)(*param_3 + 0x28);
  local_c0 = 0x30;
  lVar2 = 0;
  if (lVar10 != 0) {
    lVar2 = lVar10 + (long)plVar9;
  }
  plVar9 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_c0,0);
  if (*(code **)(puVar11 + 0x10) != (code *)0x0) {
    (**(code **)(puVar11 + 0x10))(plVar9,"hknpMaterialPalette");
  }
  plVar9[2] = 1;
  *(undefined2 *)(plVar9 + 3) = 0xf101;
  *plVar9 = (long)(PTR_DAT_047ddb90 + 0x10);
  plVar9[1] = 0xffffffff;
  plVar9[4] = 0;
  plVar9[5] = 0;
  *param_1 = plVar9;
  nn::os::LockMutex((MutexType *)(param_2 + 0x120));
  if (iVar3 != 0) {
    uVar12 = 0;
    do {
      memset(&local_c0,0,0x50);
      local_64 = 0;
      FUN_00cb06cc(&uStack_a7,&local_64);
      uVar6 = local_c0;
      local_a6 = 0x3f003f00;
      local_a0 = 0x201;
      local_98 = 0x3f8000007f7fffee;
      local_9c = 0x3d4ccccd;
      local_8e = 0x3f80;
      local_86 = 0x40a0;
      local_90 = 0;
      __s = (char *)(*(ulong *)(lVar2 + (long)(int)uVar12 * 0x18) & 0xfffffffffffffffe);
      if ((char *)(local_c0 & 0xfffffffffffffffe) != __s) {
        if (__s == (char *)0x0) {
          local_c0 = 0;
        }
        else {
          sVar8 = strlen(__s);
          sVar8 = (size_t)((int)sVar8 + 1);
          __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar8);
          puVar11 = PTR_DAT_047d1a08;
          memcpy(__dest,__s,sVar8);
          local_c0 = (ulong)__dest | 1;
        }
        if ((uVar6 & 1) != 0) {
          (**(code **)(puVar11 + 8))(0,uVar6 - 1,0);
        }
      }
      uVar7 = (**(code **)(**(long **)(param_2 + 8) + 0x78))(*(long **)(param_2 + 8),&local_c0);
      FUN_00cb1530(plVar9,uVar7);
      if ((local_b8 != (long *)0x0) && (local_b8[1] != 0)) {
        plVar1 = local_b8 + 2;
        do {
          lVar10 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*local_b8 + 0x18))();
        }
      }
      if ((local_c0 & 1) != 0) {
        (**(code **)(puVar11 + 8))(0,local_c0 - 1,0);
      }
      uVar12 = (ulong)((int)uVar12 + 1);
    } while (uVar12 < (ulong)(long)iVar3);
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x120));
  return;
}



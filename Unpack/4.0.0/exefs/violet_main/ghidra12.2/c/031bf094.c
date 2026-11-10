/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031bf094; name: FUN_031bf094
 */


void FUN_031bf094(undefined8 *param_1,long *param_2,long *param_3)

{
  ThreadType *pTVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  size_t sVar5;
  void *pvVar6;
  uint uVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  char *__s;
  ulong local_38;
  
  puVar2 = PTR_DAT_047d1a08;
  local_38 = 0x250;
  plVar4 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
  pcVar8 = *(code **)(puVar2 + 0x10);
  if (pcVar8 != (code *)0x0) {
    (*pcVar8)(plVar4,"NxThreadImpl");
  }
  *(int *)(plVar4 + 2) = (int)param_2[2];
  *plVar4 = (long)&PTR_FUN_046a3dd8;
  plVar4[1] = 0;
  plVar4[3] = *param_3;
  plVar4[4] = param_3[1];
  uVar10 = param_3[9];
  plVar4[0xc] = uVar10;
  if (1 < uVar10) {
    plVar4[4] = (long)(plVar4 + 5);
    (*(code *)param_3[9])(param_3[1]);
  }
  param_3[9] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  __s = (char *)*param_2;
  plVar4[0xd] = 0;
  if (__s != (char *)0x0) {
    sVar5 = strlen(__s);
    sVar5 = (size_t)((int)sVar5 + 1);
    pvVar6 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar5);
    memcpy(pvVar6,__s,sVar5);
    plVar4[0xd] = (ulong)pvVar6 | 1;
  }
  *(undefined4 *)(plVar4 + 0xe) = 1;
  plVar4[0x47] = 0;
  plVar4[0x48] = 0;
  *(undefined4 *)(plVar4 + 0x49) = 0xffffffff;
  *(undefined1 *)((long)plVar4 + 0x24c) = 0;
  uVar10 = 0x20000;
  if (param_2[1] != 0) {
    uVar10 = param_2[1];
  }
  local_38 = uVar10;
  pvVar6 = (void *)(**(code **)puVar2)(0,&local_38,0x1000);
  plVar4[0x47] = (long)pvVar6;
  pTVar1 = (ThreadType *)(plVar4 + 0xf);
  if (*(uint *)(param_2 + 2) < 5) {
    iVar3 = *(int *)(&DAT_03cb1e88 + (long)(int)*(uint *)(param_2 + 2) * 4);
  }
  else {
    iVar3 = 0x10;
  }
  iVar3 = nn::os::CreateThread(pTVar1,FUN_031bf2d4,plVar4,pvVar6,uVar10,iVar3);
  if (iVar3 == 0) {
    *(undefined1 *)((long)plVar4 + 0x24c) = 1;
    if (*param_2 != 0) {
      nn::os::SetThreadNamePointer(pTVar1,(char *)(plVar4[0xd] & 0xfffffffffffffffe));
    }
    plVar4[0x48] = param_2[3];
    uVar10 = nn::os::GetThreadAvailableCoreMask();
    uVar7 = *(uint *)(plVar4 + 0x49);
    uVar9 = plVar4[0x48] & uVar10;
    if ((uVar7 == 0xffffffff) || (uVar11 = 1L << ((ulong)uVar7 & 0x3f), (uVar11 & uVar10) == 0)) {
      if (uVar9 != 0) {
        uVar10 = uVar9;
      }
      uVar7 = 0xffffffff;
    }
    else {
      uVar10 = uVar9 | uVar11;
    }
    nn::os::SetThreadCoreMask(pTVar1,uVar7,uVar10);
    plVar4[1] = (long)pTVar1;
    nn::os::StartThread(pTVar1);
    *param_1 = plVar4;
  }
  else {
    *param_1 = 0;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  return;
}



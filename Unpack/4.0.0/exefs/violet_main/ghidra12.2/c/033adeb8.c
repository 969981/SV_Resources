/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033adeb8; name: FUN_033adeb8
 */


undefined8 FUN_033adeb8(undefined8 *param_1,char *param_2)

{
  ulong uVar1;
  undefined1 *__dest;
  void *pvVar2;
  size_t sVar3;
  size_t sVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  undefined1 auStack_150 [256];
  
  puVar7 = (undefined8 *)*param_1;
  __dest = (undefined1 *)*puVar7;
  if ((undefined1 *)puVar7[1] < __dest + 1) {
    plVar6 = (long *)puVar7[6];
    if (plVar6 == (long *)0x0) {
      sVar3 = (long)puVar7[1] - (long)__dest;
      memcpy(__dest,&DAT_03c67c74,sVar3);
      *puVar7 = puVar7[1];
    }
    else {
      sVar3 = (**(code **)(*plVar6 + 0x30))(plVar6,puVar7,&DAT_03c67c74,1);
    }
    if (sVar3 != 1) {
      return 0x80040200;
    }
  }
  else {
    *__dest = 10;
    *puVar7 = __dest + 1;
  }
  iVar5 = *(int *)(param_1 + 1) << 1;
  if (0x7f < *(int *)(param_1 + 1)) {
    iVar5 = 0x100;
  }
  sVar3 = (size_t)iVar5;
  memset(auStack_150,0x20,sVar3);
  if (iVar5 != 0) {
    puVar8 = (ulong *)*param_1;
    pvVar2 = (void *)*puVar8;
    if (puVar8[1] < (long)pvVar2 + sVar3) {
      plVar6 = (long *)puVar8[6];
      if (plVar6 == (long *)0x0) {
        sVar4 = puVar8[1] - (long)pvVar2;
        memcpy(pvVar2,auStack_150,sVar4);
        *puVar8 = puVar8[1];
      }
      else {
        sVar4 = (**(code **)(*plVar6 + 0x30))(plVar6,puVar8,auStack_150,sVar3);
      }
      if (sVar4 != sVar3) {
        return 0x80040200;
      }
    }
    else {
      memcpy(pvVar2,auStack_150,sVar3);
      *puVar8 = (long)pvVar2 + sVar3;
    }
  }
  sVar3 = strlen(param_2);
  puVar8 = (ulong *)*param_1;
  sVar4 = (size_t)(int)sVar3;
  pvVar2 = (void *)*puVar8;
  uVar1 = (long)pvVar2 + (long)(int)sVar3;
  if (puVar8[1] < uVar1) {
    plVar6 = (long *)puVar8[6];
    if (plVar6 == (long *)0x0) {
      sVar3 = puVar8[1] - (long)pvVar2;
      memcpy(pvVar2,param_2,sVar3);
      *puVar8 = puVar8[1];
    }
    else {
      sVar3 = (**(code **)(*plVar6 + 0x30))(plVar6,puVar8,param_2,sVar4);
    }
    if (sVar3 != sVar4) {
      return 0x80040200;
    }
  }
  else {
    memcpy(pvVar2,param_2,sVar4);
    *puVar8 = uVar1;
  }
  return 0;
}



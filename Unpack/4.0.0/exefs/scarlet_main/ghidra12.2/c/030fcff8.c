/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030fcff8; name: FUN_030fcff8
 */


void FUN_030fcff8(long param_1,int param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  void *__src;
  void *__dest;
  long lVar11;
  long lVar12;
  undefined *local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  int local_b0;
  int iStack_ac;
  long local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  piVar8 = (int *)(*(long *)(param_1 + 0xb0) + (long)param_2 * 0x60);
  lVar11 = *(long *)(param_1 + 0xa0);
  iVar3 = *piVar8;
  plVar6 = *(long **)(piVar8 + 0x14);
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar1 = plVar6 + 2;
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
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  lVar10 = (long)*(int *)(param_1 + 0xb8) + -1;
  iVar7 = (int)lVar10;
  *(int *)(param_1 + 0xb8) = iVar7;
  if (iVar7 != param_2) {
    lVar12 = (long)param_2;
    __src = (void *)(*(long *)(param_1 + 0xb0) + lVar10 * 0x60);
    __dest = (void *)(*(long *)(param_1 + 0xb0) + lVar12 * 0x60);
    memcpy(__dest,__src,0x30);
    uVar2 = *(undefined8 *)((long)__src + 0x40);
    *(undefined8 *)((long)__dest + 0x38) = *(undefined8 *)((long)__src + 0x38);
    *(undefined8 *)((long)__dest + 0x30) = *(undefined8 *)((long)__src + 0x30);
    uVar9 = *(undefined8 *)((long)__src + 0x48);
    *(undefined8 *)((long)__dest + 0x40) = uVar2;
    *(undefined8 *)((long)__dest + 0x48) = uVar9;
    *(undefined8 *)((long)__dest + 0x50) = *(undefined8 *)((long)__src + 0x50);
    *(undefined8 *)((long)__src + 0x50) = 0;
    local_b0 = *(int *)(param_1 + 0xb8);
    if ((param_2 < local_b0) && (*(char *)(*(long *)(param_1 + 0xb0) + lVar12 * 0x60 + 8) != '\0'))
    {
      lVar10 = *(long *)(param_1 + 0xb0) + lVar12 * 0x60;
      local_98 = 0xffffffff;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = PTR_DAT_047e4fa0 + 0x10;
      local_80 = *(undefined8 *)(lVar11 + (long)iVar3 * 0x60);
      uStack_68 = *(undefined8 *)(lVar10 + 0x18);
      local_70 = *(undefined8 *)(lVar10 + 0x10);
      local_a8 = *(long *)(param_1 + 0x90) + (long)*(int *)(lVar10 + 4) * 0xd0;
      uStack_58 = *(undefined8 *)(lVar10 + 0x28);
      local_60 = *(undefined8 *)(lVar10 + 0x20);
      local_d8 = 0;
      local_e0 = &DAT_0464dda8;
      uStack_c8 = *(undefined8 *)(lVar10 + 0x18);
      local_d0 = *(undefined8 *)(lVar10 + 0x10);
      uStack_b8 = *(undefined8 *)(lVar10 + 0x28);
      local_c0 = *(undefined8 *)(lVar10 + 0x20);
      iStack_ac = param_2;
      (**(code **)(**(long **)(local_a8 + 0x10) + 0x48))
                (*(long **)(local_a8 + 0x10),&local_a0,&local_e0);
    }
  }
  return;
}



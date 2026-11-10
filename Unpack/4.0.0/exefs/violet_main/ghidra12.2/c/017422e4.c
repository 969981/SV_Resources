/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017422e4; name: FUN_017422e4
 */


void * FUN_017422e4(void *param_1,void *param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  memcpy(param_1,param_2,0x28);
  lVar6 = 0;
  do {
    plVar5 = *(long **)((long)param_2 + lVar6 + 0x28);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    plVar2 = *(long **)((long)param_1 + lVar6 + 0x28);
    *(long **)((long)param_1 + lVar6 + 0x28) = plVar5;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    *(undefined8 *)((long)param_1 + lVar6 + 0x30) = *(undefined8 *)((long)param_2 + lVar6 + 0x30);
    *(undefined8 *)((long)param_1 + lVar6 + 0x38) = *(undefined8 *)((long)param_2 + lVar6 + 0x38);
    *(undefined8 *)((long)param_1 + lVar6 + 0x40) = *(undefined8 *)((long)param_2 + lVar6 + 0x40);
    plVar5 = *(long **)((long)param_2 + lVar6 + 0x48);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    plVar2 = *(long **)((long)param_1 + lVar6 + 0x48);
    *(long **)((long)param_1 + lVar6 + 0x48) = plVar5;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    lVar1 = lVar6 + 0x30;
    *(undefined4 *)((long)param_1 + lVar6 + 0x50) = *(undefined4 *)((long)param_2 + lVar6 + 0x50);
    lVar6 = lVar1;
  } while (lVar1 != 0x210);
  uVar4 = *(undefined8 *)((long)param_2 + 0x240);
  *(undefined8 *)((long)param_1 + 0x238) = *(undefined8 *)((long)param_2 + 0x238);
  pcVar3 = *(code **)((long)param_1 + 600);
  *(undefined8 *)((long)param_1 + 0x240) = uVar4;
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)((long)param_1 + 0x260) = 0;
    *(undefined8 *)((long)param_1 + 0x268) = 0;
    *(undefined8 *)((long)param_1 + 0x250) = 0;
    *(undefined8 *)((long)param_1 + 600) = 0;
    (*pcVar3)((long)param_1 + 0x270);
  }
  if (*(code **)((long)param_2 + 0x260) != (code *)0x0) {
    (**(code **)((long)param_2 + 0x260))((long)param_2 + 0x270,(long)param_1 + 0x270);
    uVar4 = *(undefined8 *)((long)param_2 + 0x268);
    *(undefined8 *)((long)param_1 + 600) = *(undefined8 *)((long)param_2 + 600);
    *(undefined8 *)((long)param_1 + 0x268) = uVar4;
    uVar4 = *(undefined8 *)((long)param_2 + 0x250);
    *(undefined8 *)((long)param_1 + 0x260) = *(undefined8 *)((long)param_2 + 0x260);
    *(undefined8 *)((long)param_1 + 0x250) = uVar4;
  }
  pcVar3 = *(code **)((long)param_1 + 0x2d8);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)((long)param_1 + 0x2e0) = 0;
    *(undefined8 *)((long)param_1 + 0x2e8) = 0;
    *(undefined8 *)((long)param_1 + 0x2d0) = 0;
    *(undefined8 *)((long)param_1 + 0x2d8) = 0;
    (*pcVar3)((long)param_1 + 0x2f0);
  }
  if (*(code **)((long)param_2 + 0x2e0) != (code *)0x0) {
    (**(code **)((long)param_2 + 0x2e0))((long)param_2 + 0x2f0,(long)param_1 + 0x2f0);
    uVar4 = *(undefined8 *)((long)param_2 + 0x2e8);
    *(undefined8 *)((long)param_1 + 0x2d8) = *(undefined8 *)((long)param_2 + 0x2d8);
    *(undefined8 *)((long)param_1 + 0x2e8) = uVar4;
    uVar4 = *(undefined8 *)((long)param_2 + 0x2d0);
    *(undefined8 *)((long)param_1 + 0x2e0) = *(undefined8 *)((long)param_2 + 0x2e0);
    *(undefined8 *)((long)param_1 + 0x2d0) = uVar4;
  }
  pcVar3 = *(code **)((long)param_1 + 0x358);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)((long)param_1 + 0x360) = 0;
    *(undefined8 *)((long)param_1 + 0x368) = 0;
    *(undefined8 *)((long)param_1 + 0x350) = 0;
    *(undefined8 *)((long)param_1 + 0x358) = 0;
    (*pcVar3)((long)param_1 + 0x370);
  }
  if (*(code **)((long)param_2 + 0x360) != (code *)0x0) {
    (**(code **)((long)param_2 + 0x360))((long)param_2 + 0x370,(long)param_1 + 0x370);
    uVar4 = *(undefined8 *)((long)param_2 + 0x368);
    *(undefined8 *)((long)param_1 + 0x358) = *(undefined8 *)((long)param_2 + 0x358);
    *(undefined8 *)((long)param_1 + 0x368) = uVar4;
    uVar4 = *(undefined8 *)((long)param_2 + 0x350);
    *(undefined8 *)((long)param_1 + 0x360) = *(undefined8 *)((long)param_2 + 0x360);
    *(undefined8 *)((long)param_1 + 0x350) = uVar4;
  }
  *(undefined8 *)((long)param_1 + 0x3d0) = *(undefined8 *)((long)param_2 + 0x3d0);
  return param_1;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f71308; name: FUN_02f71308
 */


void FUN_02f71308(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_28;
  
  puVar1 = (undefined1 *)(param_2 + 0x1448);
  uVar2 = *puVar1;
  *puVar1 = 0;
  FUN_02f71044(param_2,0x200,param_1 + 0x18,1);
  FUN_02f71044(param_2,0x1c00,param_1 + 0x20,1);
  FUN_02f71044(param_2,0xe000,param_1 + 0x28,1);
  FUN_02f71044(param_2,0x20000,param_1 + 0x80,1);
  FUN_02f71044(param_2,0x10000,param_1 + 0x70,1);
  FUN_02f71044(param_2,0x40000,param_1 + 0x30,1);
  FUN_02f71044(param_2,0x80000,param_1 + 0x98,1);
  FUN_02f71044(param_2,0x100000,param_1 + 0x78,1);
  FUN_02f71044(param_2,0x200000,param_1 + 0x88,1);
  FUN_02f71044(param_2,0x800000,param_1 + 0x90,1);
  FUN_02f71044(param_2,0x1000000,param_1 + 0xa0,1);
  FUN_02f71044(param_2,0x40,param_1 + 0x38,1);
  FUN_02f71044(param_2,0x80,param_1 + 0x40,1);
  lVar8 = param_1 + 0x1f30;
  FUN_02f71044(param_2,8,lVar8,1);
  FUN_02f71044(param_2,0x10,lVar8,1);
  FUN_02f71044(param_2,1,lVar8,1);
  FUN_02f71044(param_2,2,lVar8,1);
  FUN_02f71044(param_2,4,lVar8,1);
  *(long *)(param_2 + 0x1398) = param_1 + 0x48;
  *(long *)(param_2 + 0x13b0) = param_1 + 0x50;
  *(long *)(param_2 + 0x13a0) = param_1 + 0x58;
  *(long *)(param_2 + 0x13a8) = param_1 + 0x60;
  *(long *)(param_2 + 0x13c8) = param_1 + 200;
  *(long *)(param_2 + 0x13d0) = param_1 + 0xb8;
  *(long *)(param_2 + 0x13f8) = param_1 + 0xa8;
  *(long *)(param_2 + 0x13d8) = param_1 + 0x1ee0;
  *(long *)(param_2 + 0x13e0) = param_1 + 0x1ef0;
  *(long *)(param_2 + 0x13e8) = param_1 + 0x1f00;
  *(long *)(param_2 + 0x13c0) = param_1 + 0x1f10;
  *(long *)(param_2 + 0x1400) = param_1 + 0x1f20;
  puVar5 = PTR_DAT_047d1a08;
  local_28 = 0x18;
  plVar6 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_28,0);
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    (**(code **)(puVar5 + 0x10))(plVar6,"hkReferencedObject");
  }
  puVar5 = PTR_DAT_047e48e0;
  plVar6[1] = 0xffffffff;
  plVar6[2] = 1;
  *plVar6 = (long)(puVar5 + 0x10);
  plVar7 = *(long **)(param_1 + 0x2d8);
  if (((plVar7 != plVar6) && (*(long **)(param_1 + 0x2d8) = plVar6, plVar7 != (long *)0x0)) &&
     (plVar7[1] != 0)) {
    plVar6 = plVar7 + 2;
    do {
      lVar8 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  *puVar1 = uVar2;
  return;
}



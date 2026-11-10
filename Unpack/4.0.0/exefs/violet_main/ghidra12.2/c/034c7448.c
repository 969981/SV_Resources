/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034c7448; name: FUN_034c7448
 */


undefined8
FUN_034c7448(undefined4 param_1,undefined4 param_2,undefined8 param_3,long param_4,
            undefined8 param_5)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined4 local_48;
  undefined4 uStack_44;
  
  FUN_034c70dc(param_3,param_5);
  puVar2 = PTR_DAT_047e2fd0;
  plVar7 = *(long **)(param_4 + 0x28);
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0x58);
    if (plVar7 != (long *)0x0) {
      *plVar7 = (long)(PTR_DAT_047e72c0 + 0x10);
      plVar7[1] = 0;
      puVar3 = PTR_DAT_047e6f98;
      lVar6 = *(long *)(PTR_DAT_047e6f98 + 8);
      plVar7[2] = 0;
      plVar7[3] = lVar6;
      plVar1 = (long *)(puVar3 + 0x10);
      if (*(long *)(puVar3 + 0x10) != 0) {
        plVar1 = (long *)(lVar6 + 0x10);
      }
      *plVar1 = (long)plVar7;
      *(long **)(puVar3 + 8) = plVar7;
      *(int *)puVar3 = *(int *)puVar3 + 1;
      puVar3 = PTR_DAT_047e72c8;
      plVar7[6] = 0;
      plVar7[4] = 0;
      plVar7[5] = 0;
      *(undefined2 *)(plVar7 + 7) = 0;
      plVar7[8] = 0;
      plVar7[9] = 0;
      *plVar7 = (long)(puVar3 + 0x10);
      *(byte *)((long)plVar7 + 0x3a) = *(byte *)((long)plVar7 + 0x3a) & 0xf8;
      *(undefined4 *)(plVar7 + 10) = 0x3f800000;
      *(byte *)((long)plVar7 + 0x54) = *(byte *)((long)plVar7 + 0x54) | 1;
      *(long **)(param_4 + 0x28) = plVar7;
      plVar7[1] = param_4;
      iVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined8 *)(param_4 + 0x78));
      if (iVar4 == 1) goto LAB_034c7480;
      (**(code **)*plVar7)(plVar7);
      (**(code **)(puVar2 + 0x30))(4,plVar7);
      *(undefined8 *)(param_4 + 0x28) = 0;
    }
    uVar5 = 2;
  }
  else {
LAB_034c7480:
    local_48 = param_2;
    uStack_44 = param_1;
    uVar5 = FUN_034c4cbc(plVar7 + 4,param_5,&local_48,1);
    *(byte *)((long)plVar7 + 0x54) = *(byte *)((long)plVar7 + 0x54) | 1;
  }
  return uVar5;
}



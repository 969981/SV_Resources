/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0343d084; name: FUN_0343d084
 */


undefined8 FUN_0343d084(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  char local_34 [4];
  
  puVar7 = (undefined8 *)param_1[3];
  if (puVar7 == (undefined8 *)0x0) {
    uVar5 = 1;
  }
  else {
    uVar5 = 1;
    if ((char)param_1[0xd] == '\0') {
      plVar6 = (long *)param_1[4];
      local_34[0] = '\x01';
      puVar1 = (undefined8 *)0x0;
      if ((*(byte *)((long)puVar7 + 0x34) & 2) != 0) {
        puVar1 = puVar7 + 1;
      }
      plVar4 = *(long **)PTR_DAT_047e6f10;
      if ((*(byte *)((long)puVar7 + 0x34) & 1) == 0) {
        iVar3 = (**(code **)(*plVar4 + 0x18))
                          (plVar4,*(undefined4 *)puVar7,*(undefined4 *)(puVar7 + 6),puVar1,local_34,
                           plVar6);
      }
      else {
        iVar3 = (**(code **)(*plVar4 + 0x10))
                          (plVar4,*puVar7,*(undefined4 *)(puVar7 + 6),puVar1,local_34,plVar6);
      }
      if ((iVar3 == 1) && (((0 < *plVar6 || (*(int *)(puVar7 + 6) != 0)) && (local_34[0] != '\0'))))
      {
        (**(code **)(*param_1 + 0x20))(param_1);
        uVar5 = 1;
      }
      else {
        uVar5 = 2;
      }
      puVar2 = PTR_DAT_047e2fd0;
      plVar6 = (long *)param_1[3];
      if (plVar6 != (long *)0x0) {
        if (((*(byte *)((long)plVar6 + 0x34) & 1) != 0) && (*plVar6 != 0)) {
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(7);
        }
        (**(code **)(puVar2 + 0x30))(7,plVar6);
        param_1[3] = 0;
      }
    }
  }
  return uVar5;
}



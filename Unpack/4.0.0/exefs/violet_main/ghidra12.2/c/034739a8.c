/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034739a8; name: FUN_034739a8
 */


void FUN_034739a8(long param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  byte bVar7;
  
  FUN_034b098c(param_1,1);
  FUN_034b02d8(param_1);
  plVar5 = *(long **)(param_1 + 0xa0);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x120))(plVar5,param_2);
  }
  puVar3 = PTR_DAT_047e2fd0;
  if ((*(long *)(param_1 + 0x90) != 0) && (*(short *)(*(long *)(param_1 + 0x90) + 0x90) != 0)) {
    return;
  }
  if ((*(int *)(param_1 + 0x118) == 0) || (*(int *)(param_1 + 0x14c) == 0)) {
    *(byte *)(param_1 + 0x1bc) = *(byte *)(param_1 + 0x1bc) & 0xf8;
  }
  else {
    plVar5 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(1,0x38);
    if (plVar5 == (long *)0x0) {
      bVar7 = *(byte *)(param_1 + 0x1bc) & 0xf8;
    }
    else {
      plVar5[2] = 0x100000000;
      plVar5[3] = 0;
      *(undefined2 *)((long)plVar5 + 0x34) = 0x1820;
      plVar5[4] = 0;
      plVar5[5] = 0;
      *(undefined4 *)(plVar5 + 6) = 0;
      *(undefined1 *)((long)plVar5 + 0x36) = 4;
      *plVar5 = (long)(PTR_DAT_047e71a0 + 0x10);
      iVar4 = FUN_034584d0(plVar5,0xf,*(undefined4 *)(param_1 + 0x118),0,0);
      bVar2 = false;
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 0x28))(plVar5,(ulong)*(uint *)(param_1 + 0x18) | 0x100000000);
        plVar6 = (long *)(**(code **)(puVar3 + 0x10))(0,0x48);
        puVar3 = PTR_DAT_047e71a8;
        if (plVar6 == (long *)0x0) {
          bVar2 = false;
        }
        else {
          *(undefined8 *)((long)plVar6 + 0x1c) = 0;
          *(undefined8 *)((long)plVar6 + 0x24) = 0;
          *(undefined8 *)((long)plVar6 + 0x2c) = 0;
          *(undefined4 *)(plVar6 + 7) = 0;
          plVar6[8] = 0;
          *plVar6 = (long)(puVar3 + 0x10);
          plVar6[1] = (long)plVar5;
          FUN_03452a08(*(undefined8 *)PTR_DAT_047e2fe8,plVar6,0,0);
          bVar2 = true;
        }
      }
      (**(code **)(*plVar5 + 0x18))(plVar5);
      bVar1 = *(byte *)(param_1 + 0x1bc) & 0xf8;
      bVar7 = bVar1 | 2;
      if (!bVar2) {
        bVar7 = bVar1;
      }
    }
    *(byte *)(param_1 + 0x1bc) = bVar7;
  }
  FUN_03473774(param_1);
  return;
}



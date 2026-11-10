/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c41df8; name: FUN_00c41df8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c41df8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  *(undefined8 *)(param_1 + 0x30) = *param_2;
  *(undefined8 *)(param_1 + 0x38) = param_2[1];
  *(undefined8 *)(param_1 + 0x40) = param_2[2];
  plVar4 = (long *)param_2[3];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar1 = *(long **)(param_1 + 0x48);
  *(long **)(param_1 + 0x48) = plVar4;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x50) = param_2[4];
  *(undefined8 *)(param_1 + 0x58) = param_2[5];
  *(undefined8 *)(param_1 + 0x60) = param_2[6];
  plVar4 = (long *)param_2[7];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar1 = *(long **)(param_1 + 0x68);
  *(long **)(param_1 + 0x68) = plVar4;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x70) = param_2[8];
  *(undefined8 *)(param_1 + 0x78) = param_2[9];
  *(undefined8 *)(param_1 + 0x80) = param_2[10];
  plVar4 = (long *)param_2[0xb];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar1 = *(long **)(param_1 + 0x88);
  *(long **)(param_1 + 0x88) = plVar4;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x90) = param_2[0xc];
  *(undefined8 *)(param_1 + 0x98) = param_2[0xd];
  *(undefined8 *)(param_1 + 0xa0) = param_2[0xe];
  plVar4 = (long *)param_2[0xf];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar1 = *(long **)(param_1 + 0xa8);
  *(long **)(param_1 + 0xa8) = plVar4;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0xb0) = param_2[0x10];
  *(undefined8 *)(param_1 + 0xb8) = param_2[0x11];
  *(undefined8 *)(param_1 + 0xc0) = param_2[0x12];
  plVar4 = (long *)param_2[0x13];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar1 = *(long **)(param_1 + 200);
  *(long **)(param_1 + 200) = plVar4;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0xd0) = param_2[0x14];
  *(undefined8 *)(param_1 + 0xd8) = param_2[0x15];
  *(undefined8 *)(param_1 + 0xe0) = param_2[0x16];
  plVar4 = (long *)param_2[0x17];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar1 = *(long **)(param_1 + 0xe8);
  *(long **)(param_1 + 0xe8) = plVar4;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  uVar2 = FUN_00c42b68(DAT_0485a0e8,(undefined8 *)(param_1 + 0x30),(undefined8 *)(param_1 + 0x50),0)
  ;
  puVar3 = (undefined8 *)(param_1 + 0x24);
  *puVar3 = uVar2;
  *(undefined1 *)(param_1 + 0x20) = 1;
  FUN_00c42a5c(_DAT_03d635e0,param_1);
  if (*(char *)(param_1 + 0x20) != '\0') {
    FUN_00c420c4(0x40800000,DAT_0485a0e8,puVar3,param_1 + 0x90);
    if (*(char *)(param_1 + 0x20) != '\0') {
      FUN_00c420c4(0x40400000,DAT_0485a0e8,puVar3,param_1 + 0xb0);
      if (*(char *)(param_1 + 0x20) != '\0') {
        FUN_00c420c4(0,DAT_0485a0e8,puVar3,param_1 + 0xd0);
        if (*(char *)(param_1 + 0x20) != '\0') {
          FUN_016a7f0c(DAT_0485a0e8,puVar3,0);
          return;
        }
      }
    }
  }
  return;
}



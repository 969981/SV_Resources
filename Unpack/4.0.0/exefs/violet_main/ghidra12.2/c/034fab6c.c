/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034fab6c; name: FUN_034fab6c
 */


undefined8 FUN_034fab6c(long *param_1,uint param_2)

{
  undefined2 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_047e71e0;
  if (*param_1 != 0) {
    (**(code **)(*(long *)PTR_PTR_047e71e0 + 0x18))(PTR_PTR_047e71e0);
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (param_1[2] != 0) {
    (**(code **)(*(long *)puVar2 + 0x18))(puVar2);
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  if (param_1[4] != 0) {
    (**(code **)(*(long *)puVar2 + 0x18))(puVar2);
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (param_1[6] != 0) {
    (**(code **)(*(long *)puVar2 + 0x18))(puVar2);
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
  }
  puVar2 = PTR_DAT_047e7208;
  *(uint *)(param_1 + 0xc) = param_2;
  param_1[8] = 0;
  uVar1 = *(undefined2 *)puVar2;
  *(undefined1 *)((long)param_1 + 0x4a) = 0;
  *(undefined4 *)((long)param_1 + 0x4b) = 0x1010101;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 9) = uVar1;
  *(undefined2 *)(param_1 + 0xb) = uVar1;
  *(undefined1 *)((long)param_1 + 0x5a) = 0;
  *(undefined4 *)((long)param_1 + 0x5b) = 0x1010101;
  puVar2 = PTR_PTR_047e71e0;
  iVar3 = FUN_033d3528(param_1,PTR_PTR_047e71e0,param_2 & 0xff,0);
  if ((iVar3 != 1) ||
     (uVar4 = FUN_033d3528(param_1 + 4,PTR_PTR_047e71e0,param_2 & 0xff,0), (int)uVar4 != 1)) {
    if (*param_1 != 0) {
      (**(code **)(*(long *)puVar2 + 0x18))(puVar2);
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = 0;
    }
    if (param_1[2] != 0) {
      (**(code **)(*(long *)puVar2 + 0x18))(puVar2);
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 3) = 0;
    }
    if (param_1[4] != 0) {
      (**(code **)(*(long *)puVar2 + 0x18))(puVar2);
      param_1[4] = 0;
      *(undefined4 *)(param_1 + 5) = 0;
    }
    if (param_1[6] == 0) {
      uVar4 = 2;
    }
    else {
      (**(code **)(*(long *)puVar2 + 0x18))(puVar2);
      uVar4 = 2;
      param_1[6] = 0;
      *(undefined4 *)(param_1 + 7) = 0;
    }
  }
  return uVar4;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034faa74; name: FUN_034faa74
 */


undefined8 FUN_034faa74(long *param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  *(uint *)(param_1 + 0xc) = param_2;
  puVar1 = PTR_PTR_047e71e0;
  iVar2 = FUN_033d3528(param_1,PTR_PTR_047e71e0,param_2 & 0xff,0);
  if ((iVar2 != 1) ||
     (uVar3 = FUN_033d3528(param_1 + 4,PTR_PTR_047e71e0,param_2 & 0xff,0), (int)uVar3 != 1)) {
    if (*param_1 != 0) {
      (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = 0;
    }
    if (param_1[2] != 0) {
      (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 3) = 0;
    }
    if (param_1[4] != 0) {
      (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
      param_1[4] = 0;
      *(undefined4 *)(param_1 + 5) = 0;
    }
    if (param_1[6] == 0) {
      uVar3 = 2;
    }
    else {
      (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
      uVar3 = 2;
      param_1[6] = 0;
      *(undefined4 *)(param_1 + 7) = 0;
    }
  }
  return uVar3;
}


